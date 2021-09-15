// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "BuildingConstructActor.generated.h"

USTRUCT(BlueprintType)
struct FLFLBuildingFrameRoomData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "FLFLBuildingFrameRoomData | Variable")
		FIntVector Start;

	UPROPERTY(EditAnywhere, Category = "FLFLBuildingFrameRoomData | Variable")
		FIntVector End;

	UPROPERTY(VisibleAnywhere, Category = "FLFLBuildingFrameRoomData | Variable")
		TArray<int32> JointIndexList = { INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE };

	UPROPERTY(EditAnywhere, Category = "FLFLBuildingFrameRoomData | Variable")
		TArray<float> MeshCustomData;

	void Reset()
	{
		JointIndexList = { INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE };
	}

	FLFLBuildingFrameRoomData() {}

	FLFLBuildingFrameRoomData(FIntVector S, FIntVector E) : Start(S), End(E) {}
};

USTRUCT(BlueprintType)
struct FLFLBuildingFrameJointData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "LFLBuildingConnectFrameData | Variable")
		FIntVector Position;

	UPROPERTY(VisibleAnywhere, Category = "LFLBuildingConnectFrameData | Variable")
		TArray<FIntVector> ConnectJoint = { FIntVector::NoneValue, FIntVector::NoneValue, FIntVector::NoneValue };

	TArray<FLFLBuildingFrameJointData*> ConnectJointPointer = { nullptr, nullptr, nullptr };

	UPROPERTY(EditAnywhere, Category = "LFLBuildingConnectFrameData | Variable")
		TArray<float> MeshCustomData;

	UPROPERTY(EditAnywhere, Category = "LFLBuildingConnectFrameData | Variable")
		FIntVector ParentPosition;

	void Reset()
	{
		ConnectJoint = { FIntVector::NoneValue, FIntVector::NoneValue, FIntVector::NoneValue };
		ConnectJointPointer = { nullptr, nullptr, nullptr };
	}

	void SetCustomData(const TArray<float>& Data)
	{
		int32 Index = 0;

		for (float& Value : MeshCustomData)
		{
			if (Data.IsValidIndex(Index))
			{
				if (Value < Data[Index])
				{
					Value = Data[Index];
				}
			}
			else
			{
				break;
			}
		}
	}

	FLFLBuildingFrameJointData() : Position(FIntVector(0, 0, 0)) {}

	FLFLBuildingFrameJointData(FIntVector P) : Position(P) {}

	FLFLBuildingFrameJointData(FIntVector P, TArray<float> MCD, FIntVector PP) : Position(P), MeshCustomData(MCD), ParentPosition(PP) {}

	FORCEINLINE bool operator==(const FIntVector& Value) const
	{
		return Position == Value;
	}
};

UCLASS(Blueprintable)
class LOHFUNCTIONLIBRARY_API ABuildingConstructActor : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "BuildingConstructActor | Mesh")
		UStaticMesh* Joint;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "BuildingConstructActor | Mesh")
		UStaticMesh* Column;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "BuildingConstructActor | Mesh")
		UStaticMesh* Beam;


	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "BuildingConstructActor | Setting")
		UMaterialInterface* MeshMaterial;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "BuildingConstructActor | Setting")
		FVector MeshOffset;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "BuildingConstructActor | Setting")
		FVector CellSize;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "BuildingConstructActor | Setting")
		int32 CustomDataMaxIndex;


	UPROPERTY(EditAnywhere, replicated, Category = "BuildingConstructActor | Building")
		TArray<FLFLBuildingFrameRoomData> RoomList;

	UPROPERTY(VisibleAnywhere, Category = "BuildingConstructActor | Building")
		TArray<FLFLBuildingFrameJointData> JointList;

	UPROPERTY()
		TArray<UInstancedStaticMeshComponent*> MeshRenderList;

	// Sets default values for this actor's properties
	ABuildingConstructActor();

protected:
	virtual void OnConstruction(const FTransform& Transform) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BuildingConstructActor | Function")
		void SetupInstance();

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BuildingConstructActor | Function")
		void ConstructionAllRoom(const bool& CheckOverlap = false);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BuildingConstructActor | Function")
		void UpdateRender();

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BuildingConstructActor | Function")
		void ConstructionAllointConnect();

	UFUNCTION(BlueprintPure, Category = "BuildingConstructActor | Function")
		const bool IsRoomOverlapping(const int32& RoomIndex) const;

	UFUNCTION()
		const bool IsIntVectorInRange(const FIntVector& Vector, const FIntVector& Min, const FIntVector& Max) const;
};
