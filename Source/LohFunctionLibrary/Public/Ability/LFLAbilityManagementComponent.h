// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LFLAbilityManagementComponent.generated.h"

class ULFLAbilityHandlerComponent;
class ALFLSpellActor;
class ULFLEffectComponent;

USTRUCT(BlueprintType)
struct FLFLAbilityArgumentData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLAbilityArugmentData | Variable")
		int32 ArgumentID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLAbilityArugmentData | Variable")
		int32 ArgumentLevel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLAbilityArugmentData | Variable")
		int32 ArgumentParameter;

	FLFLAbilityArgumentData() : ArgumentID(-1), ArgumentLevel(-1), ArgumentParameter(-1) {}
};

USTRUCT(BlueprintType)
struct FLFLAbilityAttributeData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLAbilityArgumentData | Variable")
		int32 AttributeID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLAbilityArgumentData | Variable")
		float AttributeOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLAbilityArgumentData | Variable")
		float AttributeMultiply;

	FLFLAbilityAttributeData() : AttributeID(-1), AttributeOffset(0.0f), AttributeMultiply(0.0f) {}
};

USTRUCT(BlueprintType)
struct FLFLAbilityComponentData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LFLAbilityComponentData | Variable")
		FString Class;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LFLAbilityComponentData | Variable")
		TArray<uint8> SerializedData;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LFLAbilityComponentData | Variable")
		int32 SlotIndex;

	FLFLAbilityComponentData() : Class("NULL"), SerializedData({}), SlotIndex(-1) {}
	FLFLAbilityComponentData(FString C, TArray<uint8> SD, int32 SI) : Class(C), SerializedData(SD), SlotIndex(SI) {}
};

USTRUCT(BlueprintType)
struct FLFLSpellSpawnData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLSpellSpawnData | Variable")
		TSubclassOf<ALFLSpellActor> SpellClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLSpellSpawnData | Variable")
		TArray<FLFLAbilityArgumentData> SpellArguments;

	FLFLSpellSpawnData() : SpellClass(NULL), SpellArguments({}) {}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class LOHFUNCTIONLIBRARY_API ULFLAbilityManagementComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(SaveGame)
		TArray<FLFLAbilityComponentData> SavedSerializeData;

	UPROPERTY(replicated, SaveGame)
		TArray<FLFLAbilityArgumentData> GlobalArguments;

	UPROPERTY(replicated)
		TArray<AActor*> TargetActors;

	UPROPERTY()
		ALFLSpellActor* PreviousCastSpell;

