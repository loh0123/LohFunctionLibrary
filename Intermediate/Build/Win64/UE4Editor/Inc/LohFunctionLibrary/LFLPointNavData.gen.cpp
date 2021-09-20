// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Navigation/LFLPointNavData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLPointNavData() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FFlowMapData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FFMNavPointData();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavPoint_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLNavPathFollowingComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FFlowDirectionData();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavData_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FFlowMapData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FFlowMapData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowMapData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("FlowMapData"), sizeof(FFlowMapData), Get_Z_Construct_UScriptStruct_FFlowMapData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FFlowMapData>()
{
	return FFlowMapData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowMapData(FFlowMapData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("FlowMapData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFFlowMapData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFFlowMapData()
	{
		UScriptStruct::DeferCppStructOps<FFlowMapData>(FName(TEXT("FlowMapData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFFlowMapData;
	struct Z_Construct_UScriptStruct_FFlowMapData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavPointDataList_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPointDataList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavPointDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NavPointDataList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOrdererList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOrdererList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathOrdererList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowMapData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowMapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowMapData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_NavPointDataList_ValueProp = { "NavPointDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFMNavPointData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_NavPointDataList_Key_KeyProp = { "NavPointDataList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_NavPointDataList_MetaData[] = {
		{ "Comment", "// Data for Navigation to the destination\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "Data for Navigation to the destination" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_NavPointDataList = { "NavPointDataList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowMapData, NavPointDataList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_NavPointDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_NavPointDataList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_PathOrdererList_Inner = { "PathOrdererList", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLNavPathFollowingComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_PathOrdererList_MetaData[] = {
		{ "Comment", "// Orderer from path following component (Call from Nav System)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "Orderer from path following component (Call from Nav System)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_PathOrdererList = { "PathOrdererList", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowMapData, PathOrdererList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_PathOrdererList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_PathOrdererList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_NavPointDataList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_NavPointDataList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_NavPointDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_PathOrdererList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowMapData_Statics::NewProp_PathOrdererList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowMapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"FlowMapData",
		sizeof(FFlowMapData),
		alignof(FFlowMapData),
		Z_Construct_UScriptStruct_FFlowMapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowMapData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowMapData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowMapData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowMapData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowMapData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowMapData"), sizeof(FFlowMapData), Get_Z_Construct_UScriptStruct_FFlowMapData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowMapData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowMapData_Hash() { return 3022474258U; }
class UScriptStruct* FFMNavPointData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FFMNavPointData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMNavPointData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("FMNavPointData"), sizeof(FFMNavPointData), Get_Z_Construct_UScriptStruct_FFMNavPointData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FFMNavPointData>()
{
	return FFMNavPointData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMNavPointData(FFMNavPointData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("FMNavPointData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFFMNavPointData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFFMNavPointData()
	{
		UScriptStruct::DeferCppStructOps<FFMNavPointData>(FName(TEXT("FMNavPointData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFFMNavPointData;
	struct Z_Construct_UScriptStruct_FFMNavPointData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlowDirection_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FlowDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceCost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMNavPointData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMNavPointData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_FlowDirection_Inner = { "FlowDirection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowDirectionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_FlowDirection_MetaData[] = {
		{ "Comment", "// This Point Path Flow (From Lower Travel Weight To Higher)\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "This Point Path Flow (From Lower Travel Weight To Higher)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_FlowDirection = { "FlowDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMNavPointData, FlowDirection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_FlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_FlowDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_DistanceCost_MetaData[] = {
		{ "Comment", "// Unreliable (Use temporary for calculate to start position) (Distance to start position)\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "Unreliable (Use temporary for calculate to start position) (Distance to start position)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_DistanceCost = { "DistanceCost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMNavPointData, DistanceCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_DistanceCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_DistanceCost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMNavPointData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_FlowDirection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_FlowDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMNavPointData_Statics::NewProp_DistanceCost,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMNavPointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"FMNavPointData",
		sizeof(FFMNavPointData),
		alignof(FFMNavPointData),
		Z_Construct_UScriptStruct_FFMNavPointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMNavPointData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMNavPointData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMNavPointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMNavPointData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMNavPointData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMNavPointData"), sizeof(FFMNavPointData), Get_Z_Construct_UScriptStruct_FFMNavPointData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMNavPointData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMNavPointData_Hash() { return 1924809671U; }
class UScriptStruct* FFlowDirectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FFlowDirectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowDirectionData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("FlowDirectionData"), sizeof(FFlowDirectionData), Get_Z_Construct_UScriptStruct_FFlowDirectionData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FFlowDirectionData>()
{
	return FFlowDirectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowDirectionData(FFlowDirectionData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("FlowDirectionData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFFlowDirectionData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFFlowDirectionData()
	{
		UScriptStruct::DeferCppStructOps<FFlowDirectionData>(FName(TEXT("FlowDirectionData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFFlowDirectionData;
	struct Z_Construct_UScriptStruct_FFlowDirectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavPointPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavPointPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravelPathWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TravelPathWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iteration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Iteration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowDirectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Remember To Make AsyncTask Class For MultiThread\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "Remember To Make AsyncTask Class For MultiThread" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowDirectionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_NavPointPointer_MetaData[] = {
		{ "Comment", "// Direction Coming From\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "Direction Coming From" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_NavPointPointer = { "NavPointPointer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowDirectionData, NavPointPointer), Z_Construct_UClass_ULFLPointNavPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_NavPointPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_NavPointPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_TravelPathWeight_MetaData[] = {
		{ "Comment", "// Total Weight From all the path taken\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "Total Weight From all the path taken" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_TravelPathWeight = { "TravelPathWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowDirectionData, TravelPathWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_TravelPathWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_TravelPathWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_DistanceToDestination_MetaData[] = {
		{ "Comment", "// Unreliable (Point Can Move After Calculation)\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "Unreliable (Point Can Move After Calculation)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_DistanceToDestination = { "DistanceToDestination", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowDirectionData, DistanceToDestination), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_DistanceToDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_DistanceToDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_Iteration_MetaData[] = {
		{ "Comment", "// How Many Path Before Reach Destination\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "How Many Path Before Reach Destination" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_Iteration = { "Iteration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowDirectionData, Iteration), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_Iteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_Iteration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowDirectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_NavPointPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_TravelPathWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_DistanceToDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowDirectionData_Statics::NewProp_Iteration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowDirectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"FlowDirectionData",
		sizeof(FFlowDirectionData),
		alignof(FFlowDirectionData),
		Z_Construct_UScriptStruct_FFlowDirectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowDirectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowDirectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowDirectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowDirectionData"), sizeof(FFlowDirectionData), Get_Z_Construct_UScriptStruct_FFlowDirectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowDirectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowDirectionData_Hash() { return 1920270330U; }
	void ULFLPointNavData::StaticRegisterNativesULFLPointNavData()
	{
	}
	UClass* Z_Construct_UClass_ULFLPointNavData_NoRegister()
	{
		return ULFLPointNavData::StaticClass();
	}
	struct Z_Construct_UClass_ULFLPointNavData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavDataID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CacheFlowMapData_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CacheFlowMapData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheFlowMapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CacheFlowMapData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DelayCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanStartNavigation_MetaData[];
#endif
		static void NewProp_CanStartNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanStartNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCacheSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCacheSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartDelayFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RestartDelayFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTaskRunning_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTaskRunning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLPointNavData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Navigation/LFLPointNavData.h" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_NavDataID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_NavDataID = { "NavDataID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavData, NavDataID), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_NavDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_NavDataID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CacheFlowMapData_ValueProp = { "CacheFlowMapData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFlowMapData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CacheFlowMapData_Key_KeyProp = { "CacheFlowMapData_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CacheFlowMapData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CacheFlowMapData = { "CacheFlowMapData", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavData, CacheFlowMapData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CacheFlowMapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CacheFlowMapData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_DelayCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_DelayCounter = { "DelayCounter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavData, DelayCounter), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_DelayCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_DelayCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CanStartNavigation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	void Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CanStartNavigation_SetBit(void* Obj)
	{
		((ULFLPointNavData*)Obj)->CanStartNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CanStartNavigation = { "CanStartNavigation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULFLPointNavData), &Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CanStartNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CanStartNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CanStartNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentWidth_MetaData[] = {
		{ "Comment", "// Agent Data\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
		{ "ToolTip", "Agent Data" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentWidth = { "AgentWidth", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavData, AgentWidth), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentHeight = { "AgentHeight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavData, AgentHeight), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxCacheSize_MetaData[] = {
		{ "Category", "PointNavData" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxCacheSize = { "MaxCacheSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavData, MaxCacheSize), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxCacheSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxCacheSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_RestartDelayFrame_MetaData[] = {
		{ "Category", "PointNavData" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_RestartDelayFrame = { "RestartDelayFrame", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavData, RestartDelayFrame), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_RestartDelayFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_RestartDelayFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxTaskRunning_MetaData[] = {
		{ "Category", "PointNavData" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxTaskRunning = { "MaxTaskRunning", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavData, MaxTaskRunning), METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxTaskRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxTaskRunning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLPointNavData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_NavDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CacheFlowMapData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CacheFlowMapData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CacheFlowMapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_DelayCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_CanStartNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_AgentHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxCacheSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_RestartDelayFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavData_Statics::NewProp_MaxTaskRunning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLPointNavData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLPointNavData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLPointNavData_Statics::ClassParams = {
		&ULFLPointNavData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULFLPointNavData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLPointNavData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLPointNavData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLPointNavData, 3690847136);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLPointNavData>()
	{
		return ULFLPointNavData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLPointNavData(Z_Construct_UClass_ULFLPointNavData, &ULFLPointNavData::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLPointNavData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLPointNavData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
