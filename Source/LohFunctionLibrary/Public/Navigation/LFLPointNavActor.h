// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LFLPointNavActor.generated.h"

class ULFLPointNavPoint;
class ULFLPointNavData;
class ULFLPointNavActorData;

USTRUCT(BlueprintType)
struct FLFLPointNavGroup
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		int32 ID;

	UPROPERTY()
		TArray<ULFLPointNavPoint*> IncludePointList;

	UPROPERTY()
		float TotalWeight;

	UPROPERTY()
		TArray<FLFLPointConnectedGroup> ConnectedNavGroup;
};

USTRUCT(BlueprintType)
struct FLFLPointConnectedGroup
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		ULFLPointNavData* NavActorDataPointer;

	UPROPERTY()
		int32 GroupID;

	UPROPERTY()
		bool IsWalkable;

	UPROPERTY()
		bool IsReturnable;
};

USTRUCT(BlueprintType)
struct FLFLPointNavPointSpawnParam
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		TArray<FVector> LocalLocationList;

	UPROPERTY()
		TArray<USceneComponent*> AttachComponent;

	UPROPERTY()
		float Weight;

	UPROPERTY()
		float BufferNormalizeSpeed;

	UPROPERTY()
		int32 TypeID;
};

USTRUCT(BlueprintType)
struct FLFLPointConnectedPoint
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		ULFLPointNavPoint* NavPointPointer;

	UPROPERTY()
		bool IsWalkable;

	UPROPERTY()
		bool IsReturnable;
};

UCLASS()
class LOHFUNCTIONLIBRARY_API ALFLPointNavActor : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY()
		TArray<ULFLPointNavActorData*> NavActorData;
	UPROPERTY()
		TArray<AActor*> ConnectedNavActor;

	UPROPERTY()
		int32 ConnectionDelayCounter;
	UPROPERTY()
		int32 NavPointDelayCounter;

public:

	UPROPERTY(BlueprintReadWrite, Category = "LFLPointNavActor")
		int32 ConnectionDelayFrame;
	UPROPERTY(BlueprintReadWrite, Category = "LFLPointNavActor")
		int32 TickDelayFrame;
	UPROPERTY(BlueprintReadWrite, Category = "LFLPointNavActor")
		int32 NavPointUpdateCountPerFrame;
	
// Common Function

public:	
	// Sets default values for this actor's properties
	ALFLPointNavActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the game end
	//virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION()
	//	void Setup();
	// 
	//UFUNCTION()
	//	void BeginCleanUp();
	//
	//UFUNCTION()
	//	void ResetData();

// Function

	//GenerateNavPoint
	//UpdateNavPointConnection
	//UpdateGroupData
	
	//OnNavActorConnected
	//OnNavActorDisconnected
	//OnSphereCollisionBlock
	//OnBoxCollisionBlock
	//OnSphereCollisionClear
	//OnBoxCollisionClear
	//
	//ConnectActor
	//DisconnectActor
	//IsConnectedToActor
	//
	//ClearAllNavPointConnection
	//
	//GetNavActorData
	//GetConnectedNavActor

};

UCLASS(BlueprintType)
class LOHFUNCTIONLIBRARY_API ULFLPointNavActorData : public UObject
{
	GENERATED_BODY()

};

UCLASS(BlueprintType)
class LOHFUNCTIONLIBRARY_API ULFLPointNavPoint : public UObject
{
	GENERATED_BODY()

};
