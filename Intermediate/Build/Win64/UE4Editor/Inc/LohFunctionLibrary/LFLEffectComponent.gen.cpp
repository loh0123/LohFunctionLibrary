// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Ability/LFLEffectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLEffectComponent() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLEffectComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLEffectComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityArgumentData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(ULFLEffectComponent::execCanStopEffect)
	{
		P_GET_OBJECT(AActor,Z_Param_EffectOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_StopCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanStopEffect_Implementation(Z_Param_EffectOwner,Z_Param_AbilityManager,Z_Param_Out_StopCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execCanRunEffect)
	{
		P_GET_OBJECT(AActor,Z_Param_EffectOwner);
		P_GET_OBJECT(ULFLAbilityManagementComponent,Z_Param_AbilityManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanRunEffect_Implementation(Z_Param_EffectOwner,Z_Param_AbilityManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execIsContainEffectArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArguID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContainEffectArgument(Z_Param_ArguID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execGetSingleEffectArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArugID);
		P_GET_STRUCT_REF(FLFLAbilityArgumentData,Z_Param_Out_Argument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSingleEffectArgument(Z_Param_ArugID,Z_Param_Out_Argument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execGetEffectArguments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFLAbilityArgumentData>*)Z_Param__Result=P_THIS->GetEffectArguments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execRemoveEffectArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveEffectArgument(Z_Param_RemoveID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execAddEffectArgument)
	{
		P_GET_STRUCT_REF(FLFLAbilityArgumentData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEffectArgument(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execSetEffectArguments)
	{
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_ArguArray);
		P_GET_UBOOL(Z_Param_CombineArgu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectArguments(Z_Param_Out_ArguArray,Z_Param_CombineArgu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execIsAttributeIDExist)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttributeIDExist(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execGetAttributeData)
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
	DEFINE_FUNCTION(ULFLEffectComponent::execAddAttributeDataOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiply);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAttributeDataOffset(Z_Param_Index,Z_Param_Value,Z_Param_Multiply);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execAddAttributeDataMultiplyOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAttributeDataMultiplyOffset(Z_Param_Index,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execAddAttributeDataValueOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAttributeDataValueOffset(Z_Param_Index,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLEffectComponent::execSetAttributeData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiply);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAttributeData(Z_Param_Index,Z_Param_Value,Z_Param_Multiply);
		P_NATIVE_END;
	}
	static FName NAME_ULFLEffectComponent_CanRunEffect = FName(TEXT("CanRunEffect"));
	int32 ULFLEffectComponent::CanRunEffect(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager)
	{
		LFLEffectComponent_eventCanRunEffect_Parms Parms;
		Parms.EffectOwner=EffectOwner;
		Parms.AbilityManager=AbilityManager;
		ProcessEvent(FindFunctionChecked(NAME_ULFLEffectComponent_CanRunEffect),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULFLEffectComponent_CanStopEffect = FName(TEXT("CanStopEffect"));
	int32 ULFLEffectComponent::CanStopEffect(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& StopCode)
	{
		LFLEffectComponent_eventCanStopEffect_Parms Parms;
		Parms.EffectOwner=EffectOwner;
		Parms.AbilityManager=AbilityManager;
		Parms.StopCode=StopCode;
		ProcessEvent(FindFunctionChecked(NAME_ULFLEffectComponent_CanStopEffect),&Parms);
		return Parms.ReturnValue;
	}
	void ULFLEffectComponent::StaticRegisterNativesULFLEffectComponent()
	{
		UClass* Class = ULFLEffectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttributeDataMultiplyOffset", &ULFLEffectComponent::execAddAttributeDataMultiplyOffset },
			{ "AddAttributeDataOffset", &ULFLEffectComponent::execAddAttributeDataOffset },
			{ "AddAttributeDataValueOffset", &ULFLEffectComponent::execAddAttributeDataValueOffset },
			{ "AddEffectArgument", &ULFLEffectComponent::execAddEffectArgument },
			{ "CanRunEffect", &ULFLEffectComponent::execCanRunEffect },
			{ "CanStopEffect", &ULFLEffectComponent::execCanStopEffect },
			{ "GetAttributeData", &ULFLEffectComponent::execGetAttributeData },
			{ "GetEffectArguments", &ULFLEffectComponent::execGetEffectArguments },
			{ "GetSingleEffectArgument", &ULFLEffectComponent::execGetSingleEffectArgument },
			{ "IsAttributeIDExist", &ULFLEffectComponent::execIsAttributeIDExist },
			{ "IsContainEffectArgument", &ULFLEffectComponent::execIsContainEffectArgument },
			{ "RemoveEffectArgument", &ULFLEffectComponent::execRemoveEffectArgument },
			{ "SetAttributeData", &ULFLEffectComponent::execSetAttributeData },
			{ "SetEffectArguments", &ULFLEffectComponent::execSetEffectArguments },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics
	{
		struct LFLEffectComponent_eventAddAttributeDataMultiplyOffset_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventAddAttributeDataMultiplyOffset_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventAddAttributeDataMultiplyOffset_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset_MetaData)) };
	void Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventAddAttributeDataMultiplyOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventAddAttributeDataMultiplyOffset_Parms), &Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "AddAttributeDataMultiplyOffset", nullptr, nullptr, sizeof(LFLEffectComponent_eventAddAttributeDataMultiplyOffset_Parms), Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics
	{
		struct LFLEffectComponent_eventAddAttributeDataOffset_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventAddAttributeDataOffset_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventAddAttributeDataOffset_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Multiply_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventAddAttributeDataOffset_Parms, Multiply), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Multiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Multiply_MetaData)) };
	void Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventAddAttributeDataOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventAddAttributeDataOffset_Parms), &Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_Multiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "AddAttributeDataOffset", nullptr, nullptr, sizeof(LFLEffectComponent_eventAddAttributeDataOffset_Parms), Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics
	{
		struct LFLEffectComponent_eventAddAttributeDataValueOffset_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventAddAttributeDataValueOffset_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventAddAttributeDataValueOffset_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset_MetaData)) };
	void Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventAddAttributeDataValueOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventAddAttributeDataValueOffset_Parms), &Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "AddAttributeDataValueOffset", nullptr, nullptr, sizeof(LFLEffectComponent_eventAddAttributeDataValueOffset_Parms), Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics
	{
		struct LFLEffectComponent_eventAddEffectArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventAddEffectArgument_Parms, Data), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "AddEffectArgument", nullptr, nullptr, sizeof(LFLEffectComponent_eventAddEffectArgument_Parms), Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOwner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::NewProp_EffectOwner = { "EffectOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventCanRunEffect_Parms, EffectOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventCanRunEffect_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::NewProp_AbilityManager_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventCanRunEffect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::NewProp_EffectOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::NewProp_AbilityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "Comment", "// Effect Main Function ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
		{ "ToolTip", "Effect Main Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "CanRunEffect", nullptr, nullptr, sizeof(LFLEffectComponent_eventCanRunEffect_Parms), Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOwner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_EffectOwner = { "EffectOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventCanStopEffect_Parms, EffectOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_AbilityManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_AbilityManager = { "AbilityManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventCanStopEffect_Parms, AbilityManager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_AbilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_AbilityManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_StopCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_StopCode = { "StopCode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventCanStopEffect_Parms, StopCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_StopCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_StopCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventCanStopEffect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_EffectOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_AbilityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_StopCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | Event" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "CanStopEffect", nullptr, nullptr, sizeof(LFLEffectComponent_eventCanStopEffect_Parms), Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics
	{
		struct LFLEffectComponent_eventGetAttributeData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventGetAttributeData_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventGetAttributeData_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventGetAttributeData_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventGetAttributeData_Parms, Multiply), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventGetAttributeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventGetAttributeData_Parms), &Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_Multiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "GetAttributeData", nullptr, nullptr, sizeof(LFLEffectComponent_eventGetAttributeData_Parms), Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics
	{
		struct LFLEffectComponent_eventGetEffectArguments_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventGetEffectArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | AbilityArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "GetEffectArguments", nullptr, nullptr, sizeof(LFLEffectComponent_eventGetEffectArguments_Parms), Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics
	{
		struct LFLEffectComponent_eventGetSingleEffectArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_ArugID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_ArugID = { "ArugID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventGetSingleEffectArgument_Parms, ArugID), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_ArugID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_ArugID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventGetSingleEffectArgument_Parms, Argument), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventGetSingleEffectArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventGetSingleEffectArgument_Parms), &Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_ArugID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_Argument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityHandlerComponent | AbilityArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "GetSingleEffectArgument", nullptr, nullptr, sizeof(LFLEffectComponent_eventGetSingleEffectArgument_Parms), Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics
	{
		struct LFLEffectComponent_eventIsAttributeIDExist_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventIsAttributeIDExist_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventIsAttributeIDExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventIsAttributeIDExist_Parms), &Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Attribute Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "IsAttributeIDExist", nullptr, nullptr, sizeof(LFLEffectComponent_eventIsAttributeIDExist_Parms), Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics
	{
		struct LFLEffectComponent_eventIsContainEffectArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::NewProp_ArguID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::NewProp_ArguID = { "ArguID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventIsContainEffectArgument_Parms, ArguID), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::NewProp_ArguID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::NewProp_ArguID_MetaData)) };
	void Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventIsContainEffectArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventIsContainEffectArgument_Parms), &Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::NewProp_ArguID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "IsContainEffectArgument", nullptr, nullptr, sizeof(LFLEffectComponent_eventIsContainEffectArgument_Parms), Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics
	{
		struct LFLEffectComponent_eventRemoveEffectArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::NewProp_RemoveID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::NewProp_RemoveID = { "RemoveID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventRemoveEffectArgument_Parms, RemoveID), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::NewProp_RemoveID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::NewProp_RemoveID_MetaData)) };
	void Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventRemoveEffectArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventRemoveEffectArgument_Parms), &Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::NewProp_RemoveID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "RemoveEffectArgument", nullptr, nullptr, sizeof(LFLEffectComponent_eventRemoveEffectArgument_Parms), Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics
	{
		struct LFLEffectComponent_eventSetAttributeData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventSetAttributeData_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventSetAttributeData_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Multiply_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventSetAttributeData_Parms, Multiply), METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Multiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Multiply_MetaData)) };
	void Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventSetAttributeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventSetAttributeData_Parms), &Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_Multiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Attribute Datas" },
		{ "Comment", "// Attribute Datas //////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
		{ "ToolTip", "Attribute Datas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "SetAttributeData", nullptr, nullptr, sizeof(LFLEffectComponent_eventSetAttributeData_Parms), Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics
	{
		struct LFLEffectComponent_eventSetEffectArguments_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_ArguArray_Inner = { "ArguArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_ArguArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_ArguArray = { "ArguArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLEffectComponent_eventSetEffectArguments_Parms, ArguArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_ArguArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_ArguArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_CombineArgu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_CombineArgu_SetBit(void* Obj)
	{
		((LFLEffectComponent_eventSetEffectArguments_Parms*)Obj)->CombineArgu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_CombineArgu = { "CombineArgu", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLEffectComponent_eventSetEffectArguments_Parms), &Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_CombineArgu_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_CombineArgu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_CombineArgu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_ArguArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_ArguArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::NewProp_CombineArgu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "Comment", "// Effect Arugments ///////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
		{ "ToolTip", "Effect Arugments" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLEffectComponent, nullptr, "SetEffectArguments", nullptr, nullptr, sizeof(LFLEffectComponent_eventSetEffectArguments_Parms), Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULFLEffectComponent_NoRegister()
	{
		return ULFLEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFLEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributeDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFLEffectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataMultiplyOffset, "AddAttributeDataMultiplyOffset" }, // 3992635060
		{ &Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataOffset, "AddAttributeDataOffset" }, // 3367374814
		{ &Z_Construct_UFunction_ULFLEffectComponent_AddAttributeDataValueOffset, "AddAttributeDataValueOffset" }, // 3545090876
		{ &Z_Construct_UFunction_ULFLEffectComponent_AddEffectArgument, "AddEffectArgument" }, // 1103827303
		{ &Z_Construct_UFunction_ULFLEffectComponent_CanRunEffect, "CanRunEffect" }, // 2758699124
		{ &Z_Construct_UFunction_ULFLEffectComponent_CanStopEffect, "CanStopEffect" }, // 2688939339
		{ &Z_Construct_UFunction_ULFLEffectComponent_GetAttributeData, "GetAttributeData" }, // 2927138128
		{ &Z_Construct_UFunction_ULFLEffectComponent_GetEffectArguments, "GetEffectArguments" }, // 2290928997
		{ &Z_Construct_UFunction_ULFLEffectComponent_GetSingleEffectArgument, "GetSingleEffectArgument" }, // 1580970903
		{ &Z_Construct_UFunction_ULFLEffectComponent_IsAttributeIDExist, "IsAttributeIDExist" }, // 3894033927
		{ &Z_Construct_UFunction_ULFLEffectComponent_IsContainEffectArgument, "IsContainEffectArgument" }, // 1291852762
		{ &Z_Construct_UFunction_ULFLEffectComponent_RemoveEffectArgument, "RemoveEffectArgument" }, // 974575691
		{ &Z_Construct_UFunction_ULFLEffectComponent_SetAttributeData, "SetAttributeData" }, // 1794117685
		{ &Z_Construct_UFunction_ULFLEffectComponent_SetEffectArguments, "SetEffectArguments" }, // 1430087853
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Ability/LFLEffectComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_AttributeDatas_Inner = { "AttributeDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityAttributeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_AttributeDatas_MetaData[] = {
		{ "Category", "LFLAbilityManagementComponent | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_AttributeDatas = { "AttributeDatas", nullptr, (EPropertyFlags)0x0010000001000021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLEffectComponent, AttributeDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_AttributeDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_AttributeDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_EffectArguments_Inner = { "EffectArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_EffectArguments_MetaData[] = {
		{ "BlueprintGetter", "GetEffectArguments" },
		{ "Category", "LFLAbilityManagementComponent | Variable" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_EffectArguments = { "EffectArguments", nullptr, (EPropertyFlags)0x0011000001000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLEffectComponent, EffectArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_EffectArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_EffectArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_Manager_MetaData[] = {
		{ "Category", "LFLAbilityManagementComponent | Variable" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x001100000008003c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLEffectComponent, Manager), Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLEffectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_AttributeDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_AttributeDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_EffectArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_EffectArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLEffectComponent_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLEffectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLEffectComponent_Statics::ClassParams = {
		&ULFLEffectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFLEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLEffectComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLEffectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLEffectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLEffectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLEffectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLEffectComponent, 3363176256);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLEffectComponent>()
	{
		return ULFLEffectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLEffectComponent(Z_Construct_UClass_ULFLEffectComponent, &ULFLEffectComponent::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLEffectComponent"), false, nullptr, nullptr, nullptr);

	void ULFLEffectComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AttributeDatas(TEXT("AttributeDatas"));
		static const FName Name_EffectArguments(TEXT("EffectArguments"));
		static const FName Name_Manager(TEXT("Manager"));

		const bool bIsValid = true
			&& Name_AttributeDatas == ClassReps[(int32)ENetFields_Private::AttributeDatas].Property->GetFName()
			&& Name_EffectArguments == ClassReps[(int32)ENetFields_Private::EffectArguments].Property->GetFName()
			&& Name_Manager == ClassReps[(int32)ENetFields_Private::Manager].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULFLEffectComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLEffectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
