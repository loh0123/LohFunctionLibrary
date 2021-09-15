// Copyright 2021 Loh0123


#include "Navigation/LFLPointNavigationSystemV1.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY(NavigationSystemErrorLog);

///////////////////////////////////////////////
// Navigation System Point
///////////////////////////////////////////////

void ULFLPointNavigationSystemPoint::BeginDestroy()
{
	ULFLPointNavigationSystemData* NavData = Cast<ULFLPointNavigationSystemData>(GetOuter());

	// if Clean Up Not Started ///////
	if (NavData && OwingActor != nullptr)
	{
		// Start Clean Up //
		BeginClearUp();
	}

	Super::BeginDestroy();

	return;
}

inline bool ULFLPointNavigationSystemPoint::HasReach(AActor* Actor, const float MinDistance, const bool Broadcast)
{
	if (MinDistance > FVector::Dist(Actor->GetActorLocation(), GetWorldLocation()))
	{
		if (Broadcast) BroadcastReach(Actor);

		return true;
	}

	return false;
}

inline bool ULFLPointNavigationSystemPoint::BroadcastReach(AActor* ByAgent)
{
	if (GetOwingActor()->GetClass()->ImplementsInterface(UPointNavigationSystemTrackingActorInterface::StaticClass()))
	{
		IPointNavigationSystemTrackingActorInterface::Execute_OnNavAgentReachNavPoint(GetOwingActor(), ByAgent, this);

		return true;
	}
	else
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't BroadCast Reach Nav Point To Actor That Think It Is Fake News ( No Interface Founded )"));
	}

	return false;
}

void ULFLPointNavigationSystemPoint::Initialize(const FVector& Location, const float& Weight, AActor* Actor, AActor* Link, const int32& PointIndex)
{
	LocalLocation = Location;
	PointWeight = Weight;
	OwingActor = Actor;

	if (Link && Link->GetClass()->ImplementsInterface(UPointNavigationSystemPointLinkInterface::StaticClass()))
	{
		OwingLink = Link;
	}

	CacheIndex = PointIndex;

	IsActive = true;

	return;
}

void ULFLPointNavigationSystemPoint::BeginClearUp()
{
	ClearConnection();
	OwingActor = nullptr;

	if (!IsPendingKill())
	{
		MarkPendingKill();
	}

	return;
}

void ULFLPointNavigationSystemPoint::ClearConnection()
{
	for (ULFLPointNavigationSystemPoint*& Value : ConnectPoint)
	{
		if (!Value->IsPendingKill())
		{
			Value->WalkablePoint.RemoveSingleSwap(this);
			Value->ConnectPoint.RemoveSingleSwap(this);
		}
	}

	WalkablePoint.Empty();
	ConnectPoint.Empty();

	return;
}

bool ULFLPointNavigationSystemPoint::AddWalkableToPoint(ULFLPointNavigationSystemPoint* Walkable)
{
	if (WalkablePoint.Contains(Walkable) || Walkable == this)
	{
		UE_LOG(NavigationSystemErrorLog, Warning, TEXT("Can't Add Walkable To Point Because It Already Added Or Equal To Self"));

		return false;
	}

	WalkablePoint.Add(Walkable);

	if (!ConnectPoint.Contains(Walkable))
	{
		ConnectPoint.Add(Walkable);
		Walkable->ConnectPoint.Add(this);
	}

	return true;
}

bool ULFLPointNavigationSystemPoint::RemoveWalkableToPoint(ULFLPointNavigationSystemPoint* RemovePoint)
{
	if (WalkablePoint.Contains(RemovePoint))
	{
		WalkablePoint.RemoveSingleSwap(RemovePoint);

		if (!RemovePoint->WalkablePoint.Contains(this))
		{
			ConnectPoint.RemoveSingleSwap(RemovePoint);
			RemovePoint->ConnectPoint.RemoveSingleSwap(this);
		}

		return true;
	}

	return false;
}

inline float ULFLPointNavigationSystemPoint::AverageWeightWithConnectNavPoint(const bool SetWeight)
{
	float Weight = PointWeight;

	for (ULFLPointNavigationSystemPoint*& Point : ConnectPoint)
	{
		Weight += Point->GetPointWeight(false);
	}

	Weight /= ConnectPoint.Num() + 1;

	if (SetWeight) PointWeight = Weight;

	return Weight;
}

