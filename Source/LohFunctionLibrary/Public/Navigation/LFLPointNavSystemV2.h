// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LFLPointNavSystemV2.generated.h"

class ULFLPointNavData;
class ALFLPointNavActor;
class ULFLNavPathFollowingComponent;
class ULFLNavigationPoint;

USTRUCT(BlueprintType)
struct FNavDataSpawnParam
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "NavDataSpawnParam")
		float AgentWidth;

	UPROPERTY(BlueprintReadWrite, Category = "NavDataSpawnParam")
		float AgentHeight;

	UPROPERTY(BlueprintReadWrite, Category = "NavDataSpawnParam")
		int32 MaxCacheSize;

	UPROPERTY(BlueprintReadWrite, Category = "NavDataSpawnParam")
		int32 RestartDelayFrame;

	UPROPERTY(BlueprintReadWrite, Category = "NavDataSpawnParam")
		int32 MaxTaskRunning;
};


UCLASS(BlueprintType)
class LOHFUNCTIONLIBRARY_API ULFLPointNavSystemV2 : public UObject
{
	GENERATED_BODY()

// Variable //

private:

	//Global Point Navigation System
	static ULFLPointNavSystemV2* NavSystem;

	// Navigation Data for calculate navigation path
	UPROPERTY()
		TArray<ULFLPointNavData*> NavigationDataList;

	// Navigation Actor for Nav Point to generated
	UPROPERTY()
		TArray<ALFLPointNavActor*> NavigationActorList;

// Function Override //

protected:

	// On Nav System Being Destroy Set Clean Up
	virtual void BeginDestroy() override;

	/** Delegate for callbacks to Tick */
	FTickerDelegate TickDelegate;

	/** Handle to various registered delegates */
	FDelegateHandle TickDelegateHandle;

// Native Function //

public:

// Common Function

	//UFUNCTION()
	//	void Setup();
	//UFUNCTION()
	//	void BeginCleanUp();
	//UFUNCTION()
	//	void ResetData();
	//UFUNCTION()
	//	bool Tick(float DeltaSeconds);

// Function

	//UFUNCTION(BlueprintPure, Category = "LFLPointNavSystemV2")
	//	bool IsNavPointReachable(ULFLNavigationPoint* FromPoint, ULFLNavigationPoint* ToPoint);

// Getter Function

	// Get Global NavSystem
	UFUNCTION(BlueprintPure, Category = "LFLPointNavSystemV2")
		static ULFLPointNavSystemV2* GetPointNavigationSystem() { return ULFLPointNavSystemV2::NavSystem; }

	// Get Navigation Data By Index
	UFUNCTION(BlueprintPure, Category = "LFLPointNavSystemV2")
		FORCEINLINE ULFLPointNavData* GetNavigationData(const int32 Index) { return NavigationDataList.IsValidIndex(Index) ? NavigationDataList[Index] : nullptr; }

	// Get Navigation Actor List
	UFUNCTION(BlueprintPure, Category = "LFLPointNavSystemV2")
		FORCEINLINE TArray<ALFLPointNavActor*>& GetNavigationActorList() { return NavigationActorList; }

// Navigation Function ( Call By Path Following Component )

	//UFUNCTION()
	//	bool NavigateToNavPoint  (ULFLNavPathFollowingComponent* OrderComponent, ULFLNavigationPoint* FromPoint, ULFLNavigationPoint* ToPoint, const int32& DestinationScopeID);

// Finder Function

	//UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2 | Finder")
	//	AActor* FindNearstNavActorAtLocation (const FVector Location);
	//
	//UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2 | Finder")
	//	AActor* FindNearstNavActorAtLocations(const FVector Location);
	//
	//UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2 | Finder")
	//	ULFLNavigationPoint* FindNearstNavPointAtLocation (const FVector Location);
	//
	//UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2 | Finder")
	//	ULFLNavigationPoint* FindNearstNavPointAtLocations(const FVector Location);

// Point Nav System Creation And Destruction

	// Create NavSystem And Generate Nav Data
	UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2")
		static ULFLPointNavSystemV2* CreatePointNavigationSystem(const int32 NavDataAmount);

	// Destory Navigation System And Clean Up All Navigation Actor Data;
	UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2")
		void DestoryNavSystem();

// BroadCast Block And Clear

	//UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2 | BroadCast")
	//	void BroadcastSphereCollisionBlock(AActor* Causer);
	//
	//UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2 | BroadCast")
	//	void BroadcastBoxCollisionBlock(AActor* Causer);
	//
	//UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2 | BroadCast")
	//	void BroadcastSphereCollisionClear(AActor* Causer);
	//
	//UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2 | BroadCast")
	//	void BroadcastBoxCollisionClear(AActor* Causer);

};
