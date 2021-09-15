// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Ability/LFLAbilityManagementComponent.h"
#include "LFLEffectComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class LOHFUNCTIONLIBRARY_API ULFLEffectComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULFLEffectComponent();

	UPROPERTY(EditAnywhere, replicated, Category = "LFLAbilityManagementComponent | Variable", SaveGame)
		TArray<FLFLAbilityAttributeData> AttributeDatas;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"), Category = "LFLAbilityManagementComponent | Variable", BlueprintGetter = GetEffectArguments, SaveGame)
		TArray<FLFLAbilityArgumentData> EffectArguments;

	UPROPERTY(BlueprintReadOnly, replicated, meta = (ExposeOnSpawn = "true"), Category = "LFLAbilityManagementComponent | Variable")
		ULFLAbilityManagementComponent* Manager;

protected:
	// Called when the Effect Start
	virtual void BeginPlay() override;

	// Called when the Effect End or Cancel
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Attribute Datas //////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Attribute Datas")
		bool SetAttributeData(const int32 Index, const float Value, const float Multiply);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Attribute Datas")
		bool AddAttributeDataValueOffset(const int32 Index, const float Offset);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Attribute Datas")
		bool AddAttributeDataMultiplyOffset(const int32 Index, const float Offset);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Attribute Datas")
		bool AddAttributeDataOffset(const int32 Index, const float Value, const float Multiply);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Attribute Datas")
		bool GetAttributeData(const int32 Index, int32& ID, float& Value, float& Multiply);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | Attribute Datas")
		bool IsAttributeIDExist(const int32 ID);

	// Effect Arugments ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | GlobalArguments")
		void SetEffectArguments(const TArray<FLFLAbilityArgumentData>& ArguArray, const bool CombineArgu);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | GlobalArguments")
		void AddEffectArgument(const FLFLAbilityArgumentData& Data);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "LFLAbilityManagementComponent | GlobalArguments")
		bool RemoveEffectArgument(const int32 RemoveID);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | AbilityArguments")
		TArray<FLFLAbilityArgumentData>& GetEffectArguments();

	UFUNCTION(BlueprintPure, Category = "LFLAbilityHandlerComponent | AbilityArguments")
		bool GetSingleEffectArgument(const int32 ArugID, FLFLAbilityArgumentData& Argument);

	UFUNCTION(BlueprintPure, Category = "LFLAbilityManagementComponent | GlobalArguments")
		bool IsContainEffectArgument(const int32 ArguID);

	// Effect Main Function ///////////////////////////////////////////////////////////

	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		int32 CanRunEffect	(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager);

	UFUNCTION(BlueprintNativeEvent, Category = "LFLAbilityHandlerComponent | Event")
		int32 CanStopEffect	(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& StopCode);
};
