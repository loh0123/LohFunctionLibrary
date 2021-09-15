// Copyright 2021 Loh0123

#include "Inventory/LFLInventoryManagementComponent.h"
#include "Inventory/LFLInventoryItemActor.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
ULFLInventoryManagementComponent::ULFLInventoryManagementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
	// ...
}

void ULFLInventoryManagementComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULFLInventoryManagementComponent, InventoryData);
	DOREPLIFETIME(ULFLInventoryManagementComponent, EquipmentList);
}

// Called when the game starts
void ULFLInventoryManagementComponent::BeginPlay()
{
	Super::BeginPlay();

	EquipmentList.SetNum(FMath::Max(MaxEquipmentCount, 1));

	return;
}

// Called every frame
void ULFLInventoryManagementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

ALFLInventoryItemActor* ULFLInventoryManagementComponent::SpawnItemForOperation(const FLFLInventoryStackItemData& TargetStack, const int32 StackIndex, const bool IsEquipment)
{
	if (TargetStack.ActorClass)
	{
		FTransform ActorTrans = GetOwner()->GetTransform();

		ALFLInventoryItemActor* SpawnActor = GetOwner()->GetWorld()->SpawnActorDeferred<ALFLInventoryItemActor>(TargetStack.ActorClass, ActorTrans, IsEquipment ? GetOwner() : nullptr, Cast<APawn>(GetOwner()), ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);

		if (IsEquipment && TargetStack.StackData.IsValidIndex(StackIndex))
		{
			if (TargetStack.StackData.IsValidIndex(StackIndex) && TargetStack.StackData[StackIndex].CurrentEquipmentIndex == -1)
			{
				SpawnActor->InventoryComponent = this;
			}
			else
			{
				SpawnActor->Destroy();

				return nullptr;
			}
		}

		SpawnActor->StackData = FLFLInventoryStackItemData(TargetStack, StackIndex);

		SpawnActor->IsEquipment = IsEquipment;

		UGameplayStatics::FinishSpawningActor(SpawnActor, ActorTrans);

		return SpawnActor;
	}

	return nullptr;
}

// Serialize Data //

bool ULFLInventoryManagementComponent::SerializeData(TArray<FLFLInventoryEquipmentSaveData>& Data)
{
	if (MaxEquipmentCount == 0 || EquipmentList.Num() != MaxEquipmentCount || !HasBeenInitialized())
	{
		return false;
	}

	Data.Empty(MaxEquipmentCount);

	int32 TargetStackIndex = 0;
	int32 TargetItemIndex = 0;

	for (int32 i = 0; i < MaxEquipmentCount; i++)
	{
		TargetStackIndex = FindInventoryItemStackIndex(EquipmentList[i]->StackData.ItemName);
		TargetItemIndex = FindInventoryItemByEquipment(TargetStackIndex, i);
		
		Data.Add(FLFLInventoryEquipmentSaveData(TargetStackIndex, TargetItemIndex));
	}

	return true;
}

bool ULFLInventoryManagementComponent::DeserializeData(const TArray<FLFLInventoryEquipmentSaveData>& Data)
{
	if (Data.Num() != MaxEquipmentCount || Data.Num() == 0 || !HasBeenInitialized())
	{
		return false;
	}

	for (int32 i = 0; i < EquipmentList.Num(); i++)
	{
		if (EquipmentList[i])
		{
			UnequipItem(i, true);
		}

		ALFLInventoryItemActor* SpawnActor;

		EquipItem(i, Data[i].ItemIndex, Data[i].StackIndex, SpawnActor, true);
	}

	return true;
}

void ULFLInventoryManagementComponent::Serialize(FArchive& Ar)
{
	if (Ar.IsSaving())
	{
		SerializeData(SavedSerializeData);
	
		Super::Serialize(Ar);
	}
	else if (Ar.IsLoading())
	{
		Super::Serialize(Ar);

		EquipmentList.SetNum(FMath::Max(MaxEquipmentCount, 1));

		DeserializeData(SavedSerializeData);
	}
	else
	{
		Super::Serialize(Ar);
	}

	return;
}