///////////////////////////////////////////////
// Navigation Area Data
///////////////////////////////////////////////

void FLFLNavigationAreaData::AddAreaNavPoint(ULFLPointNavigationSystemPoint* NavPoint)
{
	AreaNavPoint.Add(NavPoint);
	TotalNavPointWeight += NavPoint->GetPointWeight(false);

	for (ULFLPointNavigationSystemPoint*& Point : NavPoint->GetConnectPoint())
	{
		FLFLNavigationAreaConnectData* FoundData = ConnectArea.FindByKey(FLFLNavigationAreaConnectData(Point->GetOwingActor(), Point->OwingAreaID));

		if (FoundData)
		{
			if (!FoundData->IsWalkable) FoundData->IsWalkable = NavPoint->IsNavPointWalkable(Point);
		}
		else
		{
			ConnectArea.Add(FLFLNavigationAreaConnectData(Point->GetOwingActor(), Point->OwingAreaID, NavPoint->IsNavPointWalkable(Point)));
		}
	}

	return;
}

void FLFLNavigationAreaData::SetOwingAreaID(const int32 AreaID)
{
	for (ULFLPointNavigationSystemPoint*& Point : AreaNavPoint)
	{
		Point->OwingAreaID = AreaID;
	}

	// Remove Self
	ConnectArea.RemoveSingleSwap(FLFLNavigationAreaConnectData(AreaNavPoint[0]->GetOwingActor(), AreaNavPoint[0]->OwingAreaID));

	return;
}

void FLFLNavigationAreaData::ClearConnection()
{
	ULFLPointNavigationSystemData* NavSystem = AreaNavPoint[0]->GetNavData();

	for (FLFLNavigationAreaConnectData& LoopArea : ConnectArea)
	{
		NavSystem->GetNavigationAreaData(LoopArea).RemoveConnectArea(FLFLNavigationAreaConnectData(AreaNavPoint[0]->GetOwingActor(), AreaNavPoint[0]->OwingAreaID));
	}

	ConnectArea.Empty();

	return;
}

///////////////////////////////////////////////
// Navigation System Data
///////////////////////////////////////////////

void ULFLPointNavigationSystemData::BeginDestroy()
{
	if (TrackingActorData.Num() != 0)
	{
		BeginClearUp();
	}

	Super::BeginDestroy();

	return;
}

// Tracking Actor

bool ULFLPointNavigationSystemData::AddTrackingActor(AActor* Actor)
{
	const bool HasInterface = Actor->GetClass()->ImplementsInterface(UPointNavigationSystemTrackingActorInterface::StaticClass());

	if (HasInterface && !TrackingActorData.Contains(Actor))
	{
		TrackingActorData.Add(FLFLNavigationTrackingActorData(Actor));

		IPointNavigationSystemTrackingActorInterface::Execute_OnNavigationCreate(Actor, this);

		return true;
	}
	else if (!HasInterface)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Can't Add Tracking Actor Because Actor Don't Has NavInterface"));
	}
	else if (TrackingActorData.Contains(Actor))
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Can't Add Tracking Actor Because It Is Already Added"));
	}

	return false;
}

bool ULFLPointNavigationSystemData::RemoveTrackingActor(AActor* Actor)
{
	FLFLNavigationTrackingActorData* TrackActor = TrackingActorData.FindByKey(Actor);
	
	if (TrackActor)
	{
		TrackActor->BeginCleanUp();
		
		TrackingActorData.RemoveSingleSwap(Actor);
	
		IPointNavigationSystemTrackingActorInterface::Execute_OnNavigationRemove(Actor, this);
	
		return true;
	}
	else
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Can't Remove Navigation Point Because Can't Find TrackingActorData"));
	}

	return false;
}

bool ULFLPointNavigationSystemData::GetTrackingActorData(AActor* Actor, FLFLNavigationTrackingActorData Data)
{
	FLFLNavigationTrackingActorData* TrackingData = TrackingActorData.FindByKey(Actor);

	Data = TrackingData ? *TrackingData : FLFLNavigationTrackingActorData();

	return TrackingData != nullptr;
}

