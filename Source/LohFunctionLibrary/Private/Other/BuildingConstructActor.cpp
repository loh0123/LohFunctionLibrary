// Copyright 2021 Loh0123


#include "Other/BuildingConstructActor.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"

// Sets default values
ABuildingConstructActor::ABuildingConstructActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Setup Replication
	bReplicates = true;
	bAlwaysRelevant = true;
	SetReplicatingMovement(true);

	// Setup Root Component
	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent")));

	// Set List Max Num For Memory
	MeshRenderList.SetNum(3);

	// Setup Loop To Create Instance Static Mesh Component
	int32 CurrentIndex = 0;
	TArray<FString> NameList = { "Joint","Column","Beam" };

	for (FString& NameValue : NameList)
	{
		UInstancedStaticMeshComponent* SMC01 = CreateDefaultSubobject<UInstancedStaticMeshComponent>(*NameValue);
		SMC01->SetupAttachment(RootComponent);
		SMC01->SetIsReplicated(true);
	
		MeshRenderList[CurrentIndex++] = SMC01;
	}
}

void ABuildingConstructActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABuildingConstructActor, RoomList);
}

void ABuildingConstructActor::OnConstruction(const FTransform& Transform)
{
	SetupInstance();

	ConstructionAllRoom(true);

	UpdateRender();

	return;
}

// Called when the game starts or when spawned
void ABuildingConstructActor::BeginPlay()
{
	Super::BeginPlay();

	SetupInstance();

	ConstructionAllRoom(true);

	UpdateRender();

	return;
}

// Called every frame
void ABuildingConstructActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABuildingConstructActor::SetupInstance()
{
	MeshRenderList[0]->SetStaticMesh(Joint);
	MeshRenderList[1]->SetStaticMesh(Column);
	MeshRenderList[2]->SetStaticMesh(Beam);
	MeshRenderList[0]->SetMaterial(0, MeshMaterial);
	MeshRenderList[1]->SetMaterial(0, MeshMaterial);
	MeshRenderList[2]->SetMaterial(0, MeshMaterial);
	MeshRenderList[0]->NumCustomDataFloats = CustomDataMaxIndex;
	MeshRenderList[1]->NumCustomDataFloats = CustomDataMaxIndex;
	MeshRenderList[2]->NumCustomDataFloats = CustomDataMaxIndex;

	return;
}

void ABuildingConstructActor::ConstructionAllRoom(const bool& CheckOverlap)
{
	JointList.Empty(RoomList.Num()*8);

	for (int32 i = 0; i < RoomList.Num(); i++)
	{
		RoomList[i].Reset();

		RoomList[i].MeshCustomData.SetNum(CustomDataMaxIndex);

		if (CheckOverlap && IsRoomOverlapping(i))
		{
			continue;
		}

		const FIntVector PositionList[] =
		{
			RoomList[i].Start,
			FIntVector(RoomList[i].End.X,RoomList[i].Start.Y,RoomList[i].Start.Z),
			FIntVector(RoomList[i].Start.X,RoomList[i].End.Y,RoomList[i].Start.Z),
			FIntVector(RoomList[i].End.X,RoomList[i].End.Y,RoomList[i].Start.Z),
			FIntVector(RoomList[i].Start.X,RoomList[i].Start.Y,RoomList[i].End.Z),
			FIntVector(RoomList[i].End.X,RoomList[i].Start.Y,RoomList[i].End.Z),
			FIntVector(RoomList[i].Start.X,RoomList[i].End.Y,RoomList[i].End.Z),
			RoomList[i].End,
		};

		int32 LoopIndex = 0;

		for (const FIntVector& Index : PositionList)
		{
			int32 FoundIndex = JointList.IndexOfByKey(Index);

			if (FoundIndex != INDEX_NONE)
			{
				JointList[FoundIndex].MeshCustomData = RoomList[i].MeshCustomData;
				JointList[FoundIndex].ParentPosition = RoomList[i].Start;
			}
			else
			{
				FoundIndex = JointList.Add(FLFLBuildingFrameJointData(Index, RoomList[i].MeshCustomData, RoomList[i].Start));
			}

			RoomList[i].JointIndexList[LoopIndex++] = FoundIndex;
		}
	}

	ConstructionAllointConnect();

	return;
}

