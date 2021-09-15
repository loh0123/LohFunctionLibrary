// Copyright 2021 Loh0123


#include "Ability/LFLAbilityManagementComponent.h"
#include "Ability/LFLAbilityHandlerComponent.h"
#include "Ability/LFLEffectComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Ability/LFLSpellActor.h"
#include "Net/UnrealNetwork.h"

// UObject Serialization
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"

// Sets default values for this component's properties
ULFLAbilityManagementComponent::ULFLAbilityManagementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
	// ...
}

void ULFLAbilityManagementComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULFLAbilityManagementComponent, GlobalArguments);
	DOREPLIFETIME(ULFLAbilityManagementComponent, TargetActors);
	DOREPLIFETIME(ULFLAbilityManagementComponent, RunningSpell);
	DOREPLIFETIME(ULFLAbilityManagementComponent, RunningEffect);
	DOREPLIFETIME(ULFLAbilityManagementComponent, OwnedAbility);
}


// Called when the game starts
void ULFLAbilityManagementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULFLAbilityManagementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Serialize Data //////////////////////////////////////////////////////////////////////////////////////////

bool ULFLAbilityManagementComponent::SerializeData(TArray<FLFLAbilityComponentData>& Data)
{
	if (RunningEffect.Num() == 0 && OwnedAbility.Num() == 0)
	{
		return false;
	}

	Data.Empty();

	TArray<uint8> SerializedData;

	FMemoryWriter Writer(SerializedData, true);
	FObjectAndNameAsStringProxyArchive Archive(Writer, true);
	Writer.SetIsSaving(true);

	for (ULFLEffectComponent*& Value : RunningEffect)
	{
		SerializedData.Empty();
		Value->Serialize(Archive);

		Data.Add(FLFLAbilityComponentData(Value->GetClass()->GetPathName(), SerializedData, -1));
	}

	for (int32 i = 0; i < OwnedAbility.Num(); i++)
	{
		if (OwnedAbility[i])
		{
			SerializedData.Empty();
			OwnedAbility[i]->Serialize(Archive);

			Data.Add(FLFLAbilityComponentData(OwnedAbility[i]->GetClass()->GetPathName(), SerializedData, i));
		}
	}

	return true;
}

bool ULFLAbilityManagementComponent::DeserializeData(const TArray<FLFLAbilityComponentData>& Data)
{
	if (Data.Num() == 0)
	{
		return false;
	}

	for (ULFLEffectComponent*& Value : RunningEffect)
	{
		Value->DestroyComponent();
	}

	for (ULFLAbilityHandlerComponent*& Value : OwnedAbility)
	{
		Value->DestroyComponent();
	}

	RunningEffect.Empty();
	OwnedAbility.Empty(MaxAbilityNum);

	for (const FLFLAbilityComponentData& Value : Data)
	{
		FMemoryReader ActorReader(Value.SerializedData, true);
		FObjectAndNameAsStringProxyArchive Archive(ActorReader, true);
		ActorReader.SetIsLoading(true);

		UActorComponent* SpawnClass = FindObject<UActorComponent>(ANY_PACKAGE, *Value.Class);

		if (SpawnClass)
		{
			FTransform ComTransform;

			UActorComponent* Component = GetOwner()->AddComponent(SpawnClass->GetFName(), false, ComTransform, SpawnClass, true);

			if (Cast<ULFLEffectComponent>(Component))
			{
				ULFLEffectComponent* CValue = Cast<ULFLEffectComponent>(Component);

				RunningEffect.Add(CValue);

				CValue->Serialize(Archive);

				GetOwner()->FinishAddComponent(Component, false, ComTransform);
			}
			else
			{
				ULFLAbilityHandlerComponent* CValue = Cast<ULFLAbilityHandlerComponent>(Component);

				if (MaxAbilityNum != 0)
				{
					if (OwnedAbility[Value.SlotIndex % MaxAbilityNum])
					{
						OwnedAbility[Value.SlotIndex % MaxAbilityNum]->DestroyComponent();
					}

					OwnedAbility[Value.SlotIndex % MaxAbilityNum] = CValue;

					GetOwner()->FinishAddComponent(Component, false, ComTransform);
				}
				else
				{
					CValue->DestroyComponent();
				}
			}
		}
	}

	return true;
}