bool ULFLPointNavigationSystemData::AverageNavPointWeightInTrackingActor(AActor* Actor)
{
	FLFLNavigationTrackingActorData* FoundData = TrackingActorData.FindByKey(Actor);

	if (!FoundData)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Can't Average NavPoint Weight In Tracking Actor Because Actor Don't Has Data"));

		return false;
	}

	for (ULFLPointNavigationSystemPoint*& Point : FoundData->GetOwingNavPoint())
	{
		Point->AverageWeightWithConnectNavPoint();
	}

	return true;
}

FLFLNavigationAreaData& ULFLPointNavigationSystemData::GetNavigationAreaData(const FLFLNavigationAreaConnectData& ConnectData)
{
	return TrackingActorData.FindByKey(ConnectData.GetOwingActor())->GetNavPointAreaRef(ConnectData.GetAreaID());
}

// Nav Point

ULFLPointNavigationSystemPoint* ULFLPointNavigationSystemData::AddNavigationPoint(int32& PointIndex, const FVector Location, const float PointWeight, AActor* AttachActor, AActor* OwingLink, const int32 PointType)
{
	if (!AttachActor)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Can't Add Navigation Point Because AttachActor Is Null"));

		return nullptr;
	}

	FLFLNavigationTrackingActorData* TrackActor = TrackingActorData.FindByKey(AttachActor);
	
	if (TrackActor)
	{
		ULFLPointNavigationSystemPoint* NewNavPoint = NewObject<ULFLPointNavigationSystemPoint>(this);
	
		PointIndex = TrackActor->AddOwingNavPoint(NewNavPoint);
	
		NewNavPoint->Initialize(Location, PointWeight, AttachActor, OwingLink, PointIndex);

		NewNavPoint->PointType = PointType;
	
		return NewNavPoint;
	}
	else
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Can't Add Navigation Point Because Can't Find TrackingActorData"));
	}

	return nullptr;
}

inline bool ULFLPointNavigationSystemData::SetNavigationPointActive(ULFLPointNavigationSystemPoint* NavPoint, const bool IsActive)
{
	if (!NavPoint || NavPoint->IsPendingKill())
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Can't Set Navigation Point Active Because Nav Point Is Null Or Pending Kill"));

		return false;
	}

	NavPoint->IsActive = IsActive;

	return true;
}

inline bool ULFLPointNavigationSystemData::AddWalkableToPoint(ULFLPointNavigationSystemPoint* NavPoint, ULFLPointNavigationSystemPoint* Walkable)
{
	if (!NavPoint || !Walkable) return false;

	FLFLNavigationTrackingActorData* TrackingActor = TrackingActorData.FindByKey(NavPoint->GetOwingActor());
	FLFLNavigationTrackingActorData* OtherTrackingActor = TrackingActorData.FindByKey(Walkable->GetOwingActor());

	if (!TrackingActor || !OtherTrackingActor) return false;

	TrackingActor->MarkNavPointAreaDirty();
	OtherTrackingActor->MarkNavPointAreaDirty();

	return NavPoint->AddWalkableToPoint(Walkable);
}

inline int32 ULFLPointNavigationSystemData::AddWalkablesToPoint(ULFLPointNavigationSystemPoint* NavPoint, UPARAM(ref)TArray<ULFLPointNavigationSystemPoint*>& Walkables)
{
	if (!NavPoint) return -1;

	int32 ReturnValue = 0;

	FLFLNavigationTrackingActorData* TrackingActor = TrackingActorData.FindByKey(NavPoint->GetOwingActor());

	if (!TrackingActor) return -1;

	TrackingActor->MarkNavPointAreaDirty();

	for (ULFLPointNavigationSystemPoint*& Point : Walkables)
	{
		FLFLNavigationTrackingActorData* OtherTrackingActor = TrackingActorData.FindByKey(Point->GetOwingActor());

		if (OtherTrackingActor)
		{
			NavPoint->AddWalkableToPoint(Point);
			OtherTrackingActor->MarkNavPointAreaDirty();

			ReturnValue++;
		}
	}

	return ReturnValue;
}

inline bool ULFLPointNavigationSystemData::RemoveWalkableToPoint(ULFLPointNavigationSystemPoint* NavPoint, ULFLPointNavigationSystemPoint* RemovePoint)
{
	if (!NavPoint || !RemovePoint) return false;

	FLFLNavigationTrackingActorData* TrackingActor = TrackingActorData.FindByKey(NavPoint->GetOwingActor());
	FLFLNavigationTrackingActorData* OtherTrackingActor = TrackingActorData.FindByKey(RemovePoint->GetOwingActor());

	if (!TrackingActor || !OtherTrackingActor) return false;

	TrackingActor->MarkNavPointAreaDirty();
	OtherTrackingActor->MarkNavPointAreaDirty();

	return NavPoint->RemoveWalkableToPoint(RemovePoint);
}