void ABuildingConstructActor::UpdateRender()
{
	MeshRenderList[0]->ClearInstances();
	MeshRenderList[1]->ClearInstances();
	MeshRenderList[2]->ClearInstances();

	for (FLFLBuildingFrameJointData& Value : JointList)
	{
		FTransform MeshTransform;
		MeshTransform.SetLocation((FVector(Value.Position) * CellSize) + MeshOffset);

		int32 MainIndex = MeshRenderList[0]->AddInstance(MeshTransform);
		MeshRenderList[0]->SetCustomData(MainIndex, Value.MeshCustomData);

		FIntVector ConnectDistance =
			FIntVector
			(
				FMath::Max(Value.ConnectJoint[0].X - Value.Position.X, -1),
				FMath::Max(Value.ConnectJoint[1].Y - Value.Position.Y, -1),
				FMath::Max(Value.ConnectJoint[2].Z - Value.Position.Z, -1)
			);

		// Spawn X 
		if (Value.ConnectJoint[0] != FIntVector::NoneValue)
		{
			MeshTransform.SetLocation(((FVector(Value.Position) + FVector(ConnectDistance.X * 0.5f, 0, 0)) * CellSize) + MeshOffset);
			MeshTransform.SetRotation(FRotator(0, 0, 0).Quaternion());
			MeshTransform.SetScale3D(FVector(ConnectDistance.X, 1, 1));
		
			int32 Index = MeshRenderList[2]->AddInstance(MeshTransform);

			if (Value.ParentPosition.X == Value.Position.X)
			{
				MeshRenderList[2]->SetCustomData(Index, Value.MeshCustomData);
			}
			else
			{
				if (Value.ConnectJointPointer[0])
				{
					MeshRenderList[2]->SetCustomData(Index, Value.ConnectJointPointer[0]->MeshCustomData);
				}
				else
				{
					MeshRenderList[2]->SetCustomData(Index, Value.MeshCustomData);
				}
			}
		}
		
		// Spawn Y
		if (Value.ConnectJoint[1] != FIntVector::NoneValue)
		{
			MeshTransform.SetLocation(((FVector(Value.Position) + FVector(0, ConnectDistance.Y * 0.5f, 0)) * CellSize) + MeshOffset);
			MeshTransform.SetRotation(FRotator(0, 90, 0).Quaternion());
			MeshTransform.SetScale3D(FVector(ConnectDistance.Y, 1, 1));
		
			int32 Index = MeshRenderList[2]->AddInstance(MeshTransform);

			if (Value.ParentPosition.Y == Value.Position.Y)
			{
				MeshRenderList[2]->SetCustomData(Index, Value.MeshCustomData);
			}
			else
			{
				if (Value.ConnectJointPointer[1])
				{
					MeshRenderList[2]->SetCustomData(Index, Value.ConnectJointPointer[1]->MeshCustomData);
				}
				else
				{
					MeshRenderList[2]->SetCustomData(Index, Value.MeshCustomData);
				}
			}
		}
		
		// Spawn Z 
		if (Value.ConnectJoint[2] != FIntVector::NoneValue)
		{
			MeshTransform.SetLocation(((FVector(Value.Position) + FVector(0, 0, ConnectDistance.Z * 0.5f)) * CellSize) + MeshOffset);
			MeshTransform.SetRotation(FRotator(0, 0, 0).Quaternion());
			MeshTransform.SetScale3D(FVector(1, 1, ConnectDistance.Z));
		
			int32 Index = MeshRenderList[1]->AddInstance(MeshTransform);

			if (Value.ParentPosition.Z == Value.Position.Z)
			{
				MeshRenderList[1]->SetCustomData(Index, Value.MeshCustomData);
			}
			else
			{
				if (Value.ConnectJointPointer[2])
				{
					MeshRenderList[1]->SetCustomData(Index, Value.ConnectJointPointer[2]->MeshCustomData);
				}
				else
				{
					MeshRenderList[1]->SetCustomData(Index, Value.MeshCustomData);
				}
			}
		}
	}

	MeshRenderList[0]->MarkRenderStateDirty();
	MeshRenderList[1]->MarkRenderStateDirty();
	MeshRenderList[2]->MarkRenderStateDirty();

	return;
}

void ABuildingConstructActor::ConstructionAllointConnect()
{
	for (FLFLBuildingFrameJointData& Value : JointList)
	{
		// Map MeshCustomData To CustomDataMaxIndex Size
		Value.MeshCustomData.SetNum(CustomDataMaxIndex);

		Value.Reset();

		for (FLFLBuildingFrameJointData& JointData :  JointList)
		{
			// Check X
			if (JointData.Position.Y == Value.Position.Y && JointData.Position.Z == Value.Position.Z && JointData.Position.X - Value.Position.X > 0 && (Value.ConnectJoint[0].X > JointData.Position.X || Value.ConnectJoint[0] == FIntVector::NoneValue))
			{
				Value.ConnectJoint[0] = JointData.Position;
				Value.ConnectJointPointer[0] = &JointData;
			}

			// Check Y
			if (JointData.Position.X == Value.Position.X && JointData.Position.Z == Value.Position.Z && JointData.Position.Y - Value.Position.Y > 0 && (Value.ConnectJoint[1].Y > JointData.Position.Y || Value.ConnectJoint[1] == FIntVector::NoneValue))
			{
				Value.ConnectJoint[1] = JointData.Position;
				Value.ConnectJointPointer[1] = &JointData;
			}

			// Check Z
			if (JointData.Position.X == Value.Position.X && JointData.Position.Y == Value.Position.Y && JointData.Position.Z - Value.Position.Z > 0 && (Value.ConnectJoint[2].Z > JointData.Position.Z || Value.ConnectJoint[2] == FIntVector::NoneValue))
			{
				Value.ConnectJoint[2] = JointData.Position;
				Value.ConnectJointPointer[2] = &JointData;
			}
		}
	}

	return;
}

FORCEINLINE const bool ABuildingConstructActor::IsRoomOverlapping(const int32& RoomIndex) const
{
	if (RoomList.IsValidIndex(RoomIndex - 1))
	{
		for (int32 i = RoomIndex - 1; i >= 0; i--)
		{
			if ((RoomList[i].Start.X < RoomList[RoomIndex].End.X) && (RoomList[RoomIndex].Start.X < RoomList[i].End.X) &&
				(RoomList[i].Start.Y < RoomList[RoomIndex].End.Y) && (RoomList[RoomIndex].Start.Y < RoomList[i].End.Y) &&
				(RoomList[i].Start.Z < RoomList[RoomIndex].End.Z) && (RoomList[RoomIndex].Start.Z < RoomList[i].End.Z))
			{
				return true;
			}
		}
	}

	return false;
}

FORCEINLINE const bool ABuildingConstructActor::IsIntVectorInRange(const FIntVector& Vector, const FIntVector& Min, const FIntVector& Max) const
{
	return	Vector.X > Min.X && Vector.X < Max.X &&
			Vector.Y > Min.Y && Vector.Y < Max.Y &&
			Vector.Z > Min.Z && Vector.Z < Max.Z ;
}
