// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tickable.h"
#include "LFLPointNavigationSystemV1.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(NavigationSystemErrorLog, Error, All);

UINTERFACE(MinimalAPI, Blueprintable)
class UPointNavigationSystemTrackingActorInterface : public UInterface
{
	GENERATED_BODY()
};

class IPointNavigationSystemTrackingActorInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool OnNavigationCreate(ULFLPointNavigationSystemData* NavData);

	virtual bool OnNavigationCreate_Implementation(ULFLPointNavigationSystemData* NavData) { return false; }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool RequestNavigationUpdate(ULFLPointNavigationSystemData* NavData);

	virtual bool RequestNavigationUpdate_Implementation(ULFLPointNavigationSystemData* NavData) { return false; }

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool OnNavigationRemove(ULFLPointNavigationSystemData* NavData);

	virtual bool OnNavigationRemove_Implementation(ULFLPointNavigationSystemData* NavData) { return false; }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool OnBlockActorDetected(AActor* Actor);

	virtual bool OnBlockActorDetected_Implementation(AActor* Actor) { return false; }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool OnBlockActorMoved(AActor* Actor);

	virtual bool OnBlockActorMoved_Implementation(AActor* Actor) { return false; }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool OnBlockActorRemoved(AActor* Actor);

	virtual bool OnBlockActorRemoved_Implementation(AActor* Actor) { return false; }

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		void OnNavAgentReachNavPoint(AActor* Agent, ULFLPointNavigationSystemPoint* ReachedNavPoint);

	virtual void OnNavAgentReachNavPoint_Implementation(AActor* Agent, ULFLPointNavigationSystemPoint* ReachedNavPoint) {}
};

UINTERFACE(MinimalAPI, Blueprintable)
class UPointNavigationSystemAgentInterface : public UInterface
{
	GENERATED_BODY()
};

class IPointNavigationSystemAgentInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		float GetAgentBufferForPath(ULFLPointNavigationSystemPoint* Path);

	virtual float GetAgentBufferForPath_Implementation(ULFLPointNavigationSystemPoint* Path) { return 0.0f; }

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		void OnNavAgentAdded(ULFLPointNavigationSystemV1* NavSystem);

	virtual void OnNavAgentAdded_Implementation(ULFLPointNavigationSystemV1* NavSystem) {}

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		void OnNavAgentRemove();

	virtual void OnNavAgentRemove_Implementation() {}

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool RequestStartFollowingPath();

	virtual bool RequestStartFollowingPath_Implementation() {}

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool RequestStopFollowingPath();

	virtual bool RequestStopFollowingPath_Implementation() {}

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool RequestContinuesFollowingPath();

	virtual bool RequestContinuesFollowingPath_Implementation() {}

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool OnNavSystemPathReceived(ULFLPointNavigationSystemData* ByNavData, const TArray<ULFLPointNavigationSystemPoint*>& Path);

	virtual bool OnNavSystemPathReceived_Implementation(ULFLPointNavigationSystemData* ByNavData, const TArray<ULFLPointNavigationSystemPoint*>& Path) {}

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool OnFollowingPath(ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, const int32 CurrentPathIndex);

	virtual bool OnFollowingPath_Implementation(ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, const int32 CurrentPathIndex) {}

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		void OnFollowingPathAbort(ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, ULFLPointNavigationSystemPoint* NextPath);

	virtual void OnFollowingPathAbort_Implementation(ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, ULFLPointNavigationSystemPoint* NextPath) {}

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		void OnFinishFollowingPath(ULFLPointNavigationSystemV1* ByNavSystem);

	virtual void OnFinishFollowingPath_Implementation(ULFLPointNavigationSystemV1* ByNavSystem) {}
};

UINTERFACE(MinimalAPI, Blueprintable)
class UPointNavigationSystemPointLinkInterface : public UInterface
{
	GENERATED_BODY()
};

class IPointNavigationSystemPointLinkInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		TArray<ULFLPointNavigationSystemPoint*> GetConnectPoint(ULFLPointNavigationSystemData* NavData);

	virtual TArray<ULFLPointNavigationSystemPoint*> GetConnectPoint_Implementation(ULFLPointNavigationSystemData* NavData) { return TArray<ULFLPointNavigationSystemPoint*>(); }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		bool IsLinkUsable(ULFLPointNavigationSystemPoint* FromNavPoint, ULFLPointNavigationSystemPoint* ToNavPoint);

	virtual bool IsLinkUsable_Implementation(ULFLPointNavigationSystemPoint* FromNavPoint, ULFLPointNavigationSystemPoint* ToNavPoint) { return false; }

	UFUNCTION(BlueprintNativeEvent, Category = "PointNavigationSystemInterface | Function")
		void OnNavAgentUsePointLink(ULFLPointNavigationSystemV1* NavSystem, AActor* Agent, ULFLPointNavigationSystemPoint* NavPoint);

	virtual void OnNavAgentUsePointLink_Implementation(ULFLPointNavigationSystemV1* NavSystem, AActor* Agent, ULFLPointNavigationSystemPoint* NavPoint) {}
};

UCLASS(BlueprintType)
class LOHFUNCTIONLIBRARY_API ULFLPointNavigationSystemPoint : public UObject
{
	GENERATED_BODY()

private:

	UPROPERTY()
		FVector LocalLocation;

	UPROPERTY()
		float PointWeight;

	UPROPERTY()
		float PointBuffer;

	UPROPERTY()
		AActor* OwingActor;

	UPROPERTY()
		AActor* OwingLink;

	UPROPERTY()
		TArray<ULFLPointNavigationSystemPoint*> WalkablePoint;

	UPROPERTY()
		TArray<ULFLPointNavigationSystemPoint*> ConnectPoint;

	UPROPERTY()
		int32 CacheIndex = -1;

	UPROPERTY()
		FTimerHandle BufferHandler;

protected:

	UFUNCTION()
		virtual void BeginDestroy() override;

public:

	UPROPERTY(BlueprintReadOnly, Category = "LFLPointNavigationSystemPoint | Variable")
		bool IsActive = false;

	UPROPERTY(BlueprintReadOnly, Category = "LFLPointNavigationSystemPoint | Variable")
		int32 OwingAreaID = -1;

	UPROPERTY(BlueprintReadWrite, Category = "LFLPointNavigationSystemPoint | Variable")
		int32 PointType;

	// Getter Function

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE FVector GetLocalLocation() const { return LocalLocation; }

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE FVector GetWorldLocation() const { return OwingActor ? LocalLocation + OwingActor->GetActorLocation() : FVector(-1); }

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE float GetPointBuffer() const { return PointBuffer; }

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE float GetPointWeight(const bool WithBuffer) const { return WithBuffer ? PointWeight + PointBuffer : PointWeight; }

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE AActor* GetOwingActor() const { return OwingActor; }

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE AActor* GetOwingLink() const { return OwingLink; }

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE TArray<ULFLPointNavigationSystemPoint*>& GetWalkablePoint() { return WalkablePoint; }

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE TArray<ULFLPointNavigationSystemPoint*>& GetConnectPoint() { return ConnectPoint; }

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE int32 GetPointIndex() const { return CacheIndex; }

	// Advance Getter Function

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemPoint | Function")
		inline TArray<ULFLPointNavigationSystemPoint*> GetPassableNavPoint()
		{ 
			TArray<ULFLPointNavigationSystemPoint*> ReturnPoint;

			for (ULFLPointNavigationSystemPoint*& Point : WalkablePoint)
			{
				if (Point->IsNavPointPassable(this))
				{
					if (Point->GetOwingLink() && Point->GetOwingLink() == GetOwingLink())
					{
						if (IPointNavigationSystemPointLinkInterface::Execute_IsLinkUsable(GetOwingLink(), this, Point))
						{
							ReturnPoint.Add(Point);
						}
					}
					else
					{
						ReturnPoint.Add(Point);
					}
				}
			}

			return ReturnPoint;
		}

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE ULFLPointNavigationSystemData* GetNavData() const
	{
		return Cast<ULFLPointNavigationSystemData>(GetOuter());
	}