inline int32 ULFLPointNavigationSystemData::RemoveWalkablesToPoint(ULFLPointNavigationSystemPoint* NavPoint, UPARAM(ref)TArray<ULFLPointNavigationSystemPoint*>& RemovePoints)
{
	if (!NavPoint) return -1;

	int32 ReturnValue = 0;

	FLFLNavigationTrackingActorData* TrackingActor = TrackingActorData.FindByKey(NavPoint->GetOwingActor());

	if (!TrackingActor) return -1;

	for (ULFLPointNavigationSystemPoint*& Point : RemovePoints)
	{
		FLFLNavigationTrackingActorData* OtherTrackingActor = TrackingActorData.FindByKey(Point->GetOwingActor());

		if (OtherTrackingActor)
		{
			NavPoint->RemoveWalkableToPoint(Point);
			OtherTrackingActor->MarkNavPointAreaDirty();

			ReturnValue++;
		}
	}

	return ReturnValue;
}

// Nav Point Finder

ULFLPointNavigationSystemPoint* ULFLPointNavigationSystemData::GetSingleNavigationPointInBox(const FBox& Box)
{
	for (FLFLNavigationTrackingActorData& TrackingActor : TrackingActorData)
	{
		for (ULFLPointNavigationSystemPoint*& NavPoint : TrackingActor.GetOwingNavPoint())
		{
			if (Box.IsInsideOrOn(NavPoint->GetLocalLocation() + NavPoint->GetOwingActor()->GetActorLocation()))
			{
				return NavPoint;
			}
		}
	}

	return nullptr;
}

TArray<ULFLPointNavigationSystemPoint*> ULFLPointNavigationSystemData::GetNavigationPointInBox(const FBox& Box)
{
	TArray<ULFLPointNavigationSystemPoint*> ReturnValue;

	ReturnValue.Reserve(TrackingActorData.GetAllocatedSize() * 0.5f);

	for (FLFLNavigationTrackingActorData& TrackingActor : TrackingActorData)
	{
		for (ULFLPointNavigationSystemPoint*& NavPoint : TrackingActor.GetOwingNavPoint())
		{
			if (Box.IsInsideOrOn(NavPoint->GetWorldLocation()))
			{
				ReturnValue.Add(NavPoint);
			}
		}
	}

	ReturnValue.Shrink();

	return ReturnValue;
}

TArray<ULFLPointNavigationSystemPoint*> ULFLPointNavigationSystemData::GetNavigationPointInBoxs(const TArray<FBox>& Boxs)
{
	TArray<ULFLPointNavigationSystemPoint*> ReturnValue;

	ReturnValue.Reserve(TrackingActorData.GetAllocatedSize() * 0.5f);

	for (FLFLNavigationTrackingActorData& TrackingActor : TrackingActorData)
	{
		for (ULFLPointNavigationSystemPoint*& NavPoint : TrackingActor.GetOwingNavPoint())
		{
			for (const FBox& CurrentBox : Boxs)
			{
				if (CurrentBox.IsInsideOrOn(NavPoint->GetWorldLocation()))
				{
					ReturnValue.Add(NavPoint);
				}
			}
		}
	}

	ReturnValue.Shrink();

	return ReturnValue;
}

ULFLPointNavigationSystemPoint* ULFLPointNavigationSystemData::GetSingleNavigationPointAtLocation(const FVector Location, const float DetectDistance)
{
	for (FLFLNavigationTrackingActorData& TrackingActor : TrackingActorData)
	{
		for (ULFLPointNavigationSystemPoint*& NavPoint : TrackingActor.GetOwingNavPoint())
		{
			if (FVector::Dist(Location, NavPoint->GetWorldLocation()) <= DetectDistance)
			{
				return NavPoint;
			}
		}
	}

	return nullptr;
}

