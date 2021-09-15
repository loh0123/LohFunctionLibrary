// Copyright 2021 Loh0123


#include "Ability/LFLSpellActor.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ALFLSpellActor::ALFLSpellActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	bAlwaysRelevant = true;

	SetReplicatingMovement(true);
}

void ALFLSpellActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALFLSpellActor, SpellArguments);
	DOREPLIFETIME(ALFLSpellActor, Manager);
	DOREPLIFETIME(ALFLSpellActor, OwningAbility);
	DOREPLIFETIME(ALFLSpellActor, TargetActors);
	DOREPLIFETIME(ALFLSpellActor, PreviousCastSpell);
}

// Called when the Spell Start
void ALFLSpellActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called when the Spell End or Cancel
void ALFLSpellActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (Manager)
	{
		Manager->RunningSpell.Remove(this);
	}

	return;
}

// Called every frame
void ALFLSpellActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ALFLSpellActor::GetPreviousCastSpell(const int32 Step, ALFLSpellActor*& SpellActor)
{
	if (PreviousCastSpell)
	{
		for (int32 i = 0; i <= Step; i++)
		{
			if (SpellActor->PreviousCastSpell)
			{
				SpellActor = SpellActor->PreviousCastSpell;
			}
			else
			{
				SpellActor = nullptr;

				return false;
			}
		}

		return true;
	}

	return false;
}

// Spell Arugments //////////////////////////////////////////////////////////////////////////////////////////

void ALFLSpellActor::SetSpellArguments(const TArray<FLFLAbilityArgumentData>& ArguArray, const bool CombineArgu)
{
	if (CombineArgu)
	{
		ULFLAbilityManagementComponent::CombineArgumentDatas(SpellArguments, ArguArray);
	}
	else
	{
		SpellArguments = ArguArray;
	}

	return;
}

void ALFLSpellActor::AddSpellArgument(const FLFLAbilityArgumentData& Data)
{
	FLFLAbilityArgumentData LoopArgu;

	int32 LoopIndex = ULFLAbilityManagementComponent::FindArgumentData(SpellArguments, Data.ArgumentID, LoopArgu);

	if (LoopIndex != -1)
	{
		if (Data.ArgumentLevel > LoopArgu.ArgumentLevel)
		{
			SpellArguments[LoopIndex].ArgumentLevel = Data.ArgumentLevel;
			SpellArguments[LoopIndex].ArgumentParameter = Data.ArgumentParameter;
		}
	}

	return;
}

bool ALFLSpellActor::RemoveSpellArgument(const int32 ArguID)
{
	int32 Index = SpellArguments.IndexOfByPredicate([ArguID](const FLFLAbilityArgumentData& Value) { return Value.ArgumentID == ArguID; });

	if (Index != -1)
	{
		SpellArguments.RemoveAt(Index);

		return true;
	}

	return false;
}

TArray<FLFLAbilityArgumentData>& ALFLSpellActor::GetSpellArguments()
{
	return SpellArguments;
}

bool ALFLSpellActor::GetSingleSpellArgument(const int32 ArguID, FLFLAbilityArgumentData& Argument)
{
	int32 LoopIndex = ULFLAbilityManagementComponent::FindArgumentData(SpellArguments, ArguID, Argument);

	return LoopIndex != -1;
}

bool ALFLSpellActor::IsContainSpellArgument(const int32 ArguID)
{
	return ULFLAbilityManagementComponent::IsContainArgumentData(SpellArguments, ArguID);
}

// Target Actor ///////////////////////////////////////////////////////////

TArray<AActor*>& ALFLSpellActor::GetTargetActor()
{
	return TargetActors;
}

bool ALFLSpellActor::IsTargetActorContain(AActor* FindActor)
{
	return TargetActors.Contains(FindActor);
}

// Spell Main Function ///////////////////////////////////////////////////////////

int32 ALFLSpellActor::CanRunSpell_Implementation(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager)
{
	return 0;
}

void ALFLSpellActor::CommitSpell_Implementation(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager)
{
}

int32 ALFLSpellActor::CanStopSpell_Implementation(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& StopCode)
{
	return 0;
}
