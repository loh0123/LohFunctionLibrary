// Copyright 2021 Loh0123


#include "Inventory/LFLInventoryItemActor.h"

// Sets default values
ALFLInventoryItemActor::ALFLInventoryItemActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = true;
	bAlwaysRelevant = true;

	SetReplicatingMovement(true);
}

// Called when the game starts or when spawned
void ALFLInventoryItemActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALFLInventoryItemActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	SetActorTickEnabled(ItemTickType == ELFLInventoryItemTickType::AlwaysOn);

	return;
}

// Called every frame
void ALFLInventoryItemActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Checks //

int32 ALFLInventoryItemActor::CanPickUp_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex)
{
	return StackIndex == -1 ? 0 : StackData.StackData.IsValidIndex(StackIndex) ? 0 : INDEX_NONE;
}

int32 ALFLInventoryItemActor::CanDrop_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const FLFLInventoryPerItemData& Value)
{
	return 0;
}

int32 ALFLInventoryItemActor::CanEquip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory)
{
	return 0;
}

int32 ALFLInventoryItemActor::CanUnequip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory)
{
	return 0;
}

int32 ALFLInventoryItemActor::CanActiveItem_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, const bool IsEquip)
{
	return 0;
}

// Events //

void ALFLInventoryItemActor::OnPickUp_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex, const bool Force)
{
	if (StackIndex == -1)
	{
		Inventory->AddItemStackToInventory(StackData);

		StackData.StackData.Empty();
	}
	else if (StackData.StackData.IsValidIndex(StackIndex))
	{
		Inventory->AddItemStackToInventory(FLFLInventoryStackItemData(StackData, StackIndex));

		StackData.StackData.RemoveAt(StackIndex);
	}

	if (StackData.StackData.Num() == 0)
	{
		if (ItemTickType == ELFLInventoryItemTickType::DropOnGround)
		{
			SetActorTickEnabled(false);
		}

		Destroy();
	}

	return;
}

void ALFLInventoryItemActor::OnDrop_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const bool Force)
{
	if (ItemTickType == ELFLInventoryItemTickType::DropOnGround)
	{
		SetActorTickEnabled(true);
	}

	return;
}

void ALFLInventoryItemActor::OnEquip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const bool Force)
{
	if (ItemTickType == ELFLInventoryItemTickType::EquipAndUnequip)
	{
		SetActorTickEnabled(true);
	}

	return;
}

void ALFLInventoryItemActor::OnUnequip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const bool Force)
{
	if (ItemTickType == ELFLInventoryItemTickType::EquipAndUnequip)
	{
		SetActorTickEnabled(false);
	}

	Destroy();

	return;
}

void ALFLInventoryItemActor::CommitActiveItem_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, const bool IsEquip, const bool Force)
{
	return;
}

void ALFLInventoryItemActor::OnActiveItem_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, const bool IsEquip, const bool Force)
{
	if (!IsEquip)
	{
		Destroy();
	}

	return;
}