TArray<ULFLPointNavigationSystemPoint*> ULFLPointNavigationSystemData::GetNavigationPointAtLocation(const FVector Location, const float DetectDistance)
{
	TArray<ULFLPointNavigationSystemPoint*> ReturnValue;

	ReturnValue.Reserve(TrackingActorData.GetAllocatedSize() * 0.5f);

	for (FLFLNavigationTrackingActorData& TrackingActor : TrackingActorData)
	{
		for (ULFLPointNavigationSystemPoint*& NavPoint : TrackingActor.GetOwingNavPoint())
		{
			if (FVector::Dist(Location, NavPoint->GetWorldLocation()) <= DetectDistance)
			{
				ReturnValue.Add(NavPoint);
			}
		}
	}

	ReturnValue.Shrink();

	return ReturnValue;
}

TArray<ULFLPointNavigationSystemPoint*> ULFLPointNavigationSystemData::GetNavigationPointAtLocations(const TArray<FVector>& Locations, const float DetectDistance)
{
	TArray<ULFLPointNavigationSystemPoint*> ReturnValue;

	ReturnValue.Reserve(TrackingActorData.GetAllocatedSize() * 0.5f);

	for (FLFLNavigationTrackingActorData& TrackingActor : TrackingActorData)
	{
		for (ULFLPointNavigationSystemPoint*& NavPoint : TrackingActor.GetOwingNavPoint())
		{
			for (const FVector& CurrentLocation : Locations)
			{
				if (FVector::Dist(CurrentLocation, NavPoint->GetWorldLocation()) <= DetectDistance)
				{
					ReturnValue.Add(NavPoint);
				}
			}
		}
	}

	ReturnValue.Shrink();

	return ReturnValue;
}

TArray<ULFLPointNavigationSystemPoint*> ULFLPointNavigationSystemData::GetNavigationPointAtLocationsOffset(const FVector Location, const TArray<FVector>& Offset, const float DetectDistance)
{
	TArray<ULFLPointNavigationSystemPoint*> ReturnValue;

	ReturnValue.Reserve(TrackingActorData.GetAllocatedSize() * 0.5f);

	for (FLFLNavigationTrackingActorData& TrackingActor : TrackingActorData)
	{
		for (ULFLPointNavigationSystemPoint*& NavPoint : TrackingActor.GetOwingNavPoint())
		{
			for (const FVector& CurrentOffset : Offset)
			{
				if (FVector::Dist(Location + CurrentOffset, NavPoint->GetWorldLocation()) <= DetectDistance)
				{
					ReturnValue.Add(NavPoint);
				}
			}
		}
	}

	ReturnValue.Shrink();

	return ReturnValue;
}

AActor* ULFLPointNavigationSystemData::FindNearestTrackingActor(const AActor* FromActor, TArray<ULFLPointNavigationSystemPoint*>& ActorNavPoint)
{
	return FindNearestTrackingActorFromLocation(FromActor->GetActorLocation(), ActorNavPoint);
}

AActor* ULFLPointNavigationSystemData::FindNearestTrackingActorFromLocation(const FVector& FromLocation, TArray<ULFLPointNavigationSystemPoint*>& ActorNavPoint)
{
	AActor* FindedActor = nullptr;

	for (FLFLNavigationTrackingActorData& TrackingActor : TrackingActorData)
	{
		if (FindedActor)
		{
			if (FMath::Abs(FVector::Distance(FindedActor->GetActorLocation(), FromLocation)) > FMath::Abs(FVector::Distance(TrackingActor.GetTrackingActor()->GetActorLocation(), FromLocation)))
			{
				FindedActor = TrackingActor.GetTrackingActor();
				ActorNavPoint = TrackingActor.GetOwingNavPoint();
			}
		}
		else
		{
			FindedActor = TrackingActor.GetTrackingActor();
			ActorNavPoint = TrackingActor.GetOwingNavPoint();
		}
	}

	return FindedActor;
}

ULFLPointNavigationSystemPoint* ULFLPointNavigationSystemData::FindNearestNavigationPoint(const AActor* FromActor, const bool UseTrackingActor)
{
	return FindNearestNavigationPointFromLocation(FromActor->GetActorLocation(), UseTrackingActor);
}

