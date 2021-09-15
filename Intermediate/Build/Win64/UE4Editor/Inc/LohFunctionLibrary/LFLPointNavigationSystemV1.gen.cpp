// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Navigation/LFLPointNavigationSystemV1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLPointNavigationSystemV1() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLNavigationAreaData();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UPointNavigationSystemAgentInterface_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UPointNavigationSystemAgentInterface();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavigationSystemV1_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UPointNavigationSystemPointLinkInterface();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavigationSystemPoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavigationSystemData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavigationSystemV1();
// End Cross Module References
class UScriptStruct* FLFLNavigationSystemNavAgentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLNavigationSystemNavAgentData"), sizeof(FLFLNavigationSystemNavAgentData), Get_Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLNavigationSystemNavAgentData>()
{
	return FLFLNavigationSystemNavAgentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLNavigationSystemNavAgentData(FLFLNavigationSystemNavAgentData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLNavigationSystemNavAgentData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationSystemNavAgentData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationSystemNavAgentData()
	{
		UScriptStruct::DeferCppStructOps<FLFLNavigationSystemNavAgentData>(FName(TEXT("LFLNavigationSystemNavAgentData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationSystemNavAgentData;
	struct Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavAgent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavAgent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentFollowingPathList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFollowingPathList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentFollowingPathList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFollowingPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentFollowingPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFollowingPathIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentFollowingPathIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFollowingPath_MetaData[];
#endif
		static void NewProp_IsFollowingPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFollowingPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLNavigationSystemNavAgentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_NavAgent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_NavAgent = { "NavAgent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationSystemNavAgentData, NavAgent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_NavAgent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_NavAgent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathList_Inner = { "CurrentFollowingPathList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathList = { "CurrentFollowingPathList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationSystemNavAgentData, CurrentFollowingPathList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPath = { "CurrentFollowingPath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationSystemNavAgentData, CurrentFollowingPath), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathIndex = { "CurrentFollowingPathIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationSystemNavAgentData, CurrentFollowingPathIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_IsFollowingPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_IsFollowingPath_SetBit(void* Obj)
	{
		((FLFLNavigationSystemNavAgentData*)Obj)->IsFollowingPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_IsFollowingPath = { "IsFollowingPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLFLNavigationSystemNavAgentData), &Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_IsFollowingPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_IsFollowingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_IsFollowingPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_NavAgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_CurrentFollowingPathIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::NewProp_IsFollowingPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLNavigationSystemNavAgentData",
		sizeof(FLFLNavigationSystemNavAgentData),
		alignof(FLFLNavigationSystemNavAgentData),
		Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLNavigationSystemNavAgentData"), sizeof(FLFLNavigationSystemNavAgentData), Get_Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Hash() { return 327926636U; }
class UScriptStruct* FLFLNavigationTrackingActorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLNavigationTrackingActorData"), sizeof(FLFLNavigationTrackingActorData), Get_Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLNavigationTrackingActorData>()
{
	return FLFLNavigationTrackingActorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLNavigationTrackingActorData(FLFLNavigationTrackingActorData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLNavigationTrackingActorData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationTrackingActorData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationTrackingActorData()
	{
		UScriptStruct::DeferCppStructOps<FLFLNavigationTrackingActorData>(FName(TEXT("LFLNavigationTrackingActorData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationTrackingActorData;
	struct Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNavPointAreaDirty_MetaData[];
#endif
		static void NewProp_IsNavPointAreaDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNavPointAreaDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwingNavPoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwingNavPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwingNavPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavPointArea_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavPointArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavPointArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLNavigationTrackingActorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_IsNavPointAreaDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_IsNavPointAreaDirty_SetBit(void* Obj)
	{
		((FLFLNavigationTrackingActorData*)Obj)->IsNavPointAreaDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_IsNavPointAreaDirty = { "IsNavPointAreaDirty", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLFLNavigationTrackingActorData), &Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_IsNavPointAreaDirty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_IsNavPointAreaDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_IsNavPointAreaDirty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationTrackingActorData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_OwingNavPoint_Inner = { "OwingNavPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_OwingNavPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_OwingNavPoint = { "OwingNavPoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationTrackingActorData, OwingNavPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_OwingNavPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_OwingNavPoint_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_NavPointArea_Inner = { "NavPointArea", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLNavigationAreaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_NavPointArea_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_NavPointArea = { "NavPointArea", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationTrackingActorData, NavPointArea), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_NavPointArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_NavPointArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_IsNavPointAreaDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_OwingNavPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_OwingNavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_NavPointArea_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::NewProp_NavPointArea,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLNavigationTrackingActorData",
		sizeof(FLFLNavigationTrackingActorData),
		alignof(FLFLNavigationTrackingActorData),
		Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLNavigationTrackingActorData"), sizeof(FLFLNavigationTrackingActorData), Get_Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Hash() { return 2318127581U; }
class UScriptStruct* FLFLNavigationAreaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationAreaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLNavigationAreaData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLNavigationAreaData"), sizeof(FLFLNavigationAreaData), Get_Z_Construct_UScriptStruct_FLFLNavigationAreaData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLNavigationAreaData>()
{
	return FLFLNavigationAreaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLNavigationAreaData(FLFLNavigationAreaData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLNavigationAreaData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationAreaData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationAreaData()
	{
		UScriptStruct::DeferCppStructOps<FLFLNavigationAreaData>(FName(TEXT("LFLNavigationAreaData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationAreaData;
	struct Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNavPointWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalNavPointWeight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AreaNavPoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaNavPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AreaNavPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectArea_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLNavigationAreaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_TotalNavPointWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_TotalNavPointWeight = { "TotalNavPointWeight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationAreaData, TotalNavPointWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_TotalNavPointWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_TotalNavPointWeight_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_AreaNavPoint_Inner = { "AreaNavPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_AreaNavPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_AreaNavPoint = { "AreaNavPoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationAreaData, AreaNavPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_AreaNavPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_AreaNavPoint_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_ConnectArea_Inner = { "ConnectArea", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_ConnectArea_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_ConnectArea = { "ConnectArea", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationAreaData, ConnectArea), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_ConnectArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_ConnectArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_TotalNavPointWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_AreaNavPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_AreaNavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_ConnectArea_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::NewProp_ConnectArea,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLNavigationAreaData",
		sizeof(FLFLNavigationAreaData),
		alignof(FLFLNavigationAreaData),
		Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLNavigationAreaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationAreaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLNavigationAreaData"), sizeof(FLFLNavigationAreaData), Get_Z_Construct_UScriptStruct_FLFLNavigationAreaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationAreaData_Hash() { return 4062140532U; }
class UScriptStruct* FLFLNavigationAreaConnectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLNavigationAreaConnectData"), sizeof(FLFLNavigationAreaConnectData), Get_Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLNavigationAreaConnectData>()
{
	return FLFLNavigationAreaConnectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLNavigationAreaConnectData(FLFLNavigationAreaConnectData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLNavigationAreaConnectData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationAreaConnectData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationAreaConnectData()
	{
		UScriptStruct::DeferCppStructOps<FLFLNavigationAreaConnectData>(FName(TEXT("LFLNavigationAreaConnectData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLNavigationAreaConnectData;
	struct Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AreaID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWalkable_MetaData[];
#endif
		static void NewProp_IsWalkable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWalkable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLNavigationAreaConnectData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_OwingActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_OwingActor = { "OwingActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationAreaConnectData, OwingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_OwingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_OwingActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_AreaID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_AreaID = { "AreaID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLNavigationAreaConnectData, AreaID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_AreaID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_AreaID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_IsWalkable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_IsWalkable_SetBit(void* Obj)
	{
		((FLFLNavigationAreaConnectData*)Obj)->IsWalkable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_IsWalkable = { "IsWalkable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLFLNavigationAreaConnectData), &Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_IsWalkable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_IsWalkable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_IsWalkable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_OwingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_AreaID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::NewProp_IsWalkable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLNavigationAreaConnectData",
		sizeof(FLFLNavigationAreaConnectData),
		alignof(FLFLNavigationAreaConnectData),
		Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLNavigationAreaConnectData"), sizeof(FLFLNavigationAreaConnectData), Get_Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Hash() { return 191872108U; }
	DEFINE_FUNCTION(IPointNavigationSystemTrackingActorInterface::execOnNavAgentReachNavPoint)
	{
		P_GET_OBJECT(AActor,Z_Param_Agent);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_ReachedNavPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavAgentReachNavPoint_Implementation(Z_Param_Agent,Z_Param_ReachedNavPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemTrackingActorInterface::execOnBlockActorRemoved)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnBlockActorRemoved_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemTrackingActorInterface::execOnBlockActorMoved)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnBlockActorMoved_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemTrackingActorInterface::execOnBlockActorDetected)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnBlockActorDetected_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemTrackingActorInterface::execOnNavigationRemove)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemData,Z_Param_NavData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnNavigationRemove_Implementation(Z_Param_NavData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemTrackingActorInterface::execRequestNavigationUpdate)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemData,Z_Param_NavData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestNavigationUpdate_Implementation(Z_Param_NavData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemTrackingActorInterface::execOnNavigationCreate)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemData,Z_Param_NavData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnNavigationCreate_Implementation(Z_Param_NavData);
		P_NATIVE_END;
	}
	bool IPointNavigationSystemTrackingActorInterface::OnBlockActorDetected(AActor* Actor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBlockActorDetected instead.");
		PointNavigationSystemTrackingActorInterface_eventOnBlockActorDetected_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPointNavigationSystemTrackingActorInterface::OnBlockActorMoved(AActor* Actor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBlockActorMoved instead.");
		PointNavigationSystemTrackingActorInterface_eventOnBlockActorMoved_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPointNavigationSystemTrackingActorInterface::OnBlockActorRemoved(AActor* Actor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBlockActorRemoved instead.");
		PointNavigationSystemTrackingActorInterface_eventOnBlockActorRemoved_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPointNavigationSystemTrackingActorInterface::OnNavAgentReachNavPoint(AActor* Agent, ULFLPointNavigationSystemPoint* ReachedNavPoint)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNavAgentReachNavPoint instead.");
	}
	bool IPointNavigationSystemTrackingActorInterface::OnNavigationCreate(ULFLPointNavigationSystemData* NavData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNavigationCreate instead.");
		PointNavigationSystemTrackingActorInterface_eventOnNavigationCreate_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPointNavigationSystemTrackingActorInterface::OnNavigationRemove(ULFLPointNavigationSystemData* NavData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNavigationRemove instead.");
		PointNavigationSystemTrackingActorInterface_eventOnNavigationRemove_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPointNavigationSystemTrackingActorInterface::RequestNavigationUpdate(ULFLPointNavigationSystemData* NavData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestNavigationUpdate instead.");
		PointNavigationSystemTrackingActorInterface_eventRequestNavigationUpdate_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPointNavigationSystemTrackingActorInterface::StaticRegisterNativesUPointNavigationSystemTrackingActorInterface()
	{
		UClass* Class = UPointNavigationSystemTrackingActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBlockActorDetected", &IPointNavigationSystemTrackingActorInterface::execOnBlockActorDetected },
			{ "OnBlockActorMoved", &IPointNavigationSystemTrackingActorInterface::execOnBlockActorMoved },
			{ "OnBlockActorRemoved", &IPointNavigationSystemTrackingActorInterface::execOnBlockActorRemoved },
			{ "OnNavAgentReachNavPoint", &IPointNavigationSystemTrackingActorInterface::execOnNavAgentReachNavPoint },
			{ "OnNavigationCreate", &IPointNavigationSystemTrackingActorInterface::execOnNavigationCreate },
			{ "OnNavigationRemove", &IPointNavigationSystemTrackingActorInterface::execOnNavigationRemove },
			{ "RequestNavigationUpdate", &IPointNavigationSystemTrackingActorInterface::execRequestNavigationUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemTrackingActorInterface_eventOnBlockActorDetected_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemTrackingActorInterface_eventOnBlockActorDetected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemTrackingActorInterface_eventOnBlockActorDetected_Parms), &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface, nullptr, "OnBlockActorDetected", nullptr, nullptr, sizeof(PointNavigationSystemTrackingActorInterface_eventOnBlockActorDetected_Parms), Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemTrackingActorInterface_eventOnBlockActorMoved_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemTrackingActorInterface_eventOnBlockActorMoved_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemTrackingActorInterface_eventOnBlockActorMoved_Parms), &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface, nullptr, "OnBlockActorMoved", nullptr, nullptr, sizeof(PointNavigationSystemTrackingActorInterface_eventOnBlockActorMoved_Parms), Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemTrackingActorInterface_eventOnBlockActorRemoved_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemTrackingActorInterface_eventOnBlockActorRemoved_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemTrackingActorInterface_eventOnBlockActorRemoved_Parms), &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface, nullptr, "OnBlockActorRemoved", nullptr, nullptr, sizeof(PointNavigationSystemTrackingActorInterface_eventOnBlockActorRemoved_Parms), Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReachedNavPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemTrackingActorInterface_eventOnNavAgentReachNavPoint_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::NewProp_ReachedNavPoint = { "ReachedNavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemTrackingActorInterface_eventOnNavAgentReachNavPoint_Parms, ReachedNavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::NewProp_Agent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::NewProp_ReachedNavPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface, nullptr, "OnNavAgentReachNavPoint", nullptr, nullptr, sizeof(PointNavigationSystemTrackingActorInterface_eventOnNavAgentReachNavPoint_Parms), Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemTrackingActorInterface_eventOnNavigationCreate_Parms, NavData), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemTrackingActorInterface_eventOnNavigationCreate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemTrackingActorInterface_eventOnNavigationCreate_Parms), &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface, nullptr, "OnNavigationCreate", nullptr, nullptr, sizeof(PointNavigationSystemTrackingActorInterface_eventOnNavigationCreate_Parms), Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemTrackingActorInterface_eventOnNavigationRemove_Parms, NavData), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemTrackingActorInterface_eventOnNavigationRemove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemTrackingActorInterface_eventOnNavigationRemove_Parms), &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface, nullptr, "OnNavigationRemove", nullptr, nullptr, sizeof(PointNavigationSystemTrackingActorInterface_eventOnNavigationRemove_Parms), Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemTrackingActorInterface_eventRequestNavigationUpdate_Parms, NavData), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemTrackingActorInterface_eventRequestNavigationUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemTrackingActorInterface_eventRequestNavigationUpdate_Parms), &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface, nullptr, "RequestNavigationUpdate", nullptr, nullptr, sizeof(PointNavigationSystemTrackingActorInterface_eventRequestNavigationUpdate_Parms), Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_NoRegister()
	{
		return UPointNavigationSystemTrackingActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected, "OnBlockActorDetected" }, // 118146049
		{ &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved, "OnBlockActorMoved" }, // 2487987204
		{ &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved, "OnBlockActorRemoved" }, // 1520056080
		{ &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint, "OnNavAgentReachNavPoint" }, // 1086593663
		{ &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate, "OnNavigationCreate" }, // 2588430428
		{ &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove, "OnNavigationRemove" }, // 2309634634
		{ &Z_Construct_UFunction_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate, "RequestNavigationUpdate" }, // 1383959849
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPointNavigationSystemTrackingActorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics::ClassParams = {
		&UPointNavigationSystemTrackingActorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointNavigationSystemTrackingActorInterface, 3107954661);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<UPointNavigationSystemTrackingActorInterface>()
	{
		return UPointNavigationSystemTrackingActorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointNavigationSystemTrackingActorInterface(Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface, &UPointNavigationSystemTrackingActorInterface::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("UPointNavigationSystemTrackingActorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointNavigationSystemTrackingActorInterface);
	static FName NAME_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected = FName(TEXT("OnBlockActorDetected"));
	bool IPointNavigationSystemTrackingActorInterface::Execute_OnBlockActorDetected(UObject* O, AActor* Actor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemTrackingActorInterface::StaticClass()));
		PointNavigationSystemTrackingActorInterface_eventOnBlockActorDetected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemTrackingActorInterface_OnBlockActorDetected);
		if (Func)
		{
			Parms.Actor=Actor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemTrackingActorInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemTrackingActorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnBlockActorDetected_Implementation(Actor);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved = FName(TEXT("OnBlockActorMoved"));
	bool IPointNavigationSystemTrackingActorInterface::Execute_OnBlockActorMoved(UObject* O, AActor* Actor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemTrackingActorInterface::StaticClass()));
		PointNavigationSystemTrackingActorInterface_eventOnBlockActorMoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemTrackingActorInterface_OnBlockActorMoved);
		if (Func)
		{
			Parms.Actor=Actor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemTrackingActorInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemTrackingActorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnBlockActorMoved_Implementation(Actor);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved = FName(TEXT("OnBlockActorRemoved"));
	bool IPointNavigationSystemTrackingActorInterface::Execute_OnBlockActorRemoved(UObject* O, AActor* Actor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemTrackingActorInterface::StaticClass()));
		PointNavigationSystemTrackingActorInterface_eventOnBlockActorRemoved_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemTrackingActorInterface_OnBlockActorRemoved);
		if (Func)
		{
			Parms.Actor=Actor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemTrackingActorInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemTrackingActorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnBlockActorRemoved_Implementation(Actor);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint = FName(TEXT("OnNavAgentReachNavPoint"));
	void IPointNavigationSystemTrackingActorInterface::Execute_OnNavAgentReachNavPoint(UObject* O, AActor* Agent, ULFLPointNavigationSystemPoint* ReachedNavPoint)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemTrackingActorInterface::StaticClass()));
		PointNavigationSystemTrackingActorInterface_eventOnNavAgentReachNavPoint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemTrackingActorInterface_OnNavAgentReachNavPoint);
		if (Func)
		{
			Parms.Agent=Agent;
			Parms.ReachedNavPoint=ReachedNavPoint;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemTrackingActorInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemTrackingActorInterface::StaticClass())))
		{
			I->OnNavAgentReachNavPoint_Implementation(Agent,ReachedNavPoint);
		}
	}
	static FName NAME_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate = FName(TEXT("OnNavigationCreate"));
	bool IPointNavigationSystemTrackingActorInterface::Execute_OnNavigationCreate(UObject* O, ULFLPointNavigationSystemData* NavData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemTrackingActorInterface::StaticClass()));
		PointNavigationSystemTrackingActorInterface_eventOnNavigationCreate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemTrackingActorInterface_OnNavigationCreate);
		if (Func)
		{
			Parms.NavData=NavData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemTrackingActorInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemTrackingActorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnNavigationCreate_Implementation(NavData);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove = FName(TEXT("OnNavigationRemove"));
	bool IPointNavigationSystemTrackingActorInterface::Execute_OnNavigationRemove(UObject* O, ULFLPointNavigationSystemData* NavData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemTrackingActorInterface::StaticClass()));
		PointNavigationSystemTrackingActorInterface_eventOnNavigationRemove_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemTrackingActorInterface_OnNavigationRemove);
		if (Func)
		{
			Parms.NavData=NavData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemTrackingActorInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemTrackingActorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnNavigationRemove_Implementation(NavData);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate = FName(TEXT("RequestNavigationUpdate"));
	bool IPointNavigationSystemTrackingActorInterface::Execute_RequestNavigationUpdate(UObject* O, ULFLPointNavigationSystemData* NavData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemTrackingActorInterface::StaticClass()));
		PointNavigationSystemTrackingActorInterface_eventRequestNavigationUpdate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemTrackingActorInterface_RequestNavigationUpdate);
		if (Func)
		{
			Parms.NavData=NavData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemTrackingActorInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemTrackingActorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->RequestNavigationUpdate_Implementation(NavData);
		}
		return Parms.ReturnValue;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execOnFinishFollowingPath)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemV1,Z_Param_ByNavSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishFollowingPath_Implementation(Z_Param_ByNavSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execOnFollowingPathAbort)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemV1,Z_Param_ByNavSystem);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_CurrentPath);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_NextPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFollowingPathAbort_Implementation(Z_Param_ByNavSystem,Z_Param_CurrentPath,Z_Param_NextPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execOnFollowingPath)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemV1,Z_Param_ByNavSystem);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_CurrentPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentPathIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnFollowingPath_Implementation(Z_Param_ByNavSystem,Z_Param_CurrentPath,Z_Param_CurrentPathIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execOnNavSystemPathReceived)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemData,Z_Param_ByNavData);
		P_GET_TARRAY_REF(ULFLPointNavigationSystemPoint*,Z_Param_Out_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnNavSystemPathReceived_Implementation(Z_Param_ByNavData,Z_Param_Out_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execRequestContinuesFollowingPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestContinuesFollowingPath_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execRequestStopFollowingPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestStopFollowingPath_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execRequestStartFollowingPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestStartFollowingPath_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execOnNavAgentRemove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavAgentRemove_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execOnNavAgentAdded)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemV1,Z_Param_NavSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavAgentAdded_Implementation(Z_Param_NavSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemAgentInterface::execGetAgentBufferForPath)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAgentBufferForPath_Implementation(Z_Param_Path);
		P_NATIVE_END;
	}
	float IPointNavigationSystemAgentInterface::GetAgentBufferForPath(ULFLPointNavigationSystemPoint* Path)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAgentBufferForPath instead.");
		PointNavigationSystemAgentInterface_eventGetAgentBufferForPath_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPointNavigationSystemAgentInterface::OnFinishFollowingPath(ULFLPointNavigationSystemV1* ByNavSystem)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFinishFollowingPath instead.");
	}
	bool IPointNavigationSystemAgentInterface::OnFollowingPath(ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, const int32 CurrentPathIndex)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFollowingPath instead.");
		PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPointNavigationSystemAgentInterface::OnFollowingPathAbort(ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, ULFLPointNavigationSystemPoint* NextPath)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFollowingPathAbort instead.");
	}
	void IPointNavigationSystemAgentInterface::OnNavAgentAdded(ULFLPointNavigationSystemV1* NavSystem)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNavAgentAdded instead.");
	}
	void IPointNavigationSystemAgentInterface::OnNavAgentRemove()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNavAgentRemove instead.");
	}
	bool IPointNavigationSystemAgentInterface::OnNavSystemPathReceived(ULFLPointNavigationSystemData* ByNavData, TArray<ULFLPointNavigationSystemPoint*> const& Path)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNavSystemPathReceived instead.");
		PointNavigationSystemAgentInterface_eventOnNavSystemPathReceived_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPointNavigationSystemAgentInterface::RequestContinuesFollowingPath()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestContinuesFollowingPath instead.");
		PointNavigationSystemAgentInterface_eventRequestContinuesFollowingPath_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPointNavigationSystemAgentInterface::RequestStartFollowingPath()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestStartFollowingPath instead.");
		PointNavigationSystemAgentInterface_eventRequestStartFollowingPath_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPointNavigationSystemAgentInterface::RequestStopFollowingPath()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestStopFollowingPath instead.");
		PointNavigationSystemAgentInterface_eventRequestStopFollowingPath_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPointNavigationSystemAgentInterface::StaticRegisterNativesUPointNavigationSystemAgentInterface()
	{
		UClass* Class = UPointNavigationSystemAgentInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAgentBufferForPath", &IPointNavigationSystemAgentInterface::execGetAgentBufferForPath },
			{ "OnFinishFollowingPath", &IPointNavigationSystemAgentInterface::execOnFinishFollowingPath },
			{ "OnFollowingPath", &IPointNavigationSystemAgentInterface::execOnFollowingPath },
			{ "OnFollowingPathAbort", &IPointNavigationSystemAgentInterface::execOnFollowingPathAbort },
			{ "OnNavAgentAdded", &IPointNavigationSystemAgentInterface::execOnNavAgentAdded },
			{ "OnNavAgentRemove", &IPointNavigationSystemAgentInterface::execOnNavAgentRemove },
			{ "OnNavSystemPathReceived", &IPointNavigationSystemAgentInterface::execOnNavSystemPathReceived },
			{ "RequestContinuesFollowingPath", &IPointNavigationSystemAgentInterface::execRequestContinuesFollowingPath },
			{ "RequestStartFollowingPath", &IPointNavigationSystemAgentInterface::execRequestStartFollowingPath },
			{ "RequestStopFollowingPath", &IPointNavigationSystemAgentInterface::execRequestStopFollowingPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventGetAgentBufferForPath_Parms, Path), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventGetAgentBufferForPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "GetAgentBufferForPath", nullptr, nullptr, sizeof(PointNavigationSystemAgentInterface_eventGetAgentBufferForPath_Parms), Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ByNavSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::NewProp_ByNavSystem = { "ByNavSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnFinishFollowingPath_Parms, ByNavSystem), Z_Construct_UClass_ULFLPointNavigationSystemV1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::NewProp_ByNavSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "OnFinishFollowingPath", nullptr, nullptr, sizeof(PointNavigationSystemAgentInterface_eventOnFinishFollowingPath_Parms), Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ByNavSystem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPathIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPathIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_ByNavSystem = { "ByNavSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms, ByNavSystem), Z_Construct_UClass_ULFLPointNavigationSystemV1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_CurrentPath = { "CurrentPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms, CurrentPath), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_CurrentPathIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_CurrentPathIndex = { "CurrentPathIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms, CurrentPathIndex), METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_CurrentPathIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_CurrentPathIndex_MetaData)) };
	void Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms), &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_ByNavSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_CurrentPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_CurrentPathIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "OnFollowingPath", nullptr, nullptr, sizeof(PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms), Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ByNavSystem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::NewProp_ByNavSystem = { "ByNavSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnFollowingPathAbort_Parms, ByNavSystem), Z_Construct_UClass_ULFLPointNavigationSystemV1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::NewProp_CurrentPath = { "CurrentPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnFollowingPathAbort_Parms, CurrentPath), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::NewProp_NextPath = { "NextPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnFollowingPathAbort_Parms, NextPath), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::NewProp_ByNavSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::NewProp_CurrentPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::NewProp_NextPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "OnFollowingPathAbort", nullptr, nullptr, sizeof(PointNavigationSystemAgentInterface_eventOnFollowingPathAbort_Parms), Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::NewProp_NavSystem = { "NavSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnNavAgentAdded_Parms, NavSystem), Z_Construct_UClass_ULFLPointNavigationSystemV1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::NewProp_NavSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "OnNavAgentAdded", nullptr, nullptr, sizeof(PointNavigationSystemAgentInterface_eventOnNavAgentAdded_Parms), Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentRemove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentRemove_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "OnNavAgentRemove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ByNavData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_ByNavData = { "ByNavData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnNavSystemPathReceived_Parms, ByNavData), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemAgentInterface_eventOnNavSystemPathReceived_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_Path_MetaData)) };
	void Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemAgentInterface_eventOnNavSystemPathReceived_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemAgentInterface_eventOnNavSystemPathReceived_Parms), &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_ByNavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_Path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "OnNavSystemPathReceived", nullptr, nullptr, sizeof(PointNavigationSystemAgentInterface_eventOnNavSystemPathReceived_Parms), Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemAgentInterface_eventRequestContinuesFollowingPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemAgentInterface_eventRequestContinuesFollowingPath_Parms), &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "RequestContinuesFollowingPath", nullptr, nullptr, sizeof(PointNavigationSystemAgentInterface_eventRequestContinuesFollowingPath_Parms), Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemAgentInterface_eventRequestStartFollowingPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemAgentInterface_eventRequestStartFollowingPath_Parms), &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "RequestStartFollowingPath", nullptr, nullptr, sizeof(PointNavigationSystemAgentInterface_eventRequestStartFollowingPath_Parms), Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemAgentInterface_eventRequestStopFollowingPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemAgentInterface_eventRequestStopFollowingPath_Parms), &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemAgentInterface, nullptr, "RequestStopFollowingPath", nullptr, nullptr, sizeof(PointNavigationSystemAgentInterface_eventRequestStopFollowingPath_Parms), Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointNavigationSystemAgentInterface_NoRegister()
	{
		return UPointNavigationSystemAgentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_GetAgentBufferForPath, "GetAgentBufferForPath" }, // 1491528208
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFinishFollowingPath, "OnFinishFollowingPath" }, // 2895199771
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPath, "OnFollowingPath" }, // 4172153603
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnFollowingPathAbort, "OnFollowingPathAbort" }, // 70377758
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentAdded, "OnNavAgentAdded" }, // 1687841027
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavAgentRemove, "OnNavAgentRemove" }, // 4029885201
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived, "OnNavSystemPathReceived" }, // 2252329086
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath, "RequestContinuesFollowingPath" }, // 821952542
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStartFollowingPath, "RequestStartFollowingPath" }, // 784230190
		{ &Z_Construct_UFunction_UPointNavigationSystemAgentInterface_RequestStopFollowingPath, "RequestStopFollowingPath" }, // 1579054553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPointNavigationSystemAgentInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics::ClassParams = {
		&UPointNavigationSystemAgentInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointNavigationSystemAgentInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointNavigationSystemAgentInterface, 2073417287);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<UPointNavigationSystemAgentInterface>()
	{
		return UPointNavigationSystemAgentInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointNavigationSystemAgentInterface(Z_Construct_UClass_UPointNavigationSystemAgentInterface, &UPointNavigationSystemAgentInterface::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("UPointNavigationSystemAgentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointNavigationSystemAgentInterface);
	static FName NAME_UPointNavigationSystemAgentInterface_GetAgentBufferForPath = FName(TEXT("GetAgentBufferForPath"));
	float IPointNavigationSystemAgentInterface::Execute_GetAgentBufferForPath(UObject* O, ULFLPointNavigationSystemPoint* Path)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		PointNavigationSystemAgentInterface_eventGetAgentBufferForPath_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_GetAgentBufferForPath);
		if (Func)
		{
			Parms.Path=Path;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAgentBufferForPath_Implementation(Path);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemAgentInterface_OnFinishFollowingPath = FName(TEXT("OnFinishFollowingPath"));
	void IPointNavigationSystemAgentInterface::Execute_OnFinishFollowingPath(UObject* O, ULFLPointNavigationSystemV1* ByNavSystem)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		PointNavigationSystemAgentInterface_eventOnFinishFollowingPath_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_OnFinishFollowingPath);
		if (Func)
		{
			Parms.ByNavSystem=ByNavSystem;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			I->OnFinishFollowingPath_Implementation(ByNavSystem);
		}
	}
	static FName NAME_UPointNavigationSystemAgentInterface_OnFollowingPath = FName(TEXT("OnFollowingPath"));
	bool IPointNavigationSystemAgentInterface::Execute_OnFollowingPath(UObject* O, ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, const int32 CurrentPathIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_OnFollowingPath);
		if (Func)
		{
			Parms.ByNavSystem=ByNavSystem;
			Parms.CurrentPath=CurrentPath;
			Parms.CurrentPathIndex=CurrentPathIndex;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnFollowingPath_Implementation(ByNavSystem,CurrentPath,CurrentPathIndex);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemAgentInterface_OnFollowingPathAbort = FName(TEXT("OnFollowingPathAbort"));
	void IPointNavigationSystemAgentInterface::Execute_OnFollowingPathAbort(UObject* O, ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, ULFLPointNavigationSystemPoint* NextPath)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		PointNavigationSystemAgentInterface_eventOnFollowingPathAbort_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_OnFollowingPathAbort);
		if (Func)
		{
			Parms.ByNavSystem=ByNavSystem;
			Parms.CurrentPath=CurrentPath;
			Parms.NextPath=NextPath;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			I->OnFollowingPathAbort_Implementation(ByNavSystem,CurrentPath,NextPath);
		}
	}
	static FName NAME_UPointNavigationSystemAgentInterface_OnNavAgentAdded = FName(TEXT("OnNavAgentAdded"));
	void IPointNavigationSystemAgentInterface::Execute_OnNavAgentAdded(UObject* O, ULFLPointNavigationSystemV1* NavSystem)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		PointNavigationSystemAgentInterface_eventOnNavAgentAdded_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_OnNavAgentAdded);
		if (Func)
		{
			Parms.NavSystem=NavSystem;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			I->OnNavAgentAdded_Implementation(NavSystem);
		}
	}
	static FName NAME_UPointNavigationSystemAgentInterface_OnNavAgentRemove = FName(TEXT("OnNavAgentRemove"));
	void IPointNavigationSystemAgentInterface::Execute_OnNavAgentRemove(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_OnNavAgentRemove);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			I->OnNavAgentRemove_Implementation();
		}
	}
	static FName NAME_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived = FName(TEXT("OnNavSystemPathReceived"));
	bool IPointNavigationSystemAgentInterface::Execute_OnNavSystemPathReceived(UObject* O, ULFLPointNavigationSystemData* ByNavData, TArray<ULFLPointNavigationSystemPoint*> const& Path)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		PointNavigationSystemAgentInterface_eventOnNavSystemPathReceived_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_OnNavSystemPathReceived);
		if (Func)
		{
			Parms.ByNavData=ByNavData;
			Parms.Path=Path;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnNavSystemPathReceived_Implementation(ByNavData,Path);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath = FName(TEXT("RequestContinuesFollowingPath"));
	bool IPointNavigationSystemAgentInterface::Execute_RequestContinuesFollowingPath(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		PointNavigationSystemAgentInterface_eventRequestContinuesFollowingPath_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_RequestContinuesFollowingPath);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			Parms.ReturnValue = I->RequestContinuesFollowingPath_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemAgentInterface_RequestStartFollowingPath = FName(TEXT("RequestStartFollowingPath"));
	bool IPointNavigationSystemAgentInterface::Execute_RequestStartFollowingPath(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		PointNavigationSystemAgentInterface_eventRequestStartFollowingPath_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_RequestStartFollowingPath);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			Parms.ReturnValue = I->RequestStartFollowingPath_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemAgentInterface_RequestStopFollowingPath = FName(TEXT("RequestStopFollowingPath"));
	bool IPointNavigationSystemAgentInterface::Execute_RequestStopFollowingPath(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemAgentInterface::StaticClass()));
		PointNavigationSystemAgentInterface_eventRequestStopFollowingPath_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemAgentInterface_RequestStopFollowingPath);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemAgentInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemAgentInterface::StaticClass())))
		{
			Parms.ReturnValue = I->RequestStopFollowingPath_Implementation();
		}
		return Parms.ReturnValue;
	}
	DEFINE_FUNCTION(IPointNavigationSystemPointLinkInterface::execOnNavAgentUsePointLink)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemV1,Z_Param_NavSystem);
		P_GET_OBJECT(AActor,Z_Param_Agent);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_NavPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavAgentUsePointLink_Implementation(Z_Param_NavSystem,Z_Param_Agent,Z_Param_NavPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemPointLinkInterface::execIsLinkUsable)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_FromNavPoint);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_ToNavPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLinkUsable_Implementation(Z_Param_FromNavPoint,Z_Param_ToNavPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPointNavigationSystemPointLinkInterface::execGetConnectPoint)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemData,Z_Param_NavData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->GetConnectPoint_Implementation(Z_Param_NavData);
		P_NATIVE_END;
	}
	TArray<ULFLPointNavigationSystemPoint*> IPointNavigationSystemPointLinkInterface::GetConnectPoint(ULFLPointNavigationSystemData* NavData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetConnectPoint instead.");
		PointNavigationSystemPointLinkInterface_eventGetConnectPoint_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPointNavigationSystemPointLinkInterface::IsLinkUsable(ULFLPointNavigationSystemPoint* FromNavPoint, ULFLPointNavigationSystemPoint* ToNavPoint)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsLinkUsable instead.");
		PointNavigationSystemPointLinkInterface_eventIsLinkUsable_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPointNavigationSystemPointLinkInterface::OnNavAgentUsePointLink(ULFLPointNavigationSystemV1* NavSystem, AActor* Agent, ULFLPointNavigationSystemPoint* NavPoint)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNavAgentUsePointLink instead.");
	}
	void UPointNavigationSystemPointLinkInterface::StaticRegisterNativesUPointNavigationSystemPointLinkInterface()
	{
		UClass* Class = UPointNavigationSystemPointLinkInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConnectPoint", &IPointNavigationSystemPointLinkInterface::execGetConnectPoint },
			{ "IsLinkUsable", &IPointNavigationSystemPointLinkInterface::execIsLinkUsable },
			{ "OnNavAgentUsePointLink", &IPointNavigationSystemPointLinkInterface::execOnNavAgentUsePointLink },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemPointLinkInterface_eventGetConnectPoint_Parms, NavData), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemPointLinkInterface_eventGetConnectPoint_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemPointLinkInterface, nullptr, "GetConnectPoint", nullptr, nullptr, sizeof(PointNavigationSystemPointLinkInterface_eventGetConnectPoint_Parms), Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromNavPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToNavPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::NewProp_FromNavPoint = { "FromNavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemPointLinkInterface_eventIsLinkUsable_Parms, FromNavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::NewProp_ToNavPoint = { "ToNavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemPointLinkInterface_eventIsLinkUsable_Parms, ToNavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointNavigationSystemPointLinkInterface_eventIsLinkUsable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointNavigationSystemPointLinkInterface_eventIsLinkUsable_Parms), &Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::NewProp_FromNavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::NewProp_ToNavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemPointLinkInterface, nullptr, "IsLinkUsable", nullptr, nullptr, sizeof(PointNavigationSystemPointLinkInterface_eventIsLinkUsable_Parms), Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavSystem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::NewProp_NavSystem = { "NavSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemPointLinkInterface_eventOnNavAgentUsePointLink_Parms, NavSystem), Z_Construct_UClass_ULFLPointNavigationSystemV1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemPointLinkInterface_eventOnNavAgentUsePointLink_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::NewProp_NavPoint = { "NavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointNavigationSystemPointLinkInterface_eventOnNavAgentUsePointLink_Parms, NavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::NewProp_NavSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::NewProp_Agent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::NewProp_NavPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointNavigationSystemInterface | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointNavigationSystemPointLinkInterface, nullptr, "OnNavAgentUsePointLink", nullptr, nullptr, sizeof(PointNavigationSystemPointLinkInterface_eventOnNavAgentUsePointLink_Parms), Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_NoRegister()
	{
		return UPointNavigationSystemPointLinkInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_GetConnectPoint, "GetConnectPoint" }, // 3113115972
		{ &Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_IsLinkUsable, "IsLinkUsable" }, // 3319447709
		{ &Z_Construct_UFunction_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink, "OnNavAgentUsePointLink" }, // 3674845453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPointNavigationSystemPointLinkInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics::ClassParams = {
		&UPointNavigationSystemPointLinkInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointNavigationSystemPointLinkInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointNavigationSystemPointLinkInterface, 1369282734);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<UPointNavigationSystemPointLinkInterface>()
	{
		return UPointNavigationSystemPointLinkInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointNavigationSystemPointLinkInterface(Z_Construct_UClass_UPointNavigationSystemPointLinkInterface, &UPointNavigationSystemPointLinkInterface::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("UPointNavigationSystemPointLinkInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointNavigationSystemPointLinkInterface);
	static FName NAME_UPointNavigationSystemPointLinkInterface_GetConnectPoint = FName(TEXT("GetConnectPoint"));
	TArray<ULFLPointNavigationSystemPoint*> IPointNavigationSystemPointLinkInterface::Execute_GetConnectPoint(UObject* O, ULFLPointNavigationSystemData* NavData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemPointLinkInterface::StaticClass()));
		PointNavigationSystemPointLinkInterface_eventGetConnectPoint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemPointLinkInterface_GetConnectPoint);
		if (Func)
		{
			Parms.NavData=NavData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemPointLinkInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemPointLinkInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetConnectPoint_Implementation(NavData);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemPointLinkInterface_IsLinkUsable = FName(TEXT("IsLinkUsable"));
	bool IPointNavigationSystemPointLinkInterface::Execute_IsLinkUsable(UObject* O, ULFLPointNavigationSystemPoint* FromNavPoint, ULFLPointNavigationSystemPoint* ToNavPoint)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemPointLinkInterface::StaticClass()));
		PointNavigationSystemPointLinkInterface_eventIsLinkUsable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemPointLinkInterface_IsLinkUsable);
		if (Func)
		{
			Parms.FromNavPoint=FromNavPoint;
			Parms.ToNavPoint=ToNavPoint;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemPointLinkInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemPointLinkInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsLinkUsable_Implementation(FromNavPoint,ToNavPoint);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink = FName(TEXT("OnNavAgentUsePointLink"));
	void IPointNavigationSystemPointLinkInterface::Execute_OnNavAgentUsePointLink(UObject* O, ULFLPointNavigationSystemV1* NavSystem, AActor* Agent, ULFLPointNavigationSystemPoint* NavPoint)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPointNavigationSystemPointLinkInterface::StaticClass()));
		PointNavigationSystemPointLinkInterface_eventOnNavAgentUsePointLink_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPointNavigationSystemPointLinkInterface_OnNavAgentUsePointLink);
		if (Func)
		{
			Parms.NavSystem=NavSystem;
			Parms.Agent=Agent;
			Parms.NavPoint=NavPoint;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPointNavigationSystemPointLinkInterface*)(O->GetNativeInterfaceAddress(UPointNavigationSystemPointLinkInterface::StaticClass())))
		{
			I->OnNavAgentUsePointLink_Implementation(NavSystem,Agent,NavPoint);
		}
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execAverageWeightWithConnectNavPoint)
	{
		P_GET_UBOOL(Z_Param_SetWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AverageWeightWithConnectNavPoint(Z_Param_SetWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execRemoveWalkableToPoint)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_RemovePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveWalkableToPoint(Z_Param_RemovePoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execAddWalkableToPoint)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_Walkable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddWalkableToPoint(Z_Param_Walkable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execClearConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execBeginClearUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginClearUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execInitialize)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Weight);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(AActor,Z_Param_Link);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Out_Location,Z_Param_Out_Weight,Z_Param_Actor,Z_Param_Link,Z_Param_Out_PointIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execBroadcastReach)
	{
		P_GET_OBJECT(AActor,Z_Param_ByAgent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BroadcastReach(Z_Param_ByAgent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execHasReach)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistance);
		P_GET_UBOOL(Z_Param_Broadcast);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasReach(Z_Param_Actor,Z_Param_MinDistance,Z_Param_Broadcast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execIsNavPointPassable)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_NavPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNavPointPassable(Z_Param_NavPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execIsNavPointWalkable)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNavPointWalkable(Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execAddPointBuffer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AddPointBuffer(Z_Param_AddValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execBufferTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BufferTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetNavData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavigationSystemData**)Z_Param__Result=P_THIS->GetNavData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetPassableNavPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->GetPassableNavPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetPointIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPointIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetConnectPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->GetConnectPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetWalkablePoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->GetWalkablePoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetOwingLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwingLink();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetOwingActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwingActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetPointWeight)
	{
		P_GET_UBOOL(Z_Param_WithBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPointWeight(Z_Param_WithBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetPointBuffer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPointBuffer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetWorldLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execGetLocalLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocalLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemPoint::execBeginDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDestroy();
		P_NATIVE_END;
	}
	void ULFLPointNavigationSystemPoint::StaticRegisterNativesULFLPointNavigationSystemPoint()
	{
		UClass* Class = ULFLPointNavigationSystemPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPointBuffer", &ULFLPointNavigationSystemPoint::execAddPointBuffer },
			{ "AddWalkableToPoint", &ULFLPointNavigationSystemPoint::execAddWalkableToPoint },
			{ "AverageWeightWithConnectNavPoint", &ULFLPointNavigationSystemPoint::execAverageWeightWithConnectNavPoint },
			{ "BeginClearUp", &ULFLPointNavigationSystemPoint::execBeginClearUp },
			{ "BeginDestroy", &ULFLPointNavigationSystemPoint::execBeginDestroy },
			{ "BroadcastReach", &ULFLPointNavigationSystemPoint::execBroadcastReach },
			{ "BufferTick", &ULFLPointNavigationSystemPoint::execBufferTick },
			{ "ClearConnection", &ULFLPointNavigationSystemPoint::execClearConnection },
			{ "GetConnectPoint", &ULFLPointNavigationSystemPoint::execGetConnectPoint },
			{ "GetLocalLocation", &ULFLPointNavigationSystemPoint::execGetLocalLocation },
			{ "GetNavData", &ULFLPointNavigationSystemPoint::execGetNavData },
			{ "GetOwingActor", &ULFLPointNavigationSystemPoint::execGetOwingActor },
			{ "GetOwingLink", &ULFLPointNavigationSystemPoint::execGetOwingLink },
			{ "GetPassableNavPoint", &ULFLPointNavigationSystemPoint::execGetPassableNavPoint },
			{ "GetPointBuffer", &ULFLPointNavigationSystemPoint::execGetPointBuffer },
			{ "GetPointIndex", &ULFLPointNavigationSystemPoint::execGetPointIndex },
			{ "GetPointWeight", &ULFLPointNavigationSystemPoint::execGetPointWeight },
			{ "GetWalkablePoint", &ULFLPointNavigationSystemPoint::execGetWalkablePoint },
			{ "GetWorldLocation", &ULFLPointNavigationSystemPoint::execGetWorldLocation },
			{ "HasReach", &ULFLPointNavigationSystemPoint::execHasReach },
			{ "Initialize", &ULFLPointNavigationSystemPoint::execInitialize },
			{ "IsNavPointPassable", &ULFLPointNavigationSystemPoint::execIsNavPointPassable },
			{ "IsNavPointWalkable", &ULFLPointNavigationSystemPoint::execIsNavPointWalkable },
			{ "RemoveWalkableToPoint", &ULFLPointNavigationSystemPoint::execRemoveWalkableToPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics
	{
		struct LFLPointNavigationSystemPoint_eventAddPointBuffer_Parms
		{
			float AddValue;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::NewProp_AddValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::NewProp_AddValue = { "AddValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventAddPointBuffer_Parms, AddValue), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::NewProp_AddValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::NewProp_AddValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventAddPointBuffer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::NewProp_AddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "AddPointBuffer", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventAddPointBuffer_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics
	{
		struct LFLPointNavigationSystemPoint_eventAddWalkableToPoint_Parms
		{
			ULFLPointNavigationSystemPoint* Walkable;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Walkable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::NewProp_Walkable = { "Walkable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventAddWalkableToPoint_Parms, Walkable), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemPoint_eventAddWalkableToPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemPoint_eventAddWalkableToPoint_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::NewProp_Walkable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Internal Function\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Internal Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "AddWalkableToPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventAddWalkableToPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics
	{
		struct LFLPointNavigationSystemPoint_eventAverageWeightWithConnectNavPoint_Parms
		{
			bool SetWeight;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetWeight_MetaData[];
#endif
		static void NewProp_SetWeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetWeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::NewProp_SetWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::NewProp_SetWeight_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemPoint_eventAverageWeightWithConnectNavPoint_Parms*)Obj)->SetWeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::NewProp_SetWeight = { "SetWeight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemPoint_eventAverageWeightWithConnectNavPoint_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::NewProp_SetWeight_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::NewProp_SetWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::NewProp_SetWeight_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventAverageWeightWithConnectNavPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::NewProp_SetWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "AverageWeightWithConnectNavPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventAverageWeightWithConnectNavPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginClearUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginClearUp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Ready Point For Destory (Clear All Connection To This Point)\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Ready Point For Destory (Clear All Connection To This Point)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginClearUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "BeginClearUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginClearUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginClearUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginClearUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginClearUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "BeginDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics
	{
		struct LFLPointNavigationSystemPoint_eventBroadcastReach_Parms
		{
			AActor* ByAgent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ByAgent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::NewProp_ByAgent = { "ByAgent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventBroadcastReach_Parms, ByAgent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemPoint_eventBroadcastReach_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemPoint_eventBroadcastReach_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::NewProp_ByAgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "Comment", "// Broadcast\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Broadcast" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "BroadcastReach", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventBroadcastReach_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BufferTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BufferTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Buffer\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Buffer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BufferTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "BufferTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BufferTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BufferTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BufferTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BufferTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_ClearConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_ClearConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_ClearConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "ClearConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_ClearConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_ClearConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_ClearConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_ClearConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetConnectPoint_Parms
		{
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetConnectPoint_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetConnectPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetConnectPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetLocalLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetLocalLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "Comment", "// Getter Function\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Getter Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetLocalLocation", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetLocalLocation_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetNavData_Parms
		{
			ULFLPointNavigationSystemData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetNavData_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetNavData", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetNavData_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetOwingActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetOwingActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetOwingActor", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetOwingActor_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetOwingLink_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetOwingLink_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetOwingLink", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetOwingLink_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetPassableNavPoint_Parms
		{
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetPassableNavPoint_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "Comment", "// Advance Getter Function\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Advance Getter Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetPassableNavPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetPassableNavPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetPointBuffer_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetPointBuffer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetPointBuffer", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetPointBuffer_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetPointIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetPointIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetPointIndex", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetPointIndex_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetPointWeight_Parms
		{
			bool WithBuffer;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WithBuffer_MetaData[];
#endif
		static void NewProp_WithBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithBuffer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::NewProp_WithBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::NewProp_WithBuffer_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemPoint_eventGetPointWeight_Parms*)Obj)->WithBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::NewProp_WithBuffer = { "WithBuffer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemPoint_eventGetPointWeight_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::NewProp_WithBuffer_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::NewProp_WithBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::NewProp_WithBuffer_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetPointWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::NewProp_WithBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetPointWeight", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetPointWeight_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetWalkablePoint_Parms
		{
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetWalkablePoint_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetWalkablePoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetWalkablePoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics
	{
		struct LFLPointNavigationSystemPoint_eventGetWorldLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventGetWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "GetWorldLocation", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventGetWorldLocation_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics
	{
		struct LFLPointNavigationSystemPoint_eventHasReach_Parms
		{
			AActor* Actor;
			float MinDistance;
			bool Broadcast;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Broadcast_MetaData[];
#endif
		static void NewProp_Broadcast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Broadcast;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventHasReach_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_MinDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventHasReach_Parms, MinDistance), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_Broadcast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_Broadcast_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemPoint_eventHasReach_Parms*)Obj)->Broadcast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_Broadcast = { "Broadcast", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemPoint_eventHasReach_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_Broadcast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_Broadcast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_Broadcast_MetaData)) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemPoint_eventHasReach_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemPoint_eventHasReach_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_Broadcast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "HasReach", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventHasReach_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics
	{
		struct LFLPointNavigationSystemPoint_eventInitialize_Parms
		{
			FVector Location;
			float Weight;
			AActor* Actor;
			AActor* Link;
			int32 PointIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Link;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventInitialize_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Weight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventInitialize_Parms, Weight), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventInitialize_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Link = { "Link", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventInitialize_Parms, Link), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_PointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventInitialize_Parms, PointIndex), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_PointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_PointIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_Link,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::NewProp_PointIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Helper Function\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Helper Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "Initialize", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventInitialize_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics
	{
		struct LFLPointNavigationSystemPoint_eventIsNavPointPassable_Parms
		{
			const ULFLPointNavigationSystemPoint* NavPoint;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::NewProp_NavPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::NewProp_NavPoint = { "NavPoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventIsNavPointPassable_Parms, NavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::NewProp_NavPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::NewProp_NavPoint_MetaData)) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemPoint_eventIsNavPointPassable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemPoint_eventIsNavPointPassable_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::NewProp_NavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "IsNavPointPassable", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventIsNavPointPassable_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics
	{
		struct LFLPointNavigationSystemPoint_eventIsNavPointWalkable_Parms
		{
			ULFLPointNavigationSystemPoint* Point;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventIsNavPointWalkable_Parms, Point), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemPoint_eventIsNavPointWalkable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemPoint_eventIsNavPointWalkable_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Function" },
		{ "Comment", "// Checker Function\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Checker Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "IsNavPointWalkable", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventIsNavPointWalkable_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics
	{
		struct LFLPointNavigationSystemPoint_eventRemoveWalkableToPoint_Parms
		{
			ULFLPointNavigationSystemPoint* RemovePoint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemovePoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::NewProp_RemovePoint = { "RemovePoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemPoint_eventRemoveWalkableToPoint_Parms, RemovePoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemPoint_eventRemoveWalkableToPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemPoint_eventRemoveWalkableToPoint_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::NewProp_RemovePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemPoint, nullptr, "RemoveWalkableToPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemPoint_eventRemoveWalkableToPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister()
	{
		return ULFLPointNavigationSystemPoint::StaticClass();
	}
	struct Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwingLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwingLink;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkablePoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkablePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WalkablePoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectPoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CacheIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BufferHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwingAreaID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OwingAreaID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddPointBuffer, "AddPointBuffer" }, // 3356042001
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AddWalkableToPoint, "AddWalkableToPoint" }, // 3654061730
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_AverageWeightWithConnectNavPoint, "AverageWeightWithConnectNavPoint" }, // 510389359
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginClearUp, "BeginClearUp" }, // 3625902363
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BeginDestroy, "BeginDestroy" }, // 4238671602
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BroadcastReach, "BroadcastReach" }, // 1474737936
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_BufferTick, "BufferTick" }, // 1755016141
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_ClearConnection, "ClearConnection" }, // 39479824
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetConnectPoint, "GetConnectPoint" }, // 2118285603
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetLocalLocation, "GetLocalLocation" }, // 3003291406
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetNavData, "GetNavData" }, // 4018169138
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingActor, "GetOwingActor" }, // 3738648456
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetOwingLink, "GetOwingLink" }, // 2633956126
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPassableNavPoint, "GetPassableNavPoint" }, // 3276467282
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointBuffer, "GetPointBuffer" }, // 662086112
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointIndex, "GetPointIndex" }, // 1743298758
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetPointWeight, "GetPointWeight" }, // 3585058160
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWalkablePoint, "GetWalkablePoint" }, // 42052577
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_GetWorldLocation, "GetWorldLocation" }, // 1437064893
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_HasReach, "HasReach" }, // 3605032442
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_Initialize, "Initialize" }, // 4278307945
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointPassable, "IsNavPointPassable" }, // 251591442
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_IsNavPointWalkable, "IsNavPointWalkable" }, // 310978766
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemPoint_RemoveWalkableToPoint, "RemoveWalkableToPoint" }, // 446704304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Navigation/LFLPointNavigationSystemV1.h" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_LocalLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_LocalLocation = { "LocalLocation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, LocalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_LocalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_LocalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointWeight = { "PointWeight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, PointWeight), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointBuffer = { "PointBuffer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, PointBuffer), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingActor = { "OwingActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, OwingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingLink_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingLink = { "OwingLink", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, OwingLink), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingLink_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_WalkablePoint_Inner = { "WalkablePoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_WalkablePoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_WalkablePoint = { "WalkablePoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, WalkablePoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_WalkablePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_WalkablePoint_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_ConnectPoint_Inner = { "ConnectPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_ConnectPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_ConnectPoint = { "ConnectPoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, ConnectPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_ConnectPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_ConnectPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_CacheIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_CacheIndex = { "CacheIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, CacheIndex), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_CacheIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_CacheIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_BufferHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_BufferHandler = { "BufferHandler", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, BufferHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_BufferHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_BufferHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_IsActive_MetaData[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Variable" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	void Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((ULFLPointNavigationSystemPoint*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULFLPointNavigationSystemPoint), &Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_IsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingAreaID_MetaData[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Variable" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingAreaID = { "OwingAreaID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, OwingAreaID), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingAreaID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingAreaID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointType_MetaData[] = {
		{ "Category", "LFLPointNavigationSystemPoint | Variable" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointType = { "PointType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemPoint, PointType), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_LocalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_WalkablePoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_WalkablePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_ConnectPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_ConnectPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_CacheIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_BufferHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_IsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_OwingAreaID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::NewProp_PointType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLPointNavigationSystemPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::ClassParams = {
		&ULFLPointNavigationSystemPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLPointNavigationSystemPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLPointNavigationSystemPoint, 2909759153);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLPointNavigationSystemPoint>()
	{
		return ULFLPointNavigationSystemPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLPointNavigationSystemPoint(Z_Construct_UClass_ULFLPointNavigationSystemPoint, &ULFLPointNavigationSystemPoint::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLPointNavigationSystemPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLPointNavigationSystemPoint);
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execBeginClearUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginClearUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execFindNearestNavigationPointFromLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FromLocation);
		P_GET_UBOOL(Z_Param_UseTrackingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavigationSystemPoint**)Z_Param__Result=P_THIS->FindNearestNavigationPointFromLocation(Z_Param_Out_FromLocation,Z_Param_UseTrackingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execFindNearestNavigationPoint)
	{
		P_GET_OBJECT(AActor,Z_Param_FromActor);
		P_GET_UBOOL(Z_Param_UseTrackingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavigationSystemPoint**)Z_Param__Result=P_THIS->FindNearestNavigationPoint(Z_Param_FromActor,Z_Param_UseTrackingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execFindNearestTrackingActorFromLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FromLocation);
		P_GET_TARRAY_REF(ULFLPointNavigationSystemPoint*,Z_Param_Out_ActorNavPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->FindNearestTrackingActorFromLocation(Z_Param_Out_FromLocation,Z_Param_Out_ActorNavPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execFindNearestTrackingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_FromActor);
		P_GET_TARRAY_REF(ULFLPointNavigationSystemPoint*,Z_Param_Out_ActorNavPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->FindNearestTrackingActor(Z_Param_FromActor,Z_Param_Out_ActorNavPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetNavigationPointAtLocationsOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Offset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DetectDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->GetNavigationPointAtLocationsOffset(Z_Param_Location,Z_Param_Out_Offset,Z_Param_DetectDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetNavigationPointAtLocations)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DetectDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->GetNavigationPointAtLocations(Z_Param_Out_Locations,Z_Param_DetectDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetNavigationPointAtLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DetectDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->GetNavigationPointAtLocation(Z_Param_Location,Z_Param_DetectDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetSingleNavigationPointAtLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DetectDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavigationSystemPoint**)Z_Param__Result=P_THIS->GetSingleNavigationPointAtLocation(Z_Param_Location,Z_Param_DetectDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetNavigationPointInBoxs)
	{
		P_GET_TARRAY_REF(FBox,Z_Param_Out_Boxs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->GetNavigationPointInBoxs(Z_Param_Out_Boxs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetNavigationPointInBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->GetNavigationPointInBox(Z_Param_Out_Box);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetSingleNavigationPointInBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavigationSystemPoint**)Z_Param__Result=P_THIS->GetSingleNavigationPointInBox(Z_Param_Out_Box);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execRemoveWalkablesToPoint)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_NavPoint);
		P_GET_TARRAY_REF(ULFLPointNavigationSystemPoint*,Z_Param_Out_RemovePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveWalkablesToPoint(Z_Param_NavPoint,Z_Param_Out_RemovePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execRemoveWalkableToPoint)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_NavPoint);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_RemovePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveWalkableToPoint(Z_Param_NavPoint,Z_Param_RemovePoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execAddWalkablesToPoint)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_NavPoint);
		P_GET_TARRAY_REF(ULFLPointNavigationSystemPoint*,Z_Param_Out_Walkables);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddWalkablesToPoint(Z_Param_NavPoint,Z_Param_Out_Walkables);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execAddWalkableToPoint)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_NavPoint);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_Walkable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddWalkableToPoint(Z_Param_NavPoint,Z_Param_Walkable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execClearConnection)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_NavPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearConnection(Z_Param_NavPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execSetNavigationPointActive)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_NavPoint);
		P_GET_UBOOL(Z_Param_IsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetNavigationPointActive(Z_Param_NavPoint,Z_Param_IsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execAddNavigationPoint)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointIndex);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PointWeight);
		P_GET_OBJECT(AActor,Z_Param_AttachActor);
		P_GET_OBJECT(AActor,Z_Param_OwingLink);
		P_GET_PROPERTY(FIntProperty,Z_Param_PointType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavigationSystemPoint**)Z_Param__Result=P_THIS->AddNavigationPoint(Z_Param_Out_PointIndex,Z_Param_Location,Z_Param_PointWeight,Z_Param_AttachActor,Z_Param_OwingLink,Z_Param_PointType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetNavigationAreaData)
	{
		P_GET_STRUCT_REF(FLFLNavigationAreaConnectData,Z_Param_Out_ConnectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFLNavigationAreaData*)Z_Param__Result=P_THIS->GetNavigationAreaData(Z_Param_Out_ConnectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execAverageNavPointWeightInTrackingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AverageNavPointWeightInTrackingActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetTrackingActorData)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FLFLNavigationTrackingActorData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTrackingActorData(Z_Param_Actor,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execRemoveTrackingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTrackingActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execAddTrackingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddTrackingActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execGetTrackingActorList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFLNavigationTrackingActorData>*)Z_Param__Result=P_THIS->GetTrackingActorList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemData::execBeginDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDestroy();
		P_NATIVE_END;
	}
	void ULFLPointNavigationSystemData::StaticRegisterNativesULFLPointNavigationSystemData()
	{
		UClass* Class = ULFLPointNavigationSystemData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNavigationPoint", &ULFLPointNavigationSystemData::execAddNavigationPoint },
			{ "AddTrackingActor", &ULFLPointNavigationSystemData::execAddTrackingActor },
			{ "AddWalkablesToPoint", &ULFLPointNavigationSystemData::execAddWalkablesToPoint },
			{ "AddWalkableToPoint", &ULFLPointNavigationSystemData::execAddWalkableToPoint },
			{ "AverageNavPointWeightInTrackingActor", &ULFLPointNavigationSystemData::execAverageNavPointWeightInTrackingActor },
			{ "BeginClearUp", &ULFLPointNavigationSystemData::execBeginClearUp },
			{ "BeginDestroy", &ULFLPointNavigationSystemData::execBeginDestroy },
			{ "ClearConnection", &ULFLPointNavigationSystemData::execClearConnection },
			{ "FindNearestNavigationPoint", &ULFLPointNavigationSystemData::execFindNearestNavigationPoint },
			{ "FindNearestNavigationPointFromLocation", &ULFLPointNavigationSystemData::execFindNearestNavigationPointFromLocation },
			{ "FindNearestTrackingActor", &ULFLPointNavigationSystemData::execFindNearestTrackingActor },
			{ "FindNearestTrackingActorFromLocation", &ULFLPointNavigationSystemData::execFindNearestTrackingActorFromLocation },
			{ "GetNavigationAreaData", &ULFLPointNavigationSystemData::execGetNavigationAreaData },
			{ "GetNavigationPointAtLocation", &ULFLPointNavigationSystemData::execGetNavigationPointAtLocation },
			{ "GetNavigationPointAtLocations", &ULFLPointNavigationSystemData::execGetNavigationPointAtLocations },
			{ "GetNavigationPointAtLocationsOffset", &ULFLPointNavigationSystemData::execGetNavigationPointAtLocationsOffset },
			{ "GetNavigationPointInBox", &ULFLPointNavigationSystemData::execGetNavigationPointInBox },
			{ "GetNavigationPointInBoxs", &ULFLPointNavigationSystemData::execGetNavigationPointInBoxs },
			{ "GetSingleNavigationPointAtLocation", &ULFLPointNavigationSystemData::execGetSingleNavigationPointAtLocation },
			{ "GetSingleNavigationPointInBox", &ULFLPointNavigationSystemData::execGetSingleNavigationPointInBox },
			{ "GetTrackingActorData", &ULFLPointNavigationSystemData::execGetTrackingActorData },
			{ "GetTrackingActorList", &ULFLPointNavigationSystemData::execGetTrackingActorList },
			{ "RemoveTrackingActor", &ULFLPointNavigationSystemData::execRemoveTrackingActor },
			{ "RemoveWalkablesToPoint", &ULFLPointNavigationSystemData::execRemoveWalkablesToPoint },
			{ "RemoveWalkableToPoint", &ULFLPointNavigationSystemData::execRemoveWalkableToPoint },
			{ "SetNavigationPointActive", &ULFLPointNavigationSystemData::execSetNavigationPointActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics
	{
		struct LFLPointNavigationSystemData_eventAddNavigationPoint_Parms
		{
			int32 PointIndex;
			FVector Location;
			float PointWeight;
			AActor* AttachActor;
			AActor* OwingLink;
			int32 PointType;
			ULFLPointNavigationSystemPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointWeight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwingLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddNavigationPoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddNavigationPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointWeight = { "PointWeight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddNavigationPoint_Parms, PointWeight), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointWeight_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_AttachActor = { "AttachActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddNavigationPoint_Parms, AttachActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_OwingLink = { "OwingLink", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddNavigationPoint_Parms, OwingLink), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointType = { "PointType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddNavigationPoint_Parms, PointType), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddNavigationPoint_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_AttachActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_OwingLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_PointType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "Comment", "// Nav Point\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Nav Point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "AddNavigationPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventAddNavigationPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics
	{
		struct LFLPointNavigationSystemData_eventAddTrackingActor_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddTrackingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventAddTrackingActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventAddTrackingActor_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Tracking Actor" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "AddTrackingActor", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventAddTrackingActor_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics
	{
		struct LFLPointNavigationSystemData_eventAddWalkablesToPoint_Parms
		{
			ULFLPointNavigationSystemPoint* NavPoint;
			TArray<ULFLPointNavigationSystemPoint*> Walkables;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Walkables_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Walkables;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::NewProp_NavPoint = { "NavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddWalkablesToPoint_Parms, NavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::NewProp_Walkables_Inner = { "Walkables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::NewProp_Walkables = { "Walkables", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddWalkablesToPoint_Parms, Walkables), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddWalkablesToPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::NewProp_NavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::NewProp_Walkables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::NewProp_Walkables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "AddWalkablesToPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventAddWalkablesToPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics
	{
		struct LFLPointNavigationSystemData_eventAddWalkableToPoint_Parms
		{
			ULFLPointNavigationSystemPoint* NavPoint;
			ULFLPointNavigationSystemPoint* Walkable;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Walkable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::NewProp_NavPoint = { "NavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddWalkableToPoint_Parms, NavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::NewProp_Walkable = { "Walkable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAddWalkableToPoint_Parms, Walkable), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventAddWalkableToPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventAddWalkableToPoint_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::NewProp_NavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::NewProp_Walkable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "AddWalkableToPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventAddWalkableToPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics
	{
		struct LFLPointNavigationSystemData_eventAverageNavPointWeightInTrackingActor_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventAverageNavPointWeightInTrackingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventAverageNavPointWeightInTrackingActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventAverageNavPointWeightInTrackingActor_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Tracking Actor" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "AverageNavPointWeightInTrackingActor", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventAverageNavPointWeightInTrackingActor_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginClearUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginClearUp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Other\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Other" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginClearUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "BeginClearUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginClearUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginClearUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginClearUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginClearUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "BeginDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics
	{
		struct LFLPointNavigationSystemData_eventClearConnection_Parms
		{
			ULFLPointNavigationSystemPoint* NavPoint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::NewProp_NavPoint = { "NavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventClearConnection_Parms, NavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventClearConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventClearConnection_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::NewProp_NavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "ClearConnection", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventClearConnection_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics
	{
		struct LFLPointNavigationSystemData_eventFindNearestNavigationPoint_Parms
		{
			const AActor* FromActor;
			bool UseTrackingActor;
			ULFLPointNavigationSystemPoint* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseTrackingActor_MetaData[];
#endif
		static void NewProp_UseTrackingActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseTrackingActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_FromActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_FromActor = { "FromActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestNavigationPoint_Parms, FromActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_FromActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_FromActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_UseTrackingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_UseTrackingActor_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventFindNearestNavigationPoint_Parms*)Obj)->UseTrackingActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_UseTrackingActor = { "UseTrackingActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventFindNearestNavigationPoint_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_UseTrackingActor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_UseTrackingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_UseTrackingActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestNavigationPoint_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_FromActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_UseTrackingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "FindNearestNavigationPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventFindNearestNavigationPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics
	{
		struct LFLPointNavigationSystemData_eventFindNearestNavigationPointFromLocation_Parms
		{
			FVector FromLocation;
			bool UseTrackingActor;
			ULFLPointNavigationSystemPoint* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseTrackingActor_MetaData[];
#endif
		static void NewProp_UseTrackingActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseTrackingActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_FromLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_FromLocation = { "FromLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestNavigationPointFromLocation_Parms, FromLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_FromLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_FromLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_UseTrackingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_UseTrackingActor_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventFindNearestNavigationPointFromLocation_Parms*)Obj)->UseTrackingActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_UseTrackingActor = { "UseTrackingActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventFindNearestNavigationPointFromLocation_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_UseTrackingActor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_UseTrackingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_UseTrackingActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestNavigationPointFromLocation_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_FromLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_UseTrackingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "FindNearestNavigationPointFromLocation", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventFindNearestNavigationPointFromLocation_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics
	{
		struct LFLPointNavigationSystemData_eventFindNearestTrackingActor_Parms
		{
			const AActor* FromActor;
			TArray<ULFLPointNavigationSystemPoint*> ActorNavPoint;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorNavPoint_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorNavPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_FromActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_FromActor = { "FromActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestTrackingActor_Parms, FromActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_FromActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_FromActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_ActorNavPoint_Inner = { "ActorNavPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_ActorNavPoint = { "ActorNavPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestTrackingActor_Parms, ActorNavPoint), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestTrackingActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_FromActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_ActorNavPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_ActorNavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "FindNearestTrackingActor", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventFindNearestTrackingActor_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics
	{
		struct LFLPointNavigationSystemData_eventFindNearestTrackingActorFromLocation_Parms
		{
			FVector FromLocation;
			TArray<ULFLPointNavigationSystemPoint*> ActorNavPoint;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorNavPoint_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorNavPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_FromLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_FromLocation = { "FromLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestTrackingActorFromLocation_Parms, FromLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_FromLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_FromLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_ActorNavPoint_Inner = { "ActorNavPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_ActorNavPoint = { "ActorNavPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestTrackingActorFromLocation_Parms, ActorNavPoint), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventFindNearestTrackingActorFromLocation_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_FromLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_ActorNavPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_ActorNavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "FindNearestTrackingActorFromLocation", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventFindNearestTrackingActorFromLocation_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics
	{
		struct LFLPointNavigationSystemData_eventGetNavigationAreaData_Parms
		{
			FLFLNavigationAreaConnectData ConnectData;
			FLFLNavigationAreaData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::NewProp_ConnectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::NewProp_ConnectData = { "ConnectData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationAreaData_Parms, ConnectData), Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::NewProp_ConnectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::NewProp_ConnectData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationAreaData_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFLNavigationAreaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::NewProp_ConnectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// This is a Unsafe Function (Ref could null and cause crash)\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "This is a Unsafe Function (Ref could null and cause crash)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetNavigationAreaData", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetNavigationAreaData_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics
	{
		struct LFLPointNavigationSystemData_eventGetNavigationPointAtLocation_Parms
		{
			FVector Location;
			float DetectDistance;
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_DetectDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_DetectDistance = { "DetectDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocation_Parms, DetectDistance), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_DetectDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_DetectDistance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_DetectDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetNavigationPointAtLocation", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetNavigationPointAtLocation_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics
	{
		struct LFLPointNavigationSystemData_eventGetNavigationPointAtLocations_Parms
		{
			TArray<FVector> Locations;
			float DetectDistance;
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_Locations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocations_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_Locations_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_Locations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_DetectDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_DetectDistance = { "DetectDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocations_Parms, DetectDistance), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_DetectDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_DetectDistance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_Locations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_Locations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_DetectDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetNavigationPointAtLocations", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetNavigationPointAtLocations_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics
	{
		struct LFLPointNavigationSystemData_eventGetNavigationPointAtLocationsOffset_Parms
		{
			FVector Location;
			TArray<FVector> Offset;
			float DetectDistance;
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocationsOffset_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Offset_Inner = { "Offset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocationsOffset_Parms, Offset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_DetectDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_DetectDistance = { "DetectDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocationsOffset_Parms, DetectDistance), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_DetectDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_DetectDistance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointAtLocationsOffset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Offset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_DetectDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetNavigationPointAtLocationsOffset", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetNavigationPointAtLocationsOffset_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics
	{
		struct LFLPointNavigationSystemData_eventGetNavigationPointInBox_Parms
		{
			FBox Box;
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::NewProp_Box_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointInBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::NewProp_Box_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointInBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetNavigationPointInBox", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetNavigationPointInBox_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics
	{
		struct LFLPointNavigationSystemData_eventGetNavigationPointInBoxs_Parms
		{
			TArray<FBox> Boxs;
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Boxs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boxs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Boxs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_Boxs_Inner = { "Boxs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_Boxs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_Boxs = { "Boxs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointInBoxs_Parms, Boxs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_Boxs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_Boxs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetNavigationPointInBoxs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_Boxs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_Boxs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetNavigationPointInBoxs", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetNavigationPointInBoxs_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics
	{
		struct LFLPointNavigationSystemData_eventGetSingleNavigationPointAtLocation_Parms
		{
			FVector Location;
			float DetectDistance;
			ULFLPointNavigationSystemPoint* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetSingleNavigationPointAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_DetectDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_DetectDistance = { "DetectDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetSingleNavigationPointAtLocation_Parms, DetectDistance), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_DetectDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_DetectDistance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetSingleNavigationPointAtLocation_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_DetectDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetSingleNavigationPointAtLocation", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetSingleNavigationPointAtLocation_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics
	{
		struct LFLPointNavigationSystemData_eventGetSingleNavigationPointInBox_Parms
		{
			FBox Box;
			ULFLPointNavigationSystemPoint* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::NewProp_Box_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetSingleNavigationPointInBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::NewProp_Box_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetSingleNavigationPointInBox_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "Comment", "// Nav Point Finder\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Nav Point Finder" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetSingleNavigationPointInBox", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetSingleNavigationPointInBox_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics
	{
		struct LFLPointNavigationSystemData_eventGetTrackingActorData_Parms
		{
			AActor* Actor;
			FLFLNavigationTrackingActorData Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetTrackingActorData_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetTrackingActorData_Parms, Data), Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventGetTrackingActorData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventGetTrackingActorData_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Tracking Actor" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetTrackingActorData", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetTrackingActorData_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics
	{
		struct LFLPointNavigationSystemData_eventGetTrackingActorList_Parms
		{
			TArray<FLFLNavigationTrackingActorData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventGetTrackingActorList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Tracking Actor" },
		{ "Comment", "// Tracking Actor\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Tracking Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "GetTrackingActorList", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventGetTrackingActorList_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics
	{
		struct LFLPointNavigationSystemData_eventRemoveTrackingActor_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventRemoveTrackingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventRemoveTrackingActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventRemoveTrackingActor_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Tracking Actor" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "RemoveTrackingActor", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventRemoveTrackingActor_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics
	{
		struct LFLPointNavigationSystemData_eventRemoveWalkablesToPoint_Parms
		{
			ULFLPointNavigationSystemPoint* NavPoint;
			TArray<ULFLPointNavigationSystemPoint*> RemovePoints;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemovePoints_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovePoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::NewProp_NavPoint = { "NavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventRemoveWalkablesToPoint_Parms, NavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::NewProp_RemovePoints_Inner = { "RemovePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::NewProp_RemovePoints = { "RemovePoints", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventRemoveWalkablesToPoint_Parms, RemovePoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventRemoveWalkablesToPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::NewProp_NavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::NewProp_RemovePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::NewProp_RemovePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "RemoveWalkablesToPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventRemoveWalkablesToPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics
	{
		struct LFLPointNavigationSystemData_eventRemoveWalkableToPoint_Parms
		{
			ULFLPointNavigationSystemPoint* NavPoint;
			ULFLPointNavigationSystemPoint* RemovePoint;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemovePoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::NewProp_NavPoint = { "NavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventRemoveWalkableToPoint_Parms, NavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::NewProp_RemovePoint = { "RemovePoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventRemoveWalkableToPoint_Parms, RemovePoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventRemoveWalkableToPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventRemoveWalkableToPoint_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::NewProp_NavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::NewProp_RemovePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "RemoveWalkableToPoint", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventRemoveWalkableToPoint_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics
	{
		struct LFLPointNavigationSystemData_eventSetNavigationPointActive_Parms
		{
			ULFLPointNavigationSystemPoint* NavPoint;
			bool IsActive;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_NavPoint = { "NavPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemData_eventSetNavigationPointActive_Parms, NavPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_IsActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventSetNavigationPointActive_Parms*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventSetNavigationPointActive_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_IsActive_MetaData)) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemData_eventSetNavigationPointActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemData_eventSetNavigationPointActive_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_NavPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_IsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemData | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemData, nullptr, "SetNavigationPointActive", nullptr, nullptr, sizeof(LFLPointNavigationSystemData_eventSetNavigationPointActive_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister()
	{
		return ULFLPointNavigationSystemData::StaticClass();
	}
	struct Z_Construct_UClass_ULFLPointNavigationSystemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackingActorData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingActorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingActorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_AddNavigationPoint, "AddNavigationPoint" }, // 255044994
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_AddTrackingActor, "AddTrackingActor" }, // 1566884070
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkablesToPoint, "AddWalkablesToPoint" }, // 3030805243
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_AddWalkableToPoint, "AddWalkableToPoint" }, // 2075498982
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_AverageNavPointWeightInTrackingActor, "AverageNavPointWeightInTrackingActor" }, // 1922147871
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginClearUp, "BeginClearUp" }, // 1516483190
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_BeginDestroy, "BeginDestroy" }, // 2510189639
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_ClearConnection, "ClearConnection" }, // 687751981
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPoint, "FindNearestNavigationPoint" }, // 3442996880
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestNavigationPointFromLocation, "FindNearestNavigationPointFromLocation" }, // 2804496448
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActor, "FindNearestTrackingActor" }, // 2045520884
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_FindNearestTrackingActorFromLocation, "FindNearestTrackingActorFromLocation" }, // 2110265988
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationAreaData, "GetNavigationAreaData" }, // 2407663016
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocation, "GetNavigationPointAtLocation" }, // 2163949034
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocations, "GetNavigationPointAtLocations" }, // 1133829391
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointAtLocationsOffset, "GetNavigationPointAtLocationsOffset" }, // 3893506640
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBox, "GetNavigationPointInBox" }, // 4141299703
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetNavigationPointInBoxs, "GetNavigationPointInBoxs" }, // 247373672
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointAtLocation, "GetSingleNavigationPointAtLocation" }, // 4096282271
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetSingleNavigationPointInBox, "GetSingleNavigationPointInBox" }, // 894110321
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorData, "GetTrackingActorData" }, // 2582086429
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_GetTrackingActorList, "GetTrackingActorList" }, // 2462392141
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveTrackingActor, "RemoveTrackingActor" }, // 3193248158
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkablesToPoint, "RemoveWalkablesToPoint" }, // 4045265569
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_RemoveWalkableToPoint, "RemoveWalkableToPoint" }, // 553142640
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemData_SetNavigationPointActive, "SetNavigationPointActive" }, // 2051997055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Navigation/LFLPointNavigationSystemV1.h" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::NewProp_TrackingActorData_Inner = { "TrackingActorData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::NewProp_TrackingActorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::NewProp_TrackingActorData = { "TrackingActorData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemData, TrackingActorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::NewProp_TrackingActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::NewProp_TrackingActorData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::NewProp_TrackingActorData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::NewProp_TrackingActorData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLPointNavigationSystemData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::ClassParams = {
		&ULFLPointNavigationSystemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLPointNavigationSystemData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLPointNavigationSystemData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLPointNavigationSystemData, 3213999398);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLPointNavigationSystemData>()
	{
		return ULFLPointNavigationSystemData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLPointNavigationSystemData(Z_Construct_UClass_ULFLPointNavigationSystemData, &ULFLPointNavigationSystemData::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLPointNavigationSystemData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLPointNavigationSystemData);
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execRequestRandomNavigation)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemData,Z_Param_NavData);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_FromPoint);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Iteraction);
		P_GET_UBOOL_REF(Z_Param_Out_PassableOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->RequestRandomNavigation(Z_Param_NavData,Z_Param_FromPoint,Z_Param_Out_Iteraction,Z_Param_Out_PassableOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execRequestRandomNavigationPath)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NavDataID);
		P_GET_OBJECT(AActor,Z_Param_ByActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_Iteraction);
		P_GET_UBOOL(Z_Param_PassableOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestRandomNavigationPath(Z_Param_NavDataID,Z_Param_ByActor,Z_Param_Iteraction,Z_Param_PassableOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execRequestAStarNavigation)
	{
		P_GET_OBJECT(ULFLPointNavigationSystemData,Z_Param_NavData);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_FromPoint);
		P_GET_OBJECT(ULFLPointNavigationSystemPoint,Z_Param_ToPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULFLPointNavigationSystemPoint*>*)Z_Param__Result=P_THIS->RequestAStarNavigation(Z_Param_NavData,Z_Param_FromPoint,Z_Param_ToPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execRequestNavigationPath)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NavDataID);
		P_GET_OBJECT(AActor,Z_Param_ByActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ToLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestNavigationPath(Z_Param_NavDataID,Z_Param_ByActor,Z_Param_Out_ToLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execRemoveNavigationData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NavDataID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveNavigationData(Z_Param_NavDataID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execCreateNavigationData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NavDataID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavigationSystemData**)Z_Param__Result=P_THIS->CreateNavigationData(Z_Param_NavDataID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execGetNavigationData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NavDataID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavigationSystemData**)Z_Param__Result=P_THIS->GetNavigationData(Z_Param_NavDataID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execBeginClearUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginClearUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execContinuesNavAgentFollowingPath)
	{
		P_GET_OBJECT(AActor,Z_Param_NavAgent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContinuesNavAgentFollowingPath(Z_Param_NavAgent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execStopNavAgentFollowingPath)
	{
		P_GET_OBJECT(AActor,Z_Param_NavAgent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopNavAgentFollowingPath(Z_Param_NavAgent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execNextNavAgentFollowingPath)
	{
		P_GET_OBJECT(AActor,Z_Param_NavAgent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NextNavAgentFollowingPath(Z_Param_NavAgent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execStartNavAgentFollowingPath)
	{
		P_GET_OBJECT(AActor,Z_Param_NavAgent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartNavAgentFollowingPath(Z_Param_NavAgent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execRemoveNavAgent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveNavAgent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execAddNavAgent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddNavAgent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavigationSystemV1::execBeginDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDestroy();
		P_NATIVE_END;
	}
	void ULFLPointNavigationSystemV1::StaticRegisterNativesULFLPointNavigationSystemV1()
	{
		UClass* Class = ULFLPointNavigationSystemV1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNavAgent", &ULFLPointNavigationSystemV1::execAddNavAgent },
			{ "BeginClearUp", &ULFLPointNavigationSystemV1::execBeginClearUp },
			{ "BeginDestroy", &ULFLPointNavigationSystemV1::execBeginDestroy },
			{ "ContinuesNavAgentFollowingPath", &ULFLPointNavigationSystemV1::execContinuesNavAgentFollowingPath },
			{ "CreateNavigationData", &ULFLPointNavigationSystemV1::execCreateNavigationData },
			{ "GetNavigationData", &ULFLPointNavigationSystemV1::execGetNavigationData },
			{ "NextNavAgentFollowingPath", &ULFLPointNavigationSystemV1::execNextNavAgentFollowingPath },
			{ "RemoveNavAgent", &ULFLPointNavigationSystemV1::execRemoveNavAgent },
			{ "RemoveNavigationData", &ULFLPointNavigationSystemV1::execRemoveNavigationData },
			{ "RequestAStarNavigation", &ULFLPointNavigationSystemV1::execRequestAStarNavigation },
			{ "RequestNavigationPath", &ULFLPointNavigationSystemV1::execRequestNavigationPath },
			{ "RequestRandomNavigation", &ULFLPointNavigationSystemV1::execRequestRandomNavigation },
			{ "RequestRandomNavigationPath", &ULFLPointNavigationSystemV1::execRequestRandomNavigationPath },
			{ "StartNavAgentFollowingPath", &ULFLPointNavigationSystemV1::execStartNavAgentFollowingPath },
			{ "StopNavAgentFollowingPath", &ULFLPointNavigationSystemV1::execStopNavAgentFollowingPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics
	{
		struct LFLPointNavigationSystemV1_eventAddNavAgent_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventAddNavAgent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventAddNavAgent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventAddNavAgent_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Nav Agent" },
		{ "Comment", "// Nav Agent\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Nav Agent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "AddNavAgent", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventAddNavAgent_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginClearUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginClearUp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Other\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Other" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginClearUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "BeginClearUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginClearUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginClearUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginClearUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginClearUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "BeginDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics
	{
		struct LFLPointNavigationSystemV1_eventContinuesNavAgentFollowingPath_Parms
		{
			AActor* NavAgent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavAgent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::NewProp_NavAgent = { "NavAgent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventContinuesNavAgentFollowingPath_Parms, NavAgent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventContinuesNavAgentFollowingPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventContinuesNavAgentFollowingPath_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::NewProp_NavAgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Nav Agent Path" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "ContinuesNavAgentFollowingPath", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventContinuesNavAgentFollowingPath_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics
	{
		struct LFLPointNavigationSystemV1_eventCreateNavigationData_Parms
		{
			int32 NavDataID;
			ULFLPointNavigationSystemData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavDataID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::NewProp_NavDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::NewProp_NavDataID = { "NavDataID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventCreateNavigationData_Parms, NavDataID), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::NewProp_NavDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::NewProp_NavDataID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventCreateNavigationData_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::NewProp_NavDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "CreateNavigationData", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventCreateNavigationData_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics
	{
		struct LFLPointNavigationSystemV1_eventGetNavigationData_Parms
		{
			int32 NavDataID;
			ULFLPointNavigationSystemData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavDataID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::NewProp_NavDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::NewProp_NavDataID = { "NavDataID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventGetNavigationData_Parms, NavDataID), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::NewProp_NavDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::NewProp_NavDataID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventGetNavigationData_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::NewProp_NavDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "GetNavigationData", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventGetNavigationData_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics
	{
		struct LFLPointNavigationSystemV1_eventNextNavAgentFollowingPath_Parms
		{
			AActor* NavAgent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavAgent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::NewProp_NavAgent = { "NavAgent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventNextNavAgentFollowingPath_Parms, NavAgent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventNextNavAgentFollowingPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventNextNavAgentFollowingPath_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::NewProp_NavAgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Nav Agent Path" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "NextNavAgentFollowingPath", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventNextNavAgentFollowingPath_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics
	{
		struct LFLPointNavigationSystemV1_eventRemoveNavAgent_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRemoveNavAgent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventRemoveNavAgent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventRemoveNavAgent_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Nav Agent" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "RemoveNavAgent", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventRemoveNavAgent_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics
	{
		struct LFLPointNavigationSystemV1_eventRemoveNavigationData_Parms
		{
			int32 NavDataID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavDataID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::NewProp_NavDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::NewProp_NavDataID = { "NavDataID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRemoveNavigationData_Parms, NavDataID), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::NewProp_NavDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::NewProp_NavDataID_MetaData)) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventRemoveNavigationData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventRemoveNavigationData_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::NewProp_NavDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "RemoveNavigationData", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventRemoveNavigationData_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics
	{
		struct LFLPointNavigationSystemV1_eventRequestAStarNavigation_Parms
		{
			ULFLPointNavigationSystemData* NavData;
			ULFLPointNavigationSystemPoint* FromPoint;
			ULFLPointNavigationSystemPoint* ToPoint;
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestAStarNavigation_Parms, NavData), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_FromPoint = { "FromPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestAStarNavigation_Parms, FromPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_ToPoint = { "ToPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestAStarNavigation_Parms, ToPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestAStarNavigation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_FromPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_ToPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "RequestAStarNavigation", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventRequestAStarNavigation_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics
	{
		struct LFLPointNavigationSystemV1_eventRequestNavigationPath_Parms
		{
			int32 NavDataID;
			AActor* ByActor;
			FVector ToLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavDataID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ByActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_NavDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_NavDataID = { "NavDataID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestNavigationPath_Parms, NavDataID), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_NavDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_NavDataID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ByActor = { "ByActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestNavigationPath_Parms, ByActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ToLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ToLocation = { "ToLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestNavigationPath_Parms, ToLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ToLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ToLocation_MetaData)) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventRequestNavigationPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventRequestNavigationPath_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_NavDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ByActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ToLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "RequestNavigationPath", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventRequestNavigationPath_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics
	{
		struct LFLPointNavigationSystemV1_eventRequestRandomNavigation_Parms
		{
			ULFLPointNavigationSystemData* NavData;
			ULFLPointNavigationSystemPoint* FromPoint;
			int32 Iteraction;
			bool PassableOnly;
			TArray<ULFLPointNavigationSystemPoint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Iteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassableOnly_MetaData[];
#endif
		static void NewProp_PassableOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PassableOnly;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestRandomNavigation_Parms, NavData), Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_FromPoint = { "FromPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestRandomNavigation_Parms, FromPoint), Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_Iteraction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_Iteraction = { "Iteraction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestRandomNavigation_Parms, Iteraction), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_Iteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_Iteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_PassableOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_PassableOnly_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventRequestRandomNavigation_Parms*)Obj)->PassableOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_PassableOnly = { "PassableOnly", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventRequestRandomNavigation_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_PassableOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_PassableOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_PassableOnly_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestRandomNavigation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_FromPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_Iteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_PassableOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "RequestRandomNavigation", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventRequestRandomNavigation_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics
	{
		struct LFLPointNavigationSystemV1_eventRequestRandomNavigationPath_Parms
		{
			int32 NavDataID;
			AActor* ByActor;
			int32 Iteraction;
			bool PassableOnly;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavDataID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ByActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Iteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassableOnly_MetaData[];
#endif
		static void NewProp_PassableOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PassableOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_NavDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_NavDataID = { "NavDataID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestRandomNavigationPath_Parms, NavDataID), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_NavDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_NavDataID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_ByActor = { "ByActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestRandomNavigationPath_Parms, ByActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_Iteraction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_Iteraction = { "Iteraction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventRequestRandomNavigationPath_Parms, Iteraction), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_Iteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_Iteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_PassableOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_PassableOnly_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventRequestRandomNavigationPath_Parms*)Obj)->PassableOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_PassableOnly = { "PassableOnly", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventRequestRandomNavigationPath_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_PassableOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_PassableOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_PassableOnly_MetaData)) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventRequestRandomNavigationPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventRequestRandomNavigationPath_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_NavDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_ByActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_Iteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_PassableOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Function" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "RequestRandomNavigationPath", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventRequestRandomNavigationPath_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics
	{
		struct LFLPointNavigationSystemV1_eventStartNavAgentFollowingPath_Parms
		{
			AActor* NavAgent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavAgent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::NewProp_NavAgent = { "NavAgent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventStartNavAgentFollowingPath_Parms, NavAgent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventStartNavAgentFollowingPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventStartNavAgentFollowingPath_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::NewProp_NavAgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Nav Agent Path" },
		{ "Comment", "// Nav Agent Path\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
		{ "ToolTip", "Nav Agent Path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "StartNavAgentFollowingPath", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventStartNavAgentFollowingPath_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics
	{
		struct LFLPointNavigationSystemV1_eventStopNavAgentFollowingPath_Parms
		{
			AActor* NavAgent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavAgent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::NewProp_NavAgent = { "NavAgent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavigationSystemV1_eventStopNavAgentFollowingPath_Parms, NavAgent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFLPointNavigationSystemV1_eventStopNavAgentFollowingPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLPointNavigationSystemV1_eventStopNavAgentFollowingPath_Parms), &Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::NewProp_NavAgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavigationSystemV1 | Nav Agent Path" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavigationSystemV1, nullptr, "StopNavAgentFollowingPath", nullptr, nullptr, sizeof(LFLPointNavigationSystemV1_eventStopNavAgentFollowingPath_Parms), Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULFLPointNavigationSystemV1_NoRegister()
	{
		return ULFLPointNavigationSystemV1::StaticClass();
	}
	struct Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavigationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavAgentList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavAgentList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavAgentList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCreateOnRunning_MetaData[];
#endif
		static void NewProp_bIsCreateOnRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCreateOnRunning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_AddNavAgent, "AddNavAgent" }, // 187092801
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginClearUp, "BeginClearUp" }, // 3394742161
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_BeginDestroy, "BeginDestroy" }, // 4071218984
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_ContinuesNavAgentFollowingPath, "ContinuesNavAgentFollowingPath" }, // 3443279140
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_CreateNavigationData, "CreateNavigationData" }, // 920577089
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_GetNavigationData, "GetNavigationData" }, // 3943419836
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_NextNavAgentFollowingPath, "NextNavAgentFollowingPath" }, // 212997206
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavAgent, "RemoveNavAgent" }, // 3033200465
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RemoveNavigationData, "RemoveNavigationData" }, // 3048817606
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestAStarNavigation, "RequestAStarNavigation" }, // 2956884321
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestNavigationPath, "RequestNavigationPath" }, // 1978254648
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigation, "RequestRandomNavigation" }, // 2778431084
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_RequestRandomNavigationPath, "RequestRandomNavigationPath" }, // 3511589771
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_StartNavAgentFollowingPath, "StartNavAgentFollowingPath" }, // 3323665701
		{ &Z_Construct_UFunction_ULFLPointNavigationSystemV1_StopNavAgentFollowingPath, "StopNavAgentFollowingPath" }, // 1484905370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Navigation/LFLPointNavigationSystemV1.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavigationData_Inner = { "NavigationData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavigationSystemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavigationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavigationData = { "NavigationData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemV1, NavigationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavigationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavigationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavAgentList_Inner = { "NavAgentList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavAgentList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavAgentList = { "NavAgentList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavigationSystemV1, NavAgentList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavAgentList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavAgentList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_bIsCreateOnRunning_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavigationSystemV1.h" },
	};
#endif
	void Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_bIsCreateOnRunning_SetBit(void* Obj)
	{
		((ULFLPointNavigationSystemV1*)Obj)->bIsCreateOnRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_bIsCreateOnRunning = { "bIsCreateOnRunning", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULFLPointNavigationSystemV1), &Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_bIsCreateOnRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_bIsCreateOnRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_bIsCreateOnRunning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavigationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavigationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavAgentList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_NavAgentList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::NewProp_bIsCreateOnRunning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLPointNavigationSystemV1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::ClassParams = {
		&ULFLPointNavigationSystemV1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLPointNavigationSystemV1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLPointNavigationSystemV1, 2540668992);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLPointNavigationSystemV1>()
	{
		return ULFLPointNavigationSystemV1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLPointNavigationSystemV1(Z_Construct_UClass_ULFLPointNavigationSystemV1, &ULFLPointNavigationSystemV1::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLPointNavigationSystemV1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLPointNavigationSystemV1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
