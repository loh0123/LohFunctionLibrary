// Copyright 2021 Loh0123


#include "Ability/LFLAbilityHandlerComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
ULFLAbilityHandlerComponent::ULFLAbilityHandlerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
	// ...
}

void ULFLAbilityHandlerComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULFLAbilityHandlerComponent, AttributeDatas);
	DOREPLIFETIME(ULFLAbilityHandlerComponent, SlotIndex);
	DOREPLIFETIME(ULFLAbilityHandlerComponent, IsRunning);
	DOREPLIFETIME(ULFLAbilityHandlerComponent, CoolDownTimer);
	DOREPLIFETIME(ULFLAbilityHandlerComponent, SpellCallTree);
	DOREPLIFETIME(ULFLAbilityHandlerComponent, TreeBranchIndex);
	DOREPLIFETIME(ULFLAbilityHandlerComponent, AbilityArguments);
	DOREPLIFETIME(ULFLAbilityHandlerComponent, Manager);
	DOREPLIFETIME(ULFLAbilityHandlerComponent, TargetActors);
}

// Called when the game starts
void ULFLAbilityHandlerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void ULFLAbilityHandlerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	Manager->OwnedAbility[SlotIndex] = nullptr;

	return;
}


// Called every frame
void ULFLAbilityHandlerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Attribute Datas //////////////////////////////////////////////////////////////////////////////////////////

bool ULFLAbilityHandlerComponent::SetAttributeData(const int32 Index, const float Value, const float Multiply)
{
	if (AttributeDatas.IsValidIndex(Index))
	{
		AttributeDatas[Index].AttributeOffset = Value;
		AttributeDatas[Index].AttributeMultiply = Multiply;

		return true;
	}

	return false;
}

bool ULFLAbilityHandlerComponent::AddAttributeDataValueOffset(const int32 Index, const float Offset)
{
	if (AttributeDatas.IsValidIndex(Index))
	{
		AttributeDatas[Index].AttributeOffset += Offset;

		return true;
	}

	return false;
}

bool ULFLAbilityHandlerComponent::AddAttributeDataMultiplyOffset(const int32 Index, const float Offset)
{
	if (AttributeDatas.IsValidIndex(Index))
	{
		AttributeDatas[Index].AttributeMultiply += Offset;

		return true;
	}

	return false;
}

bool ULFLAbilityHandlerComponent::AddAttributeDataOffset(const int32 Index, const float Value, const float Multiply)
{
	if (AttributeDatas.IsValidIndex(Index))
	{
		AttributeDatas[Index].AttributeOffset += Value;
		AttributeDatas[Index].AttributeMultiply += Multiply;

		return true;
	}

	return false;
}

bool ULFLAbilityHandlerComponent::GetAttributeData(const int32 Index, int32& ID, float& Value, float& Multiply)
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

bool ULFLAbilityHandlerComponent::IsAttributeIDExist(const int32 ID)
{
	return AttributeDatas.ContainsByPredicate([ID](const FLFLAbilityAttributeData& Value) { return Value.AttributeID == ID; });;
}

// Spell Call Tree ///////////////////////////////////////////////////////////

void ULFLAbilityHandlerComponent::SetSpellCallTree(const TArray<FLFLSpellSpawnData>& Tree, const TArray<int32>& BranchIndex)
{
	for (const int32& Value : BranchIndex)
	{
		if (!Tree.IsValidIndex(Value) && !Tree.IsValidIndex(Value - 1))
		{
			return;
		}
	}

	SpellCallTree = Tree;
	TreeBranchIndex = BranchIndex;

	return;
}

int32 ULFLAbilityHandlerComponent::RunSpellCallTree(const int32 BranchIndex, AActor* SpawnTransformActor, APawn* Instigator, const TArray<AActor*>& TargetActor)
{
	if (SpawnTransformActor && TreeBranchIndex.IsValidIndex(BranchIndex) && SpellCallTree.Num() >= TreeBranchIndex[BranchIndex])
	{
		Manager->ClearPreviousSpell();

		for (int32 Index = TreeBranchIndex.IsValidIndex(BranchIndex - 1) ? TreeBranchIndex[BranchIndex - 1] : 0; Index < TreeBranchIndex[BranchIndex]; Index++)
		{
			int32 ErrorCode = Manager->RunSpell(SpellCallTree[Index].SpellClass, SpawnTransformActor, this, Instigator, SpellCallTree[Index].SpellArguments, TargetActor);
		
			if (ErrorCode != 0 && ErrorCode != -1)
			{
				return ErrorCode;
			}
		}

		return 0;
	}

	return -1;
}

TArray<FLFLSpellSpawnData>& ULFLAbilityHandlerComponent::GetSpellCallTree()
{
	return SpellCallTree;
}

bool ULFLAbilityHandlerComponent::IsSpellCallTreeReady()
{
	return TreeBranchIndex.Num() >= 2;
}

// Target Actor ///////////////////////////////////////////////////////////

TArray<AActor*>& ULFLAbilityHandlerComponent::GetTargetActor()
{
	return TargetActors;
}