ULFLPointNavigationSystemPoint* ULFLPointNavigationSystemData::FindNearestNavigationPointFromLocation(const FVector& FromLocation, const bool UseTrackingActor)
{
	ULFLPointNavigationSystemPoint* ReturnPointer = nullptr;

	if (UseTrackingActor)
	{
		TArray<ULFLPointNavigationSystemPoint*> LoopNavPoint;

		FindNearestTrackingActorFromLocation(FromLocation, LoopNavPoint);

		for (ULFLPointNavigationSystemPoint*& NavPoint : LoopNavPoint)
		{
			if (ReturnPointer)
			{
				if (FMath::Abs(FVector::Distance(ReturnPointer->GetWorldLocation(), FromLocation)) > FMath::Abs(FVector::Distance(NavPoint->GetWorldLocation(), FromLocation)))
				{
					ReturnPointer = NavPoint;
				}
			}
			else
			{
				ReturnPointer = NavPoint;
			}
		}
	}
	else
	{
		for (FLFLNavigationTrackingActorData& TrackingActor : TrackingActorData)
		{
			for (ULFLPointNavigationSystemPoint*& NavPoint : TrackingActor.GetOwingNavPoint())
			{
				if (ReturnPointer)
				{
					if (FMath::Abs(FVector::Distance(ReturnPointer->GetWorldLocation(), FromLocation)) > FMath::Abs(FVector::Distance(NavPoint->GetWorldLocation(), FromLocation)))
					{
						ReturnPointer = NavPoint;
					}
				}
				else
				{
					ReturnPointer = NavPoint;
				}
			}
		}
	}

	return ReturnPointer;
}

// Other

void ULFLPointNavigationSystemData::BeginClearUp()
{
	for (FLFLNavigationTrackingActorData& TrackActor : TrackingActorData)
	{
		TrackActor.BeginCleanUp();

		IPointNavigationSystemTrackingActorInterface::Execute_OnNavigationRemove(TrackActor.GetTrackingActor(), this);
	}

	TrackingActorData.Empty();

	if (!IsPendingKill())
	{
		MarkPendingKill();
	}

	return;
}

///////////////////////////////////////////////
// Navigation System V1
///////////////////////////////////////////////

void ULFLPointNavigationSystemV1::BeginDestroy()
{
	if (NavigationData.Num() != 0)
	{
		BeginClearUp();
	}

	Super::BeginDestroy();

	return;
}

void ULFLPointNavigationSystemV1::Tick(float DeltaTime)
{
	for (const FLFLNavigationSystemNavAgentData& AgentData : NavAgentList)
	{
		if (AgentData.IsFollowingPath)
		{
			if (IPointNavigationSystemAgentInterface::Execute_OnFollowingPath(AgentData.GetNavAgent(), this, AgentData.GetCurrentFollowingPath(), AgentData.GetCurrentFollowingPathIndex()))
			{
				NextNavAgentFollowingPath(AgentData.GetNavAgent());
			}
		}
	}

	return;
}

bool ULFLPointNavigationSystemV1::IsTickable() const
{
	return bIsCreateOnRunning;
}

TStatId ULFLPointNavigationSystemV1::GetStatId() const
{
	return UObject::GetStatID();
}

ULFLPointNavigationSystemV1::ULFLPointNavigationSystemV1()
{
	bIsCreateOnRunning = GIsRunning;

	return;
}

bool ULFLPointNavigationSystemV1::AddNavAgent(AActor* Actor)
{
	if (!Actor)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Add Nav Agent Because Actor Is Null"));

		return false;
	}

	if (Actor->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()))
	{
		NavAgentList.Add(FLFLNavigationSystemNavAgentData(Actor));

		IPointNavigationSystemAgentInterface::Execute_OnNavAgentAdded(Actor, this);
	}
	else
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Add Nav Agent Because Actor Don't Has Interface"));

		return false;
	}

	return true;
}

bool ULFLPointNavigationSystemV1::RemoveNavAgent(AActor* Actor)
{
	if (!Actor)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Remove Nav Agent Because Actor Is Null"));

		return false;
	}

	if (NavAgentList.Contains(Actor))
	{
		NavAgentList.RemoveSingleSwap(Actor);

		IPointNavigationSystemAgentInterface::Execute_OnNavAgentRemove(Actor);
	}
	else
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Remove Nav Agent Because Actor Not In Nav Agent List"));

		return false;
	}

	return true;
}