	// Buffer

	UFUNCTION()
		void BufferTick()
	{
		PointBuffer = FMath::Max(PointBuffer - 1.0f, 0.0f);

		if (PointBuffer == 0.0f)
		{
			GetWorld()->GetTimerManager().ClearTimer(BufferHandler);
		}

		return;
	}

	UFUNCTION()
		inline float AddPointBuffer(const float AddValue) 
	{ 
		PointBuffer += AddValue;

		if (PointBuffer > 0 && !BufferHandler.IsValid())
		{
			GetWorld()->GetTimerManager().SetTimer(BufferHandler, this, &ULFLPointNavigationSystemPoint::BufferTick, 1.0f, true);
		}

		return PointBuffer;
	}

	// Checker Function

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE bool IsNavPointWalkable(ULFLPointNavigationSystemPoint* Point) const { return WalkablePoint.Contains(Point); }

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		FORCEINLINE bool IsNavPointPassable(const ULFLPointNavigationSystemPoint* NavPoint) const
		{
			return NavPoint && IsActive && NavPoint->IsActive && WalkablePoint.Contains(NavPoint) && NavPoint->WalkablePoint.Contains(this);
		}

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemPoint | Function")
		inline bool HasReach(AActor* Actor, const float MinDistance, const bool Broadcast);

	// Broadcast

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemPoint | Function")
		inline bool BroadcastReach(AActor* ByAgent);

	// Helper Function

	UFUNCTION()
		void Initialize(const FVector& Location, const float& Weight, AActor* Actor, AActor* Link, const int32& PointIndex);

	// Ready Point For Destory (Clear All Connection To This Point)
	UFUNCTION()
		void BeginClearUp();

	UFUNCTION()
		void ClearConnection();

	// Internal Function

	UFUNCTION()
		bool AddWalkableToPoint(ULFLPointNavigationSystemPoint* Walkable);

	UFUNCTION()
		bool RemoveWalkableToPoint(ULFLPointNavigationSystemPoint* RemovePoint);

	UFUNCTION()
		inline float AverageWeightWithConnectNavPoint(const bool SetWeight = true);
};

USTRUCT(BlueprintType)
struct FLFLNavigationAreaConnectData
{
	GENERATED_USTRUCT_BODY()

private:

	UPROPERTY()
		AActor* OwingActor;

	UPROPERTY()
		int32 AreaID;

public:

	UPROPERTY()
		bool IsWalkable;

	// Constructor

	FLFLNavigationAreaConnectData() {}

	FLFLNavigationAreaConnectData(AActor* At, int32 ID) : OwingActor(At), AreaID(ID) {}

	FLFLNavigationAreaConnectData(AActor* At, int32 ID, bool Walk) : OwingActor(At), AreaID(ID), IsWalkable(Walk) {}

	// Operator

	FORCEINLINE bool operator==(const AActor* Value) const { return OwingActor == Value; }

	FORCEINLINE bool operator==(const int32 Value) const { return AreaID == Value; }

	FORCEINLINE bool operator==(const FLFLNavigationAreaConnectData& Value) const { return OwingActor == Value.OwingActor && AreaID == Value.AreaID; }

	// Getter

	FORCEINLINE void GetAreaData(AActor*& At, int32& ID) const { At = OwingActor; ID = AreaID; return; }

	FORCEINLINE AActor* GetOwingActor() const { return OwingActor; }

	FORCEINLINE int32 GetAreaID() const {return AreaID; }
};

USTRUCT(BlueprintType)
struct FLFLNavigationAreaData
{
	GENERATED_USTRUCT_BODY()

private:

	UPROPERTY()
		float TotalNavPointWeight = 0;

	UPROPERTY()
		TArray<ULFLPointNavigationSystemPoint*> AreaNavPoint;

	UPROPERTY()
		TArray<FLFLNavigationAreaConnectData> ConnectArea;

public:

	// Constructor

	FLFLNavigationAreaData() {}

	FLFLNavigationAreaData(const TArray<ULFLPointNavigationSystemPoint*>& ANP) : AreaNavPoint(ANP) {}

