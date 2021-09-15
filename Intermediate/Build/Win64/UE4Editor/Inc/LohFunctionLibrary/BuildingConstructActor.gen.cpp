// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Other/BuildingConstructActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingConstructActor() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLBuildingFrameJointData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ABuildingConstructActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ABuildingConstructActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FLFLBuildingFrameJointData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLBuildingFrameJointData"), sizeof(FLFLBuildingFrameJointData), Get_Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLBuildingFrameJointData>()
{
	return FLFLBuildingFrameJointData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLBuildingFrameJointData(FLFLBuildingFrameJointData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLBuildingFrameJointData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLBuildingFrameJointData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLBuildingFrameJointData()
	{
		UScriptStruct::DeferCppStructOps<FLFLBuildingFrameJointData>(FName(TEXT("LFLBuildingFrameJointData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLBuildingFrameJointData;
	struct Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectJoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectJoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshCustomData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshCustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshCustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLBuildingFrameJointData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "LFLBuildingConnectFrameData | Variable" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLBuildingFrameJointData, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ConnectJoint_Inner = { "ConnectJoint", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ConnectJoint_MetaData[] = {
		{ "Category", "LFLBuildingConnectFrameData | Variable" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ConnectJoint = { "ConnectJoint", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLBuildingFrameJointData, ConnectJoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ConnectJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ConnectJoint_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_MeshCustomData_Inner = { "MeshCustomData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_MeshCustomData_MetaData[] = {
		{ "Category", "LFLBuildingConnectFrameData | Variable" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_MeshCustomData = { "MeshCustomData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLBuildingFrameJointData, MeshCustomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_MeshCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_MeshCustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ParentPosition_MetaData[] = {
		{ "Category", "LFLBuildingConnectFrameData | Variable" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ParentPosition = { "ParentPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLBuildingFrameJointData, ParentPosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ParentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ParentPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ConnectJoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ConnectJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_MeshCustomData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_MeshCustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::NewProp_ParentPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLBuildingFrameJointData",
		sizeof(FLFLBuildingFrameJointData),
		alignof(FLFLBuildingFrameJointData),
		Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLBuildingFrameJointData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLBuildingFrameJointData"), sizeof(FLFLBuildingFrameJointData), Get_Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Hash() { return 2022553923U; }
class UScriptStruct* FLFLBuildingFrameRoomData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHFUNCTIONLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("LFLBuildingFrameRoomData"), sizeof(FLFLBuildingFrameRoomData), Get_Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Hash());
	}
	return Singleton;
}
template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FLFLBuildingFrameRoomData>()
{
	return FLFLBuildingFrameRoomData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLFLBuildingFrameRoomData(FLFLBuildingFrameRoomData::StaticStruct, TEXT("/Script/LohFunctionLibrary"), TEXT("LFLBuildingFrameRoomData"), false, nullptr, nullptr);
static struct FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLBuildingFrameRoomData
{
	FScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLBuildingFrameRoomData()
	{
		UScriptStruct::DeferCppStructOps<FLFLBuildingFrameRoomData>(FName(TEXT("LFLBuildingFrameRoomData")));
	}
} ScriptStruct_LohFunctionLibrary_StaticRegisterNativesFLFLBuildingFrameRoomData;
	struct Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_JointIndexList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointIndexList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JointIndexList;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshCustomData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshCustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshCustomData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFLBuildingFrameRoomData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "FLFLBuildingFrameRoomData | Variable" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLBuildingFrameRoomData, Start), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_End_MetaData[] = {
		{ "Category", "FLFLBuildingFrameRoomData | Variable" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLBuildingFrameRoomData, End), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_End_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_JointIndexList_Inner = { "JointIndexList", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_JointIndexList_MetaData[] = {
		{ "Category", "FLFLBuildingFrameRoomData | Variable" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_JointIndexList = { "JointIndexList", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLBuildingFrameRoomData, JointIndexList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_JointIndexList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_JointIndexList_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_MeshCustomData_Inner = { "MeshCustomData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_MeshCustomData_MetaData[] = {
		{ "Category", "FLFLBuildingFrameRoomData | Variable" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_MeshCustomData = { "MeshCustomData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFLBuildingFrameRoomData, MeshCustomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_MeshCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_MeshCustomData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_JointIndexList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_JointIndexList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_MeshCustomData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::NewProp_MeshCustomData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
		nullptr,
		&NewStructOps,
		"LFLBuildingFrameRoomData",
		sizeof(FLFLBuildingFrameRoomData),
		alignof(FLFLBuildingFrameRoomData),
		Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LFLBuildingFrameRoomData"), sizeof(FLFLBuildingFrameRoomData), Get_Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Hash() { return 3023093527U; }
	DEFINE_FUNCTION(ABuildingConstructActor::execIsIntVectorInRange)
	{
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Vector);
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Min);
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIntVectorInRange(Z_Param_Out_Vector,Z_Param_Out_Min,Z_Param_Out_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingConstructActor::execIsRoomOverlapping)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RoomIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRoomOverlapping(Z_Param_Out_RoomIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingConstructActor::execConstructionAllointConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructionAllointConnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingConstructActor::execUpdateRender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingConstructActor::execConstructionAllRoom)
	{
		P_GET_UBOOL_REF(Z_Param_Out_CheckOverlap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructionAllRoom(Z_Param_Out_CheckOverlap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingConstructActor::execSetupInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInstance();
		P_NATIVE_END;
	}
	void ABuildingConstructActor::StaticRegisterNativesABuildingConstructActor()
	{
		UClass* Class = ABuildingConstructActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructionAllointConnect", &ABuildingConstructActor::execConstructionAllointConnect },
			{ "ConstructionAllRoom", &ABuildingConstructActor::execConstructionAllRoom },
			{ "IsIntVectorInRange", &ABuildingConstructActor::execIsIntVectorInRange },
			{ "IsRoomOverlapping", &ABuildingConstructActor::execIsRoomOverlapping },
			{ "SetupInstance", &ABuildingConstructActor::execSetupInstance },
			{ "UpdateRender", &ABuildingConstructActor::execUpdateRender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllointConnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllointConnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildingConstructActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllointConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingConstructActor, nullptr, "ConstructionAllointConnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllointConnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllointConnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllointConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllointConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics
	{
		struct BuildingConstructActor_eventConstructionAllRoom_Parms
		{
			bool CheckOverlap;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckOverlap_MetaData[];
#endif
		static void NewProp_CheckOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CheckOverlap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::NewProp_CheckOverlap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::NewProp_CheckOverlap_SetBit(void* Obj)
	{
		((BuildingConstructActor_eventConstructionAllRoom_Parms*)Obj)->CheckOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::NewProp_CheckOverlap = { "CheckOverlap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BuildingConstructActor_eventConstructionAllRoom_Parms), &Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::NewProp_CheckOverlap_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::NewProp_CheckOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::NewProp_CheckOverlap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::NewProp_CheckOverlap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildingConstructActor | Function" },
		{ "CPP_Default_CheckOverlap", "false" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingConstructActor, nullptr, "ConstructionAllRoom", nullptr, nullptr, sizeof(BuildingConstructActor_eventConstructionAllRoom_Parms), Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics
	{
		struct BuildingConstructActor_eventIsIntVectorInRange_Parms
		{
			FIntVector Vector;
			FIntVector Min;
			FIntVector Max;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingConstructActor_eventIsIntVectorInRange_Parms, Vector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingConstructActor_eventIsIntVectorInRange_Parms, Min), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingConstructActor_eventIsIntVectorInRange_Parms, Max), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BuildingConstructActor_eventIsIntVectorInRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BuildingConstructActor_eventIsIntVectorInRange_Parms), &Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingConstructActor, nullptr, "IsIntVectorInRange", nullptr, nullptr, sizeof(BuildingConstructActor_eventIsIntVectorInRange_Parms), Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics
	{
		struct BuildingConstructActor_eventIsRoomOverlapping_Parms
		{
			int32 RoomIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoomIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_RoomIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_RoomIndex = { "RoomIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingConstructActor_eventIsRoomOverlapping_Parms, RoomIndex), METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_RoomIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_RoomIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BuildingConstructActor_eventIsRoomOverlapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BuildingConstructActor_eventIsRoomOverlapping_Parms), &Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_RoomIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildingConstructActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingConstructActor, nullptr, "IsRoomOverlapping", nullptr, nullptr, sizeof(BuildingConstructActor_eventIsRoomOverlapping_Parms), Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingConstructActor_SetupInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_SetupInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildingConstructActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingConstructActor_SetupInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingConstructActor, nullptr, "SetupInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_SetupInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_SetupInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingConstructActor_SetupInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildingConstructActor_SetupInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingConstructActor_UpdateRender_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingConstructActor_UpdateRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildingConstructActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingConstructActor_UpdateRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingConstructActor, nullptr, "UpdateRender", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingConstructActor_UpdateRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingConstructActor_UpdateRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingConstructActor_UpdateRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildingConstructActor_UpdateRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABuildingConstructActor_NoRegister()
	{
		return ABuildingConstructActor::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingConstructActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Joint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Joint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Column;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Beam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Beam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDataMaxIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomDataMaxIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoomList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JointList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshRenderList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshRenderList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshRenderList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingConstructActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildingConstructActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllointConnect, "ConstructionAllointConnect" }, // 2413453979
		{ &Z_Construct_UFunction_ABuildingConstructActor_ConstructionAllRoom, "ConstructionAllRoom" }, // 841141612
		{ &Z_Construct_UFunction_ABuildingConstructActor_IsIntVectorInRange, "IsIntVectorInRange" }, // 3817857815
		{ &Z_Construct_UFunction_ABuildingConstructActor_IsRoomOverlapping, "IsRoomOverlapping" }, // 1502764140
		{ &Z_Construct_UFunction_ABuildingConstructActor_SetupInstance, "SetupInstance" }, // 2970130345
		{ &Z_Construct_UFunction_ABuildingConstructActor_UpdateRender, "UpdateRender" }, // 461277730
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Other/BuildingConstructActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Joint_MetaData[] = {
		{ "Category", "BuildingConstructActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Joint = { "Joint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, Joint), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Joint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Joint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Column_MetaData[] = {
		{ "Category", "BuildingConstructActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, Column), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Column_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Beam_MetaData[] = {
		{ "Category", "BuildingConstructActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Beam = { "Beam", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, Beam), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Beam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Beam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshMaterial_MetaData[] = {
		{ "Category", "BuildingConstructActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshMaterial = { "MeshMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, MeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshOffset_MetaData[] = {
		{ "Category", "BuildingConstructActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshOffset = { "MeshOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, MeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "BuildingConstructActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, CellSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CustomDataMaxIndex_MetaData[] = {
		{ "Category", "BuildingConstructActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CustomDataMaxIndex = { "CustomDataMaxIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, CustomDataMaxIndex), METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CustomDataMaxIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CustomDataMaxIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_RoomList_Inner = { "RoomList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_RoomList_MetaData[] = {
		{ "Category", "BuildingConstructActor | Building" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_RoomList = { "RoomList", nullptr, (EPropertyFlags)0x0010000000000021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, RoomList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_RoomList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_RoomList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_JointList_Inner = { "JointList", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLFLBuildingFrameJointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_JointList_MetaData[] = {
		{ "Category", "BuildingConstructActor | Building" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_JointList = { "JointList", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, JointList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_JointList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_JointList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshRenderList_Inner = { "MeshRenderList", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshRenderList_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Other/BuildingConstructActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshRenderList = { "MeshRenderList", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingConstructActor, MeshRenderList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshRenderList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshRenderList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingConstructActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Joint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Column,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_Beam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_CustomDataMaxIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_RoomList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_RoomList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_JointList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_JointList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshRenderList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingConstructActor_Statics::NewProp_MeshRenderList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingConstructActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingConstructActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingConstructActor_Statics::ClassParams = {
		&ABuildingConstructActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildingConstructActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingConstructActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingConstructActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingConstructActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingConstructActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingConstructActor, 968853183);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ABuildingConstructActor>()
	{
		return ABuildingConstructActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingConstructActor(Z_Construct_UClass_ABuildingConstructActor, &ABuildingConstructActor::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ABuildingConstructActor"), false, nullptr, nullptr, nullptr);

	void ABuildingConstructActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RoomList(TEXT("RoomList"));

		const bool bIsValid = true
			&& Name_RoomList == ClassReps[(int32)ENetFields_Private::RoomList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABuildingConstructActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingConstructActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
