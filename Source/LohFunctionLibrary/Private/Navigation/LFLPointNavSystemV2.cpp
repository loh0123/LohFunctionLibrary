// Copyright 2021 Loh0123


#include "Navigation/LFLPointNavSystemV2.h"
#include "Navigation/LFLPointNavData.h"

ULFLPointNavSystemV2* ULFLPointNavSystemV2::NavSystem = nullptr;

void ULFLPointNavSystemV2::BeginDestroy()
{
	if (ULFLPointNavSystemV2::NavSystem == this) ULFLPointNavSystemV2::NavSystem = nullptr;

	Super::BeginDestroy();

	return;
}

ULFLPointNavSystemV2* ULFLPointNavSystemV2::CreatePointNavigationSystem(const int32 NavDataAmount)
{
	if (ULFLPointNavSystemV2::NavSystem)
	{
		ULFLPointNavSystemV2::NavSystem->DestoryNavSystem();
	}

	// Create new Nav System And Set It To Global
	ULFLPointNavSystemV2* NewNavSystem = NewObject<ULFLPointNavSystemV2>();
	ULFLPointNavSystemV2::NavSystem = NewNavSystem;

	// Reserve Space For New Nav Data
	NewNavSystem->NavigationDataList.Reserve(NavDataAmount);

	// Generate New Data
	for (int32 i = 0; i < NavDataAmount; i++)
	{
		NewNavSystem->NavigationDataList.Add(NewObject<ULFLPointNavData>());
	}

	return ULFLPointNavSystemV2::NavSystem;
}

void ULFLPointNavSystemV2::DestoryNavSystem()
{
	// Destroy All NavData Actor
	for (ULFLPointNavData* NavData : NavigationDataList)
	{
		// Remember To Clean Up Actor Data
	}

	// Clear All Reference
	MarkPendingKill();

	return;
}