// Inventory Item //

int32 ULFLInventoryManagementComponent::AddItemToInventory			(FName ItemName, const FLFLInventoryPerItemData& ItemData)
{
	int32 TargetIndex = FindInventoryItemStackIndex(ItemName);

	if (TargetIndex != INDEX_NONE)
	{
		InventoryData[TargetIndex].StackData.Add(ItemData);

		return TargetIndex;
	}
	
	return INDEX_NONE;
}

int32 ULFLInventoryManagementComponent::AddItemStackToInventory		(const FLFLInventoryStackItemData& ItemStack)
{
	int32 TargetIndex = FindInventoryItemStackIndex(ItemStack.ItemName);

	if (TargetIndex != INDEX_NONE)
	{
		InventoryData[TargetIndex].StackData.Append(ItemStack.StackData);

		return TargetIndex;
	}
	else
	{
		return InventoryData.Add(ItemStack);
	}
}


bool ULFLInventoryManagementComponent::RemoveItemFromInventory		(const int32 ItemIndex, const int32 StackIndex)
{
	if (InventoryData.IsValidIndex(ItemIndex))
	{
		FLFLInventoryStackItemData& TargetStack = InventoryData[ItemIndex];

		if (StackIndex == -1)
		{
			for (int32 i = 0; i < TargetStack.StackData.Num(); i++)
			{
				UnequipItem(TargetStack.StackData[i].CurrentEquipmentIndex, true);
			}

			InventoryData.RemoveAt(ItemIndex);
		}
		else if (InventoryData[ItemIndex].StackData.IsValidIndex(StackIndex))
		{
			UnequipItem(TargetStack.StackData[StackIndex].CurrentEquipmentIndex, true);

			TargetStack.StackData.RemoveAt(StackIndex);

			if (TargetStack.StackData.Num() == 0)
			{
				InventoryData.RemoveAt(ItemIndex);
			}
		}
		else
		{
			return false;
		}

		return true;
	}

	return false;
}


int32 ULFLInventoryManagementComponent::FindInventoryItemStackIndex(FName ItemName)
{
	return InventoryData.IndexOfByPredicate([ItemName](const FLFLInventoryStackItemData& CheckItem) { return CheckItem.ItemName == ItemName; });
}

int32 ULFLInventoryManagementComponent::FindInventoryItemByEquipment(const int32 ItemIndex, const int32 EquipmentIndex)
{
	if (InventoryData.IsValidIndex(ItemIndex))
	{
		return InventoryData[ItemIndex].StackData.IndexOfByPredicate([EquipmentIndex](const FLFLInventoryPerItemData& CheckItem) { return CheckItem.CurrentEquipmentIndex == EquipmentIndex; });
	}

	return INDEX_NONE;
}


float ULFLInventoryManagementComponent::GetTotalInventoryItemWeight()
{
	float TotalWeight = 0.0f;

	for (FLFLInventoryStackItemData& Value : InventoryData)
	{
		TotalWeight += Value.ItemDefaultWeight * Value.StackData.Num();

		for (FLFLInventoryPerItemData& Stack : Value.StackData)
		{
			TotalWeight += Stack.ItemWeightOffset;
		}
	}

	return TotalWeight;
}

int32 ULFLInventoryManagementComponent::GetTotalInventoryItemStackAmount()
{
	int32 TotalAmount = 0.0f;

	for (FLFLInventoryStackItemData& Value : InventoryData)
	{
		TotalAmount += Value.StackData.Num();
	}

	return TotalAmount;

	return int32();
}

int32 ULFLInventoryManagementComponent::GetTotalInventoryItemAmount()
{
	return InventoryData.Num();
}

int32 ULFLInventoryManagementComponent::GetInventoryItemAmount(FName ItemName)
{
	int32 TargetIndex = FindInventoryItemStackIndex(ItemName);

	if (TargetIndex != INDEX_NONE)
	{
		return InventoryData[TargetIndex].StackData.Num();
	}

	return -1;
}


