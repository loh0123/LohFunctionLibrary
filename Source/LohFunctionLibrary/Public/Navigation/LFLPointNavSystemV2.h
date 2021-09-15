// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LFLPointNavSystemV2.generated.h"

class ALFLPointNavData;
class ALFLPointNavActor;

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
		TArray<ALFLPointNavData*> NavigationDataList;

	// Navigation Actor for Nav Point to generated
	UPROPERTY()
		TArray<ALFLPointNavActor*> NavigationActorList;

// Function Override //

	// On Nav System Being Destroy Set Clean Up
	virtual void BeginDestroy() override;

// Native Function //

public:

// Getter Function

	// Get Global NavSystem
	UFUNCTION(BlueprintPure, Category = "LFLPointNavSystemV2")
		static ULFLPointNavSystemV2* GetPointNavigationSystem() { return ULFLPointNavSystemV2::NavSystem; }

	// Get Navigation Data By Index
	UFUNCTION(BlueprintPure, Category = "LFLPointNavSystemV2")
		FORCEINLINE ALFLPointNavData* GetNavigationData(const int32 Index)
	{
		return NavigationDataList.IsValidIndex(Index) ? NavigationDataList[Index] : nullptr;
	}

	// Get Navigation Actor List
	UFUNCTION(BlueprintPure, Category = "LFLPointNavSystemV2")
		FORCEINLINE TArray<ALFLPointNavActor*>& GetNavigationActorList() { return NavigationActorList; }

// Navigation Function

//

// Point Nav System Creation And Destruction

	// Create NavSystem And Generate Nav Data
	UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2")
		static ULFLPointNavSystemV2* CreatePointNavigationSystem(const int32 NavDataAmount);

	// Destory Navigation System And Clean Up All Navigation Actor Data;
	UFUNCTION(BlueprintCallable, Category = "LFLPointNavSystemV2")
		void DestoryNavSystem();
};
