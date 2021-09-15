// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Ability/LFLAbilityManagementComponent.h"
#include "LFLAbilityHandlerComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class LOHFUNCTIONLIBRARY_API ULFLAbilityHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(replicated, SaveGame)
		float CoolDownTimer = 0.0f;

	UPROPERTY(replicated, SaveGame)
		TArray<FLFLSpellSpawnData> SpellCallTree;

	UPROPERTY(replicated, SaveGame)
		TArray<int32> TreeBranchIndex;

public:	
	// Sets default values for this component's properties
	ULFLAbilityHandlerComponent();

	UPROPERTY(EditAnywhere, replicated, Category = "LFLAbilityManagementComponent | Variable", SaveGame)
		TArray<FLFLAbilityAttributeData> AttributeDatas;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LFLAbilityManagementComponent | Variable")
		float DefaultCoolDown = 0.0f;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"), BlueprintGetter = GetAbilityArguments, SaveGame)
		TArray<FLFLAbilityArgumentData> AbilityArguments;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"))
		ULFLAbilityManagementComponent* Manager;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"), BlueprintGetter = GetTargetActor)
		TArray<AActor*> TargetActors;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"), SaveGame)
		int32 SlotIndex;

protected:
	UPROPERTY(replicated)
		bool IsRunning;

	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Attribute Datas //////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | Attribute Datas")
		bool SetAttributeData(const int32 Index, const float Value, const float Multiply);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | Attribute Datas")
		bool AddAttributeDataValueOffset(const int32 Index, const float Offset);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | Attribute Datas")
		bool AddAttributeDataMultiplyOffset(const int32 Index, const float Offset);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | Attribute Datas")
		bool AddAttributeDataOffset(const int32 Index, const float Value, const float Multiply);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | Attribute Datas")
		bool GetAttributeData(const int32 Index, int32& ID, float& Value, float& Multiply);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | Attribute Datas")
		bool IsAttributeIDExist(const int32 ID);

	// Spell Call Tree ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | SpellCallTree")
		void SetSpellCallTree(const TArray<FLFLSpellSpawnData>& Tree, const TArray<int32>& BranchIndex);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | SpellCallTree")
		int32 RunSpellCallTree(const int32 BranchIndex, AActor* SpawnTransformActor, APawn* Instigator, const TArray<AActor*>& TargetActor);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | SpellCallTree")
		TArray<FLFLSpellSpawnData>& GetSpellCallTree();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | SpellCallTree")
		bool IsSpellCallTreeReady();

	// Target Actor ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | TargetActor")
		TArray<AActor*>& GetTargetActor();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | TargetActor")
		bool IsTargetActorContain(AActor* FindActor);

	// Ability Arugments ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | GlobalArguments")
		void SetAbilityArguments(const TArray<FLFLAbilityArgumentData>& ArguArray, const bool CombineArgu);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | GlobalArguments")
		void AddAbilityArgument(const FLFLAbilityArgumentData& Data);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | GlobalArguments")
		bool RemoveAbilityArgument(const int32 RemoveID);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | AbilityArguments")
		TArray<FLFLAbilityArgumentData>& GetAbilityArguments();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | AbilityArguments")
		bool GetSingleAbilityArgument(const int32 ArugID, FLFLAbilityArgumentData& Argument);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | GlobalArguments")
		bool IsContainAbilityArgument(const int32 ArguID);

	// Cool Down Timer ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | CoolDownTimer")
		void SetCoolDownTimer(const float TimerOffset);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | CoolDownTimer")
		void SetCoolDownTimerOnPercentage(const float PercentageToDefault);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | CoolDownTimer")
		void AddCoolDownTimerOffset(const float TimerOffset);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityHandlerComponent | CoolDownTimer")
		void ResetCoolDownTimer();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | CoolDownTimer")
		float GetCoolDownTimer();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | CoolDownTimer")
		bool IsCoolingDown();

	// Ability Main Function ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, Category = "LFLAbilityHandlerComponent | Event")
		void TryRunAbility		();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, Category = "LFLAbilityHandlerComponent | Event")
		void TryCancelAbility	(const int32& CancelCode);

	//Return 0 to pass
	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		int32 CanRunAbility			(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager);

	//Return 0 to pass
	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		int32 CanCancelAbility		(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& CancelCode);

	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		void OnAbilityFailToRun		(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& FailCode);

	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		void OnCommitAbility		(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager);

	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		void OnRunAbility			(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager);

	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		void OnCancelAbility		(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& CancelCode);

	//Call Manually on RunAbility	
	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		void OmEndAbility			(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager);

	// Check ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | Check")
		bool IsAbilityRunning();
};
