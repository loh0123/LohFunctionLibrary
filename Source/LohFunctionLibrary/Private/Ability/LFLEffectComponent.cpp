// Copyright 2021 Loh0123


#include "Ability/LFLEffectComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
ULFLEffectComponent::ULFLEffectComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	SetIsReplicatedByDefault(true);
	// ...
}

void ULFLEffectComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULFLEffectComponent, AttributeDatas);
	DOREPLIFETIME(ULFLEffectComponent, EffectArguments);
	DOREPLIFETIME(ULFLEffectComponent, Manager);
}

// Called when the game starts
void ULFLEffectComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void ULFLEffectComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	Manager->RunningEffect.Remove(this);

	return;
}


// Called every frame
void ULFLEffectComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Attribute Datas //////////////////////////////////////////////////////////////////////////////////////////

bool ULFLEffectComponent::SetAttributeData(const int32 Index, const float Value, const float Multiply)
{
	if (AttributeDatas.IsValidIndex(Index))
	{
		AttributeDatas[Index].AttributeOffset = Value;
		AttributeDatas[Index].AttributeMultiply = Multiply;

		return true;
	}

	return false;
}

bool ULFLEffectComponent::AddAttributeDataValueOffset(const int32 Index, const float Offset)
{
	if (AttributeDatas.IsValidIndex(Index))
	{
		AttributeDatas[Index].AttributeOffset += Offset;

		return true;
	}

	return false;
}

bool ULFLEffectComponent::AddAttributeDataMultiplyOffset(const int32 Index, const float Offset)
{
	if (AttributeDatas.IsValidIndex(Index))
	{
		AttributeDatas[Index].AttributeMultiply += Offset;

		return true;
	}

	return false;
}

bool ULFLEffectComponent::AddAttributeDataOffset(const int32 Index, const float Value, const float Multiply)
{
	if (AttributeDatas.IsValidIndex(Index))
	{
		AttributeDatas[Index].AttributeOffset += Value;
		AttributeDatas[Index].AttributeMultiply += Multiply;

		return true;
	}

	return false;
}

bool ULFLEffectComponent::GetAttributeData(const int32 Index, int32& ID, float& Value, float& Multiply)
{
	if (AttributeDatas.IsValidIndex(Index))
	{
		ID = AttributeDatas[Index].AttributeID;
		Value = AttributeDatas[Index].AttributeOffset;
		Multiply = AttributeDatas[Index].AttributeMultiply;

		return true;
	}

	return false;
}

bool ULFLEffectComponent::IsAttributeIDExist(const int32 ID)
{
	return AttributeDatas.ContainsByPredicate([ID](const FLFLAbilityAttributeData& Value) { return Value.AttributeID == ID; });;
}

// Effect Arugments //////////////////////////////////////////////////////////////////////////////////////////

void ULFLEffectComponent::SetEffectArguments(const TArray<FLFLAbilityArgumentData>& ArguArray, const bool CombineArgu)
{
	if (CombineArgu)
	{
		ULFLAbilityManagementComponent::CombineArgumentDatas(EffectArguments, ArguArray);
	}
	else
	{
		EffectArguments = ArguArray;
	}

	return;
}

void ULFLEffectComponent::AddEffectArgument(const FLFLAbilityArgumentData& Data)
{
	FLFLAbilityArgumentData LoopArgu;

	int32 LoopIndex = ULFLAbilityManagementComponent::FindArgumentData(EffectArguments, Data.ArgumentID, LoopArgu);

	if (LoopIndex != -1)
	{
		if (Data.ArgumentLevel > LoopArgu.ArgumentLevel)
		{
			EffectArguments[LoopIndex].ArgumentLevel = Data.ArgumentLevel;
			EffectArguments[LoopIndex].ArgumentParameter = Data.ArgumentParameter;
		}
	}

	return;
}

bool ULFLEffectComponent::RemoveEffectArgument(const int32 ArguID)
{
	int32 Index = EffectArguments.IndexOfByPredicate([ArguID](const FLFLAbilityArgumentData& Value) { return Value.ArgumentID == ArguID; });

	if (Index != -1)
	{
		EffectArguments.RemoveAt(Index);

		return true;
	}

	return false;
}

TArray<FLFLAbilityArgumentData>& ULFLEffectComponent::GetEffectArguments()
{
	return EffectArguments;
}

bool ULFLEffectComponent::GetSingleEffectArgument(const int32 ArguID, FLFLAbilityArgumentData& Argument)
{
	int32 LoopIndex = ULFLAbilityManagementComponent::FindArgumentData(EffectArguments, ArguID, Argument);

	return LoopIndex != -1;
}

bool ULFLEffectComponent::IsContainEffectArgument(const int32 ArguID)
{
	return ULFLAbilityManagementComponent::IsContainArgumentData(EffectArguments, ArguID);
}

// Effect Main Function ///////////////////////////////////////////////////////////

int32 ULFLEffectComponent::CanRunEffect_Implementation(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager)
{
	return 0;
}

int32 ULFLEffectComponent::CanStopEffect_Implementation(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& StopCode)
{
	return 0;
}