	// Weight

	FORCEINLINE float GetTotalNavPointWeight() const { return TotalNavPointWeight; }

	FORCEINLINE float GetAverageNavPointWeight() { return TotalNavPointWeight / AreaNavPoint.Num(); }

	// Nav Point

	FORCEINLINE const TArray<ULFLPointNavigationSystemPoint*>& GetAreaNavPointArray() { return AreaNavPoint; }

	FORCEINLINE void AddAreaNavPoint(ULFLPointNavigationSystemPoint* NavPoint);

	FORCEINLINE void SetOwingAreaID(const int32 AreaID);

	// Connect Area

	FORCEINLINE void RemoveConnectArea(const FLFLNavigationAreaConnectData& AreaConnectData) { ConnectArea.RemoveSingleSwap(AreaConnectData); return; }

	FORCEINLINE void ClearConnection();
};

USTRUCT(BlueprintType)
struct FLFLNavigationTrackingActorData
{
	GENERATED_USTRUCT_BODY()

private:

	UPROPERTY()
		bool IsNavPointAreaDirty = false;

	UPROPERTY()
		AActor* Actor;

	UPROPERTY()
		TArray<ULFLPointNavigationSystemPoint*> OwingNavPoint;

	UPROPERTY()
		TArray<FLFLNavigationAreaData> NavPointArea;

public:

	// Constructor

	FLFLNavigationTrackingActorData() {}

	FLFLNavigationTrackingActorData(AActor* Act) : Actor(Act) {}

	FLFLNavigationTrackingActorData(AActor* Act, TArray<ULFLPointNavigationSystemPoint*>& ONP) : Actor(Act), OwingNavPoint(ONP) {}

	// Operator

	FORCEINLINE bool operator==(const AActor* Value) const { return Actor == Value; }

	FORCEINLINE bool operator==(const FLFLNavigationTrackingActorData& Value) const { return Actor == Value.Actor; }

	// Owing Actor

	FORCEINLINE AActor* GetTrackingActor() const { return Actor; }

	// Nav Point

	FORCEINLINE TArray<ULFLPointNavigationSystemPoint*>& GetOwingNavPoint() { return OwingNavPoint; }

	FORCEINLINE int32 AddOwingNavPoint(ULFLPointNavigationSystemPoint* Point)
	{ 
		MarkNavPointAreaDirty();
		return OwingNavPoint.Add(Point);
	}

	// Nav Area

	FORCEINLINE void MarkNavPointAreaDirty() { IsNavPointAreaDirty = true; return; }

	void TryUpdateNavPointArea()
	{
		if (!IsNavPointAreaDirty)
		{
			return;
		}

		// Clean Up All Connection To Other Area
		for (FLFLNavigationAreaData& NavArea : NavPointArea)
		{
			NavArea.ClearConnection();
		}

		TArray<ULFLPointNavigationSystemPoint*> NavPointList = OwingNavPoint;

		NavPointArea.Empty(NavPointList.Num() * 0.5f);

		while (NavPointList.Num() > 0)
		{
			TArray<ULFLPointNavigationSystemPoint*> CurrentIterationList;

			CurrentIterationList.Add(NavPointList.Pop());

			FLFLNavigationAreaData CurrentProccessArea;

			while (CurrentIterationList.Num() != 0)
			{
				TArray<ULFLPointNavigationSystemPoint*> NextIterationList;

				for (ULFLPointNavigationSystemPoint*& IterationPoint : CurrentIterationList)
				{
					TArray<ULFLPointNavigationSystemPoint*> LoopPoint = IterationPoint->GetPassableNavPoint();

					for (ULFLPointNavigationSystemPoint*& ProccessPoint : LoopPoint)
					{
						if (NavPointList.Contains(ProccessPoint) && ProccessPoint->GetOwingActor() == Actor)
						{
							CurrentProccessArea.AddAreaNavPoint(ProccessPoint);
							NextIterationList.Add(ProccessPoint);
						}
					}

					NavPointList.RemoveAll([LoopPoint](const ULFLPointNavigationSystemPoint* CurrentPoint) {
						return LoopPoint.Contains(CurrentPoint);
						});
				}

				CurrentIterationList = NextIterationList;
			}

			CurrentProccessArea.SetOwingAreaID(NavPointArea.Add(CurrentProccessArea));
		}

		NavPointArea.Shrink();

		return;
	}

