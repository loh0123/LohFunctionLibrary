// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Components/ActorComponent.h"
#include "LFLInventoryManagementComponent.generated.h"

class ALFLInventoryItemActor;

USTRUCT(BlueprintType)
struct FLFLInventoryEquipmentSaveData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, Category = "LFLInventoryPerItemData | Variable")
		int32 ItemIndex;

	UPROPERTY(VisibleAnywhere, Category = "LFLInventoryPerItemData | Variable")
		int32 StackIndex;

	FLFLInventoryEquipmentSaveData() : ItemIndex(-1), StackIndex(-1) {}

	FLFLInventoryEquipmentSaveData(int32 I, int32 S) : ItemIndex(I), StackIndex(S) {}
};

USTRUCT(BlueprintType)
struct FLFLInventoryPerItemData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLInventoryPerItemData | Variable")
		TArray<float> ItemCustomData;

	UPROPERTY(VisibleAnywhere, Category = "LFLInventoryPerItemData | Variable")
		TArray<float> TagCustomData;

	UPROPERTY(VisibleAnywhere, Category = "LFLInventoryPerItemData | Variable")
		TArray<int32> TagIndexPointer;

	UPROPERTY(VisibleAnywhere, Category = "LFLInventoryPerItemData | Variable")
		TArray<FName> ItemAdditionTag;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FLFLInventoryStackItemData | Variable")
		FText CustomItemDescription;

	UPROPERTY()
		int32 CurrentEquipmentIndex;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLInventoryPerItemData | Variable")
		float ItemWeightOffset;

	FLFLInventoryPerItemData() : ItemCustomData({}), TagCustomData({}), TagIndexPointer({}), ItemAdditionTag({}), CustomItemDescription(FText::FromString("NULL")), CurrentEquipmentIndex(-1), ItemWeightOffset(0.0f) {}
};