bool ULFLInventoryManagementComponent::GetInventoryItem(FName ItemName, FLFLInventoryStackItemData& Stack)
{
	int32 TargetIndex = FindInventoryItemStackIndex(ItemName);

	if (TargetIndex != INDEX_NONE)
	{
		Stack = InventoryData[TargetIndex];

		return true;
	}

	return false;
}

TArray<FLFLInventoryStackItemData>& ULFLInventoryManagementComponent::GetInventoryItems()
{
	return InventoryData;
}

// Pick Up Item //

int32 ULFLInventoryManagementComponent::PickUpItem	(ALFLInventoryItemActor* Item, const int32 StackIndex, const bool Force)
{
	if (Item)
	{
		if (!Force)
		{
			int32 ReturnCode = Item->CanPickUp(GetOwner(), this, StackIndex);

			if (ReturnCode != 0)
			{
				return ReturnCode;
			}
		}

		Item->OnPickUp(GetOwner(), this, StackIndex, Force);

		return 0;
	}

	return -1;
}

// Drop Item //

int32 ULFLInventoryManagementComponent::DropItem	(ALFLInventoryItemActor*& DropItem, const int32 ItemIndex, const int32 StackIndex, const bool Force)
{
	if (InventoryData.IsValidIndex(ItemIndex))
	{
		TArray<int32> TargetRemove;

		FLFLInventoryStackItemData& TargetStack = InventoryData[ItemIndex];

		DropItem = SpawnItemForOperation(InventoryData[ItemIndex], -2, false);

		if (StackIndex == -1)
		{
			int32 Index = 0;

			for (FLFLInventoryPerItemData& Value : TargetStack.StackData)
			{
				if (!Force)
				{
					if (DropItem->CanDrop(GetOwner(), this, Value) != 0 || UnequipItem(TargetStack.StackData[Index].CurrentEquipmentIndex, Force) > 0)
					{
						Index++;

						continue;
					}
				}

				DropItem->StackData.StackData.Add(Value);
				TargetRemove.Add(Index - TargetRemove.Num());

				Index++;
			}

			if (TargetRemove.Num() == 0)
			{
				DropItem->Destroy();
				DropItem = nullptr;

				return -1;
			}
		}
		else if (TargetStack.StackData.IsValidIndex(StackIndex))
		{
			if (!Force)
			{
				int32 ReturnCode = DropItem->CanDrop(GetOwner(), this, TargetStack.StackData[StackIndex]);

				if (ReturnCode != 0)
				{
					DropItem->Destroy();
					DropItem = nullptr;

					return ReturnCode;
				}

				if (UnequipItem(TargetStack.StackData[StackIndex].CurrentEquipmentIndex, Force) > 0)
				{
					DropItem->Destroy();
					DropItem = nullptr;

					return -2;
				}
			}

			DropItem->StackData.StackData.Add(TargetStack.StackData[StackIndex]);
			TargetRemove.Add(StackIndex);
		}
		else
		{
			DropItem->Destroy();
			DropItem = nullptr;

			return -1;
		}

		for (int32& Value : TargetRemove)
		{
			RemoveItemFromInventory(ItemIndex, Value);
		}

		DropItem->OnDrop(GetOwner(), this, Force);

		return 0;
	}

	return -1;
}

// Equip //

int32 ULFLInventoryManagementComponent::EquipItem	(const int32 EquipmentIndex, const int32 ItemIndex, const int32 StackIndex, ALFLInventoryItemActor*& EquipItemActor, const bool Force)
{
	if (InventoryData.IsValidIndex(ItemIndex) && EquipmentList.IsValidIndex(EquipmentIndex) && InventoryData[ItemIndex].StackData.IsValidIndex(StackIndex))
	{
		EquipItemActor = SpawnItemForOperation(InventoryData[ItemIndex], StackIndex, true);

		if (EquipItemActor)
		{
			InventoryData[ItemIndex].StackData[StackIndex].CurrentEquipmentIndex = EquipmentIndex;

			if (!Force)
			{
				int32 ReturnCode = EquipItemActor->CanEquip(GetOwner(), this);

				if (ReturnCode != 0)
				{
					EquipItemActor->Destroy();

					EquipItemActor = nullptr;

					InventoryData[ItemIndex].StackData[StackIndex].CurrentEquipmentIndex = -1;

					return ReturnCode;
				}
			}

			if (EquipmentList[EquipmentIndex])
			{
				int32 ReturnCode = UnequipItem(EquipmentIndex, Force);

				if (ReturnCode != 0)
				{
					EquipItemActor->Destroy();

					EquipItemActor = nullptr;

					InventoryData[ItemIndex].StackData[StackIndex].CurrentEquipmentIndex = -1;

					return ReturnCode;
				}
			}

			EquipmentList[EquipmentIndex] = EquipItemActor;

			EquipItemActor->OnEquip(GetOwner(), this, Force);

			return 0;
		}
	}

	return -1;
}