public:	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "LFLAbilityManagementComponent | Variable", SaveGame)
		int32 MaxAbilityNum;

	UPROPERTY(replicated)
		TArray<ALFLSpellActor*> RunningSpell;

	UPROPERTY(replicated)
		TArray<ULFLEffectComponent*> RunningEffect;

	UPROPERTY(replicated)
		TArray<ULFLAbilityHandlerComponent*> OwnedAbility;

	// Sets default values for this component's properties
	ULFLAbilityManagementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Serialize Data //////////////////////////////////////////////////////////////////////////////////////////

	// Serialize Data to something can be save. Warning Spell Actor cannot be Serialize
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Serializing")
		bool SerializeData(TArray<FLFLAbilityComponentData>& Data);

	// Deserialize Data and respawn every component without spell actor
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Serializing")
		bool DeserializeData(const TArray<FLFLAbilityComponentData>& Data);

	virtual void Serialize(FArchive& Ar) override;

	// Argument Datas //////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Argument Datas")
		static int32 FindArgumentData(const TArray<FLFLAbilityArgumentData>& ArguArray, int32 ArguID, FLFLAbilityArgumentData& Argu);

	UFUNCTION()
		static void CombineArgumentDatas(TArray<FLFLAbilityArgumentData>& ArguArray, const TArray<FLFLAbilityArgumentData>& CombineArray);

	UFUNCTION()
		static bool ReplaceSingleArgumentData(TArray<FLFLAbilityArgumentData>& ArguArray, FLFLAbilityArgumentData& ArguData);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Argument Datas")
		static bool IsContainArgumentData(const TArray<FLFLAbilityArgumentData>& ArguArray, const int32 ArguID);

	// Attribute Datas //////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintCallable, Category = "LFLAbilityManagementComponent | AttributeDatas")
		void CollectAttributeDatas(const int32 MaxCollectIndex, const bool Ability, const bool Effect, TArray<float>& Offset, TArray<float>& Multiply);

	// Target Actors //////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | TargetActors")
		void SetTargetActors(const TArray<AActor*> Data);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | TargetActors")
		void AddTargetActors(AActor* AddData);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | TargetActors")
		bool RemoveTargetActors(AActor* RemoveData);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | TargetActors")
		TArray<AActor*>& GetTargetActors();

	// Global Arugments //////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | GlobalArguments")
		void SetGlobalArguments(const TArray<FLFLAbilityArgumentData> ArguArray, const bool CombineArgu);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | GlobalArguments")
		void AddGlobalArgument(const FLFLAbilityArgumentData Data);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | GlobalArguments")
		bool RemoveGlobalArgument(const int32 ArguID);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | GlobalArguments")
		TArray<FLFLAbilityArgumentData>& GetGlobalArguments();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | GlobalArguments")
		bool GetSingleGlobalArgument(const int32 ArguID, FLFLAbilityArgumentData Argument);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | GlobalArguments")
		bool IsContainGlobalArgument(const int32 ArguID);

	// Owned Ability //////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Owned Ability")
		ULFLAbilityHandlerComponent* AssignAbility(TSubclassOf<ULFLAbilityHandlerComponent> AbilityClass, const int32 AbilitySlotIndex, const TArray<FLFLAbilityArgumentData>& AbilityArguments);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Owned Ability")
		bool RemoveAbility(const int32 AbilitySlotIndex);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Owned Ability")
		bool RunAbility(const int32 AbilitySlotIndex, const bool ClearTargetActor);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Owned Ability")
		bool CancelAbility(const int32 AbilitySlotIndex, const int32 CancelCode);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Owned Ability")
		void CancelAllAbility(const int32 CancelCode);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Owned Ability")
		bool ResetAbilityCoolDown(const int32 AbilitySlotIndex);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Owned Ability")
		bool SetAbilitySpellCallTree(const int32 AbilitySlotIndex, const TArray<FLFLSpellSpawnData>& TreeData, const TArray<int32>& TreeIndex);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Owned Ability")
		bool IsOwnedAbility(TSubclassOf<ULFLAbilityHandlerComponent> AbilityClass);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Owned Ability")
		bool IsAbilityRunning(const int32 AbilitySlotIndex);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Owned Ability")
		ULFLAbilityHandlerComponent* GetAbility(const int32 AbilitySlotIndex);

	// Running Spell //////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Running Spell")
		void ClearPreviousSpell();

	UFUNCTION(BlueprintAuthorityOnly, BlueprintNativeEvent, BlueprintPure, Category = "LFLAbilityManagementComponent | Running Spell")
		FTransform GetSpellSpawnTransform(AActor* SpawnTransformActor, const TArray<FLFLAbilityArgumentData>& SpellArguments, const TArray<AActor*>& SpellTargetActors, ALFLSpellActor* PreviousSpell, ULFLAbilityHandlerComponent* OwningAbility, float& LifeTime);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Running Spell", meta = (HidePin = "OwningAbility"))
		int32 RunSpell(TSubclassOf<ALFLSpellActor> SpellClass, AActor* SpawnTransformActor, ULFLAbilityHandlerComponent* OwningAbility, APawn* Instigator, const TArray<FLFLAbilityArgumentData> SpellArguments, const TArray<AActor*> SpellTargetActors);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Running Spell")
		bool StopSpell(ALFLSpellActor* SpellActor, const int32 StopCode);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Running Spell")
		void StopAllSpell(const int32 StopCode);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Running Spell")
		TArray<ALFLSpellActor*>& GetSpellRunning();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Running Spell")
		bool IsSpellRunning(TSubclassOf<ALFLSpellActor> SpellClass);

	// Running Effect //////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Running Effect")
		int32 RunEffect(TSubclassOf<ULFLEffectComponent> EffectClass, const TArray<FLFLAbilityArgumentData> EffectArguments);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Running Effect")
		bool StopEffect(ULFLEffectComponent* EffectComponent, const int32 StopCode);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Running Effect")
		void StopAllEffect(const int32 StopCode);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Running Effect")
		TArray<ULFLEffectComponent*>& GetEffectRunning();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Running Effect")
		bool IsEffectRunning(TSubclassOf<ULFLEffectComponent> EffectClass);
};