void ULFLAbilityManagementComponent::Serialize(FArchive& Ar)
{
	if (Ar.IsSaving())
	{
		SerializeData(SavedSerializeData);

		Super::Serialize(Ar);
	}

	if (Ar.IsLoading())
	{
		Super::Serialize(Ar);

		DeserializeData(SavedSerializeData);
	}

	return;
}

// Argument Datas //////////////////////////////////////////////////////////////////////////////////////////

int32 ULFLAbilityManagementComponent::FindArgumentData(const TArray<FLFLAbilityArgumentData>& ArguArray, int32 ArguID, FLFLAbilityArgumentData& Argu)
{
	int32 Index = ArguArray.IndexOfByPredicate([ArguID](const FLFLAbilityArgumentData& Value) { return Value.ArgumentID == ArguID; });

	if (Index != -1)
	{
		Argu = ArguArray[Index];
	}

	return Index;
}

void ULFLAbilityManagementComponent::CombineArgumentDatas(TArray<FLFLAbilityArgumentData>& ArguArray, const TArray<FLFLAbilityArgumentData>& CombineArray)
{
	FLFLAbilityArgumentData LoopArgu;
	int32 LoopIndex;

	for (const FLFLAbilityArgumentData& Value : CombineArray)
	{
		LoopIndex = FindArgumentData(ArguArray, Value.ArgumentID, LoopArgu);

		if (LoopIndex != -1)
		{
			if (Value.ArgumentLevel > LoopArgu.ArgumentLevel)
			{
				ArguArray[LoopIndex].ArgumentLevel = Value.ArgumentLevel;
				ArguArray[LoopIndex].ArgumentParameter = Value.ArgumentParameter;
			}
		}
	}

	return;
}

bool ULFLAbilityManagementComponent::ReplaceSingleArgumentData(TArray<FLFLAbilityArgumentData>& ArguArray, FLFLAbilityArgumentData& ArguData)
{
	FLFLAbilityArgumentData LoopArgu;

	int32 LoopIndex = FindArgumentData(ArguArray, ArguData.ArgumentID, LoopArgu);

	if (LoopIndex != -1)
	{
		if (ArguData.ArgumentLevel > LoopArgu.ArgumentLevel)
		{
			ArguArray[LoopIndex].ArgumentLevel = ArguData.ArgumentLevel;
			ArguArray[LoopIndex].ArgumentParameter = ArguData.ArgumentParameter;

			return true;
		}
	}

	return false;
}

bool ULFLAbilityManagementComponent::IsContainArgumentData(const TArray<FLFLAbilityArgumentData>& ArguArray, const int32 ArguID)
{
	return ArguArray.ContainsByPredicate([ArguID](const FLFLAbilityArgumentData& Value) { return Value.ArgumentID == ArguID; });
}

// Attribute Datas //////////////////////////////////////////////////////////////////////////////////////////

void ULFLAbilityManagementComponent::CollectAttributeDatas(const int32 MaxCollectIndex, const bool Ability, const bool Effect, TArray<float>& Offset, TArray<float>& Multiply)
{
	Offset.AddUninitialized(MaxCollectIndex);
	Multiply.AddUninitialized(MaxCollectIndex);

	if (Ability)
	{
		for (ULFLAbilityHandlerComponent*& LoopAbility : OwnedAbility)
		{
			for (FLFLAbilityAttributeData& AData : LoopAbility->AttributeDatas)
			{
				if (AData.AttributeID < MaxCollectIndex)
				{
					Offset[AData.AttributeID] += AData.AttributeOffset;
					Multiply[AData.AttributeID] += AData.AttributeMultiply;
				}
			}
		}
	}

	if (Effect)
	{
		for (ULFLEffectComponent*& LoopEffect : RunningEffect)
		{
			for (FLFLAbilityAttributeData& AData : LoopEffect->AttributeDatas)
			{
				if (AData.AttributeID < MaxCollectIndex)
				{
					Offset[AData.AttributeID] += AData.AttributeOffset;
					Multiply[AData.AttributeID] += AData.AttributeMultiply;
				}
			}
		}
	}

	return;
}

// Target Actors //////////////////////////////////////////////////////////////////////////////////////////

void ULFLAbilityManagementComponent::SetTargetActors(const TArray<AActor*> Data)
{
	TargetActors = Data;

	return;
}