bool ULFLPointNavigationSystemV1::StartNavAgentFollowingPath(AActor* NavAgent)
{
	FLFLNavigationSystemNavAgentData* AgentData = NavAgentList.FindByKey(NavAgent);

	if (!NavAgent || !AgentData)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Start Nav Agent Following Path Because NavAgentList Is Null Or Not In Nav Agent List"));

		return false;
	}

	if (IPointNavigationSystemAgentInterface::Execute_RequestStartFollowingPath(NavAgent))
	{
		return AgentData->ResetFollowingPath();
	}

	return false;
}

bool ULFLPointNavigationSystemV1::NextNavAgentFollowingPath(AActor* NavAgent)
{
	FLFLNavigationSystemNavAgentData* AgentData = NavAgentList.FindByKey(NavAgent);

	if (!NavAgent || !AgentData)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Next Nav Agent Following Path Because NavAgentList Is Null Or Not In Nav Agent List"));

		return false;
	}

	if (!AgentData->NextFollowingPath())
	{
		IPointNavigationSystemAgentInterface::Execute_OnFinishFollowingPath(NavAgent, this);
	}
	else if (AgentData->IsPathUsingLink())
	{
		if (IPointNavigationSystemPointLinkInterface::Execute_IsLinkUsable(AgentData->GetCurrentFollowingPath()->GetOwingLink(), AgentData->GetPreviousFollowingPath(), AgentData->GetCurrentFollowingPath()))
		{
			IPointNavigationSystemPointLinkInterface::Execute_OnNavAgentUsePointLink(AgentData->GetCurrentFollowingPath()->GetOwingLink(), this, NavAgent, AgentData->GetPreviousFollowingPath());
		}
		else
		{
			AgentData->IsFollowingPath = false;

			IPointNavigationSystemAgentInterface::Execute_OnFollowingPathAbort(NavAgent, this, AgentData->GetPreviousFollowingPath(), AgentData->GetCurrentFollowingPath());
		}
	}

	return true;
}

bool ULFLPointNavigationSystemV1::StopNavAgentFollowingPath(AActor* NavAgent)
{
	FLFLNavigationSystemNavAgentData* AgentData = NavAgentList.FindByKey(NavAgent);

	if (!NavAgent || !AgentData)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Stop Nav Agent Following Path Because NavAgentList Is Null Or Not In Nav Agent List"));

		return false;
	}

	AgentData->IsFollowingPath = AgentData->IsFollowingPath ? !IPointNavigationSystemAgentInterface::Execute_RequestStopFollowingPath(NavAgent) : false;

	return !AgentData->IsFollowingPath;
}

bool ULFLPointNavigationSystemV1::ContinuesNavAgentFollowingPath(AActor* NavAgent)
{
	FLFLNavigationSystemNavAgentData* AgentData = NavAgentList.FindByKey(NavAgent);

	if (!NavAgent || !AgentData)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Continues Nav Agent Following Path Because NavAgentList Is Null Or Not In Nav Agent List"));

		return false;
	}

	AgentData->IsFollowingPath = AgentData->IsFollowingPath ? true : IPointNavigationSystemAgentInterface::Execute_RequestContinuesFollowingPath(NavAgent);

	return AgentData->IsFollowingPath;
}

void ULFLPointNavigationSystemV1::BeginClearUp()
{
	for (ULFLPointNavigationSystemData* Value : NavigationData)
	{
		Value->BeginClearUp();
	}

	NavigationData.Empty();

	if (!IsPendingKill())
	{
		MarkPendingKill();
	}

	return;
}

ULFLPointNavigationSystemData* ULFLPointNavigationSystemV1::GetNavigationData(const int32 NavDataID)
{
	if (NavigationData.IsValidIndex(NavDataID))
	{
		return NavigationData[NavDataID];
	}
	else
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Can't Get Navigation Data Because NavDataID Is Invalid"));
	}

	return nullptr;
}

ULFLPointNavigationSystemData* ULFLPointNavigationSystemV1::CreateNavigationData(const int32 NavDataID)
{
	NavigationData.SetNum(NavDataID + 1);

	if (NavigationData[NavDataID])
	{
		NavigationData[NavDataID]->BeginClearUp();
	}

	NavigationData[NavDataID] = NewObject<ULFLPointNavigationSystemData>(this);

	return NavigationData[NavDataID];
}