	FORCEINLINE const TArray<FLFLNavigationAreaData>& GetNavPointArea() { TryUpdateNavPointArea(); return NavPointArea; }

	FORCEINLINE FLFLNavigationAreaData& GetNavPointAreaRef(const int32& AreaID) { return NavPointArea[AreaID]; }

	// Other

	inline void BeginCleanUp()
	{ 
		for (ULFLPointNavigationSystemPoint*& Point : OwingNavPoint)
		{
			Point->BeginClearUp();
		}

		OwingNavPoint.Empty();
		NavPointArea.Empty();

		return; 
	}
};

UCLASS(BlueprintType)
class LOHFUNCTIONLIBRARY_API ULFLPointNavigationSystemData : public UObject
{
	GENERATED_BODY()

private:
	
	UPROPERTY()
		TArray<FLFLNavigationTrackingActorData> TrackingActorData;

protected:

	UFUNCTION()
		virtual void BeginDestroy() override;

public:

	// Tracking Actor

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemData | Tracking Actor")
		FORCEINLINE TArray<FLFLNavigationTrackingActorData> GetTrackingActorList() const 
		{
			if (IsPendingKill())
			{
				UE_LOG(NavigationSystemErrorLog, Error, TEXT("Can't Get Tracking Actor List Because Navigation System Is Pending Kill"));

				return TArray<FLFLNavigationTrackingActorData>();
			} 

			return TrackingActorData; 
		}

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Tracking Actor")
		bool AddTrackingActor(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Tracking Actor")
		bool RemoveTrackingActor(AActor* Actor);

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemData | Tracking Actor")
		inline bool GetTrackingActorData(AActor* Actor, FLFLNavigationTrackingActorData Data);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Tracking Actor")
		bool AverageNavPointWeightInTrackingActor(AActor* Actor);

	// This is a Unsafe Function (Ref could null and cause crash)
	UFUNCTION()
		FORCEINLINE FLFLNavigationAreaData& GetNavigationAreaData(const FLFLNavigationAreaConnectData& ConnectData);
	
	// Nav Point

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		ULFLPointNavigationSystemPoint* AddNavigationPoint(int32& PointIndex, const FVector Location, const float PointWeight, AActor* AttachActor, AActor* OwingLink, const int32 PointType);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		inline bool SetNavigationPointActive(ULFLPointNavigationSystemPoint* NavPoint, const bool IsActive);
	
	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		FORCEINLINE bool ClearConnection(ULFLPointNavigationSystemPoint* NavPoint) 
		{ 
			if (NavPoint) return false;

			NavPoint->ClearConnection(); 

			return true; 
		}
	
	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		inline bool AddWalkableToPoint(ULFLPointNavigationSystemPoint* NavPoint, ULFLPointNavigationSystemPoint* Walkable);
	
	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		inline int32 AddWalkablesToPoint(ULFLPointNavigationSystemPoint* NavPoint, UPARAM(ref) TArray<ULFLPointNavigationSystemPoint*>& Walkables);
	
	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		inline bool RemoveWalkableToPoint(ULFLPointNavigationSystemPoint* NavPoint, ULFLPointNavigationSystemPoint* RemovePoint);
	
	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		inline int32 RemoveWalkablesToPoint(ULFLPointNavigationSystemPoint* NavPoint, UPARAM(ref) TArray<ULFLPointNavigationSystemPoint*>& RemovePoints);

	// Nav Point Finder

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		ULFLPointNavigationSystemPoint* GetSingleNavigationPointInBox(const FBox& Box);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		TArray<ULFLPointNavigationSystemPoint*> GetNavigationPointInBox(const FBox& Box);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		TArray<ULFLPointNavigationSystemPoint*> GetNavigationPointInBoxs(const TArray<FBox>& Boxs);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		ULFLPointNavigationSystemPoint* GetSingleNavigationPointAtLocation(const FVector Location, const float DetectDistance);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		TArray<ULFLPointNavigationSystemPoint*> GetNavigationPointAtLocation(const FVector Location, const float DetectDistance);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		TArray<ULFLPointNavigationSystemPoint*> GetNavigationPointAtLocations(const TArray<FVector>& Locations, const float DetectDistance);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemData | Function")
		TArray<ULFLPointNavigationSystemPoint*> GetNavigationPointAtLocationsOffset(const FVector Location, const TArray<FVector>& Offset, const float DetectDistance);

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemData | Function")
		FORCEINLINE AActor* FindNearestTrackingActor(const AActor* FromActor, TArray<ULFLPointNavigationSystemPoint*>& ActorNavPoint);

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemData | Function")
		AActor* FindNearestTrackingActorFromLocation(const FVector& FromLocation, TArray<ULFLPointNavigationSystemPoint*>& ActorNavPoint);

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemData | Function")
		FORCEINLINE ULFLPointNavigationSystemPoint* FindNearestNavigationPoint(const AActor* FromActor, const bool UseTrackingActor);

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemData | Function")
		ULFLPointNavigationSystemPoint* FindNearestNavigationPointFromLocation(const FVector& FromLocation, const bool UseTrackingActor);

	// Other

	UFUNCTION()
		void BeginClearUp();
};

USTRUCT(BlueprintType)
struct FLFLNavigationSystemNavAgentData
{
	GENERATED_USTRUCT_BODY()

private:

	UPROPERTY()
		AActor* NavAgent;

	UPROPERTY()
		TArray<ULFLPointNavigationSystemPoint*> CurrentFollowingPathList;

	UPROPERTY()
		ULFLPointNavigationSystemPoint* CurrentFollowingPath = nullptr;

	UPROPERTY()
		int32 CurrentFollowingPathIndex = -1;

public:

	UPROPERTY()
		bool IsFollowingPath = false;

	// Constructor

	FLFLNavigationSystemNavAgentData() {}

	FLFLNavigationSystemNavAgentData(AActor* Agent) : NavAgent(Agent) {}

	// Operator

	FORCEINLINE bool operator==(const AActor* Value) const { return NavAgent == Value; }

	FORCEINLINE bool operator==(const FLFLNavigationSystemNavAgentData& Value) const { return NavAgent == Value.NavAgent; }

	// Getter

	FORCEINLINE AActor* GetNavAgent() const { return NavAgent; }

	FORCEINLINE ULFLPointNavigationSystemPoint* GetPreviousFollowingPath() const { return CurrentFollowingPathList.IsValidIndex(CurrentFollowingPathIndex - 1) ? CurrentFollowingPathList[CurrentFollowingPathIndex - 1] : nullptr; }

	FORCEINLINE TArray<ULFLPointNavigationSystemPoint*>& GetCurrentFollowingPathList() { return CurrentFollowingPathList; }

	FORCEINLINE ULFLPointNavigationSystemPoint* GetCurrentFollowingPath() const { return CurrentFollowingPath; }

	FORCEINLINE int32 GetCurrentFollowingPathIndex() const { return CurrentFollowingPathIndex; }

	// Checker

	FORCEINLINE bool IsPathUsingLink()
	{
		if (CurrentFollowingPathList[CurrentFollowingPathIndex - 1])
		{
			return CurrentFollowingPath->GetOwingLink() && CurrentFollowingPath->GetOwingLink() == CurrentFollowingPathList[CurrentFollowingPathIndex - 1]->GetOwingLink();
		}

		return false;
	}

	// Path

	FORCEINLINE void SetFollowingPathList(TArray<ULFLPointNavigationSystemPoint*>& List)
	{ 
		CurrentFollowingPathList = List;

		if (CurrentFollowingPathList.Num() == 0)
		{
			CurrentFollowingPath = nullptr;
			CurrentFollowingPathIndex = -1;
		}
		else
		{
			CurrentFollowingPath = CurrentFollowingPathList[0];
			CurrentFollowingPathIndex = 0;
		}

		return; 
	}

