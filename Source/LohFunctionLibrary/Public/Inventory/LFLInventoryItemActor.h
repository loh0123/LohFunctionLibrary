// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Inventory/LFLInventoryManagementComponent.h"
#include "LFLInventoryItemActor.generated.h"

UENUM(BlueprintType)
enum ELFLInventoryItemTickType
{
	Disable			UMETA(DisplayName = "Disable"),
	EquipAndUnequip	UMETA(DisplayName = "Equip And Unequip"),
	DropOnGround	UMETA(DisplayName = "Drop On Ground"),
	AlwaysOn		UMETA(DisplayName = "Always On")
};

UCLASS(Blueprintable)
class LOHFUNCTIONLIBRARY_API ALFLInventoryItemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "LFLInventoryItemActor | Setting")
		TEnumAsByte<ELFLInventoryItemTickType> ItemTickType;

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = "true"), Category = "LFLInventoryItemActor | Variable")
		ULFLInventoryManagementComponent* InventoryComponent;

	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn = "true"), EditAnywhere, Category = "LFLInventoryItemActor | Variable")
		FLFLInventoryStackItemData StackData;

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = "true"), VisibleAnywhere, Category = "LFLInventoryItemActor | Variable")
		bool IsEquipment;

	// Sets default values for this actor's properties
	ALFLInventoryItemActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Checks //

	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Checks")
		int32 CanPickUp		(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex);
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Checks")
		int32 CanDrop		(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const FLFLInventoryPerItemData& Value);
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Checks")
		int32 CanEquip		(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory);
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Checks")
		int32 CanUnequip	(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory);
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Checks")
		int32 CanActiveItem	(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, const bool IsEquip);
	
	// Events //
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Events")
		void OnPickUp			(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex, const bool Force);
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Events")
		void OnDrop				(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const bool Force);
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Events")
		void OnEquip			(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const bool Force);
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Events")
		void OnUnequip			(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const bool Force);
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Events")
		void CommitActiveItem	(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, const bool IsEquip, const bool Force);
	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLInventoryItemActor | Events")
		void OnActiveItem		(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, const bool IsEquip, const bool Force);
};