int32 ULFLInventoryManagementComponent::UnequipItem	(const int32 EquipmentIndex, const bool Force)
{
	if (EquipmentList.IsValidIndex(EquipmentIndex) && EquipmentList[EquipmentIndex])
	{
		ALFLInventoryItemActor* TargetActor = EquipmentList[EquipmentIndex];

		if (!Force)
		{
			int32 ReturnCode = EquipmentList[EquipmentIndex]->CanUnequip(GetOwner(), this);

			if (ReturnCode != 0)
			{
				return ReturnCode;
			}
		}

		int32 TargetStackIndex = FindInventoryItemStackIndex(TargetActor->StackData.ItemName);
		int32 TargetItemIndex = FindInventoryItemByEquipment(TargetStackIndex, EquipmentIndex);

		if (TargetStackIndex != INDEX_NONE && TargetItemIndex != INDEX_NONE)
		{
			InventoryData[TargetStackIndex].StackData[TargetItemIndex].CurrentEquipmentIndex = -1;
		}

		EquipmentList[EquipmentIndex]->StackData.StackData[0].CurrentEquipmentIndex = -1;

		EquipmentList[EquipmentIndex]->OnUnequip(GetOwner(), this, Force);

		EquipmentList[EquipmentIndex] = nullptr;

		return 0;
	}

	return -1;
}


TArray<ALFLInventoryItemActor*>& ULFLInventoryManagementComponent::GetEquipmentsList()
{
	return EquipmentList;
}

bool ULFLInventoryManagementComponent::IsEquiped	(const int32 EquipmentIndex)
{
	return EquipmentList.IsValidIndex(EquipmentIndex) && EquipmentList[EquipmentIndex];
}

// Active Item //

int32 ULFLInventoryManagementComponent::ActiveItem	(const int32 ItemIndex, const int32 StackIndex, const int32 ActiveCode, const bool Force)
{
	if (InventoryData.IsValidIndex(ItemIndex) && InventoryData[ItemIndex].StackData.IsValidIndex(StackIndex))
	{
		ALFLInventoryItemActor* TargetActor;

		if (InventoryData[ItemIndex].StackData[StackIndex].CurrentEquipmentIndex != -1)
		{
			TargetActor = EquipmentList[InventoryData[ItemIndex].StackData[StackIndex].CurrentEquipmentIndex];

			if (!Force)
			{
				int32 ReturnCode = TargetActor->CanActiveItem(GetOwner(), this, ActiveCode, true);

				if (ReturnCode != 0)
				{
					return ReturnCode;
				}
			}

			TargetActor->CommitActiveItem(GetOwner(), this, ActiveCode, true, Force);
			TargetActor->OnActiveItem(GetOwner(), this, ActiveCode, true, Force);
		}
		else
		{
			TargetActor = SpawnItemForOperation(InventoryData[ItemIndex], StackIndex, false);

			if (!Force)
			{
				int32 ReturnCode = TargetActor->CanActiveItem(GetOwner(), this, ActiveCode, false);

				if (ReturnCode != 0)
				{
					TargetActor->Destroy();

					return ReturnCode;
				}
			}

			TargetActor->CommitActiveItem(GetOwner(), this, ActiveCode, false, Force);
			TargetActor->OnActiveItem(GetOwner(), this, ActiveCode, false, Force);
		}

		return 0;
	}

	return -1;
}