	FORCEINLINE bool ResetFollowingPath()
	{
		if (CurrentFollowingPathList.Num() == 0)
		{
			CurrentFollowingPath = nullptr;
			CurrentFollowingPathIndex = -1;

			IsFollowingPath = false;

			return false;
		}
		else
		{
			CurrentFollowingPath = CurrentFollowingPathList[0];
			CurrentFollowingPathIndex = 0;

			IsFollowingPath = true;

			CurrentFollowingPath->AddPointBuffer(IPointNavigationSystemAgentInterface::Execute_GetAgentBufferForPath(NavAgent, CurrentFollowingPath));

			return true;
		}
	}

	FORCEINLINE ULFLPointNavigationSystemPoint* NextFollowingPath()
	{
		if (CurrentFollowingPathList.IsValidIndex(CurrentFollowingPathIndex + 1))
		{
			CurrentFollowingPath = CurrentFollowingPathList[++CurrentFollowingPathIndex];

			CurrentFollowingPath->AddPointBuffer(IPointNavigationSystemAgentInterface::Execute_GetAgentBufferForPath(NavAgent, CurrentFollowingPath));

			return CurrentFollowingPath;
		}
		else
		{
			CurrentFollowingPath = nullptr;
			CurrentFollowingPathIndex = -1;

			IsFollowingPath = false;

			return nullptr;
		}
	}
};

UCLASS(Blueprintable)
class LOHFUNCTIONLIBRARY_API ULFLPointNavigationSystemV1 : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

private:

	UPROPERTY()
		TArray<ULFLPointNavigationSystemData*> NavigationData;

	UPROPERTY()
		TArray<FLFLNavigationSystemNavAgentData> NavAgentList;

	UPROPERTY()
		bool bIsCreateOnRunning = false;

protected:

	UFUNCTION()
		virtual void BeginDestroy() override;

	// Begin FTickableGameObject Interface.
		virtual void Tick(float DeltaTime) override;
		virtual bool IsTickable() const override;
		virtual TStatId GetStatId() const override;
	// End FTickableGameObject Interface.

public:

	ULFLPointNavigationSystemV1();

	// Nav Agent

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Nav Agent")
		bool AddNavAgent(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Nav Agent")
		bool RemoveNavAgent(AActor* Actor);

	// Nav Agent Path

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Nav Agent Path")
		bool StartNavAgentFollowingPath(AActor* NavAgent);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Nav Agent Path")
		bool NextNavAgentFollowingPath(AActor* NavAgent);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Nav Agent Path")
		bool StopNavAgentFollowingPath(AActor* NavAgent);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Nav Agent Path")
		bool ContinuesNavAgentFollowingPath(AActor* NavAgent);

	// Other

	UFUNCTION()
		void BeginClearUp();

	UFUNCTION(BlueprintPure, Category = "LFLPointNavigationSystemV1 | Function")
		ULFLPointNavigationSystemData* GetNavigationData(const int32 NavDataID);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Function")
		ULFLPointNavigationSystemData* CreateNavigationData(const int32 NavDataID);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Function")
		bool RemoveNavigationData(const int32 NavDataID);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Function")
		bool RequestNavigationPath(const int32 NavDataID, AActor* ByActor, const FVector& ToLocation);

	UFUNCTION()
		TArray<ULFLPointNavigationSystemPoint*> RequestAStarNavigation(ULFLPointNavigationSystemData* NavData, ULFLPointNavigationSystemPoint* FromPoint, ULFLPointNavigationSystemPoint* ToPoint);

	UFUNCTION(BlueprintCallable, Category = "LFLPointNavigationSystemV1 | Function")
		bool RequestRandomNavigationPath(const int32 NavDataID, AActor* ByActor, const int32 Iteraction, const bool PassableOnly);

	UFUNCTION()
		TArray<ULFLPointNavigationSystemPoint*> RequestRandomNavigation(ULFLPointNavigationSystemData* NavData, ULFLPointNavigationSystemPoint* FromPoint, const int32& Iteraction, const bool& PassableOnly);
};
