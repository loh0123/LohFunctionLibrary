// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Ability/LFLSpellActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLSpellActor() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLSpellActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLSpellActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityArgumentData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALFLSpellActor::execCanStopSpell)
	{
		P_GET_OBJECT(AActor,Z_Param_SpellOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_StopCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanStopSpell_Implementation(Z_Param_SpellOwner,Z_Param_AbilityManager,Z_Param_Out_StopCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execCommitSpell)
	{
		P_GET_OBJECT(AActor,Z_Param_SpellOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CommitSpell_Implementation(Z_Param_SpellOwner,Z_Param_AbilityManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execCanRunSpell)
	{
		P_GET_OBJECT(AActor,Z_Param_SpellOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanRunSpell_Implementation(Z_Param_SpellOwner,Z_Param_AbilityManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execIsTargetActorContain)
	{
		P_GET_OBJECT(AActor,Z_Param_FindActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargetActorContain(Z_Param_FindActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execGetTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetTargetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execIsContainSpellArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArguID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContainSpellArgument(Z_Param_ArguID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execGetSingleSpellArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArugID);
		P_GET_STRUCT_REF(FLFLAbilityArgumentData,Z_Param_Out_Argument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSingleSpellArgument(Z_Param_ArugID,Z_Param_Out_Argument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execGetSpellArguments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFLAbilityArgumentData>*)Z_Param__Result=P_THIS->GetSpellArguments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execRemoveSpellArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSpellArgument(Z_Param_RemoveID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execAddSpellArgument)
	{
		P_GET_STRUCT_REF(FLFLAbilityArgumentData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSpellArgument(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execSetSpellArguments)
	{
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_ArguArray);
		P_GET_UBOOL(Z_Param_CombineArgu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpellArguments(Z_Param_Out_ArguArray,Z_Param_CombineArgu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLSpellActor::execGetPreviousCastSpell)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_GET_OBJECT_REF(ALFLSpellActor,Z_Param_Out_SpellActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPreviousCastSpell(Z_Param_Step,Z_Param_Out_SpellActor);
		P_NATIVE_END;
	}
	static FName NAME_ALFLSpellActor_CanRunSpell = FName(TEXT("CanRunSpell"));
	int32 ALFLSpellActor::CanRunSpell(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager)
	{
		LFLSpellActor_eventCanRunSpell_Parms Parms;
		Parms.SpellOwner=SpellOwner;
		Parms.AbilityManager=AbilityManager;
		ProcessEvent(FindFunctionChecked(NAME_ALFLSpellActor_CanRunSpell),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ALFLSpellActor_CanStopSpell = FName(TEXT("CanStopSpell"));
	int32 ALFLSpellActor::CanStopSpell(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& StopCode)
	{
		LFLSpellActor_eventCanStopSpell_Parms Parms;
		Parms.SpellOwner=SpellOwner;
		Parms.AbilityManager=AbilityManager;
		Parms.StopCode=StopCode;
		ProcessEvent(FindFunctionChecked(NAME_ALFLSpellActor_CanStopSpell),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ALFLSpellActor_CommitSpell = FName(TEXT("CommitSpell"));
	void ALFLSpellActor::CommitSpell(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager)
	{
		LFLSpellActor_eventCommitSpell_Parms Parms;
		Parms.SpellOwner=SpellOwner;
		Parms.AbilityManager=AbilityManager;
		ProcessEvent(FindFunctionChecked(NAME_ALFLSpellActor_CommitSpell),&Parms);
	}
	void ALFLSpellActor::StaticRegisterNativesALFLSpellActor()
	{
		UClass* Class = ALFLSpellActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSpellArgument", &ALFLSpellActor::execAddSpellArgument },
			{ "CanRunSpell", &ALFLSpellActor::execCanRunSpell },
			{ "CanStopSpell", &ALFLSpellActor::execCanStopSpell },
			{ "CommitSpell", &ALFLSpellActor::execCommitSpell },
			{ "GetPreviousCastSpell", &ALFLSpellActor::execGetPreviousCastSpell },
			{ "GetSingleSpellArgument", &ALFLSpellActor::execGetSingleSpellArgument },
			{ "GetSpellArguments", &ALFLSpellActor::execGetSpellArguments },
			{ "GetTargetActor", &ALFLSpellActor::execGetTargetActor },
			{ "IsContainSpellArgument", &ALFLSpellActor::execIsContainSpellArgument },
			{ "IsTargetActorContain", &ALFLSpellActor::execIsTargetActorContain },
			{ "RemoveSpellArgument", &ALFLSpellActor::execRemoveSpellArgument },
			{ "SetSpellArguments", &ALFLSpellActor::execSetSpellArguments },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics
	{
		struct LFLSpellActor_eventAddSpellArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventAddSpellArgument_Parms, Data), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Spell Arugments" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "AddSpellArgument", nullptr, nullptr, sizeof(LFLSpellActor_eventAddSpellArgument_Parms), Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpellOwner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::NewProp_SpellOwner = { "SpellOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventCanRunSpell_Parms, SpellOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventCanRunSpell_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::NewProp_AbilityManager_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventCanRunSpell_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::NewProp_SpellOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::NewProp_AbilityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "Comment", "// Spell Main Function ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
		{ "ToolTip", "Spell Main Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "CanRunSpell", nullptr, nullptr, sizeof(LFLSpellActor_eventCanRunSpell_Parms), Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_CanRunSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_CanRunSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpellOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StopCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_SpellOwner = { "SpellOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventCanStopSpell_Parms, SpellOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventCanStopSpell_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_AbilityManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_StopCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_StopCode = { "StopCode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventCanStopSpell_Parms, StopCode), METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_StopCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_StopCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventCanStopSpell_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_SpellOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_AbilityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_StopCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "CanStopSpell", nullptr, nullptr, sizeof(LFLSpellActor_eventCanStopSpell_Parms), Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_CanStopSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_CanStopSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpellOwner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::NewProp_SpellOwner = { "SpellOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventCommitSpell_Parms, SpellOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventCommitSpell_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::NewProp_AbilityManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::NewProp_SpellOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::NewProp_AbilityManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "CommitSpell", nullptr, nullptr, sizeof(LFLSpellActor_eventCommitSpell_Parms), Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_CommitSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_CommitSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics
	{
		struct LFLSpellActor_eventGetPreviousCastSpell_Parms
		{
			int32 Step;
			ALFLSpellActor* SpellActor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpellActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventGetPreviousCastSpell_Parms, Step), METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_Step_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_SpellActor = { "SpellActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventGetPreviousCastSpell_Parms, SpellActor), Z_Construct_UClass_ALFLSpellActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLSpellActor_eventGetPreviousCastSpell_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLSpellActor_eventGetPreviousCastSpell_Parms), &Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_SpellActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Other" },
		{ "Comment", "// Other ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
		{ "ToolTip", "Other" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "GetPreviousCastSpell", nullptr, nullptr, sizeof(LFLSpellActor_eventGetPreviousCastSpell_Parms), Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics
	{
		struct LFLSpellActor_eventGetSingleSpellArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_ArugID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_ArugID = { "ArugID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventGetSingleSpellArgument_Parms, ArugID), METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_ArugID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_ArugID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventGetSingleSpellArgument_Parms, Argument), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLSpellActor_eventGetSingleSpellArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLSpellActor_eventGetSingleSpellArgument_Parms), &Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_ArugID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_Argument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Spell Arugments" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "GetSingleSpellArgument", nullptr, nullptr, sizeof(LFLSpellActor_eventGetSingleSpellArgument_Parms), Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics
	{
		struct LFLSpellActor_eventGetSpellArguments_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventGetSpellArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Spell Arugments" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "GetSpellArguments", nullptr, nullptr, sizeof(LFLSpellActor_eventGetSpellArguments_Parms), Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics
	{
		struct LFLSpellActor_eventGetTargetActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventGetTargetActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | TargetActor" },
		{ "Comment", "// Target Actor ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
		{ "ToolTip", "Target Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "GetTargetActor", nullptr, nullptr, sizeof(LFLSpellActor_eventGetTargetActor_Parms), Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_GetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_GetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics
	{
		struct LFLSpellActor_eventIsContainSpellArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::NewProp_ArguID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::NewProp_ArguID = { "ArguID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventIsContainSpellArgument_Parms, ArguID), METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::NewProp_ArguID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::NewProp_ArguID_MetaData)) };
	void Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLSpellActor_eventIsContainSpellArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLSpellActor_eventIsContainSpellArgument_Parms), &Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::NewProp_ArguID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Spell Arugments" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "IsContainSpellArgument", nullptr, nullptr, sizeof(LFLSpellActor_eventIsContainSpellArgument_Parms), Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics
	{
		struct LFLSpellActor_eventIsTargetActorContain_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::NewProp_FindActor = { "FindActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventIsTargetActorContain_Parms, FindActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLSpellActor_eventIsTargetActorContain_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLSpellActor_eventIsTargetActorContain_Parms), &Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::NewProp_FindActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | TargetActor" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "IsTargetActorContain", nullptr, nullptr, sizeof(LFLSpellActor_eventIsTargetActorContain_Parms), Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics
	{
		struct LFLSpellActor_eventRemoveSpellArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::NewProp_RemoveID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::NewProp_RemoveID = { "RemoveID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventRemoveSpellArgument_Parms, RemoveID), METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::NewProp_RemoveID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::NewProp_RemoveID_MetaData)) };
	void Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLSpellActor_eventRemoveSpellArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLSpellActor_eventRemoveSpellArgument_Parms), &Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::NewProp_RemoveID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Spell Arugments" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "RemoveSpellArgument", nullptr, nullptr, sizeof(LFLSpellActor_eventRemoveSpellArgument_Parms), Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics
	{
		struct LFLSpellActor_eventSetSpellArguments_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_ArguArray_Inner = { "ArguArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_ArguArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_ArguArray = { "ArguArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLSpellActor_eventSetSpellArguments_Parms, ArguArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_ArguArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_ArguArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_CombineArgu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_CombineArgu_SetBit(void* Obj)
	{
		((LFLSpellActor_eventSetSpellArguments_Parms*)Obj)->CombineArgu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_CombineArgu = { "CombineArgu", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLSpellActor_eventSetSpellArguments_Parms), &Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_CombineArgu_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_CombineArgu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_CombineArgu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_ArguArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_ArguArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::NewProp_CombineArgu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Spell Arugments" },
		{ "Comment", "// Spell Arugments ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
		{ "ToolTip", "Spell Arugments" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLSpellActor, nullptr, "SetSpellArguments", nullptr, nullptr, sizeof(LFLSpellActor_eventSetSpellArguments_Parms), Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALFLSpellActor_NoRegister()
	{
		return ALFLSpellActor::StaticClass();
	}
	struct Z_Construct_UClass_ALFLSpellActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpellArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpellArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousCastSpell_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousCastSpell;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALFLSpellActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALFLSpellActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALFLSpellActor_AddSpellArgument, "AddSpellArgument" }, // 1312961578
		{ &Z_Construct_UFunction_ALFLSpellActor_CanRunSpell, "CanRunSpell" }, // 742476775
		{ &Z_Construct_UFunction_ALFLSpellActor_CanStopSpell, "CanStopSpell" }, // 1026519498
		{ &Z_Construct_UFunction_ALFLSpellActor_CommitSpell, "CommitSpell" }, // 4097924645
		{ &Z_Construct_UFunction_ALFLSpellActor_GetPreviousCastSpell, "GetPreviousCastSpell" }, // 3644863732
		{ &Z_Construct_UFunction_ALFLSpellActor_GetSingleSpellArgument, "GetSingleSpellArgument" }, // 2588429230
		{ &Z_Construct_UFunction_ALFLSpellActor_GetSpellArguments, "GetSpellArguments" }, // 1483944550
		{ &Z_Construct_UFunction_ALFLSpellActor_GetTargetActor, "GetTargetActor" }, // 2292547438
		{ &Z_Construct_UFunction_ALFLSpellActor_IsContainSpellArgument, "IsContainSpellArgument" }, // 707495909
		{ &Z_Construct_UFunction_ALFLSpellActor_IsTargetActorContain, "IsTargetActorContain" }, // 3685734999
		{ &Z_Construct_UFunction_ALFLSpellActor_RemoveSpellArgument, "RemoveSpellArgument" }, // 2587313862
		{ &Z_Construct_UFunction_ALFLSpellActor_SetSpellArguments, "SetSpellArguments" }, // 1363794739
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLSpellActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Ability/LFLSpellActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_SpellArguments_Inner = { "SpellArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_SpellArguments_MetaData[] = {
		{ "BlueprintGetter", "GetSpellArguments" },
		{ "Category", "LFLSpellActor" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_SpellArguments = { "SpellArguments", nullptr, (EPropertyFlags)0x0011000000000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALFLSpellActor, SpellArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_SpellArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_SpellArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_Manager_MetaData[] = {
		{ "Category", "LFLSpellActor" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x001100000008003c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALFLSpellActor, Manager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_Manager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_OwningAbility_MetaData[] = {
		{ "Category", "LFLSpellActor" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x001100000008003c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALFLSpellActor, OwningAbility), Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_OwningAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_OwningAbility_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_TargetActors_MetaData[] = {
		{ "BlueprintGetter", "GetTargetActor" },
		{ "Category", "LFLSpellActor" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0011000000000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALFLSpellActor, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_TargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_TargetActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_PreviousCastSpell_MetaData[] = {
		{ "Category", "LFLSpellActor" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLSpellActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_PreviousCastSpell = { "PreviousCastSpell", nullptr, (EPropertyFlags)0x0011000000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALFLSpellActor, PreviousCastSpell), Z_Construct_UClass_ALFLSpellActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_PreviousCastSpell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_PreviousCastSpell_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALFLSpellActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_SpellArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_SpellArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_Manager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_TargetActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_TargetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLSpellActor_Statics::NewProp_PreviousCastSpell,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALFLSpellActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALFLSpellActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALFLSpellActor_Statics::ClassParams = {
		&ALFLSpellActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALFLSpellActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALFLSpellActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALFLSpellActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLSpellActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALFLSpellActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALFLSpellActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALFLSpellActor, 1381719889);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ALFLSpellActor>()
	{
		return ALFLSpellActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALFLSpellActor(Z_Construct_UClass_ALFLSpellActor, &ALFLSpellActor::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ALFLSpellActor"), false, nullptr, nullptr, nullptr);

	void ALFLSpellActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SpellArguments(TEXT("SpellArguments"));
		static const FName Name_Manager(TEXT("Manager"));
		static const FName Name_OwningAbility(TEXT("OwningAbility"));
		static const FName Name_TargetActors(TEXT("TargetActors"));
		static const FName Name_PreviousCastSpell(TEXT("PreviousCastSpell"));

		const bool bIsValid = true
			&& Name_SpellArguments == ClassReps[(int32)ENetFields_Private::SpellArguments].Property->GetFName()
			&& Name_Manager == ClassReps[(int32)ENetFields_Private::Manager].Property->GetFName()
			&& Name_OwningAbility == ClassReps[(int32)ENetFields_Private::OwningAbility].Property->GetFName()
			&& Name_TargetActors == ClassReps[(int32)ENetFields_Private::TargetActors].Property->GetFName()
			&& Name_PreviousCastSpell == ClassReps[(int32)ENetFields_Private::PreviousCastSpell].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALFLSpellActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALFLSpellActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
