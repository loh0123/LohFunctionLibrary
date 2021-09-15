// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Inventory/LFLInventoryManagementComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLInventoryManagementComponent() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLInventoryStackItemData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLInventoryItemActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLInventoryPerItemData();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLInventoryManagementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FLFLInventoryStackItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLInventoryStackItemData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLInventoryStackItemData"), sizeof(FLFLInventoryStackItemData), Get_Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLInventoryStackItemData>()
{
	return FLFLInventoryStackItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLInventoryStackItemData(FLFLInventoryStackItemData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLInventoryStackItemData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLInventoryStackItemData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLInventoryStackItemData()
	{
		UScriptStruct::DeferCppStructOps<FLFLInventoryStackItemData>(FName(TEXT("LFLInventoryStackItemData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLInventoryStackItemData;
	struct Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StackData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StackData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StackTag_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StackTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDefaultWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemDefaultWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLInventoryStackItemData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "FLFLInventoryStackItemData" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryStackItemData, ActorClass), Z_Construct_UClass_ALFLInventoryItemActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "FLFLInventoryStackItemData" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryStackItemData, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "FLFLInventoryStackItemData" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryStackItemData, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "FLFLInventoryStackItemData" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryStackItemData, ItemDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDescription_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackData_Inner = { "StackData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLInventoryPerItemData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackData_MetaData[] = {
		{ "Category", "FLFLInventoryStackItemData" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackData = { "StackData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryStackItemData, StackData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackTag_Inner = { "StackTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackTag_MetaData[] = {
		{ "Category", "FLFLInventoryStackItemData" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackTag = { "StackTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryStackItemData, StackTag), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDefaultWeight_MetaData[] = {
		{ "Category", "FLFLInventoryStackItemData" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDefaultWeight = { "ItemDefaultWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryStackItemData, ItemDefaultWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDefaultWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDefaultWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_StackTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::NewProp_ItemDefaultWeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLInventoryStackItemData",
		sizeof(FLFLInventoryStackItemData),
		alignof(FLFLInventoryStackItemData),
		Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLInventoryStackItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLInventoryStackItemData"), sizeof(FLFLInventoryStackItemData), Get_Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Hash() { return 2607259813U; }
class UScriptStruct* FLFLInventoryPerItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLInventoryPerItemData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLInventoryPerItemData"), sizeof(FLFLInventoryPerItemData), Get_Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLInventoryPerItemData>()
{
	return FLFLInventoryPerItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLInventoryPerItemData(FLFLInventoryPerItemData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLInventoryPerItemData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLInventoryPerItemData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLInventoryPerItemData()
	{
		UScriptStruct::DeferCppStructOps<FLFLInventoryPerItemData>(FName(TEXT("LFLInventoryPerItemData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLInventoryPerItemData;
	struct Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemCustomData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemCustomData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TagCustomData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagCustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagCustomData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TagIndexPointer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagIndexPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagIndexPointer;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemAdditionTag_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemAdditionTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemAdditionTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CustomItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEquipmentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentEquipmentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemWeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemWeightOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLInventoryPerItemData>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemCustomData_Inner = { "ItemCustomData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemCustomData_MetaData[] = {
		{ "Category", "LFLInventoryPerItemData | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemCustomData = { "ItemCustomData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryPerItemData, ItemCustomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemCustomData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagCustomData_Inner = { "TagCustomData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagCustomData_MetaData[] = {
		{ "Category", "LFLInventoryPerItemData | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagCustomData = { "TagCustomData", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryPerItemData, TagCustomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagCustomData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagIndexPointer_Inner = { "TagIndexPointer", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagIndexPointer_MetaData[] = {
		{ "Category", "LFLInventoryPerItemData | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagIndexPointer = { "TagIndexPointer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryPerItemData, TagIndexPointer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagIndexPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagIndexPointer_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemAdditionTag_Inner = { "ItemAdditionTag", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemAdditionTag_MetaData[] = {
		{ "Category", "LFLInventoryPerItemData | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemAdditionTag = { "ItemAdditionTag", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryPerItemData, ItemAdditionTag), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemAdditionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemAdditionTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CustomItemDescription_MetaData[] = {
		{ "Category", "FLFLInventoryStackItemData | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CustomItemDescription = { "CustomItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryPerItemData, CustomItemDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CustomItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CustomItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CurrentEquipmentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CurrentEquipmentIndex = { "CurrentEquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryPerItemData, CurrentEquipmentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CurrentEquipmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CurrentEquipmentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemWeightOffset_MetaData[] = {
		{ "Category", "LFLInventoryPerItemData | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemWeightOffset = { "ItemWeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryPerItemData, ItemWeightOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemWeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemWeightOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemCustomData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemCustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagCustomData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagCustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagIndexPointer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_TagIndexPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemAdditionTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemAdditionTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CustomItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_CurrentEquipmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::NewProp_ItemWeightOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLInventoryPerItemData",
		sizeof(FLFLInventoryPerItemData),
		alignof(FLFLInventoryPerItemData),
		Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLInventoryPerItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLInventoryPerItemData"), sizeof(FLFLInventoryPerItemData), Get_Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Hash() { return 1496430125U; }
class UScriptStruct* FLFLInventoryEquipmentSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLInventoryEquipmentSaveData"), sizeof(FLFLInventoryEquipmentSaveData), Get_Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLInventoryEquipmentSaveData>()
{
	return FLFLInventoryEquipmentSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLInventoryEquipmentSaveData(FLFLInventoryEquipmentSaveData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLInventoryEquipmentSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLInventoryEquipmentSaveData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLInventoryEquipmentSaveData()
	{
		UScriptStruct::DeferCppStructOps<FLFLInventoryEquipmentSaveData>(FName(TEXT("LFLInventoryEquipmentSaveData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLInventoryEquipmentSaveData;
	struct Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLInventoryEquipmentSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "Category", "LFLInventoryPerItemData | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryEquipmentSaveData, ItemIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_ItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_StackIndex_MetaData[] = {
		{ "Category", "LFLInventoryPerItemData | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLInventoryEquipmentSaveData, StackIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_StackIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::NewProp_StackIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLInventoryEquipmentSaveData",
		sizeof(FLFLInventoryEquipmentSaveData),
		alignof(FLFLInventoryEquipmentSaveData),
		Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLInventoryEquipmentSaveData"), sizeof(FLFLInventoryEquipmentSaveData), Get_Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Hash() { return 2248581867U; }
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execActiveItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ActiveCode);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ActiveItem(Z_Param_ItemIndex,Z_Param_StackIndex,Z_Param_ActiveCode,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execIsEquiped)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquiped(Z_Param_EquipmentIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execGetEquipmentsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ALFLInventoryItemActor*>*)Z_Param__Result=P_THIS->GetEquipmentsList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execUnequipItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentIndex);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnequipItem(Z_Param_EquipmentIndex,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execEquipItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_GET_OBJECT_REF(ALFLInventoryItemActor,Z_Param_Out_EquipItemActor);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->EquipItem(Z_Param_EquipmentIndex,Z_Param_ItemIndex,Z_Param_StackIndex,Z_Param_Out_EquipItemActor,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execDropItem)
	{
		P_GET_OBJECT_REF(ALFLInventoryItemActor,Z_Param_Out_DropItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DropItem(Z_Param_Out_DropItem,Z_Param_ItemIndex,Z_Param_StackIndex,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execPickUpItem)
	{
		P_GET_OBJECT(ALFLInventoryItemActor,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PickUpItem(Z_Param_Item,Z_Param_StackIndex,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execGetInventoryItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFLInventoryStackItemData>*)Z_Param__Result=P_THIS->GetInventoryItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execGetInventoryItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
		P_GET_STRUCT_REF(FLFLInventoryStackItemData,Z_Param_Out_Stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInventoryItem(Z_Param_ItemName,Z_Param_Out_Stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execGetInventoryItemAmount)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInventoryItemAmount(Z_Param_ItemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execGetTotalInventoryItemAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalInventoryItemAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execGetTotalInventoryItemStackAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalInventoryItemStackAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execGetTotalInventoryItemWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTotalInventoryItemWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execFindInventoryItemByEquipment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindInventoryItemByEquipment(Z_Param_ItemIndex,Z_Param_EquipmentIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execFindInventoryItemStackIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindInventoryItemStackIndex(Z_Param_ItemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execRemoveItemFromInventory)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveItemFromInventory(Z_Param_ItemIndex,Z_Param_StackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execAddItemStackToInventory)
	{
		P_GET_STRUCT_REF(FLFLInventoryStackItemData,Z_Param_Out_ItemStack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddItemStackToInventory(Z_Param_Out_ItemStack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execAddItemToInventory)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
		P_GET_STRUCT_REF(FLFLInventoryPerItemData,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddItemToInventory(Z_Param_ItemName,Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execDeserializeData)
	{
		P_GET_TARRAY_REF(FLFLInventoryEquipmentSaveData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeserializeData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execSerializeData)
	{
		P_GET_TARRAY_REF(FLFLInventoryEquipmentSaveData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SerializeData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLInventoryManagementComponent::execSpawnItemForOperation)
	{
		P_GET_STRUCT_REF(FLFLInventoryStackItemData,Z_Param_Out_TargetStack);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_GET_UBOOL(Z_Param_IsEquipment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALFLInventoryItemActor**)Z_Param__Result=P_THIS->SpawnItemForOperation(Z_Param_Out_TargetStack,Z_Param_StackIndex,Z_Param_IsEquipment);
		P_NATIVE_END;
	}
	void ULFLInventoryManagementComponent::StaticRegisterNativesULFLInventoryManagementComponent()
	{
		UClass* Class = ULFLInventoryManagementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveItem", &ULFLInventoryManagementComponent::execActiveItem },
			{ "AddItemStackToInventory", &ULFLInventoryManagementComponent::execAddItemStackToInventory },
			{ "AddItemToInventory", &ULFLInventoryManagementComponent::execAddItemToInventory },
			{ "DeserializeData", &ULFLInventoryManagementComponent::execDeserializeData },
			{ "DropItem", &ULFLInventoryManagementComponent::execDropItem },
			{ "EquipItem", &ULFLInventoryManagementComponent::execEquipItem },
			{ "FindInventoryItemByEquipment", &ULFLInventoryManagementComponent::execFindInventoryItemByEquipment },
			{ "FindInventoryItemStackIndex", &ULFLInventoryManagementComponent::execFindInventoryItemStackIndex },
			{ "GetEquipmentsList", &ULFLInventoryManagementComponent::execGetEquipmentsList },
			{ "GetInventoryItem", &ULFLInventoryManagementComponent::execGetInventoryItem },
			{ "GetInventoryItemAmount", &ULFLInventoryManagementComponent::execGetInventoryItemAmount },
			{ "GetInventoryItems", &ULFLInventoryManagementComponent::execGetInventoryItems },
			{ "GetTotalInventoryItemAmount", &ULFLInventoryManagementComponent::execGetTotalInventoryItemAmount },
			{ "GetTotalInventoryItemStackAmount", &ULFLInventoryManagementComponent::execGetTotalInventoryItemStackAmount },
			{ "GetTotalInventoryItemWeight", &ULFLInventoryManagementComponent::execGetTotalInventoryItemWeight },
			{ "IsEquiped", &ULFLInventoryManagementComponent::execIsEquiped },
			{ "PickUpItem", &ULFLInventoryManagementComponent::execPickUpItem },
			{ "RemoveItemFromInventory", &ULFLInventoryManagementComponent::execRemoveItemFromInventory },
			{ "SerializeData", &ULFLInventoryManagementComponent::execSerializeData },
			{ "SpawnItemForOperation", &ULFLInventoryManagementComponent::execSpawnItemForOperation },
			{ "UnequipItem", &ULFLInventoryManagementComponent::execUnequipItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics
	{
		struct LFLInventoryManagementComponent_eventActiveItem_Parms
		{
			int32 ItemIndex;
			int32 StackIndex;
			int32 ActiveCode;
			bool Force;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventActiveItem_Parms, ItemIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_StackIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventActiveItem_Parms, StackIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_StackIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ActiveCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ActiveCode = { "ActiveCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventActiveItem_Parms, ActiveCode), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ActiveCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ActiveCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventActiveItem_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventActiveItem_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventActiveItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_StackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ActiveCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Function" },
		{ "Comment", "// Active Item //\n" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
		{ "ToolTip", "Active Item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "ActiveItem", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventActiveItem_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics
	{
		struct LFLInventoryManagementComponent_eventAddItemStackToInventory_Parms
		{
			FLFLInventoryStackItemData ItemStack;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStack;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::NewProp_ItemStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::NewProp_ItemStack = { "ItemStack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventAddItemStackToInventory_Parms, ItemStack), Z_Construct_UScriptStruct_FLFLInventoryStackItemData, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::NewProp_ItemStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::NewProp_ItemStack_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventAddItemStackToInventory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::NewProp_ItemStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Inventory Item" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "AddItemStackToInventory", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventAddItemStackToInventory_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics
	{
		struct LFLInventoryManagementComponent_eventAddItemToInventory_Parms
		{
			FName ItemName;
			FLFLInventoryPerItemData ItemData;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventAddItemToInventory_Parms, ItemName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventAddItemToInventory_Parms, ItemData), Z_Construct_UScriptStruct_FLFLInventoryPerItemData, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::NewProp_ItemData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventAddItemToInventory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Inventory Item" },
		{ "Comment", "// Inventory Item //\n" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
		{ "ToolTip", "Inventory Item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "AddItemToInventory", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventAddItemToInventory_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics
	{
		struct LFLInventoryManagementComponent_eventDeserializeData_Parms
		{
			TArray<FLFLInventoryEquipmentSaveData> Data;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventDeserializeData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventDeserializeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventDeserializeData_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Serializing" },
		{ "Comment", "// Deserialize Data and respawn every component\n" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
		{ "ToolTip", "Deserialize Data and respawn every component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "DeserializeData", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventDeserializeData_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics
	{
		struct LFLInventoryManagementComponent_eventDropItem_Parms
		{
			ALFLInventoryItemActor* DropItem;
			int32 ItemIndex;
			int32 StackIndex;
			bool Force;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DropItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_DropItem = { "DropItem", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventDropItem_Parms, DropItem), Z_Construct_UClass_ALFLInventoryItemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventDropItem_Parms, ItemIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_ItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_StackIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventDropItem_Parms, StackIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_StackIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventDropItem_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventDropItem_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventDropItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_DropItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_StackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Function" },
		{ "Comment", "// Drop Item //\n" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
		{ "ToolTip", "Drop Item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "DropItem", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventDropItem_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics
	{
		struct LFLInventoryManagementComponent_eventEquipItem_Parms
		{
			int32 EquipmentIndex;
			int32 ItemIndex;
			int32 StackIndex;
			ALFLInventoryItemActor* EquipItemActor;
			bool Force;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquipmentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipItemActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_EquipmentIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventEquipItem_Parms, EquipmentIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_EquipmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_EquipmentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventEquipItem_Parms, ItemIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_ItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_StackIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventEquipItem_Parms, StackIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_StackIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_EquipItemActor = { "EquipItemActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventEquipItem_Parms, EquipItemActor), Z_Construct_UClass_ALFLInventoryItemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventEquipItem_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventEquipItem_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventEquipItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_EquipmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_StackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_EquipItemActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Function" },
		{ "Comment", "// Equip //\n" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
		{ "ToolTip", "Equip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "EquipItem", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventEquipItem_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics
	{
		struct LFLInventoryManagementComponent_eventFindInventoryItemByEquipment_Parms
		{
			int32 ItemIndex;
			int32 EquipmentIndex;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquipmentIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventFindInventoryItemByEquipment_Parms, ItemIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_ItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_EquipmentIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventFindInventoryItemByEquipment_Parms, EquipmentIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_EquipmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_EquipmentIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventFindInventoryItemByEquipment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_EquipmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "FindInventoryItemByEquipment", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventFindInventoryItemByEquipment_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics
	{
		struct LFLInventoryManagementComponent_eventFindInventoryItemStackIndex_Parms
		{
			FName ItemName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventFindInventoryItemStackIndex_Parms, ItemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventFindInventoryItemStackIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "FindInventoryItemStackIndex", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventFindInventoryItemStackIndex_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics
	{
		struct LFLInventoryManagementComponent_eventGetEquipmentsList_Parms
		{
			TArray<ALFLInventoryItemActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALFLInventoryItemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventGetEquipmentsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Function" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "GetEquipmentsList", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventGetEquipmentsList_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics
	{
		struct LFLInventoryManagementComponent_eventGetInventoryItem_Parms
		{
			FName ItemName;
			FLFLInventoryStackItemData Stack;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventGetInventoryItem_Parms, ItemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventGetInventoryItem_Parms, Stack), Z_Construct_UScriptStruct_FLFLInventoryStackItemData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventGetInventoryItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventGetInventoryItem_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::NewProp_Stack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Inventory Item" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "GetInventoryItem", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventGetInventoryItem_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics
	{
		struct LFLInventoryManagementComponent_eventGetInventoryItemAmount_Parms
		{
			FName ItemName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventGetInventoryItemAmount_Parms, ItemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventGetInventoryItemAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Inventory Item" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "GetInventoryItemAmount", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventGetInventoryItemAmount_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics
	{
		struct LFLInventoryManagementComponent_eventGetInventoryItems_Parms
		{
			TArray<FLFLInventoryStackItemData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLInventoryStackItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventGetInventoryItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Inventory Item" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "GetInventoryItems", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventGetInventoryItems_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics
	{
		struct LFLInventoryManagementComponent_eventGetTotalInventoryItemAmount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventGetTotalInventoryItemAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Inventory Item" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "GetTotalInventoryItemAmount", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventGetTotalInventoryItemAmount_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics
	{
		struct LFLInventoryManagementComponent_eventGetTotalInventoryItemStackAmount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventGetTotalInventoryItemStackAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Inventory Item" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "GetTotalInventoryItemStackAmount", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventGetTotalInventoryItemStackAmount_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics
	{
		struct LFLInventoryManagementComponent_eventGetTotalInventoryItemWeight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventGetTotalInventoryItemWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Inventory Item" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "GetTotalInventoryItemWeight", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventGetTotalInventoryItemWeight_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics
	{
		struct LFLInventoryManagementComponent_eventIsEquiped_Parms
		{
			int32 EquipmentIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquipmentIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::NewProp_EquipmentIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventIsEquiped_Parms, EquipmentIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::NewProp_EquipmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::NewProp_EquipmentIndex_MetaData)) };
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventIsEquiped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventIsEquiped_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::NewProp_EquipmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Function" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "IsEquiped", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventIsEquiped_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics
	{
		struct LFLInventoryManagementComponent_eventPickUpItem_Parms
		{
			ALFLInventoryItemActor* Item;
			int32 StackIndex;
			bool Force;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventPickUpItem_Parms, Item), Z_Construct_UClass_ALFLInventoryItemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_StackIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventPickUpItem_Parms, StackIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_StackIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventPickUpItem_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventPickUpItem_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventPickUpItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_StackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Function" },
		{ "Comment", "// Pick Up Item //\n" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
		{ "ToolTip", "Pick Up Item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "PickUpItem", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventPickUpItem_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics
	{
		struct LFLInventoryManagementComponent_eventRemoveItemFromInventory_Parms
		{
			int32 ItemIndex;
			int32 StackIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventRemoveItemFromInventory_Parms, ItemIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_ItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_StackIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventRemoveItemFromInventory_Parms, StackIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_StackIndex_MetaData)) };
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventRemoveItemFromInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventRemoveItemFromInventory_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_StackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Inventory Item" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "RemoveItemFromInventory", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventRemoveItemFromInventory_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics
	{
		struct LFLInventoryManagementComponent_eventSerializeData_Parms
		{
			TArray<FLFLInventoryEquipmentSaveData> Data;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventSerializeData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventSerializeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventSerializeData_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Serializing" },
		{ "Comment", "// Serialize Data to something can be save.\n" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
		{ "ToolTip", "Serialize Data to something can be save." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "SerializeData", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventSerializeData_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics
	{
		struct LFLInventoryManagementComponent_eventSpawnItemForOperation_Parms
		{
			FLFLInventoryStackItemData TargetStack;
			int32 StackIndex;
			bool IsEquipment;
			ALFLInventoryItemActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEquipment_MetaData[];
#endif
		static void NewProp_IsEquipment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEquipment;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_TargetStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_TargetStack = { "TargetStack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventSpawnItemForOperation_Parms, TargetStack), Z_Construct_UScriptStruct_FLFLInventoryStackItemData, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_TargetStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_TargetStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_StackIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventSpawnItemForOperation_Parms, StackIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_StackIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_IsEquipment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_IsEquipment_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventSpawnItemForOperation_Parms*)Obj)->IsEquipment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_IsEquipment = { "IsEquipment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventSpawnItemForOperation_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_IsEquipment_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_IsEquipment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_IsEquipment_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventSpawnItemForOperation_Parms, ReturnValue), Z_Construct_UClass_ALFLInventoryItemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_TargetStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_StackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_IsEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "SpawnItemForOperation", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventSpawnItemForOperation_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics
	{
		struct LFLInventoryManagementComponent_eventUnequipItem_Parms
		{
			int32 EquipmentIndex;
			bool Force;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquipmentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_EquipmentIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventUnequipItem_Parms, EquipmentIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_EquipmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_EquipmentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryManagementComponent_eventUnequipItem_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryManagementComponent_eventUnequipItem_Parms), &Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryManagementComponent_eventUnequipItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_EquipmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryManagementComponent | Function" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLInventoryManagementComponent, nullptr, "UnequipItem", nullptr, nullptr, sizeof(LFLInventoryManagementComponent_eventUnequipItem_Parms), Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister()
	{
		return ULFLInventoryManagementComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFLInventoryManagementComponent_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEquipmentCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxEquipmentCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipmentList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipmentList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_ActiveItem, "ActiveItem" }, // 2235835765
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemStackToInventory, "AddItemStackToInventory" }, // 1618437145
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_AddItemToInventory, "AddItemToInventory" }, // 1973944598
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_DeserializeData, "DeserializeData" }, // 11378244
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_DropItem, "DropItem" }, // 4009030187
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_EquipItem, "EquipItem" }, // 1829126573
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemByEquipment, "FindInventoryItemByEquipment" }, // 2761352442
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_FindInventoryItemStackIndex, "FindInventoryItemStackIndex" }, // 1330329685
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_GetEquipmentsList, "GetEquipmentsList" }, // 698570775
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItem, "GetInventoryItem" }, // 2322795867
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItemAmount, "GetInventoryItemAmount" }, // 1707629568
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_GetInventoryItems, "GetInventoryItems" }, // 3207919035
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemAmount, "GetTotalInventoryItemAmount" }, // 172525656
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemStackAmount, "GetTotalInventoryItemStackAmount" }, // 3304027581
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_GetTotalInventoryItemWeight, "GetTotalInventoryItemWeight" }, // 2460369171
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_IsEquiped, "IsEquiped" }, // 3084373026
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_PickUpItem, "PickUpItem" }, // 1441454560
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_RemoveItemFromInventory, "RemoveItemFromInventory" }, // 2918659345
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_SerializeData, "SerializeData" }, // 1712918591
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_SpawnItemForOperation, "SpawnItemForOperation" }, // 970661757
		{ &Z_Construct_UFunction_ULFLInventoryManagementComponent_UnequipItem, "UnequipItem" }, // 998198941
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory/LFLInventoryManagementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_SavedSerializeData_Inner = { "SavedSerializeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_SavedSerializeData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_SavedSerializeData = { "SavedSerializeData", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLInventoryManagementComponent, SavedSerializeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_SavedSerializeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_SavedSerializeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_MaxEquipmentCount_MetaData[] = {
		{ "Category", "LFLInventoryManagementComponent | Setting" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_MaxEquipmentCount = { "MaxEquipmentCount", nullptr, (EPropertyFlags)0x0010000001000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLInventoryManagementComponent, MaxEquipmentCount), METADATA_PARAMS(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_MaxEquipmentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_MaxEquipmentCount_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_EquipmentList_Inner = { "EquipmentList", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALFLInventoryItemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_EquipmentList_MetaData[] = {
		{ "Category", "LFLInventoryManagementComponent | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_EquipmentList = { "EquipmentList", nullptr, (EPropertyFlags)0x0010000000020021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLInventoryManagementComponent, EquipmentList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_EquipmentList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_EquipmentList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_InventoryData_Inner = { "InventoryData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLInventoryStackItemData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_InventoryData_MetaData[] = {
		{ "Category", "LFLInventoryManagementComponent | Variable" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryManagementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0010000001020021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLInventoryManagementComponent, InventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_InventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_InventoryData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_SavedSerializeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_SavedSerializeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_MaxEquipmentCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_EquipmentList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_EquipmentList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_InventoryData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::NewProp_InventoryData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLInventoryManagementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::ClassParams = {
		&ULFLInventoryManagementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLInventoryManagementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLInventoryManagementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLInventoryManagementComponent, 233793978);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLInventoryManagementComponent>()
	{
		return ULFLInventoryManagementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLInventoryManagementComponent(Z_Construct_UClass_ULFLInventoryManagementComponent, &ULFLInventoryManagementComponent::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLInventoryManagementComponent"), false, nullptr, nullptr, nullptr);

	void ULFLInventoryManagementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquipmentList(TEXT("EquipmentList"));
		static const FName Name_InventoryData(TEXT("InventoryData"));

		const bool bIsValid = true
			&& Name_EquipmentList == ClassReps[(int32)ENetFields_Private::EquipmentList].Property->GetFName()
			&& Name_InventoryData == ClassReps[(int32)ENetFields_Private::InventoryData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULFLInventoryManagementComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLInventoryManagementComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULFLInventoryManagementComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