void ULFLAbilityManagementComponent::AddTargetActors(AActor* AddData)
{
	TargetActors.Add(AddData);

	return;
}

bool ULFLAbilityManagementComponent::RemoveTargetActors(AActor* RemoveData)
{
	return TargetActors.Remove(RemoveData) != -1;
}

TArray<AActor*>& ULFLAbilityManagementComponent::GetTargetActors()
{
	return TargetActors;
}

// Global Arugments //////////////////////////////////////////////////////////////////////////////////////////

void ULFLAbilityManagementComponent::SetGlobalArguments(const TArray<FLFLAbilityArgumentData> ArguArray, const bool CombineArgu)
{
	if (CombineArgu)
	{
		CombineArgumentDatas(GlobalArguments, ArguArray);
	}
	else
	{
		GlobalArguments = ArguArray;
	}

	return;
}

void ULFLAbilityManagementComponent::AddGlobalArgument(const FLFLAbilityArgumentData Data)
{
	FLFLAbilityArgumentData LoopArgu;

	int32 LoopIndex = FindArgumentData(GlobalArguments, Data.ArgumentID, LoopArgu);

	if (LoopIndex != -1)
	{
		if (Data.ArgumentLevel > LoopArgu.ArgumentLevel)
		{
			GlobalArguments[LoopIndex].ArgumentLevel = Data.ArgumentLevel;
			GlobalArguments[LoopIndex].ArgumentParameter = Data.ArgumentParameter;
		}
	}

	return;
}

bool ULFLAbilityManagementComponent::RemoveGlobalArgument(const int32 ArguID)
{
	int32 Index = GlobalArguments.IndexOfByPredicate([ArguID](const FLFLAbilityArgumentData& Value) { return Value.ArgumentID == ArguID; });

	if (Index != -1)
	{
		GlobalArguments.RemoveAt(Index);

		return true;
	}

	return false;
}

TArray<FLFLAbilityArgumentData>& ULFLAbilityManagementComponent::GetGlobalArguments()
{
	return GlobalArguments;
}

bool ULFLAbilityManagementComponent::GetSingleGlobalArgument(const int32 ArguID, FLFLAbilityArgumentData Argument)
{
	int32 LoopIndex = FindArgumentData(GlobalArguments, ArguID, Argument);

	return LoopIndex != -1;
}

bool ULFLAbilityManagementComponent::IsContainGlobalArgument(const int32 ArguID)
{
	return IsContainArgumentData(GlobalArguments, ArguID);
}

// Owned Ability //////////////////////////////////////////////////////////////////////////////////////////

ULFLAbilityHandlerComponent* ULFLAbilityManagementComponent::AssignAbility(TSubclassOf<ULFLAbilityHandlerComponent> AbilityClass, const int32 AbilitySlotIndex, const TArray<FLFLAbilityArgumentData>& AbilityArguments)
{
	if (OwnedAbility.Num() == 0 && MaxAbilityNum != 0)
	{
		OwnedAbility.SetNum(MaxAbilityNum);
	}

	ULFLAbilityHandlerComponent* AHCom = nullptr;

	if (OwnedAbility.IsValidIndex(AbilitySlotIndex) && AbilityClass)
	{
		if (OwnedAbility[AbilitySlotIndex])
		{
			OwnedAbility[AbilitySlotIndex]->DestroyComponent();
		}

		FTransform ComTransform;

		AHCom = Cast<ULFLAbilityHandlerComponent>(GetOwner()->AddComponentByClass(AbilityClass, false, ComTransform, true));
	
		AHCom->AbilityArguments = AbilityArguments;
		AHCom->SlotIndex = AbilitySlotIndex;
		AHCom->Manager = this;

		GetOwner()->FinishAddComponent(AHCom, false, ComTransform);

		OwnedAbility[AbilitySlotIndex] = AHCom;
	}

	return AHCom;
}

bool ULFLAbilityManagementComponent::RemoveAbility(const int32 AbilitySlotIndex)
{
	if (OwnedAbility.IsValidIndex(AbilitySlotIndex))
	{
		if (OwnedAbility[AbilitySlotIndex])
		{
			OwnedAbility[AbilitySlotIndex]->DestroyComponent();
			OwnedAbility[AbilitySlotIndex] = nullptr;

			return true;
		}
	}

	return false;
}