bool ULFLAbilityHandlerComponent::IsTargetActorContain(AActor* FindActor)
{
	return TargetActors.Contains(FindActor);
}

// Ability Arugments //////////////////////////////////////////////////////////////////////////////////////////

void ULFLAbilityHandlerComponent::SetAbilityArguments(const TArray<FLFLAbilityArgumentData>& ArguArray, const bool CombineArgu)
{
	if (CombineArgu)
	{
		ULFLAbilityManagementComponent::CombineArgumentDatas(AbilityArguments, ArguArray);
	}
	else
	{
		AbilityArguments = ArguArray;
	}

	return;
}

void ULFLAbilityHandlerComponent::AddAbilityArgument(const FLFLAbilityArgumentData& Data)
{
	FLFLAbilityArgumentData LoopArgu;

	int32 LoopIndex = ULFLAbilityManagementComponent::FindArgumentData(AbilityArguments, Data.ArgumentID, LoopArgu);

	if (LoopIndex != -1)
	{
		if (Data.ArgumentLevel > LoopArgu.ArgumentLevel)
		{
			AbilityArguments[LoopIndex].ArgumentLevel = Data.ArgumentLevel;
			AbilityArguments[LoopIndex].ArgumentParameter = Data.ArgumentParameter;
		}
	}

	return;
}

bool ULFLAbilityHandlerComponent::RemoveAbilityArgument(const int32 ArguID)
{
	int32 Index = AbilityArguments.IndexOfByPredicate([ArguID](const FLFLAbilityArgumentData& Value) { return Value.ArgumentID == ArguID; });

	if (Index != -1)
	{
		AbilityArguments.RemoveAt(Index);

		return true;
	}

	return false;
}

TArray<FLFLAbilityArgumentData>& ULFLAbilityHandlerComponent::GetAbilityArguments()
{
	return AbilityArguments;
}

bool ULFLAbilityHandlerComponent::GetSingleAbilityArgument(const int32 ArguID, FLFLAbilityArgumentData& Argument)
{
	int32 LoopIndex = ULFLAbilityManagementComponent::FindArgumentData(AbilityArguments, ArguID, Argument);

	return LoopIndex != -1;
}

bool ULFLAbilityHandlerComponent::IsContainAbilityArgument(const int32 ArguID)
{
	return ULFLAbilityManagementComponent::IsContainArgumentData(AbilityArguments, ArguID);
}

// Cool Down Timer ///////////////////////////////////////////////////////////

void ULFLAbilityHandlerComponent::SetCoolDownTimer(const float TimerOffset)
{
	CoolDownTimer = DefaultCoolDown + TimerOffset;

	return;
}

void ULFLAbilityHandlerComponent::SetCoolDownTimerOnPercentage(const float PercentageToDefault)
{
	CoolDownTimer = DefaultCoolDown * PercentageToDefault;

	return;
}

void ULFLAbilityHandlerComponent::AddCoolDownTimerOffset(const float TimerOffset)
{
	CoolDownTimer += TimerOffset;

	return;
}

void ULFLAbilityHandlerComponent::ResetCoolDownTimer()
{
	CoolDownTimer = 0.0f;

	return;
}

float ULFLAbilityHandlerComponent::GetCoolDownTimer()
{
	return CoolDownTimer;
}

bool ULFLAbilityHandlerComponent::IsCoolingDown()
{
	return CoolDownTimer != 0.0f;
}

// Ability Main Function ///////////////////////////////////////////////////////////

void ULFLAbilityHandlerComponent::TryRunAbility_Implementation()
{
	int32 FailCode = CanRunAbility(GetOwner(), Manager);

	if (FailCode != 0)
	{
		OnAbilityFailToRun(GetOwner(), Manager, FailCode);
	}
	else
	{
		OnCommitAbility(GetOwner(), Manager);
		OnRunAbility(GetOwner(), Manager);
	}

	return;
}

void ULFLAbilityHandlerComponent::TryCancelAbility_Implementation(const int32& CancelCode)
{
	int32 FailCode = CanCancelAbility(GetOwner(), Manager, CancelCode);

	if (FailCode != 0)
	{
		return;
	}
	else
	{
		OnCancelAbility(GetOwner(), Manager, CancelCode);
	}

	return;
}

int32 ULFLAbilityHandlerComponent::CanRunAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager)
{
	return 0;
}

int32 ULFLAbilityHandlerComponent::CanCancelAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& CancelCode)
{
	return 0;
}

void ULFLAbilityHandlerComponent::OnAbilityFailToRun_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& FailCode)
{
}

void ULFLAbilityHandlerComponent::OnCommitAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager)
{
}

void ULFLAbilityHandlerComponent::OnRunAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager)
{
}

void ULFLAbilityHandlerComponent::OnCancelAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, const int32& CancelCode)
{
}

void ULFLAbilityHandlerComponent::OmEndAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager)
{
	IsRunning = false;

	return;
}

// Check ///////////////////////////////////////////////////////////

bool ULFLAbilityHandlerComponent::IsAbilityRunning()
{
	return IsRunning;
}
