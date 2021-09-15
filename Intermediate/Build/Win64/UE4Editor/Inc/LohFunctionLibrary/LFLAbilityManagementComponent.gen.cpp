// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Ability/LFLAbilityManagementComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLAbilityManagementComponent() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLSpellSpawnData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLSpellActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityArgumentData();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityComponentData();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityAttributeData();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLAbilityManagementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLEffectComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
class UScriptStruct* FLFLSpellSpawnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLSpellSpawnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLSpellSpawnData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLSpellSpawnData"), sizeof(FLFLSpellSpawnData), Get_Z_Construct_UScriptStruct_FLFLSpellSpawnData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLSpellSpawnData>()
{
	return FLFLSpellSpawnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLSpellSpawnData(FLFLSpellSpawnData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLSpellSpawnData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLSpellSpawnData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLSpellSpawnData()
	{
		UScriptStruct::DeferCppStructOps<FLFLSpellSpawnData>(FName(TEXT("LFLSpellSpawnData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLSpellSpawnData;
	struct Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpellClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpellArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpellArguments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLSpellSpawnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellClass_MetaData[] = {
		{ "Category", "LFLSpellSpawnData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellClass = { "SpellClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLSpellSpawnData, SpellClass), Z_Construct_UClass_ALFLSpellActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellArguments_Inner = { "SpellArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellArguments_MetaData[] = {
		{ "Category", "LFLSpellSpawnData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellArguments = { "SpellArguments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLSpellSpawnData, SpellArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellArguments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::NewProp_SpellArguments,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLSpellSpawnData",
		sizeof(FLFLSpellSpawnData),
		alignof(FLFLSpellSpawnData),
		Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLSpellSpawnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLSpellSpawnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLSpellSpawnData"), sizeof(FLFLSpellSpawnData), Get_Z_Construct_UScriptStruct_FLFLSpellSpawnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLSpellSpawnData_Hash() { return 633197666U; }
class UScriptStruct* FLFLAbilityComponentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLAbilityComponentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLAbilityComponentData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLAbilityComponentData"), sizeof(FLFLAbilityComponentData), Get_Z_Construct_UScriptStruct_FLFLAbilityComponentData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLAbilityComponentData>()
{
	return FLFLAbilityComponentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLAbilityComponentData(FLFLAbilityComponentData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLAbilityComponentData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLAbilityComponentData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLAbilityComponentData()
	{
		UScriptStruct::DeferCppStructOps<FLFLAbilityComponentData>(FName(TEXT("LFLAbilityComponentData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLAbilityComponentData;
	struct Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SerializedData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLAbilityComponentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "LFLAbilityComponentData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLAbilityComponentData, Class), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SerializedData_Inner = { "SerializedData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SerializedData_MetaData[] = {
		{ "Category", "LFLAbilityComponentData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SerializedData = { "SerializedData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLAbilityComponentData, SerializedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SerializedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SerializedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "Category", "LFLAbilityComponentData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLAbilityComponentData, SlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SerializedData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SerializedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::NewProp_SlotIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLAbilityComponentData",
		sizeof(FLFLAbilityComponentData),
		alignof(FLFLAbilityComponentData),
		Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityComponentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLAbilityComponentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLAbilityComponentData"), sizeof(FLFLAbilityComponentData), Get_Z_Construct_UScriptStruct_FLFLAbilityComponentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLAbilityComponentData_Hash() { return 3777014419U; }
class UScriptStruct* FLFLAbilityAttributeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLAbilityAttributeData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLAbilityAttributeData"), sizeof(FLFLAbilityAttributeData), Get_Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLAbilityAttributeData>()
{
	return FLFLAbilityAttributeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLAbilityAttributeData(FLFLAbilityAttributeData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLAbilityAttributeData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLAbilityAttributeData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLAbilityAttributeData()
	{
		UScriptStruct::DeferCppStructOps<FLFLAbilityAttributeData>(FName(TEXT("LFLAbilityAttributeData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLAbilityAttributeData;
	struct Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttributeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeMultiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttributeMultiply;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLAbilityAttributeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeID_MetaData[] = {
		{ "Category", "LFLAbilityArgumentData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeID = { "AttributeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLAbilityAttributeData, AttributeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeOffset_MetaData[] = {
		{ "Category", "LFLAbilityArgumentData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeOffset = { "AttributeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLAbilityAttributeData, AttributeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeMultiply_MetaData[] = {
		{ "Category", "LFLAbilityArgumentData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeMultiply = { "AttributeMultiply", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLAbilityAttributeData, AttributeMultiply), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeMultiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeMultiply_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::NewProp_AttributeMultiply,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLAbilityAttributeData",
		sizeof(FLFLAbilityAttributeData),
		alignof(FLFLAbilityAttributeData),
		Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityAttributeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLAbilityAttributeData"), sizeof(FLFLAbilityAttributeData), Get_Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Hash() { return 3912621636U; }
class UScriptStruct* FLFLAbilityArgumentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLAbilityArgumentData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLAbilityArgumentData"), sizeof(FLFLAbilityArgumentData), Get_Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLAbilityArgumentData>()
{
	return FLFLAbilityArgumentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLAbilityArgumentData(FLFLAbilityArgumentData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLAbilityArgumentData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLAbilityArgumentData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLAbilityArgumentData()
	{
		UScriptStruct::DeferCppStructOps<FLFLAbilityArgumentData>(FName(TEXT("LFLAbilityArgumentData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLAbilityArgumentData;
	struct Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArgumentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArgumentLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArgumentParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLAbilityArgumentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentID_MetaData[] = {
		{ "Category", "LFLAbilityArugmentData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentID = { "ArgumentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLAbilityArgumentData, ArgumentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentLevel_MetaData[] = {
		{ "Category", "LFLAbilityArugmentData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentLevel = { "ArgumentLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLAbilityArgumentData, ArgumentLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentParameter_MetaData[] = {
		{ "Category", "LFLAbilityArugmentData | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentParameter = { "ArgumentParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLAbilityArgumentData, ArgumentParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::NewProp_ArgumentParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLAbilityArgumentData",
		sizeof(FLFLAbilityArgumentData),
		alignof(FLFLAbilityArgumentData),
		Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLAbilityArgumentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLAbilityArgumentData"), sizeof(FLFLAbilityArgumentData), Get_Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Hash() { return 3352073329U; }
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execIsEffectRunning)
	{
		P_GET_OBJECT(UClass,Z_Param_EffectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEffectRunning(Z_Param_EffectClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execGetEffectRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLEffectComponent*>*)Z_Param__Result=P_THIS->GetEffectRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execStopAllEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StopCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllEffect(Z_Param_StopCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execStopEffect)
	{
		P_GET_OBJECT(ULFLEffectComponent,Z_Param_EffectComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_StopCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopEffect(Z_Param_EffectComponent,Z_Param_StopCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execRunEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_EffectClass);
		P_GET_TARRAY(FLFLAbilityArgumentData,Z_Param_EffectArguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RunEffect(Z_Param_EffectClass,Z_Param_EffectArguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execIsSpellRunning)
	{
		P_GET_OBJECT(UClass,Z_Param_SpellClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpellRunning(Z_Param_SpellClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execGetSpellRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ALFLSpellActor*>*)Z_Param__Result=P_THIS->GetSpellRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execStopAllSpell)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StopCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllSpell(Z_Param_StopCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execStopSpell)
	{
		P_GET_OBJECT(ALFLSpellActor,Z_Param_SpellActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_StopCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopSpell(Z_Param_SpellActor,Z_Param_StopCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execRunSpell)
	{
		P_GET_OBJECT(UClass,Z_Param_SpellClass);
		P_GET_OBJECT(AActor,Z_Param_SpawnTransformActor);
		P_GET_OBJECT(ULFLAbilityHandlerComponent,Z_Param_OwningAbility);
		P_GET_OBJECT(APawn,Z_Param_Instigator);
		P_GET_TARRAY(FLFLAbilityArgumentData,Z_Param_SpellArguments);
		P_GET_TARRAY(AActor*,Z_Param_SpellTargetActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RunSpell(Z_Param_SpellClass,Z_Param_SpawnTransformActor,Z_Param_OwningAbility,Z_Param_Instigator,Z_Param_SpellArguments,Z_Param_SpellTargetActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execGetSpellSpawnTransform)
	{
		P_GET_OBJECT(AActor,Z_Param_SpawnTransformActor);
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_SpellArguments);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SpellTargetActors);
		P_GET_OBJECT(ALFLSpellActor,Z_Param_PreviousSpell);
		P_GET_OBJECT(ULFLAbilityHandlerComponent,Z_Param_OwningAbility);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LifeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSpellSpawnTransform_Implementation(Z_Param_SpawnTransformActor,Z_Param_Out_SpellArguments,Z_Param_Out_SpellTargetActors,Z_Param_PreviousSpell,Z_Param_OwningAbility,Z_Param_Out_LifeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execClearPreviousSpell)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPreviousSpell();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execGetAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilitySlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLAbilityHandlerComponent**)Z_Param__Result=P_THIS->GetAbility(Z_Param_AbilitySlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execIsAbilityRunning)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilitySlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAbilityRunning(Z_Param_AbilitySlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execIsOwnedAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOwnedAbility(Z_Param_AbilityClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execSetAbilitySpellCallTree)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilitySlotIndex);
		P_GET_TARRAY_REF(FLFLSpellSpawnData,Z_Param_Out_TreeData);
		P_GET_TARRAY_REF(int32,Z_Param_Out_TreeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAbilitySpellCallTree(Z_Param_AbilitySlotIndex,Z_Param_Out_TreeData,Z_Param_Out_TreeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execResetAbilityCoolDown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilitySlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetAbilityCoolDown(Z_Param_AbilitySlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execCancelAllAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CancelCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAllAbility(Z_Param_CancelCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execCancelAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilitySlotIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_CancelCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CancelAbility(Z_Param_AbilitySlotIndex,Z_Param_CancelCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execRunAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilitySlotIndex);
		P_GET_UBOOL(Z_Param_ClearTargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RunAbility(Z_Param_AbilitySlotIndex,Z_Param_ClearTargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execRemoveAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilitySlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAbility(Z_Param_AbilitySlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execAssignAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilitySlotIndex);
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_AbilityArguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLAbilityHandlerComponent**)Z_Param__Result=P_THIS->AssignAbility(Z_Param_AbilityClass,Z_Param_AbilitySlotIndex,Z_Param_Out_AbilityArguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execIsContainGlobalArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArguID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContainGlobalArgument(Z_Param_ArguID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execGetSingleGlobalArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArguID);
		P_GET_STRUCT(FLFLAbilityArgumentData,Z_Param_Argument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSingleGlobalArgument(Z_Param_ArguID,Z_Param_Argument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execGetGlobalArguments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFLAbilityArgumentData>*)Z_Param__Result=P_THIS->GetGlobalArguments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execRemoveGlobalArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArguID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveGlobalArgument(Z_Param_ArguID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execAddGlobalArgument)
	{
		P_GET_STRUCT(FLFLAbilityArgumentData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGlobalArgument(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execSetGlobalArguments)
	{
		P_GET_TARRAY(FLFLAbilityArgumentData,Z_Param_ArguArray);
		P_GET_UBOOL(Z_Param_CombineArgu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlobalArguments(Z_Param_ArguArray,Z_Param_CombineArgu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execGetTargetActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetTargetActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execRemoveTargetActors)
	{
		P_GET_OBJECT(AActor,Z_Param_RemoveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTargetActors(Z_Param_RemoveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execAddTargetActors)
	{
		P_GET_OBJECT(AActor,Z_Param_AddData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTargetActors(Z_Param_AddData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execSetTargetActors)
	{
		P_GET_TARRAY(AActor*,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActors(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execCollectAttributeDatas)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxCollectIndex);
		P_GET_UBOOL(Z_Param_Ability);
		P_GET_UBOOL(Z_Param_Effect);
		P_GET_TARRAY_REF(float,Z_Param_Out_Offset);
		P_GET_TARRAY_REF(float,Z_Param_Out_Multiply);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectAttributeDatas(Z_Param_MaxCollectIndex,Z_Param_Ability,Z_Param_Effect,Z_Param_Out_Offset,Z_Param_Out_Multiply);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execIsContainArgumentData)
	{
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_ArguArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_ArguID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULFLAbilityManagementComponent::IsContainArgumentData(Z_Param_Out_ArguArray,Z_Param_ArguID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execReplaceSingleArgumentData)
	{
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_ArguArray);
		P_GET_STRUCT_REF(FLFLAbilityArgumentData,Z_Param_Out_ArguData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULFLAbilityManagementComponent::ReplaceSingleArgumentData(Z_Param_Out_ArguArray,Z_Param_Out_ArguData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execCombineArgumentDatas)
	{
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_ArguArray);
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_CombineArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULFLAbilityManagementComponent::CombineArgumentDatas(Z_Param_Out_ArguArray,Z_Param_Out_CombineArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execFindArgumentData)
	{
		P_GET_TARRAY_REF(FLFLAbilityArgumentData,Z_Param_Out_ArguArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_ArguID);
		P_GET_STRUCT_REF(FLFLAbilityArgumentData,Z_Param_Out_Argu);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULFLAbilityManagementComponent::FindArgumentData(Z_Param_Out_ArguArray,Z_Param_ArguID,Z_Param_Out_Argu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execDeserializeData)
	{
		P_GET_TARRAY_REF(FLFLAbilityComponentData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeserializeData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLAbilityManagementComponent::execSerializeData)
	{
		P_GET_TARRAY_REF(FLFLAbilityComponentData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SerializeData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	static FName NAME_ULFLAbilityManagementComponent_GetSpellSpawnTransform = FName(TEXT("GetSpellSpawnTransform"));
	FTransform ULFLAbilityManagementComponent::GetSpellSpawnTransform(AActor* SpawnTransformActor, TArray<FLFLAbilityArgumentData> const& SpellArguments, TArray<AActor*> const& SpellTargetActors, ALFLSpellActor* PreviousSpell, ULFLAbilityHandlerComponent* OwningAbility, float& LifeTime)
	{
		LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms Parms;
		Parms.SpawnTransformActor=SpawnTransformActor;
		Parms.SpellArguments=SpellArguments;
		Parms.SpellTargetActors=SpellTargetActors;
		Parms.PreviousSpell=PreviousSpell;
		Parms.OwningAbility=OwningAbility;
		Parms.LifeTime=LifeTime;
		ProcessEvent(FindFunctionChecked(NAME_ULFLAbilityManagementComponent_GetSpellSpawnTransform),&Parms);
		LifeTime=Parms.LifeTime;
		return Parms.ReturnValue;
	}
	void ULFLAbilityManagementComponent::StaticRegisterNativesULFLAbilityManagementComponent()
	{
		UClass* Class = ULFLAbilityManagementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGlobalArgument", &ULFLAbilityManagementComponent::execAddGlobalArgument },
			{ "AddTargetActors", &ULFLAbilityManagementComponent::execAddTargetActors },
			{ "AssignAbility", &ULFLAbilityManagementComponent::execAssignAbility },
			{ "CancelAbility", &ULFLAbilityManagementComponent::execCancelAbility },
			{ "CancelAllAbility", &ULFLAbilityManagementComponent::execCancelAllAbility },
			{ "ClearPreviousSpell", &ULFLAbilityManagementComponent::execClearPreviousSpell },
			{ "CollectAttributeDatas", &ULFLAbilityManagementComponent::execCollectAttributeDatas },
			{ "CombineArgumentDatas", &ULFLAbilityManagementComponent::execCombineArgumentDatas },
			{ "DeserializeData", &ULFLAbilityManagementComponent::execDeserializeData },
			{ "FindArgumentData", &ULFLAbilityManagementComponent::execFindArgumentData },
			{ "GetAbility", &ULFLAbilityManagementComponent::execGetAbility },
			{ "GetEffectRunning", &ULFLAbilityManagementComponent::execGetEffectRunning },
			{ "GetGlobalArguments", &ULFLAbilityManagementComponent::execGetGlobalArguments },
			{ "GetSingleGlobalArgument", &ULFLAbilityManagementComponent::execGetSingleGlobalArgument },
			{ "GetSpellRunning", &ULFLAbilityManagementComponent::execGetSpellRunning },
			{ "GetSpellSpawnTransform", &ULFLAbilityManagementComponent::execGetSpellSpawnTransform },
			{ "GetTargetActors", &ULFLAbilityManagementComponent::execGetTargetActors },
			{ "IsAbilityRunning", &ULFLAbilityManagementComponent::execIsAbilityRunning },
			{ "IsContainArgumentData", &ULFLAbilityManagementComponent::execIsContainArgumentData },
			{ "IsContainGlobalArgument", &ULFLAbilityManagementComponent::execIsContainGlobalArgument },
			{ "IsEffectRunning", &ULFLAbilityManagementComponent::execIsEffectRunning },
			{ "IsOwnedAbility", &ULFLAbilityManagementComponent::execIsOwnedAbility },
			{ "IsSpellRunning", &ULFLAbilityManagementComponent::execIsSpellRunning },
			{ "RemoveAbility", &ULFLAbilityManagementComponent::execRemoveAbility },
			{ "RemoveGlobalArgument", &ULFLAbilityManagementComponent::execRemoveGlobalArgument },
			{ "RemoveTargetActors", &ULFLAbilityManagementComponent::execRemoveTargetActors },
			{ "ReplaceSingleArgumentData", &ULFLAbilityManagementComponent::execReplaceSingleArgumentData },
			{ "ResetAbilityCoolDown", &ULFLAbilityManagementComponent::execResetAbilityCoolDown },
			{ "RunAbility", &ULFLAbilityManagementComponent::execRunAbility },
			{ "RunEffect", &ULFLAbilityManagementComponent::execRunEffect },
			{ "RunSpell", &ULFLAbilityManagementComponent::execRunSpell },
			{ "SerializeData", &ULFLAbilityManagementComponent::execSerializeData },
			{ "SetAbilitySpellCallTree", &ULFLAbilityManagementComponent::execSetAbilitySpellCallTree },
			{ "SetGlobalArguments", &ULFLAbilityManagementComponent::execSetGlobalArguments },
			{ "SetTargetActors", &ULFLAbilityManagementComponent::execSetTargetActors },
			{ "StopAllEffect", &ULFLAbilityManagementComponent::execStopAllEffect },
			{ "StopAllSpell", &ULFLAbilityManagementComponent::execStopAllSpell },
			{ "StopEffect", &ULFLAbilityManagementComponent::execStopEffect },
			{ "StopSpell", &ULFLAbilityManagementComponent::execStopSpell },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics
	{
		struct LFLAbilityManagementComponent_eventAddGlobalArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventAddGlobalArgument_Parms, Data), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "AddGlobalArgument", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventAddGlobalArgument_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics
	{
		struct LFLAbilityManagementComponent_eventAddTargetActors_Parms
		{
			AActor* AddData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::NewProp_AddData = { "AddData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventAddTargetActors_Parms, AddData), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::NewProp_AddData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | TargetActors" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "AddTargetActors", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventAddTargetActors_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics
	{
		struct LFLAbilityManagementComponent_eventAssignAbility_Parms
		{
			TSubclassOf<ULFLAbilityHandlerComponent>  AbilityClass;
			int32 AbilitySlotIndex;
			TArray<FLFLAbilityArgumentData> AbilityArguments;
			ULFLAbilityHandlerComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilitySlotIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventAssignAbility_Parms, AbilityClass), Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilitySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilitySlotIndex = { "AbilitySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventAssignAbility_Parms, AbilitySlotIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilitySlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilitySlotIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilityArguments_Inner = { "AbilityArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilityArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilityArguments = { "AbilityArguments", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventAssignAbility_Parms, AbilityArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilityArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilityArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventAssignAbility_Parms, ReturnValue), Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilityClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilitySlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilityArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_AbilityArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "Comment", "// Owned Ability //////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
		{ "ToolTip", "Owned Ability" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "AssignAbility", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventAssignAbility_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics
	{
		struct LFLAbilityManagementComponent_eventCancelAbility_Parms
		{
			int32 AbilitySlotIndex;
			int32 CancelCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilitySlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CancelCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_AbilitySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_AbilitySlotIndex = { "AbilitySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventCancelAbility_Parms, AbilitySlotIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_AbilitySlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_AbilitySlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_CancelCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_CancelCode = { "CancelCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventCancelAbility_Parms, CancelCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_CancelCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_CancelCode_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventCancelAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventCancelAbility_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_AbilitySlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_CancelCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "CancelAbility", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventCancelAbility_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics
	{
		struct LFLAbilityManagementComponent_eventCancelAllAbility_Parms
		{
			int32 CancelCode;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::NewProp_CancelCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::NewProp_CancelCode = { "CancelCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventCancelAllAbility_Parms, CancelCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::NewProp_CancelCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::NewProp_CancelCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::NewProp_CancelCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "CancelAllAbility", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventCancelAllAbility_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_ClearPreviousSpell_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_ClearPreviousSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Spell" },
		{ "Comment", "// Running Spell //////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
		{ "ToolTip", "Running Spell" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_ClearPreviousSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "ClearPreviousSpell", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_ClearPreviousSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_ClearPreviousSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_ClearPreviousSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_ClearPreviousSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics
	{
		struct LFLAbilityManagementComponent_eventCollectAttributeDatas_Parms
		{
			int32 MaxCollectIndex;
			bool Ability;
			bool Effect;
			TArray<float> Offset;
			TArray<float> Multiply;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCollectIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCollectIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static void NewProp_Ability_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static void NewProp_Effect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiply_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Multiply;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_MaxCollectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_MaxCollectIndex = { "MaxCollectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventCollectAttributeDatas_Parms, MaxCollectIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_MaxCollectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_MaxCollectIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Ability_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventCollectAttributeDatas_Parms*)Obj)->Ability = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventCollectAttributeDatas_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Ability_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Effect_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventCollectAttributeDatas_Parms*)Obj)->Effect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventCollectAttributeDatas_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Effect_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Effect_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Offset_Inner = { "Offset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventCollectAttributeDatas_Parms, Offset), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Multiply_Inner = { "Multiply", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventCollectAttributeDatas_Parms, Multiply), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_MaxCollectIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Offset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Multiply_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::NewProp_Multiply,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | AttributeDatas" },
		{ "Comment", "// Attribute Datas //////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
		{ "ToolTip", "Attribute Datas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "CollectAttributeDatas", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventCollectAttributeDatas_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics
	{
		struct LFLAbilityManagementComponent_eventCombineArgumentDatas_Parms
		{
			TArray<FLFLAbilityArgumentData> ArguArray;
			TArray<FLFLAbilityArgumentData> CombineArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArguArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArguArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CombineArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombineArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CombineArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_ArguArray_Inner = { "ArguArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_ArguArray = { "ArguArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventCombineArgumentDatas_Parms, ArguArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_CombineArray_Inner = { "CombineArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_CombineArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_CombineArray = { "CombineArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventCombineArgumentDatas_Parms, CombineArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_CombineArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_CombineArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_ArguArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_ArguArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_CombineArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::NewProp_CombineArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "CombineArgumentDatas", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventCombineArgumentDatas_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics
	{
		struct LFLAbilityManagementComponent_eventDeserializeData_Parms
		{
			TArray<FLFLAbilityComponentData> Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityComponentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventDeserializeData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventDeserializeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventDeserializeData_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Serializing" },
		{ "Comment", "// Deserialize Data and respawn every component without spell actor\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
		{ "ToolTip", "Deserialize Data and respawn every component without spell actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "DeserializeData", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventDeserializeData_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics
	{
		struct LFLAbilityManagementComponent_eventFindArgumentData_Parms
		{
			TArray<FLFLAbilityArgumentData> ArguArray;
			int32 ArguID;
			FLFLAbilityArgumentData Argu;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArguArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArguArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArguArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArguID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Argu;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ArguArray_Inner = { "ArguArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ArguArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ArguArray = { "ArguArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventFindArgumentData_Parms, ArguArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ArguArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ArguArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ArguID = { "ArguID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventFindArgumentData_Parms, ArguID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_Argu = { "Argu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventFindArgumentData_Parms, Argu), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventFindArgumentData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ArguArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ArguArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ArguID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_Argu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Argument Datas" },
		{ "Comment", "// Argument Datas //////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
		{ "ToolTip", "Argument Datas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "FindArgumentData", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventFindArgumentData_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics
	{
		struct LFLAbilityManagementComponent_eventGetAbility_Parms
		{
			int32 AbilitySlotIndex;
			ULFLAbilityHandlerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilitySlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_AbilitySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_AbilitySlotIndex = { "AbilitySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetAbility_Parms, AbilitySlotIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_AbilitySlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_AbilitySlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetAbility_Parms, ReturnValue), Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_AbilitySlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "GetAbility", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventGetAbility_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics
	{
		struct LFLAbilityManagementComponent_eventGetEffectRunning_Parms
		{
			TArray<ULFLEffectComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLEffectComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetEffectRunning_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Effect" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "GetEffectRunning", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventGetEffectRunning_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics
	{
		struct LFLAbilityManagementComponent_eventGetGlobalArguments_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetGlobalArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "GetGlobalArguments", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventGetGlobalArguments_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics
	{
		struct LFLAbilityManagementComponent_eventGetSingleGlobalArgument_Parms
		{
			int32 ArguID;
			FLFLAbilityArgumentData Argument;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArguID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArguID;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_ArguID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_ArguID = { "ArguID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSingleGlobalArgument_Parms, ArguID), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_ArguID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_ArguID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSingleGlobalArgument_Parms, Argument), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventGetSingleGlobalArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventGetSingleGlobalArgument_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_ArguID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_Argument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "GetSingleGlobalArgument", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventGetSingleGlobalArgument_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics
	{
		struct LFLAbilityManagementComponent_eventGetSpellRunning_Parms
		{
			TArray<ALFLSpellActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALFLSpellActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSpellRunning_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Spell" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "GetSpellRunning", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventGetSpellRunning_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnTransformActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpellArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpellArguments;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpellTargetActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellTargetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpellTargetActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousSpell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpawnTransformActor = { "SpawnTransformActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms, SpawnTransformActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellArguments_Inner = { "SpellArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellArguments = { "SpellArguments", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms, SpellArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellArguments_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellTargetActors_Inner = { "SpellTargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellTargetActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellTargetActors = { "SpellTargetActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms, SpellTargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellTargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellTargetActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_PreviousSpell = { "PreviousSpell", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms, PreviousSpell), Z_Construct_UClass_ALFLSpellActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_OwningAbility_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms, OwningAbility), Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_OwningAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_OwningAbility_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms, LifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpawnTransformActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellTargetActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_SpellTargetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_PreviousSpell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_LifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Spell" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "GetSpellSpawnTransform", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1CC20C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics
	{
		struct LFLAbilityManagementComponent_eventGetTargetActors_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventGetTargetActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | TargetActors" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "GetTargetActors", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventGetTargetActors_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics
	{
		struct LFLAbilityManagementComponent_eventIsAbilityRunning_Parms
		{
			int32 AbilitySlotIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilitySlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::NewProp_AbilitySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::NewProp_AbilitySlotIndex = { "AbilitySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventIsAbilityRunning_Parms, AbilitySlotIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::NewProp_AbilitySlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::NewProp_AbilitySlotIndex_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventIsAbilityRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventIsAbilityRunning_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::NewProp_AbilitySlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "IsAbilityRunning", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventIsAbilityRunning_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics
	{
		struct LFLAbilityManagementComponent_eventIsContainArgumentData_Parms
		{
			TArray<FLFLAbilityArgumentData> ArguArray;
			int32 ArguID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArguArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArguArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArguArray;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguArray_Inner = { "ArguArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguArray = { "ArguArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventIsContainArgumentData_Parms, ArguArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguID = { "ArguID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventIsContainArgumentData_Parms, ArguID), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguID_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventIsContainArgumentData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventIsContainArgumentData_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ArguID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Argument Datas" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "IsContainArgumentData", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventIsContainArgumentData_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics
	{
		struct LFLAbilityManagementComponent_eventIsContainGlobalArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::NewProp_ArguID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::NewProp_ArguID = { "ArguID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventIsContainGlobalArgument_Parms, ArguID), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::NewProp_ArguID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::NewProp_ArguID_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventIsContainGlobalArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventIsContainGlobalArgument_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::NewProp_ArguID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "IsContainGlobalArgument", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventIsContainGlobalArgument_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics
	{
		struct LFLAbilityManagementComponent_eventIsEffectRunning_Parms
		{
			TSubclassOf<ULFLEffectComponent>  EffectClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EffectClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventIsEffectRunning_Parms, EffectClass), Z_Construct_UClass_ULFLEffectComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventIsEffectRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventIsEffectRunning_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::NewProp_EffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Effect" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "IsEffectRunning", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventIsEffectRunning_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics
	{
		struct LFLAbilityManagementComponent_eventIsOwnedAbility_Parms
		{
			TSubclassOf<ULFLAbilityHandlerComponent>  AbilityClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventIsOwnedAbility_Parms, AbilityClass), Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventIsOwnedAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventIsOwnedAbility_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::NewProp_AbilityClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "IsOwnedAbility", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventIsOwnedAbility_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics
	{
		struct LFLAbilityManagementComponent_eventIsSpellRunning_Parms
		{
			TSubclassOf<ALFLSpellActor>  SpellClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpellClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::NewProp_SpellClass = { "SpellClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventIsSpellRunning_Parms, SpellClass), Z_Construct_UClass_ALFLSpellActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventIsSpellRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventIsSpellRunning_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::NewProp_SpellClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Spell" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "IsSpellRunning", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventIsSpellRunning_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics
	{
		struct LFLAbilityManagementComponent_eventRemoveAbility_Parms
		{
			int32 AbilitySlotIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilitySlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::NewProp_AbilitySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::NewProp_AbilitySlotIndex = { "AbilitySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRemoveAbility_Parms, AbilitySlotIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::NewProp_AbilitySlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::NewProp_AbilitySlotIndex_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventRemoveAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventRemoveAbility_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::NewProp_AbilitySlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "RemoveAbility", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventRemoveAbility_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics
	{
		struct LFLAbilityManagementComponent_eventRemoveGlobalArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::NewProp_ArguID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::NewProp_ArguID = { "ArguID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRemoveGlobalArgument_Parms, ArguID), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::NewProp_ArguID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::NewProp_ArguID_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventRemoveGlobalArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventRemoveGlobalArgument_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::NewProp_ArguID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "RemoveGlobalArgument", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventRemoveGlobalArgument_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics
	{
		struct LFLAbilityManagementComponent_eventRemoveTargetActors_Parms
		{
			AActor* RemoveData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::NewProp_RemoveData = { "RemoveData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRemoveTargetActors_Parms, RemoveData), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventRemoveTargetActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventRemoveTargetActors_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::NewProp_RemoveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | TargetActors" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "RemoveTargetActors", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventRemoveTargetActors_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics
	{
		struct LFLAbilityManagementComponent_eventReplaceSingleArgumentData_Parms
		{
			TArray<FLFLAbilityArgumentData> ArguArray;
			FLFLAbilityArgumentData ArguData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArguArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArguArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArguData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ArguArray_Inner = { "ArguArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ArguArray = { "ArguArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventReplaceSingleArgumentData_Parms, ArguArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ArguData = { "ArguData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventReplaceSingleArgumentData_Parms, ArguData), Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventReplaceSingleArgumentData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventReplaceSingleArgumentData_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ArguArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ArguArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ArguData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "ReplaceSingleArgumentData", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventReplaceSingleArgumentData_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics
	{
		struct LFLAbilityManagementComponent_eventResetAbilityCoolDown_Parms
		{
			int32 AbilitySlotIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilitySlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::NewProp_AbilitySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::NewProp_AbilitySlotIndex = { "AbilitySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventResetAbilityCoolDown_Parms, AbilitySlotIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::NewProp_AbilitySlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::NewProp_AbilitySlotIndex_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventResetAbilityCoolDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventResetAbilityCoolDown_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::NewProp_AbilitySlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "ResetAbilityCoolDown", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventResetAbilityCoolDown_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics
	{
		struct LFLAbilityManagementComponent_eventRunAbility_Parms
		{
			int32 AbilitySlotIndex;
			bool ClearTargetActor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilitySlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearTargetActor_MetaData[];
#endif
		static void NewProp_ClearTargetActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearTargetActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_AbilitySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_AbilitySlotIndex = { "AbilitySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunAbility_Parms, AbilitySlotIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_AbilitySlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_AbilitySlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ClearTargetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ClearTargetActor_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventRunAbility_Parms*)Obj)->ClearTargetActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ClearTargetActor = { "ClearTargetActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventRunAbility_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ClearTargetActor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ClearTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ClearTargetActor_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventRunAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventRunAbility_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_AbilitySlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ClearTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "RunAbility", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventRunAbility_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics
	{
		struct LFLAbilityManagementComponent_eventRunEffect_Parms
		{
			TSubclassOf<ULFLEffectComponent>  EffectClass;
			TArray<FLFLAbilityArgumentData> EffectArguments;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EffectClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectArguments;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunEffect_Parms, EffectClass), Z_Construct_UClass_ULFLEffectComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_EffectArguments_Inner = { "EffectArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_EffectArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_EffectArguments = { "EffectArguments", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunEffect_Parms, EffectArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_EffectArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_EffectArguments_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunEffect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_EffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_EffectArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_EffectArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Effect" },
		{ "Comment", "// Running Effect //////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
		{ "ToolTip", "Running Effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "RunEffect", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventRunEffect_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics
	{
		struct LFLAbilityManagementComponent_eventRunSpell_Parms
		{
			TSubclassOf<ALFLSpellActor>  SpellClass;
			AActor* SpawnTransformActor;
			ULFLAbilityHandlerComponent* OwningAbility;
			APawn* Instigator;
			TArray<FLFLAbilityArgumentData> SpellArguments;
			TArray<AActor*> SpellTargetActors;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpellClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnTransformActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpellArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpellArguments;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpellTargetActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellTargetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpellTargetActors;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellClass = { "SpellClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunSpell_Parms, SpellClass), Z_Construct_UClass_ALFLSpellActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpawnTransformActor = { "SpawnTransformActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunSpell_Parms, SpawnTransformActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_OwningAbility_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunSpell_Parms, OwningAbility), Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_OwningAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_OwningAbility_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunSpell_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellArguments_Inner = { "SpellArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellArguments = { "SpellArguments", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunSpell_Parms, SpellArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellArguments_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellTargetActors_Inner = { "SpellTargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellTargetActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellTargetActors = { "SpellTargetActors", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunSpell_Parms, SpellTargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellTargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellTargetActors_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventRunSpell_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpawnTransformActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellTargetActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_SpellTargetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Spell" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "RunSpell", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventRunSpell_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics
	{
		struct LFLAbilityManagementComponent_eventSerializeData_Parms
		{
			TArray<FLFLAbilityComponentData> Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityComponentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventSerializeData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventSerializeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventSerializeData_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Serializing" },
		{ "Comment", "// Serialize Data to something can be save. Warning Spell Actor cannot be Serialize\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
		{ "ToolTip", "Serialize Data to something can be save. Warning Spell Actor cannot be Serialize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "SerializeData", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventSerializeData_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics
	{
		struct LFLAbilityManagementComponent_eventSetAbilitySpellCallTree_Parms
		{
			int32 AbilitySlotIndex;
			TArray<FLFLSpellSpawnData> TreeData;
			TArray<int32> TreeIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilitySlotIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TreeData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreeData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TreeIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_AbilitySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_AbilitySlotIndex = { "AbilitySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventSetAbilitySpellCallTree_Parms, AbilitySlotIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_AbilitySlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_AbilitySlotIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeData_Inner = { "TreeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLSpellSpawnData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeData = { "TreeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventSetAbilitySpellCallTree_Parms, TreeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeIndex_Inner = { "TreeIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeIndex = { "TreeIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventSetAbilitySpellCallTree_Parms, TreeIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeIndex_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventSetAbilitySpellCallTree_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventSetAbilitySpellCallTree_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_AbilitySlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_TreeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Owned Ability" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "SetAbilitySpellCallTree", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventSetAbilitySpellCallTree_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics
	{
		struct LFLAbilityManagementComponent_eventSetGlobalArguments_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_ArguArray_Inner = { "ArguArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_ArguArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_ArguArray = { "ArguArray", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventSetGlobalArguments_Parms, ArguArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_ArguArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_ArguArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_CombineArgu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_CombineArgu_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventSetGlobalArguments_Parms*)Obj)->CombineArgu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_CombineArgu = { "CombineArgu", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventSetGlobalArguments_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_CombineArgu_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_CombineArgu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_CombineArgu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_ArguArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_ArguArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::NewProp_CombineArgu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | GlobalArguments" },
		{ "Comment", "// Global Arugments //////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
		{ "ToolTip", "Global Arugments" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "SetGlobalArguments", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventSetGlobalArguments_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics
	{
		struct LFLAbilityManagementComponent_eventSetTargetActors_Parms
		{
			TArray<AActor*> Data;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventSetTargetActors_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | TargetActors" },
		{ "Comment", "// Target Actors //////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
		{ "ToolTip", "Target Actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "SetTargetActors", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventSetTargetActors_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics
	{
		struct LFLAbilityManagementComponent_eventStopAllEffect_Parms
		{
			int32 StopCode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StopCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::NewProp_StopCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::NewProp_StopCode = { "StopCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventStopAllEffect_Parms, StopCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::NewProp_StopCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::NewProp_StopCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::NewProp_StopCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Effect" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "StopAllEffect", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventStopAllEffect_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics
	{
		struct LFLAbilityManagementComponent_eventStopAllSpell_Parms
		{
			int32 StopCode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StopCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::NewProp_StopCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::NewProp_StopCode = { "StopCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventStopAllSpell_Parms, StopCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::NewProp_StopCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::NewProp_StopCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::NewProp_StopCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Spell" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "StopAllSpell", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventStopAllSpell_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics
	{
		struct LFLAbilityManagementComponent_eventStopEffect_Parms
		{
			ULFLEffectComponent* EffectComponent;
			int32 StopCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StopCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_EffectComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_EffectComponent = { "EffectComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventStopEffect_Parms, EffectComponent), Z_Construct_UClass_ULFLEffectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_EffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_EffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_StopCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_StopCode = { "StopCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventStopEffect_Parms, StopCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_StopCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_StopCode_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventStopEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventStopEffect_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_EffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_StopCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Effect" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "StopEffect", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventStopEffect_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics
	{
		struct LFLAbilityManagementComponent_eventStopSpell_Parms
		{
			ALFLSpellActor* SpellActor;
			int32 StopCode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpellActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StopCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_SpellActor = { "SpellActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventStopSpell_Parms, SpellActor), Z_Construct_UClass_ALFLSpellActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_StopCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_StopCode = { "StopCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLAbilityManagementComponent_eventStopSpell_Parms, StopCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_StopCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_StopCode_MetaData)) };
	void Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLAbilityManagementComponent_eventStopSpell_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLAbilityManagementComponent_eventStopSpell_Parms), &Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_SpellActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_StopCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLAbilityManagementComponent | Running Spell" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLAbilityManagementComponent, nullptr, "StopSpell", nullptr, nullptr, sizeof(LFLAbilityManagementComponent_eventStopSpell_Parms), Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULFLAbilityManagementComponent_NoRegister()
	{
		return ULFLAbilityManagementComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFLAbilityManagementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedSerializeData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedSerializeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SavedSerializeData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalArguments;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousCastSpell_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousCastSpell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAbilityNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAbilityNum;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunningSpell_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningSpell_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RunningSpell;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunningEffect_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RunningEffect;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedAbility_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwnedAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_AddGlobalArgument, "AddGlobalArgument" }, // 2761109729
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_AddTargetActors, "AddTargetActors" }, // 2492192404
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_AssignAbility, "AssignAbility" }, // 3047341989
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAbility, "CancelAbility" }, // 28266132
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_CancelAllAbility, "CancelAllAbility" }, // 3516219951
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_ClearPreviousSpell, "ClearPreviousSpell" }, // 4229118631
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_CollectAttributeDatas, "CollectAttributeDatas" }, // 3382100193
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_CombineArgumentDatas, "CombineArgumentDatas" }, // 3639988119
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_DeserializeData, "DeserializeData" }, // 115009628
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_FindArgumentData, "FindArgumentData" }, // 3019726400
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_GetAbility, "GetAbility" }, // 935262220
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_GetEffectRunning, "GetEffectRunning" }, // 3812908991
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_GetGlobalArguments, "GetGlobalArguments" }, // 4174656000
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSingleGlobalArgument, "GetSingleGlobalArgument" }, // 1377687856
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellRunning, "GetSpellRunning" }, // 2967551878
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_GetSpellSpawnTransform, "GetSpellSpawnTransform" }, // 2770681968
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_GetTargetActors, "GetTargetActors" }, // 2032515624
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsAbilityRunning, "IsAbilityRunning" }, // 2348142287
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainArgumentData, "IsContainArgumentData" }, // 4269600746
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsContainGlobalArgument, "IsContainGlobalArgument" }, // 1148444605
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsEffectRunning, "IsEffectRunning" }, // 1639439765
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsOwnedAbility, "IsOwnedAbility" }, // 957737380
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_IsSpellRunning, "IsSpellRunning" }, // 2204910116
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveAbility, "RemoveAbility" }, // 74857005
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveGlobalArgument, "RemoveGlobalArgument" }, // 314494926
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_RemoveTargetActors, "RemoveTargetActors" }, // 1356035526
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_ReplaceSingleArgumentData, "ReplaceSingleArgumentData" }, // 2458244787
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_ResetAbilityCoolDown, "ResetAbilityCoolDown" }, // 2568373554
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_RunAbility, "RunAbility" }, // 2072433765
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_RunEffect, "RunEffect" }, // 84310396
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_RunSpell, "RunSpell" }, // 1578765550
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_SerializeData, "SerializeData" }, // 1285473703
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_SetAbilitySpellCallTree, "SetAbilitySpellCallTree" }, // 3736373329
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_SetGlobalArguments, "SetGlobalArguments" }, // 218076769
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_SetTargetActors, "SetTargetActors" }, // 3983162021
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllEffect, "StopAllEffect" }, // 1112673168
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_StopAllSpell, "StopAllSpell" }, // 4286156294
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_StopEffect, "StopEffect" }, // 2126698685
		{ &Z_Construct_UFunction_ULFLAbilityManagementComponent_StopSpell, "StopSpell" }, // 2520973498
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Ability/LFLAbilityManagementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_SavedSerializeData_Inner = { "SavedSerializeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityComponentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_SavedSerializeData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_SavedSerializeData = { "SavedSerializeData", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityManagementComponent, SavedSerializeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_SavedSerializeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_SavedSerializeData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_GlobalArguments_Inner = { "GlobalArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLAbilityArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_GlobalArguments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_GlobalArguments = { "GlobalArguments", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityManagementComponent, GlobalArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_GlobalArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_GlobalArguments_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_TargetActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityManagementComponent, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_TargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_TargetActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_PreviousCastSpell_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_PreviousCastSpell = { "PreviousCastSpell", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityManagementComponent, PreviousCastSpell), Z_Construct_UClass_ALFLSpellActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_PreviousCastSpell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_PreviousCastSpell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_MaxAbilityNum_MetaData[] = {
		{ "Category", "LFLAbilityManagementComponent | Variable" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_MaxAbilityNum = { "MaxAbilityNum", nullptr, (EPropertyFlags)0x0010000001000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityManagementComponent, MaxAbilityNum), METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_MaxAbilityNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_MaxAbilityNum_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningSpell_Inner = { "RunningSpell", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALFLSpellActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningSpell_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningSpell = { "RunningSpell", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityManagementComponent, RunningSpell), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningSpell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningSpell_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningEffect_Inner = { "RunningEffect", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLEffectComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningEffect = { "RunningEffect", nullptr, (EPropertyFlags)0x0010008000000028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityManagementComponent, RunningEffect), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningEffect_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_OwnedAbility_Inner = { "OwnedAbility", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLAbilityHandlerComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_OwnedAbility_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ability/LFLAbilityManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_OwnedAbility = { "OwnedAbility", nullptr, (EPropertyFlags)0x0010008000000028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLAbilityManagementComponent, OwnedAbility), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_OwnedAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_OwnedAbility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_SavedSerializeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_SavedSerializeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_GlobalArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_GlobalArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_TargetActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_TargetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_PreviousCastSpell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_MaxAbilityNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningSpell_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningSpell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningEffect_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_RunningEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_OwnedAbility_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::NewProp_OwnedAbility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLAbilityManagementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::ClassParams = {
		&ULFLAbilityManagementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLAbilityManagementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLAbilityManagementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLAbilityManagementComponent, 881595683);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLAbilityManagementComponent>()
	{
		return ULFLAbilityManagementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLAbilityManagementComponent(Z_Construct_UClass_ULFLAbilityManagementComponent, &ULFLAbilityManagementComponent::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLAbilityManagementComponent"), false, nullptr, nullptr, nullptr);

	void ULFLAbilityManagementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GlobalArguments(TEXT("GlobalArguments"));
		static const FName Name_TargetActors(TEXT("TargetActors"));
		static const FName Name_RunningSpell(TEXT("RunningSpell"));
		static const FName Name_RunningEffect(TEXT("RunningEffect"));
		static const FName Name_OwnedAbility(TEXT("OwnedAbility"));

		const bool bIsValid = true
			&& Name_GlobalArguments == ClassReps[(int32)ENetFields_Private::GlobalArguments].Property->GetFName()
			&& Name_TargetActors == ClassReps[(int32)ENetFields_Private::TargetActors].Property->GetFName()
			&& Name_RunningSpell == ClassReps[(int32)ENetFields_Private::RunningSpell].Property->GetFName()
			&& Name_RunningEffect == ClassReps[(int32)ENetFields_Private::RunningEffect].Property->GetFName()
			&& Name_OwnedAbility == ClassReps[(int32)ENetFields_Private::OwnedAbility].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULFLAbilityManagementComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLAbilityManagementComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULFLAbilityManagementComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
