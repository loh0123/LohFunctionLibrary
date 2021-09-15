// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Navigation/LFLPointNavSystemV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLPointNavSystemV2() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavSystemV2_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavSystemV2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLPointNavActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLPointNavData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULFLPointNavSystemV2::execDestoryNavSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestoryNavSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavSystemV2::execCreatePointNavigationSystem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NavDataAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavSystemV2**)Z_Param__Result=ULFLPointNavSystemV2::CreatePointNavigationSystem(Z_Param_NavDataAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavSystemV2::execGetNavigationActorList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ALFLPointNavActor*>*)Z_Param__Result=P_THIS->GetNavigationActorList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavSystemV2::execGetNavigationData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALFLPointNavData**)Z_Param__Result=P_THIS->GetNavigationData(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFLPointNavSystemV2::execGetPointNavigationSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULFLPointNavSystemV2**)Z_Param__Result=ULFLPointNavSystemV2::GetPointNavigationSystem();
		P_NATIVE_END;
	}
	void ULFLPointNavSystemV2::StaticRegisterNativesULFLPointNavSystemV2()
	{
		UClass* Class = ULFLPointNavSystemV2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePointNavigationSystem", &ULFLPointNavSystemV2::execCreatePointNavigationSystem },
			{ "DestoryNavSystem", &ULFLPointNavSystemV2::execDestoryNavSystem },
			{ "GetNavigationActorList", &ULFLPointNavSystemV2::execGetNavigationActorList },
			{ "GetNavigationData", &ULFLPointNavSystemV2::execGetNavigationData },
			{ "GetPointNavigationSystem", &ULFLPointNavSystemV2::execGetPointNavigationSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics
	{
		struct LFLPointNavSystemV2_eventCreatePointNavigationSystem_Parms
		{
			int32 NavDataAmount;
			ULFLPointNavSystemV2* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavDataAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::NewProp_NavDataAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::NewProp_NavDataAmount = { "NavDataAmount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavSystemV2_eventCreatePointNavigationSystem_Parms, NavDataAmount), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::NewProp_NavDataAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::NewProp_NavDataAmount_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavSystemV2_eventCreatePointNavigationSystem_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavSystemV2_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::NewProp_NavDataAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavSystemV2" },
		{ "Comment", "// Create NavSystem And Generate Nav Data\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavSystemV2.h" },
		{ "ToolTip", "Create NavSystem And Generate Nav Data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavSystemV2, nullptr, "CreatePointNavigationSystem", nullptr, nullptr, sizeof(LFLPointNavSystemV2_eventCreatePointNavigationSystem_Parms), Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavSystemV2_DestoryNavSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavSystemV2_DestoryNavSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavSystemV2" },
		{ "Comment", "// Destory Navigation System And Clean Up All Navigation Actor Data;\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavSystemV2.h" },
		{ "ToolTip", "Destory Navigation System And Clean Up All Navigation Actor Data;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavSystemV2_DestoryNavSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavSystemV2, nullptr, "DestoryNavSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavSystemV2_DestoryNavSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_DestoryNavSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavSystemV2_DestoryNavSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavSystemV2_DestoryNavSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics
	{
		struct LFLPointNavSystemV2_eventGetNavigationActorList_Parms
		{
			TArray<ALFLPointNavActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALFLPointNavActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavSystemV2_eventGetNavigationActorList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavSystemV2" },
		{ "Comment", "// Get Navigation Actor List\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavSystemV2.h" },
		{ "ToolTip", "Get Navigation Actor List" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavSystemV2, nullptr, "GetNavigationActorList", nullptr, nullptr, sizeof(LFLPointNavSystemV2_eventGetNavigationActorList_Parms), Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics
	{
		struct LFLPointNavSystemV2_eventGetNavigationData_Parms
		{
			int32 Index;
			ALFLPointNavData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavSystemV2_eventGetNavigationData_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavSystemV2_eventGetNavigationData_Parms, ReturnValue), Z_Construct_UClass_ALFLPointNavData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavSystemV2" },
		{ "Comment", "// Get Navigation Data By Index\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavSystemV2.h" },
		{ "ToolTip", "Get Navigation Data By Index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavSystemV2, nullptr, "GetNavigationData", nullptr, nullptr, sizeof(LFLPointNavSystemV2_eventGetNavigationData_Parms), Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics
	{
		struct LFLPointNavSystemV2_eventGetPointNavigationSystem_Parms
		{
			ULFLPointNavSystemV2* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLPointNavSystemV2_eventGetPointNavigationSystem_Parms, ReturnValue), Z_Construct_UClass_ULFLPointNavSystemV2_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLPointNavSystemV2" },
		{ "Comment", "// Get Global NavSystem\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavSystemV2.h" },
		{ "ToolTip", "Get Global NavSystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFLPointNavSystemV2, nullptr, "GetPointNavigationSystem", nullptr, nullptr, sizeof(LFLPointNavSystemV2_eventGetPointNavigationSystem_Parms), Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULFLPointNavSystemV2_NoRegister()
	{
		return ULFLPointNavSystemV2::StaticClass();
	}
	struct Z_Construct_UClass_ULFLPointNavSystemV2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavigationDataList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationActorList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationActorList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavigationActorList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLPointNavSystemV2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFLPointNavSystemV2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFLPointNavSystemV2_CreatePointNavigationSystem, "CreatePointNavigationSystem" }, // 1913840947
		{ &Z_Construct_UFunction_ULFLPointNavSystemV2_DestoryNavSystem, "DestoryNavSystem" }, // 686532260
		{ &Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationActorList, "GetNavigationActorList" }, // 13102099
		{ &Z_Construct_UFunction_ULFLPointNavSystemV2_GetNavigationData, "GetNavigationData" }, // 1886330711
		{ &Z_Construct_UFunction_ULFLPointNavSystemV2_GetPointNavigationSystem, "GetPointNavigationSystem" }, // 3126734139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavSystemV2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Navigation/LFLPointNavSystemV2.h" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavSystemV2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationDataList_Inner = { "NavigationDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALFLPointNavData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationDataList_MetaData[] = {
		{ "Comment", "// Navigation Data for calculate navigation path\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavSystemV2.h" },
		{ "ToolTip", "Navigation Data for calculate navigation path" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationDataList = { "NavigationDataList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavSystemV2, NavigationDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationDataList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationActorList_Inner = { "NavigationActorList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALFLPointNavActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationActorList_MetaData[] = {
		{ "Comment", "// Navigation Actor for Nav Point to generated\n" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavSystemV2.h" },
		{ "ToolTip", "Navigation Actor for Nav Point to generated" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationActorList = { "NavigationActorList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLPointNavSystemV2, NavigationActorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationActorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationActorList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLPointNavSystemV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationActorList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLPointNavSystemV2_Statics::NewProp_NavigationActorList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLPointNavSystemV2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLPointNavSystemV2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLPointNavSystemV2_Statics::ClassParams = {
		&ULFLPointNavSystemV2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFLPointNavSystemV2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavSystemV2_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavSystemV2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavSystemV2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLPointNavSystemV2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLPointNavSystemV2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLPointNavSystemV2, 1180535434);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLPointNavSystemV2>()
	{
		return ULFLPointNavSystemV2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLPointNavSystemV2(Z_Construct_UClass_ULFLPointNavSystemV2, &ULFLPointNavSystemV2::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLPointNavSystemV2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLPointNavSystemV2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