bool ULFLAbilityManagementComponent::RunAbility(const int32 AbilitySlotIndex, const bool ClearTargetActor)
{
	if (OwnedAbility.IsValidIndex(AbilitySlotIndex) && OwnedAbility[AbilitySlotIndex])
	{
		OwnedAbility[AbilitySlotIndex]->TargetActors = TargetActors;

		if (ClearTargetActor)
		{
			TargetActors.Empty();
		}

		OwnedAbility[AbilitySlotIndex]->TryRunAbility();

		return true;
	}

	return false;
}

bool ULFLAbilityManagementComponent::CancelAbility(const int32 AbilitySlotIndex, const int32 CancelCode)
{
	if (OwnedAbility.IsValidIndex(AbilitySlotIndex) && OwnedAbility[AbilitySlotIndex])
	{
		OwnedAbility[AbilitySlotIndex]->TryCancelAbility(CancelCode);

		return true;
	}

	return false;
}

void ULFLAbilityManagementComponent::CancelAllAbility(const int32 CancelCode)
{
	for (ULFLAbilityHandlerComponent*& Value : OwnedAbility)
	{
		Value->TryCancelAbility(CancelCode);
	}

	return;
}

bool ULFLAbilityManagementComponent::ResetAbilityCoolDown(const int32 AbilitySlotIndex)
{
	if (OwnedAbility.IsValidIndex(AbilitySlotIndex) && OwnedAbility[AbilitySlotIndex])
	{
		OwnedAbility[AbilitySlotIndex]->ResetCoolDownTimer();

		return true;
	}

	return false;
}

bool ULFLAbilityManagementComponent::SetAbilitySpellCallTree(const int32 AbilitySlotIndex, const TArray<FLFLSpellSpawnData>& TreeData, const TArray<int32>& TreeIndex)
{
	if (OwnedAbility.IsValidIndex(AbilitySlotIndex) && OwnedAbility[AbilitySlotIndex])
	{
		OwnedAbility[AbilitySlotIndex]->SetSpellCallTree(TreeData, TreeIndex);

		return true;
	}

	return false;
}

bool ULFLAbilityManagementComponent::IsOwnedAbility(TSubclassOf<ULFLAbilityHandlerComponent> AbilityClass)
{
	return OwnedAbility.ContainsByPredicate([AbilityClass](ULFLAbilityHandlerComponent*& Value) { return Value->GetClass() == AbilityClass; });
}

bool ULFLAbilityManagementComponent::IsAbilityRunning(const int32 AbilitySlotIndex)
{
	if (OwnedAbility.IsValidIndex(AbilitySlotIndex) && OwnedAbility[AbilitySlotIndex])
	{
		return OwnedAbility[AbilitySlotIndex]->IsAbilityRunning();
	}

	return false;
}

ULFLAbilityHandlerComponent* ULFLAbilityManagementComponent::GetAbility(const int32 AbilitySlotIndex)
{
	if (OwnedAbility.IsValidIndex(AbilitySlotIndex))
	{
		return OwnedAbility[AbilitySlotIndex];
	}

	return nullptr;
}

// Running Spell //////////////////////////////////////////////////////////////////////////////////////////

void ULFLAbilityManagementComponent::ClearPreviousSpell()
{
	PreviousCastSpell = nullptr;

	return;
}

FTransform ULFLAbilityManagementComponent::GetSpellSpawnTransform_Implementation(AActor* SpawnTransformActor, const TArray<FLFLAbilityArgumentData>& SpellArguments, const TArray<AActor*>& SpellTargetActors, ALFLSpellActor* PreviousSpell, ULFLAbilityHandlerComponent* OwningAbility, float& LifeTime)
{
	LifeTime = 5.0f;

	return SpawnTransformActor->GetTransform();
}