bool ULFLPointNavigationSystemV1::RemoveNavigationData(const int32 NavDataID)
{
	if (NavigationData.IsValidIndex(NavDataID))
	{
		NavigationData[NavDataID]->BeginClearUp();

		NavigationData[NavDataID] = nullptr;

		return true;
	}

	return false;
}

bool ULFLPointNavigationSystemV1::RequestNavigationPath(const int32 NavDataID, AActor* ByActor, const FVector& ToLocation)
{
	if (!ByActor || !NavigationData.IsValidIndex(NavDataID))
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Request Navigation Path Because Actor Or NavDataID Is Not Valid"));

		return false;
	}

	FLFLNavigationSystemNavAgentData* AgentData = NavAgentList.FindByKey(ByActor);

	if (!AgentData)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Request Navigation Path Because Actor Is Not In Nav Agent List"));

		return false;
	}

	if (NavAgentList.Contains(ByActor))
	{
		TArray<ULFLPointNavigationSystemPoint*> PathList = RequestAStarNavigation(NavigationData[NavDataID], NavigationData[NavDataID]->FindNearestNavigationPoint(ByActor, false), NavigationData[NavDataID]->FindNearestNavigationPointFromLocation(ToLocation, false));

		AgentData->SetFollowingPathList(PathList);

		if (IPointNavigationSystemAgentInterface::Execute_OnNavSystemPathReceived(ByActor, NavigationData[NavDataID], PathList))
		{
			StartNavAgentFollowingPath(ByActor);
		}

		return true;
	}
	else
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Request Navigation Path To Actor That Not Added To Nav Agent List"));
	}

	return false;
}

TArray<ULFLPointNavigationSystemPoint*> ULFLPointNavigationSystemV1::RequestAStarNavigation(ULFLPointNavigationSystemData* NavData, ULFLPointNavigationSystemPoint* FromPoint, ULFLPointNavigationSystemPoint* ToPoint)
{
	return TArray<ULFLPointNavigationSystemPoint*>();
}

bool ULFLPointNavigationSystemV1::RequestRandomNavigationPath(const int32 NavDataID, AActor* ByActor, const int32 Iteraction, const bool PassableOnly)
{
	if (!ByActor || !NavigationData.IsValidIndex(NavDataID))
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Request Random Navigation Path Because Actor Or NavDataID Is Not Valid"));

		return false;
	}

	FLFLNavigationSystemNavAgentData* AgentData = NavAgentList.FindByKey(ByActor);

	if (!AgentData)
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Request Random Navigation Path Because Actor Is Not In Nav Agent List"));

		return false;
	}

	if (NavAgentList.Contains(ByActor))
	{
		TArray<ULFLPointNavigationSystemPoint*> PathList = RequestRandomNavigation(NavigationData[NavDataID], NavigationData[NavDataID]->FindNearestNavigationPoint(ByActor, false), Iteraction, PassableOnly);

		AgentData->SetFollowingPathList(PathList);

		if (IPointNavigationSystemAgentInterface::Execute_OnNavSystemPathReceived(ByActor, NavigationData[NavDataID], PathList))
		{
			StartNavAgentFollowingPath(ByActor);
		}

		return true;
	}
	else
	{
		UE_LOG(NavigationSystemErrorLog, Error, TEXT("Cant't Request Random Navigation Path To Actor That Not Added To Nav Agent List"));
	}

	return false;
}

TArray<ULFLPointNavigationSystemPoint*> ULFLPointNavigationSystemV1::RequestRandomNavigation(ULFLPointNavigationSystemData* NavData, ULFLPointNavigationSystemPoint* FromPoint, const int32& Iteraction, const bool& PassableOnly)
{
	TArray<ULFLPointNavigationSystemPoint*> ReturnValue;

	ReturnValue.Reserve(Iteraction + 1);

	ReturnValue.Add(FromPoint);

	if (NavData && FromPoint)
	{
		for (int32 i = 0; i < Iteraction + 1; i++)
		{
			TArray<ULFLPointNavigationSystemPoint*> RandomArray = (PassableOnly ? ReturnValue[i]->GetPassableNavPoint() : ReturnValue[i]->GetWalkablePoint());

			if (i != 0) RandomArray.RemoveSingleSwap(ReturnValue[i - 1]);

			if (RandomArray.Num() > 0) 
				ReturnValue.Add(RandomArray[FMath::RandHelper(RandomArray.Num())]);
			else
				break;
		}
	}

	return ReturnValue;
}
