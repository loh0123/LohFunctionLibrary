// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Misc/QueuedThreadPool.h"
#include "LFLPointNavData.generated.h"

class ULFLPointNavPoint;
class ALFLPointNavActor;
class ULFLNavPathFollowingComponent;

// This Class Is For Calculate Navigation Data To Nav Point

// DestinationScopeID Is For Complete Path Condition
// 0 = To Point
// 1 = To Nav Group
// 2 = To Nav Actor
// 3 = To Connected Nav Actor

// Remember To Make AsyncTask Class For MultiThread

USTRUCT(BlueprintType)
struct FFlowDirectionData
{
	GENERATED_USTRUCT_BODY()

	// Direction Coming From
	UPROPERTY()
		ULFLPointNavPoint* NavPointPointer;

	// Total Weight From all the path taken
	UPROPERTY()
		float TravelPathWeight;

	UPROPERTY() // Unreliable (Point Can Move After Calculation)
		float DistanceToDestination;

	// How Many Path Before Reach Destination
	UPROPERTY()
		int32 Iteration;
};


USTRUCT(BlueprintType)
struct FFMNavPointData
{
	GENERATED_USTRUCT_BODY()

		// This Point Path Flow (From Lower Travel Weight To Higher)
		UPROPERTY()
		TArray<FFlowDirectionData> FlowDirection;

	UPROPERTY() // Unreliable (Use temporary for calculate to start position) (Distance to start position)
		float DistanceCost;


};

USTRUCT(BlueprintType)
struct FFlowMapData
{
	GENERATED_USTRUCT_BODY()

	// Data for Navigation to the destination
	UPROPERTY()
		TMap<ULFLPointNavPoint*, FFMNavPointData> NavPointDataList;

	// Orderer from path following component (Call from Nav System)
	UPROPERTY()
		TArray<ULFLNavPathFollowingComponent*> PathOrdererList;

	//AsyncTask
};

UCLASS(BlueprintType)
class LOHFUNCTIONLIBRARY_API ULFLPointNavData : public UObject
{
	GENERATED_BODY()

private:

	UPROPERTY()
		int32 NavDataID;

	UPROPERTY()
		TMap<ULFLPointNavPoint*, FFlowMapData> CacheFlowMapData;

	UPROPERTY()
		int32 DelayCounter;

		FQueuedThreadPool* ThreadPoll;

	UPROPERTY()
		bool CanStartNavigation;

// Agent Data

	UPROPERTY()
		float AgentWidth;
	UPROPERTY()
		float AgentHeight;

public:

	UPROPERTY(BlueprintReadWrite, Category = "PointNavData")
		int32 MaxCacheSize;

	UPROPERTY(BlueprintReadWrite, Category = "PointNavData")
		int32 RestartDelayFrame;

	UPROPERTY(BlueprintReadWrite, Category = "PointNavData")
		int32 MaxTaskRunning;

// Common Function

	//UFUNCTION()
	//	void BeginCleanUp();
	//
	//UFUNCTION()
	//	void ResetData();
	//
	//UFUNCTION()
	//	void Tick(float DeltaSeconds);

// Function

	//UFUNCTION()
	//	void RequestNavigation(ULFLNavPathFollowingComponent* Orderer, ULFLPointNavPoint* Destination);
	//UFUNCTION()
	//	void StopNavigation();
	//
	//UFUNCTION()
	//	bool RemovePathOrderer(ULFLNavPathFollowingComponent* Orderer);
	//UFUNCTION()
	//	void ClearNavigationCache();
	//
	UFUNCTION(BlueprintPure, Category = "PointNavData")
		void GetAgentSize(float& Height, float& Width) { Height = AgentHeight; Width = AgentWidth; return; }
	//
	//UFUNCTION()
	//	void OnNavPointUpdate(ULFLPointNavPoint* NavPoint);
	//UFUNCTION()
	//	void OnNavActorUpdate(ULFLPointNavActor* NavActor);

};
