// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Ability/LFLAbilityHandlerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLAbilityHandlerComponent() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLAbilityHandlerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityArgumentData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLSpellSpawnData();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execIsAbilityRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAbilityRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execOmEndAbility)
	{
		P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OmEndAbility_Implementation(Z_Param_AbilityOwner,Z_Param_AbilityManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execOnCancelAbility)
	{
		P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CancelCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelAbility_Implementation(Z_Param_AbilityOwner,Z_Param_AbilityManager,Z_Param_Out_CancelCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execOnRunAbility)
	{
		P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRunAbility_Implementation(Z_Param_AbilityOwner,Z_Param_AbilityManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execOnCommitAbility)
	{
		P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCommitAbility_Implementation(Z_Param_AbilityOwner,Z_Param_AbilityManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execOnAbilityFailToRun)
	{
		P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FailCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAbilityFailToRun_Implementation(Z_Param_AbilityOwner,Z_Param_AbilityManager,Z_Param_Out_FailCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execCanCancelAbility)
	{
		P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CancelCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanCancelAbility_Implementation(Z_Param_AbilityOwner,Z_Param_AbilityManager,Z_Param_Out_CancelCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execCanRunAbility)
	{
		P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanRunAbility_Implementation(Z_Param_AbilityOwner,Z_Param_AbilityManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execTryCancelAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CancelCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryCancelAbility_Implementation(Z_Param_CancelCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execTryRunAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryRunAbility_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execIsCoolingDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCoolingDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execGetCoolDownTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCoolDownTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execResetCoolDownTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCoolDownTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execAddCoolDownTimerOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimerOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCoolDownTimerOffset(Z_Param_TimerOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execSetCoolDownTimerOnPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PercentageToDefault);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCoolDownTimerOnPercentage(Z_Param_PercentageToDefault);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execSetCoolDownTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimerOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCoolDownTimer(Z_Param_TimerOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execIsContainAbilityArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArguID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContainAbilityArgument(Z_Param_ArguID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execGetSingleAbilityArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArugID);
		P_GET_STRUCT_REF(FLFLAbilityArgumentData,Z_Param_Out_Argument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSingleAbilityArgument(Z_Param_ArugID,Z_Param_Out_Argument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execGetAbilityArguments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFLAbilityArgumentData>*)Z_Param__Result=P_THIS->GetAbilityArguments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execRemoveAbilityArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAbilityArgument(Z_Param_RemoveID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execAddAbilityArgument)
	{
		P_GET_STRUCT_REF(FLFLAbilityArgumentData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAbilityArgument(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execSetAbilityArguments)
	{
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_ArguArray);
		P_GET_UBOOL(Z_Param_CombineArgu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilityArguments(Z_Param_Out_ArguArray,Z_Param_CombineArgu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execIsTargetActorContain)
	{
		P_GET_OBJECT(AActor,Z_Param_FindActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargetActorContain(Z_Param_FindActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execGetTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetTargetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execIsSpellCallTreeReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpellCallTreeReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execGetSpellCallTree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFLSpellSpawnData>*)Z_Param__Result=P_THIS->GetSpellCallTree();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execRunSpellCallTree)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BranchIndex);
		P_GET_OBJECT(AActor,Z_Param_SpawnTransformActor);
		P_GET_OBJECT(APawn,Z_Param_Instigator);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RunSpellCallTree(Z_Param_BranchIndex,Z_Param_SpawnTransformActor,Z_Param_Instigator,Z_Param_Out_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execSetSpellCallTree)
	{
		P_GET_TARRAY_REF(FLFLSpellSpawnData,Z_Param_Out_Tree);
		P_GET_TARRAY_REF(int32,Z_Param_Out_BranchIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpellCallTree(Z_Param_Out_Tree,Z_Param_Out_BranchIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execIsAttributeIDExist)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttributeIDExist(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execGetAttributeData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Multiply);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAttributeData(Z_Param_Index,Z_Param_Out_ID,Z_Param_Out_Value,Z_Param_Out_Multiply);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execAddAttributeDataOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiply);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAttributeDataOffset(Z_Param_Index,Z_Param_Value,Z_Param_Multiply);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execAddAttributeDataMultiplyOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAttributeDataMultiplyOffset(Z_Param_Index,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execAddAttributeDataValueOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAttributeDataValueOffset(Z_Param_Index,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityHandlerComponent::execSetAttributeData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiply);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAttributeData(Z_Param_Index,Z_Param_Value,Z_Param_Multiply);
		P_NATIVE_END;
	}
	static FName NAME_ULFLAbilityHandlerComponent_CanCancelAbility = FName(TEXT("CanCancelAbility"));
	int32 ULFLAbilityHandlerComponent::CanCancelAbility(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& CancelCode)
	{
		LFLAbilityHandlerComponent_eventCanCancelAbility_Parms Parms;
		Parms.AbilityOwner=AbilityOwner;
		Parms.AbilityManager=AbilityManager;
		Parms.CancelCode=CancelCode;
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityHandlerComponent_CanCancelAbility),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULFLAbilityHandlerComponent_CanRunAbility = FName(TEXT("CanRunAbility"));
	int32 ULFLAbilityHandlerComponent::CanRunAbility(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager)
	{
		LFLAbilityHandlerComponent_eventCanRunAbility_Parms Parms;
		Parms.AbilityOwner=AbilityOwner;
		Parms.AbilityManager=AbilityManager;
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityHandlerComponent_CanRunAbility),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULFLAbilityHandlerComponent_OmEndAbility = FName(TEXT("OmEndAbility"));
	void ULFLAbilityHandlerComponent::OmEndAbility(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager)
	{
		LFLAbilityHandlerComponent_eventOmEndAbility_Parms Parms;
		Parms.AbilityOwner=AbilityOwner;
		Parms.AbilityManager=AbilityManager;
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityHandlerComponent_OmEndAbility),&Parms);
	}
	static FName NAME_ULFLAbilityHandlerComponent_OnAbilityFailToRun = FName(TEXT("OnAbilityFailToRun"));
	void ULFLAbilityHandlerComponent::OnAbilityFailToRun(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& FailCode)
	{
		LFLAbilityHandlerComponent_eventOnAbilityFailToRun_Parms Parms;
		Parms.AbilityOwner=AbilityOwner;
		Parms.AbilityManager=AbilityManager;
		Parms.FailCode=FailCode;
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityHandlerComponent_OnAbilityFailToRun),&Parms);
	}
	static FName NAME_ULFLAbilityHandlerComponent_OnCancelAbility = FName(TEXT("OnCancelAbility"));
	void ULFLAbilityHandlerComponent::OnCancelAbility(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& CancelCode)
	{
		LFLAbilityHandlerComponent_eventOnCancelAbility_Parms Parms;
		Parms.AbilityOwner=AbilityOwner;
		Parms.AbilityManager=AbilityManager;
		Parms.CancelCode=CancelCode;
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityHandlerComponent_OnCancelAbility),&Parms);
	}
	static FName NAME_ULFLAbilityHandlerComponent_OnCommitAbility = FName(TEXT("OnCommitAbility"));
	void ULFLAbilityHandlerComponent::OnCommitAbility(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager)
	{
		LFLAbilityHandlerComponent_eventOnCommitAbility_Parms Parms;
		Parms.AbilityOwner=AbilityOwner;
		Parms.AbilityManager=AbilityManager;
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityHandlerComponent_OnCommitAbility),&Parms);
	}
	static FName NAME_ULFLAbilityHandlerComponent_OnRunAbility = FName(TEXT("OnRunAbility"));
	void ULFLAbilityHandlerComponent::OnRunAbility(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager)
	{
		LFLAbilityHandlerComponent_eventOnRunAbility_Parms Parms;
		Parms.AbilityOwner=AbilityOwner;
		Parms.AbilityManager=AbilityManager;
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityHandlerComponent_OnRunAbility),&Parms);
	}
	static FName NAME_ULFLAbilityHandlerComponent_TryCancelAbility = FName(TEXT("TryCancelAbility"));
	void ULFLAbilityHandlerComponent::TryCancelAbility(int32 const& CancelCode)
	{
		LFLAbilityHandlerComponent_eventTryCancelAbility_Parms Parms;
		Parms.CancelCode=CancelCode;
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityHandlerComponent_TryCancelAbility),&Parms);
	}
	static FName NAME_ULFLAbilityHandlerComponent_TryRunAbility = FName(TEXT("TryRunAbility"));
	void ULFLAbilityHandlerComponent::TryRunAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityHandlerComponent_TryRunAbility),NULL);
	}
	void ULFLAbilityHandlerComponent::StaticRegisterNativesULFLAbilityHandlerComponent()
	{
		UClass* Class = ULFLAbilityHandlerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAbilityArgument", &ULFLAbilityHandlerComponent::execAddAbilityArgument },
			{ "AddAttributeDataMultiplyOffset", &ULFLAbilityHandlerComponent::execAddAttributeDataMultiplyOffset },
			{ "AddAttributeDataOffset", &ULFLAbilityHandlerComponent::execAddAttributeDataOffset },
			{ "AddAttributeDataValueOffset", &ULFLAbilityHandlerComponent::execAddAttributeDataValueOffset },
			{ "AddCoolDownTimerOffset", &ULFLAbilityHandlerComponent::execAddCoolDownTimerOffset },
			{ "CanCancelAbility", &ULFLAbilityHandlerComponent::execCanCancelAbility },
			{ "CanRunAbility", &ULFLAbilityHandlerComponent::execCanRunAbility },
			{ "GetAbilityArguments", &ULFLAbilityHandlerComponent::execGetAbilityArguments },
			{ "GetAttributeData", &ULFLAbilityHandlerComponent::execGetAttributeData },
			{ "GetCoolDownTimer", &ULFLAbilityHandlerComponent::execGetCoolDownTimer },
			{ "GetSingleAbilityArgument", &ULFLAbilityHandlerComponent::execGetSingleAbilityArgument },
			{ "GetSpellCallTree", &ULFLAbilityHandlerComponent::execGetSpellCallTree },
			{ "GetTargetActor", &ULFLAbilityHandlerComponent::execGetTargetActor },
			{ "IsAbilityRunning", &ULFLAbilityHandlerComponent::execIsAbilityRunning },
			{ "IsAttributeIDExist", &ULFLAbilityHandlerComponent::execIsAttributeIDExist },
			{ "IsContainAbilityArgument", &ULFLAbilityHandlerComponent::execIsContainAbilityArgument },
			{ "IsCoolingDown", &ULFLAbilityHandlerComponent::execIsCoolingDown },
			{ "IsSpellCallTreeReady", &ULFLAbilityHandlerComponent::execIsSpellCallTreeReady },
			{ "IsTargetActorContain", &ULFLAbilityHandlerComponent::execIsTargetActorContain },
			{ "OmEndAbility", &ULFLAbilityHandlerComponent::execOmEndAbility },
			{ "OnAbilityFailToRun", &ULFLAbilityHandlerComponent::execOnAbilityFailToRun },
			{ "OnCancelAbility", &ULFLAbilityHandlerComponent::execOnCancelAbility },
			{ "OnCommitAbility", &ULFLAbilityHandlerComponent::execOnCommitAbility },
			{ "OnRunAbility", &ULFLAbilityHandlerComponent::execOnRunAbility },
			{ "RemoveAbilityArgument", &ULFLAbilityHandlerComponent::execRemoveAbilityArgument },
			{ "ResetCoolDownTimer", &ULFLAbilityHandlerComponent::execResetCoolDownTimer },
			{ "RunSpellCallTree", &ULFLAbilityHandlerComponent::execRunSpellCallTree },
			{ "SetAbilityArguments", &ULFLAbilityHandlerComponent::execSetAbilityArguments },
			{ "SetAttributeData", &ULFLAbilityHandlerComponent::execSetAttributeData },
			{ "SetCoolDownTimer", &ULFLAbilityHandlerComponent::execSetCoolDownTimer },
			{ "SetCoolDownTimerOnPercentage", &ULFLAbilityHandlerComponent::execSetCoolDownTimerOnPercentage },
			{ "SetSpellCallTree", &ULFLAbilityHandlerComponent::execSetSpellCallTree },
			{ "TryCancelAbility", &ULFLAbilityHandlerComponent::execTryCancelAbility },
			{ "TryRunAbility", &ULFLAbilityHandlerComponent::execTryRunAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics
	{
		struct LFLAbilityHandlerComponent_eventAddAbilityArgument_Parms
		{
			FLFLAbilityArgumentData Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventAddAbilityArgument_Parms, Data), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "AddAbilityArgument", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventAddAbilityArgument_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics
	{
		struct LFLAbilityHandlerComponent_eventAddAttributeDataMultiplyOffset_Parms
		{
			int32 Index;
			float Offset;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventAddAttributeDataMultiplyOffset_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventAddAttributeDataMultiplyOffset_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventAddAttributeDataMultiplyOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventAddAttributeDataMultiplyOffset_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "AddAttributeDataMultiplyOffset", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventAddAttributeDataMultiplyOffset_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics
	{
		struct LFLAbilityHandlerComponent_eventAddAttributeDataOffset_Parms
		{
			int32 Index;
			float Value;
			float Multiply;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiply;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventAddAttributeDataOffset_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventAddAttributeDataOffset_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Multiply_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventAddAttributeDataOffset_Parms, Multiply), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Multiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Multiply_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventAddAttributeDataOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventAddAttributeDataOffset_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_Multiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "AddAttributeDataOffset", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventAddAttributeDataOffset_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics
	{
		struct LFLAbilityHandlerComponent_eventAddAttributeDataValueOffset_Parms
		{
			int32 Index;
			float Offset;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventAddAttributeDataValueOffset_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventAddAttributeDataValueOffset_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventAddAttributeDataValueOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventAddAttributeDataValueOffset_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "AddAttributeDataValueOffset", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventAddAttributeDataValueOffset_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics
	{
		struct LFLAbilityHandlerComponent_eventAddCoolDownTimerOffset_Parms
		{
			float TimerOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::NewProp_TimerOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::NewProp_TimerOffset = { "TimerOffset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventAddCoolDownTimerOffset_Parms, TimerOffset), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::NewProp_TimerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::NewProp_TimerOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::NewProp_TimerOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | CoolDownTimer" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "AddCoolDownTimerOffset", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventAddCoolDownTimerOffset_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CancelCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventCanCancelAbility_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventCanCancelAbility_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_AbilityManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_CancelCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_CancelCode = { "CancelCode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventCanCancelAbility_Parms, CancelCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_CancelCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_CancelCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventCanCancelAbility_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_AbilityOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_AbilityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_CancelCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "Comment", "//Return 0 to pass\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Return 0 to pass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "CanCancelAbility", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventCanCancelAbility_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityManager;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventCanRunAbility_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventCanRunAbility_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::NewProp_AbilityManager_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventCanRunAbility_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::NewProp_AbilityOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::NewProp_AbilityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "Comment", "//Return 0 to pass\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Return 0 to pass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "CanRunAbility", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventCanRunAbility_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics
	{
		struct LFLAbilityHandlerComponent_eventGetAbilityArguments_Parms
		{
			TArray<FLFLAbilityArgumentData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetAbilityArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | AbilityArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "GetAbilityArguments", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventGetAbilityArguments_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics
	{
		struct LFLAbilityHandlerComponent_eventGetAttributeData_Parms
		{
			int32 Index;
			int32 ID;
			float Value;
			float Multiply;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiply;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetAttributeData_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetAttributeData_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetAttributeData_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetAttributeData_Parms, Multiply), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventGetAttributeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventGetAttributeData_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_Multiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "GetAttributeData", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventGetAttributeData_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics
	{
		struct LFLAbilityHandlerComponent_eventGetCoolDownTimer_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetCoolDownTimer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | CoolDownTimer" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "GetCoolDownTimer", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventGetCoolDownTimer_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics
	{
		struct LFLAbilityHandlerComponent_eventGetSingleAbilityArgument_Parms
		{
			int32 ArugID;
			FLFLAbilityArgumentData Argument;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArugID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArugID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Argument;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_ArugID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_ArugID = { "ArugID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetSingleAbilityArgument_Parms, ArugID), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_ArugID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_ArugID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetSingleAbilityArgument_Parms, Argument), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventGetSingleAbilityArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventGetSingleAbilityArgument_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_ArugID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_Argument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | AbilityArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "GetSingleAbilityArgument", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventGetSingleAbilityArgument_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics
	{
		struct LFLAbilityHandlerComponent_eventGetSpellCallTree_Parms
		{
			TArray<FLFLSpellSpawnData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLSpellSpawnData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetSpellCallTree_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | SpellCallTree" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "GetSpellCallTree", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventGetSpellCallTree_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics
	{
		struct LFLAbilityHandlerComponent_eventGetTargetActor_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventGetTargetActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | TargetActor" },
		{ "Comment", "// Target Actor ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Target Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "GetTargetActor", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventGetTargetActor_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics
	{
		struct LFLAbilityHandlerComponent_eventIsAbilityRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventIsAbilityRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventIsAbilityRunning_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Check" },
		{ "Comment", "// Check ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Check" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "IsAbilityRunning", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventIsAbilityRunning_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics
	{
		struct LFLAbilityHandlerComponent_eventIsAttributeIDExist_Parms
		{
			int32 ID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventIsAttributeIDExist_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventIsAttributeIDExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventIsAttributeIDExist_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "IsAttributeIDExist", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventIsAttributeIDExist_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics
	{
		struct LFLAbilityHandlerComponent_eventIsContainAbilityArgument_Parms
		{
			int32 ArguID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArguID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArguID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::NewProp_ArguID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::NewProp_ArguID = { "ArguID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventIsContainAbilityArgument_Parms, ArguID), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::NewProp_ArguID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::NewProp_ArguID_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventIsContainAbilityArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventIsContainAbilityArgument_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::NewProp_ArguID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "IsContainAbilityArgument", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventIsContainAbilityArgument_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics
	{
		struct LFLAbilityHandlerComponent_eventIsCoolingDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventIsCoolingDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventIsCoolingDown_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | CoolDownTimer" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "IsCoolingDown", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventIsCoolingDown_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics
	{
		struct LFLAbilityHandlerComponent_eventIsSpellCallTreeReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventIsSpellCallTreeReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventIsSpellCallTreeReady_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | SpellCallTree" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "IsSpellCallTreeReady", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventIsSpellCallTreeReady_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics
	{
		struct LFLAbilityHandlerComponent_eventIsTargetActorContain_Parms
		{
			AActor* FindActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FindActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::NewProp_FindActor = { "FindActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventIsTargetActorContain_Parms, FindActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventIsTargetActorContain_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventIsTargetActorContain_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::NewProp_FindActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | TargetActor" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "IsTargetActorContain", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventIsTargetActorContain_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOmEndAbility_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOmEndAbility_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::NewProp_AbilityManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::NewProp_AbilityOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::NewProp_AbilityManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "Comment", "//Call Manually on RunAbility\x09\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Call Manually on RunAbility" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "OmEndAbility", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventOmEndAbility_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FailCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnAbilityFailToRun_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnAbilityFailToRun_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_AbilityManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_FailCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_FailCode = { "FailCode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnAbilityFailToRun_Parms, FailCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_FailCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_FailCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_AbilityOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_AbilityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::NewProp_FailCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "OnAbilityFailToRun", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventOnAbilityFailToRun_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CancelCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnCancelAbility_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnCancelAbility_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_AbilityManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_CancelCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_CancelCode = { "CancelCode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnCancelAbility_Parms, CancelCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_CancelCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_CancelCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_AbilityOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_AbilityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::NewProp_CancelCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "OnCancelAbility", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventOnCancelAbility_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnCommitAbility_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnCommitAbility_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::NewProp_AbilityManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::NewProp_AbilityOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::NewProp_AbilityManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "OnCommitAbility", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventOnCommitAbility_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnRunAbility_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventOnRunAbility_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::NewProp_AbilityManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::NewProp_AbilityOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::NewProp_AbilityManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "OnRunAbility", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventOnRunAbility_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics
	{
		struct LFLAbilityHandlerComponent_eventRemoveAbilityArgument_Parms
		{
			int32 RemoveID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::NewProp_RemoveID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::NewProp_RemoveID = { "RemoveID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventRemoveAbilityArgument_Parms, RemoveID), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::NewProp_RemoveID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::NewProp_RemoveID_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventRemoveAbilityArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventRemoveAbilityArgument_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::NewProp_RemoveID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "RemoveAbilityArgument", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventRemoveAbilityArgument_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_ResetCoolDownTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_ResetCoolDownTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | CoolDownTimer" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_ResetCoolDownTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "ResetCoolDownTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_ResetCoolDownTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_ResetCoolDownTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_ResetCoolDownTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_ResetCoolDownTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics
	{
		struct LFLAbilityHandlerComponent_eventRunSpellCallTree_Parms
		{
			int32 BranchIndex;
			AActor* SpawnTransformActor;
			APawn* Instigator;
			TArray<AActor*> TargetActor;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BranchIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnTransformActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_BranchIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_BranchIndex = { "BranchIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventRunSpellCallTree_Parms, BranchIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_BranchIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_BranchIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_SpawnTransformActor = { "SpawnTransformActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventRunSpellCallTree_Parms, SpawnTransformActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventRunSpellCallTree_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_TargetActor_Inner = { "TargetActor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_TargetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventRunSpellCallTree_Parms, TargetActor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventRunSpellCallTree_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_BranchIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_SpawnTransformActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_TargetActor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | SpellCallTree" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "RunSpellCallTree", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventRunSpellCallTree_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics
	{
		struct LFLAbilityHandlerComponent_eventSetAbilityArguments_Parms
		{
			TArray<FLFLAbilityArgumentData> ArguArray;
			bool CombineArgu;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArguArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArguArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArguArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombineArgu_MetaData[];
#endif
		static void NewProp_CombineArgu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CombineArgu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_ArguArray_Inner = { "ArguArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_ArguArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_ArguArray = { "ArguArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventSetAbilityArguments_Parms, ArguArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_ArguArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_ArguArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_CombineArgu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_CombineArgu_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventSetAbilityArguments_Parms*)Obj)->CombineArgu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_CombineArgu = { "CombineArgu", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventSetAbilityArguments_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_CombineArgu_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_CombineArgu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_CombineArgu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_ArguArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_ArguArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::NewProp_CombineArgu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "Comment", "// Ability Arugments ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Ability Arugments" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "SetAbilityArguments", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventSetAbilityArguments_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics
	{
		struct LFLAbilityHandlerComponent_eventSetAttributeData_Parms
		{
			int32 Index;
			float Value;
			float Multiply;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiply;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventSetAttributeData_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventSetAttributeData_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Multiply_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventSetAttributeData_Parms, Multiply), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Multiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Multiply_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityHandlerComponent_eventSetAttributeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityHandlerComponent_eventSetAttributeData_Parms), &Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_Multiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Attribute Datas" },
		{ "Comment", "// Attribute Datas //////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Attribute Datas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "SetAttributeData", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventSetAttributeData_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics
	{
		struct LFLAbilityHandlerComponent_eventSetCoolDownTimer_Parms
		{
			float TimerOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::NewProp_TimerOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::NewProp_TimerOffset = { "TimerOffset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventSetCoolDownTimer_Parms, TimerOffset), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::NewProp_TimerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::NewProp_TimerOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::NewProp_TimerOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | CoolDownTimer" },
		{ "Comment", "// Cool Down Timer ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Cool Down Timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "SetCoolDownTimer", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventSetCoolDownTimer_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics
	{
		struct LFLAbilityHandlerComponent_eventSetCoolDownTimerOnPercentage_Parms
		{
			float PercentageToDefault;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentageToDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentageToDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::NewProp_PercentageToDefault_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::NewProp_PercentageToDefault = { "PercentageToDefault", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventSetCoolDownTimerOnPercentage_Parms, PercentageToDefault), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::NewProp_PercentageToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::NewProp_PercentageToDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::NewProp_PercentageToDefault,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | CoolDownTimer" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "SetCoolDownTimerOnPercentage", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventSetCoolDownTimerOnPercentage_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics
	{
		struct LFLAbilityHandlerComponent_eventSetSpellCallTree_Parms
		{
			TArray<FLFLSpellSpawnData> Tree;
			TArray<int32> BranchIndex;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tree_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tree;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BranchIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BranchIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_Tree_Inner = { "Tree", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLSpellSpawnData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_Tree_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventSetSpellCallTree_Parms, Tree), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_Tree_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_Tree_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_BranchIndex_Inner = { "BranchIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_BranchIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_BranchIndex = { "BranchIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventSetSpellCallTree_Parms, BranchIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_BranchIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_BranchIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_Tree_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_Tree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_BranchIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::NewProp_BranchIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | SpellCallTree" },
		{ "Comment", "// Spell Call Tree ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Spell Call Tree" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "SetSpellCallTree", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventSetSpellCallTree_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CancelCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::NewProp_CancelCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::NewProp_CancelCode = { "CancelCode", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityHandlerComponent_eventTryCancelAbility_Parms, CancelCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::NewProp_CancelCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::NewProp_CancelCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::NewProp_CancelCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "TryCancelAbility", nullptr, nullptr, sizeof(LFLAbilityHandlerComponent_eventTryCancelAbility_Parms), Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryRunAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryRunAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "Comment", "// Ability Main Function ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
		{ "ToolTip", "Ability Main Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryRunAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityHandlerComponent, nullptr, "TryRunAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryRunAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryRunAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryRunAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryRunAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister()
	{
		return ULFLAbilityHandlerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDownTimer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpellCallTree_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellCallTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpellCallTree;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TreeBranchIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeBranchIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreeBranchIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributeDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultCoolDown;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRunning_MetaData[];
#endif
		static void NewProp_IsRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRunning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAbilityArgument, "AddAbilityArgument" }, // 3257822597
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataMultiplyOffset, "AddAttributeDataMultiplyOffset" }, // 3249644337
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataOffset, "AddAttributeDataOffset" }, // 2871747850
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddAttributeDataValueOffset, "AddAttributeDataValueOffset" }, // 3486060351
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_AddCoolDownTimerOffset, "AddCoolDownTimerOffset" }, // 3125575384
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanCancelAbility, "CanCancelAbility" }, // 1156088943
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_CanRunAbility, "CanRunAbility" }, // 2461266336
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAbilityArguments, "GetAbilityArguments" }, // 2254723133
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetAttributeData, "GetAttributeData" }, // 967657650
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetCoolDownTimer, "GetCoolDownTimer" }, // 3647466533
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSingleAbilityArgument, "GetSingleAbilityArgument" }, // 2287041498
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetSpellCallTree, "GetSpellCallTree" }, // 3371110917
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_GetTargetActor, "GetTargetActor" }, // 3044464128
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAbilityRunning, "IsAbilityRunning" }, // 2982733958
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsAttributeIDExist, "IsAttributeIDExist" }, // 3327336633
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsContainAbilityArgument, "IsContainAbilityArgument" }, // 1645194858
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsCoolingDown, "IsCoolingDown" }, // 317736718
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsSpellCallTreeReady, "IsSpellCallTreeReady" }, // 3766850042
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_IsTargetActorContain, "IsTargetActorContain" }, // 2510225006
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_OmEndAbility, "OmEndAbility" }, // 1568904237
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnAbilityFailToRun, "OnAbilityFailToRun" }, // 2204756464
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCancelAbility, "OnCancelAbility" }, // 200910159
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnCommitAbility, "OnCommitAbility" }, // 1003446993
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_OnRunAbility, "OnRunAbility" }, // 4190598464
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_RemoveAbilityArgument, "RemoveAbilityArgument" }, // 3786653196
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_ResetCoolDownTimer, "ResetCoolDownTimer" }, // 825903725
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_RunSpellCallTree, "RunSpellCallTree" }, // 3189590544
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAbilityArguments, "SetAbilityArguments" }, // 1677519195
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetAttributeData, "SetAttributeData" }, // 3577865860
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimer, "SetCoolDownTimer" }, // 138716714
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetCoolDownTimerOnPercentage, "SetCoolDownTimerOnPercentage" }, // 1604780903
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_SetSpellCallTree, "SetSpellCallTree" }, // 1317122363
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryCancelAbility, "TryCancelAbility" }, // 218979175
		{ &Z_Construct_UFunction_ULFLAbilityHandlerComponent_TryRunAbility, "TryRunAbility" }, // 675778723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Ability/LFLAbilityHandlerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_CoolDownTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_CoolDownTimer = { "CoolDownTimer", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityHandlerComponent, CoolDownTimer), METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_CoolDownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_CoolDownTimer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SpellCallTree_Inner = { "SpellCallTree", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLSpellSpawnData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SpellCallTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SpellCallTree = { "SpellCallTree", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityHandlerComponent, SpellCallTree), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SpellCallTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SpellCallTree_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TreeBranchIndex_Inner = { "TreeBranchIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TreeBranchIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TreeBranchIndex = { "TreeBranchIndex", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityHandlerComponent, TreeBranchIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TreeBranchIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TreeBranchIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AttributeDatas_Inner = { "AttributeDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityAttributeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AttributeDatas_MetaData[] = {
		{ "Category", "LFLAbilityManagementComponent | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AttributeDatas = { "AttributeDatas", nullptr, (EPropertyFlags)0x0010000001000021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityHandlerComponent, AttributeDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AttributeDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AttributeDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_DefaultCoolDown_MetaData[] = {
		{ "Category", "LFLAbilityManagementComponent | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_DefaultCoolDown = { "DefaultCoolDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityHandlerComponent, DefaultCoolDown), METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_DefaultCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_DefaultCoolDown_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AbilityArguments_Inner = { "AbilityArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AbilityArguments_MetaData[] = {
		{ "BlueprintGetter", "GetAbilityArguments" },
		{ "Category", "LFLAbilityHandlerComponent" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AbilityArguments = { "AbilityArguments", nullptr, (EPropertyFlags)0x0011000001000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityHandlerComponent, AbilityArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AbilityArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AbilityArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_Manager_MetaData[] = {
		{ "Category", "LFLAbilityHandlerComponent" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x001100000008003c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityHandlerComponent, Manager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TargetActors_MetaData[] = {
		{ "BlueprintGetter", "GetTargetActor" },
		{ "Category", "LFLAbilityHandlerComponent" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0011000000000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityHandlerComponent, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TargetActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "Category", "LFLAbilityHandlerComponent" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0011000001000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityHandlerComponent, SlotIndex), METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_IsRunning_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityHandlerComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_IsRunning_SetBit(void* Obj)
	{
		((ULFLAbilityHandlerComponent*)Obj)->IsRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_IsRunning = { "IsRunning", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULFLAbilityHandlerComponent), &Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_IsRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_IsRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_IsRunning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_CoolDownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SpellCallTree_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SpellCallTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TreeBranchIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TreeBranchIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AttributeDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AttributeDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_DefaultCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AbilityArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_AbilityArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_Manager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TargetActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_TargetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::NewProp_IsRunning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLAbilityHandlerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::ClassParams = {
		&ULFLAbilityHandlerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLAbilityHandlerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLAbilityHandlerComponent, 2354072980);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLAbilityHandlerComponent>()
	{
		return ULFLAbilityHandlerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLAbilityHandlerComponent(Z_Construct_UClass_ULFLAbilityHandlerComponent, &ULFLAbilityHandlerComponent::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLAbilityHandlerComponent"), false, nullptr, nullptr, nullptr);

	void ULFLAbilityHandlerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CoolDownTimer(TEXT("CoolDownTimer"));
		static const FName Name_SpellCallTree(TEXT("SpellCallTree"));
		static const FName Name_TreeBranchIndex(TEXT("TreeBranchIndex"));
		static const FName Name_AttributeDatas(TEXT("AttributeDatas"));
		static const FName Name_AbilityArguments(TEXT("AbilityArguments"));
		static const FName Name_Manager(TEXT("Manager"));
		static const FName Name_TargetActors(TEXT("TargetActors"));
		static const FName Name_SlotIndex(TEXT("SlotIndex"));
		static const FName Name_IsRunning(TEXT("IsRunning"));

		const bool bIsValid = true
			&& Name_CoolDownTimer == ClassReps[(int32)ENetFields_Private::CoolDownTimer].Property->GetFName()
			&& Name_SpellCallTree == ClassReps[(int32)ENetFields_Private::SpellCallTree].Property->GetFName()
			&& Name_TreeBranchIndex == ClassReps[(int32)ENetFields_Private::TreeBranchIndex].Property->GetFName()
			&& Name_AttributeDatas == ClassReps[(int32)ENetFields_Private::AttributeDatas].Property->GetFName()
			&& Name_AbilityArguments == ClassReps[(int32)ENetFields_Private::AbilityArguments].Property->GetFName()
			&& Name_Manager == ClassReps[(int32)ENetFields_Private::Manager].Property->GetFName()
			&& Name_TargetActors == ClassReps[(int32)ENetFields_Private::TargetActors].Property->GetFName()
			&& Name_SlotIndex == ClassReps[(int32)ENetFields_Private::SlotIndex].Property->GetFName()
			&& Name_IsRunning == ClassReps[(int32)ENetFields_Private::IsRunning].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULFLAbilityHandlerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLAbilityHandlerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