int32 ULFLAbilityManagementComponent::RunSpell(TSubclassOf<ALFLSpellActor> SpellClass, AActor* SpawnTransformActor, ULFLAbilityHandlerComponent* OwningAbility, APawn* Instigator, const TArray<FLFLAbilityArgumentData> SpellArguments, const TArray<AActor*> SpellTargetActors)
{
	int32 ReturnValue = -1;

	if (SpellClass && SpawnTransformActor)
	{
		ALFLSpellActor* SpawnedSpell = GetWorld()->SpawnActorDeferred<ALFLSpellActor>(SpellClass, FTransform(FVector(0, 0, 0)) , GetOwner(), Instigator, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);;
	
		SpawnedSpell->SpellArguments = SpellArguments;
		SpawnedSpell->Manager = this;
		SpawnedSpell->OwningAbility = OwningAbility;
		SpawnedSpell->TargetActors = TargetActors;
		SpawnedSpell->PreviousCastSpell = PreviousCastSpell;

		ReturnValue = SpawnedSpell->CanRunSpell(GetOwner(), this);

		if (ReturnValue == 0)
		{
			SpawnedSpell->CommitSpell(GetOwner(), this);
			RunningSpell.Add(SpawnedSpell);
			UGameplayStatics::FinishSpawningActor(SpawnedSpell, GetSpellSpawnTransform(SpawnTransformActor, SpellArguments, TargetActors, PreviousCastSpell, OwningAbility, SpawnedSpell->InitialLifeSpan));
		}
		else
		{
			SpawnedSpell->Destroy();
			SpawnedSpell = nullptr;
		}

		PreviousCastSpell = SpawnedSpell;
	}

	return ReturnValue;
}

bool ULFLAbilityManagementComponent::StopSpell(ALFLSpellActor* SpellActor, const int32 StopCode)
{
	if (SpellActor && RunningSpell.Contains(SpellActor))
	{
		if (SpellActor->CanStopSpell(GetOwner(), this, StopCode))
		{
			SpellActor->Destroy();

			return true;
		}
	}

	return false;
}

void ULFLAbilityManagementComponent::StopAllSpell(const int32 StopCode)
{
	for (ALFLSpellActor*& Value : RunningSpell)
	{
		if (Value->CanStopSpell(GetOwner(), this, StopCode))
		{
			Value->Destroy();
		}
	}

	return;
}

TArray<ALFLSpellActor*>& ULFLAbilityManagementComponent::GetSpellRunning()
{
	return RunningSpell;
}

bool ULFLAbilityManagementComponent::IsSpellRunning(TSubclassOf<ALFLSpellActor> SpellClass)
{
	return RunningSpell.ContainsByPredicate([SpellClass] (ALFLSpellActor*& Value) {return Value->GetClass() == SpellClass; });
}

// Running Effect //////////////////////////////////////////////////////////////////////////////////////////

int32 ULFLAbilityManagementComponent::RunEffect(TSubclassOf<ULFLEffectComponent> EffectClass, const TArray<FLFLAbilityArgumentData> EffectArguments)
{
	int32 ReturnValue = -1;

	if (EffectClass)
	{
		FTransform ComTransform;

		ULFLEffectComponent* AHCom = Cast<ULFLEffectComponent>(GetOwner()->AddComponentByClass(EffectClass, false, ComTransform, true));

		AHCom->EffectArguments = EffectArguments;
		AHCom->Manager = this;

		ReturnValue = AHCom->CanRunEffect(GetOwner(), this);

		if (ReturnValue == 0)
		{
			RunningEffect.Add(AHCom);
			GetOwner()->FinishAddComponent(AHCom, false, ComTransform);
		}
		else
		{
			AHCom->DestroyComponent();
		}
	}

	return ReturnValue;
}

bool ULFLAbilityManagementComponent::StopEffect(ULFLEffectComponent* EffectComponent, const int32 StopCode)
{
	if (EffectComponent && RunningEffect.Contains(EffectComponent))
	{
		if (EffectComponent->CanStopEffect(GetOwner(), this, StopCode))
		{
			EffectComponent->DestroyComponent();

			return true;
		}
	}

	return false;
}

void ULFLAbilityManagementComponent::StopAllEffect(const int32 StopCode)
{
	for (ULFLEffectComponent*& Value : RunningEffect)
	{
		if (Value->CanStopEffect(GetOwner(), this, StopCode))
		{
			Value->DestroyComponent();
		}
	}

	return;
}

TArray<ULFLEffectComponent*>& ULFLAbilityManagementComponent::GetEffectRunning()
{
	return RunningEffect;
}

bool ULFLAbilityManagementComponent::IsEffectRunning(TSubclassOf<ULFLEffectComponent> EffectClass)
{
	return RunningEffect.ContainsByPredicate([EffectClass](ULFLEffectComponent*& Value) {return Value->GetClass() == EffectClass; });
}

