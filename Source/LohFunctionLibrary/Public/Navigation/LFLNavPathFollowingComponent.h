// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Navigation/LFLPointNavData.h"
#include "LFLNavPathFollowingComponent.generated.h"

class ULFLPointNavPoint;

UENUM(BlueprintType)
enum class ELFLPointNavStatus : uint8
{
	Success			UMETA(DisplayName = "Success"),
	NoPathFound     UMETA(DisplayName = "NoPathFound"),
	InvalidParam	UMETA(DisplayName = "InvalidParam")
};

UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LOHFUNCTIONLIBRARY_API ULFLNavPathFollowingComponent : public UActorComponent
{
	GENERATED_BODY()

private:

	UPROPERTY()
		int32 CurrentFlowMapID;
	UPROPERTY()
		int32 CurrentPathCount;
	UPROPERTY()
		ULFLPointNavPoint* NextFollowingPath;
	UPROPERTY()
		ULFLPointNavPoint* CurrentDestination;
	UPROPERTY()
		int32 CurrentDestinationScopeID;

	UPROPERTY()
		TMap<ULFLPointNavPoint*, int32> TravelledPathCount;

public:

	UPROPERTY(BlueprintReadWrite, Category = "NavPathFollowingComponent")
		int32 UseNavDataID;

	UPROPERTY(BlueprintReadWrite, Category = "NavPathFollowingComponent")
		TArray<float> NavPointWeightOffset;

	UPROPERTY(BlueprintReadWrite, Category = "NavPathFollowingComponent")
		float AgentWeight;

// Common Function

public:	
	// Sets default values for this component's properties
	ULFLNavPathFollowingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Called when the game end
	//virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//UFUNCTION()
	//void BeginCleanUp();
	//
	//UFUNCTION()
	//void ResetData();

// Function	

	//UFUNCTION(BlueprintCallable, Category = "NavPathFollowingComponent")
	//	ELFLPointNavStatus MoveToLocation(const FVector Location, int32 DestinationScopeID);
	//UFUNCTION(BlueprintCallable, Category = "NavPathFollowingComponent")
	//	ELFLPointNavStatus MoveToNavPoint(const FVector NavPoint, int32 DestinationScopeID);
	//UFUNCTION(BlueprintCallable, Category = "NavPathFollowingComponent")
	//	ELFLPointNavStatus MoveToRandom(int32 DestinationScopeID);
	//UFUNCTION(BlueprintCallable, Category = "NavPathFollowingComponent")
	//	bool CancelNavigation();
	//
	//UFUNCTION(BlueprintCallable, Category = "NavPathFollowingComponent")
	//	bool SetPathToFollow(int32 FlowMapID);
	//
	//UFUNCTION(BlueprintPure, Category = "NavPathFollowingComponent")
	//	ULFLPointNavPoint* GetCurrentNavPoint();
	//UFUNCTION(BlueprintPure, Category = "NavPathFollowingComponent")
	//	ULFLPointNavPoint* GetCurrentDestination();
	//
	//UFUNCTION(BlueprintCallable, Category = "NavPathFollowingComponent")
	//	bool StopFollowingPath();
	//UFUNCTION(BlueprintCallable, Category = "NavPathFollowingComponent")
	//	bool ContinuousFollowingPath();
	//UFUNCTION(BlueprintCallable, Category = "NavPathFollowingComponent")
	//	bool StartFollowingPath();
	//
	//UFUNCTION(BlueprintNativeEvent, Category = "NavPathFollowingComponent")
	//	ULFLPointNavPoint* DecideNextPath(UPARAM(ref) FFMNavPointData& CurrentNavPointData);
	//
	//virtual ULFLPointNavPoint* DecideNextPath_Implementation(FFMNavPointData& CurrentNavPointData);
	//
	//UFUNCTION() // Internal C++ Function Call This Only
	//	bool OnFollowingPath_Internal(ULFLPointNavPoint* CurrentNavPoint, ULFLPointNavPoint* NextNavPoint, ULFLPointNavPoint* CurrentDestination);
	//UFUNCTION(BlueprintNativeEvent, Category = "NavPathFollowingComponent")
	//	bool OnFollowingPath(ULFLPointNavPoint* CurrentNavPoint, ULFLPointNavPoint* NextNavPoint, ULFLPointNavPoint* CurrentDestination);
	//
	//virtual bool OnFollowingPath_Implementation();

};