USTRUCT(BlueprintType)
struct FLFLInventoryStackItemData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FLFLInventoryStackItemData")
		TSubclassOf<ALFLInventoryItemActor> ActorClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FLFLInventoryStackItemData")
		FName ItemName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FLFLInventoryStackItemData")
		UTexture2D* ItemIcon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FLFLInventoryStackItemData")
		FText ItemDescription;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FLFLInventoryStackItemData")
		TArray<FLFLInventoryPerItemData> StackData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FLFLInventoryStackItemData")
		TArray<FName> StackTag;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FLFLInventoryStackItemData")
		float ItemDefaultWeight;

	FORCEINLINE bool operator==(const FLFLInventoryStackItemData& Other) const
	{
		return ItemName == Other.ItemName;
	}
	
	FORCEINLINE bool operator!=(const FLFLInventoryStackItemData& Other) const
	{
		return ItemName != Other.ItemName;
	}

	FLFLInventoryStackItemData() : ActorClass(NULL), ItemName(FName("NULL")), ItemIcon(nullptr), ItemDescription(FText::FromString("NULL")), StackData({}), StackTag({}), ItemDefaultWeight(0.0f) {}
	FLFLInventoryStackItemData(const FLFLInventoryStackItemData& Copy, int32 StackIndex) : ActorClass(Copy.ActorClass), ItemName(Copy.ItemName), ItemIcon(Copy.ItemIcon), ItemDescription(Copy.ItemDescription), StackData(), StackTag(Copy.StackTag) , ItemDefaultWeight(Copy.ItemDefaultWeight)
	{
		if (StackIndex == -1)
		{
			for (const FLFLInventoryPerItemData& Value : Copy.StackData)
			{
				if (Value.CurrentEquipmentIndex == -1)
				{
					StackData.Add(Value);
				}
			}
		}
		else if (Copy.StackData.IsValidIndex(StackIndex) && Copy.StackData[StackIndex].CurrentEquipmentIndex == -1)
		{
			StackData = { Copy.StackData[StackIndex] };
		}
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class LOHFUNCTIONLIBRARY_API ULFLInventoryManagementComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(SaveGame)
		TArray<FLFLInventoryEquipmentSaveData> SavedSerializeData;

public:	

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "LFLInventoryManagementComponent | Setting", SaveGame)
		int32 MaxEquipmentCount;

	UPROPERTY(VisibleAnywhere, Category = "LFLInventoryManagementComponent | Variable", replicated)
		TArray<ALFLInventoryItemActor*> EquipmentList;

	UPROPERTY(VisibleAnywhere, Category = "LFLInventoryManagementComponent | Variable", replicated, SaveGame)
		TArray<FLFLInventoryStackItemData> InventoryData;

	// Sets default values for this component's properties
	ULFLInventoryManagementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
		ALFLInventoryItemActor* SpawnItemForOperation(const FLFLInventoryStackItemData& TargetStack, const int32 StackIndex, const bool IsEquipment);
	
	// Serialize Data //
	
	// Serialize Data to something can be save.
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Serializing")
		bool SerializeData(TArray<FLFLInventoryEquipmentSaveData>& Data);
	
	// Deserialize Data and respawn every component
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Serializing")
		bool DeserializeData(const TArray<FLFLInventoryEquipmentSaveData>& Data);
	
	virtual void Serialize(FArchive& Ar) override;
	
	// Inventory Item //
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Inventory Item")
		int32 AddItemToInventory		(FName ItemName, const FLFLInventoryPerItemData& ItemData);
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Inventory Item")
		int32 AddItemStackToInventory	(const FLFLInventoryStackItemData& ItemStack);
	
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Inventory Item")
		bool RemoveItemFromInventory		(const int32 ItemIndex, const int32 StackIndex);
	
	
	UFUNCTION()
		int32 FindInventoryItemStackIndex(FName ItemName);
	
	UFUNCTION()
		int32 FindInventoryItemByEquipment(const int32 ItemIndex, const int32 EquipmentIndex);
	
	
	UFUNCTION(BlueprintPure, Category = "LFLInventoryManagementComponent | Inventory Item")
		float GetTotalInventoryItemWeight();
	
	UFUNCTION(BlueprintPure, Category = "LFLInventoryManagementComponent | Inventory Item")
		int32 GetTotalInventoryItemStackAmount();
	
	UFUNCTION(BlueprintPure, Category = "LFLInventoryManagementComponent | Inventory Item")
		int32 GetTotalInventoryItemAmount();
	
	UFUNCTION(BlueprintPure, Category = "LFLInventoryManagementComponent | Inventory Item")
		int32 GetInventoryItemAmount(FName ItemName);
	
	
	UFUNCTION(BlueprintPure, Category = "LFLInventoryManagementComponent | Inventory Item")
		bool GetInventoryItem(FName ItemName, FLFLInventoryStackItemData& Stack);
	
	UFUNCTION(BlueprintPure, Category = "LFLInventoryManagementComponent | Inventory Item")
		TArray<FLFLInventoryStackItemData>& GetInventoryItems();
	
	// Pick Up Item //
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Function")
		int32 PickUpItem(ALFLInventoryItemActor* Item, const int32 StackIndex, const bool Force);
	
	// Drop Item //
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Function")
		int32 DropItem			(ALFLInventoryItemActor*& DropItem, const int32 ItemIndex, const int32 StackIndex, const bool Force);
	
	// Equip //
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Function")
		int32 EquipItem		(const int32 EquipmentIndex, const int32 ItemIndex, const int32 StackIndex, ALFLInventoryItemActor*& EquipItemActor, const bool Force);
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Function")
		int32 UnequipItem	(const int32 EquipmentIndex, const bool Force);
	
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Function")
		TArray<ALFLInventoryItemActor*>&  GetEquipmentsList();
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Function")
		bool IsEquiped(const int32 EquipmentIndex);
	
	// Active Item //
	
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLInventoryManagementComponent | Function")
		int32 ActiveItem	(const int32 ItemIndex, const int32 StackIndex, const int32 ActiveCode, const bool Force);
};
