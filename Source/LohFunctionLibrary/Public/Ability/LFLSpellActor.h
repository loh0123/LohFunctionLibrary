// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ability/LFLAbilityManagementComponent.h"
#include "LFLSpellActor.generated.h"

class ULFLAbilityHandlerComponent;

UCLASS(Blueprintable)
class LOHFUNCTIONLIBRARY_API ALFLSpellActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALFLSpellActor();

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"), BlueprintGetter = GetSpellArguments)
		TArray<FLFLAbilityArgumentData> SpellArguments;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"))
		ULFLAbilityManagementComponent* Manager;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"))
		ULFLAbilityHandlerComponent* OwningAbility;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"), BlueprintGetter = GetTargetActor)
		TArray<AActor*> TargetActors;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"))
		ALFLSpellActor* PreviousCastSpell;

protected:
	// Called when the Spell Start
	virtual void BeginPlay() override;

	// Called when the Spell End or Cancel
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Other ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintCallable, Category = "LFLAbilityManagementComponent | Other")
		bool GetPreviousCastSpell(const int32 Step, ALFLSpellActor*& SpellActor);

	// Spell Arugments ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Spell Arugments")
		void SetSpellArguments(const TArray<FLFLAbilityArgumentData>& ArguArray, const bool CombineArgu);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Spell Arugments")
		void AddSpellArgument(const FLFLAbilityArgumentData& Data);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Spell Arugments")
		bool RemoveSpellArgument(const int32 RemoveID);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | Spell Arugments")
		TArray<FLFLAbilityArgumentData>& GetSpellArguments();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | Spell Arugments")
		bool GetSingleSpellArgument(const int32 ArugID, FLFLAbilityArgumentData& Argument);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | Spell Arugments")
		bool IsContainSpellArgument(const int32 ArguID);

	// Target Actor ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | TargetActor")
		TArray<AActor*>& GetTargetActor();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | TargetActor")
		bool IsTargetActorContain(AActor* FindActor);

	// Spell Main Function ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		int32 CanRunSpell	(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager);

	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		void CommitSpell	(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager);

	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		int32 CanStopSpell	(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& StopCode);
};
