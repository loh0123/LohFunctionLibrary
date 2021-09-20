// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Navigation/LFLNavPathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLNavPathFollowingComponent() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UEnum* Z_Construct_UEnum_LohFunctionLibrary_ELFLPointNavStatus();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLNavPathFollowingComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLNavPathFollowingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavPoint_NoRegister();
// End Cross Module References
	static UEnum* ELFLPointNavStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LohFunctionLibrary_ELFLPointNavStatus, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("ELFLPointNavStatus"));
		}
		return Singleton;
	}
	template<> LOHFUNCTIONLIBRARY_API UEnum* StaticEnum<ELFLPointNavStatus>()
	{
		return ELFLPointNavStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELFLPointNavStatus(ELFLPointNavStatus_StaticEnum, TEXT("/Script/LohFunctionLibrary"), TEXT("ELFLPointNavStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LohFunctionLibrary_ELFLPointNavStatus_Hash() { return 1600661302U; }
	UEnum* Z_Construct_UEnum_LohFunctionLibrary_ELFLPointNavStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELFLPointNavStatus"), 0, Get_Z_Construct_UEnum_LohFunctionLibrary_ELFLPointNavStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELFLPointNavStatus::Success", (int64)ELFLPointNavStatus::Success },
				{ "ELFLPointNavStatus::NoPathFound", (int64)ELFLPointNavStatus::NoPathFound },
				{ "ELFLPointNavStatus::InvalidParam", (int64)ELFLPointNavStatus::InvalidParam },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InvalidParam.DisplayName", "InvalidParam" },
				{ "InvalidParam.Name", "ELFLPointNavStatus::InvalidParam" },
				{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
				{ "NoPathFound.DisplayName", "NoPathFound" },
				{ "NoPathFound.Name", "ELFLPointNavStatus::NoPathFound" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "ELFLPointNavStatus::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
				nullptr,
				"ELFLPointNavStatus",
				"ELFLPointNavStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ULFLNavPathFollowingComponent::StaticRegisterNativesULFLNavPathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_ULFLNavPathFollowingComponent_NoRegister()
	{
		return ULFLNavPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFlowMapID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentFlowMapID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPathCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPathCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextFollowingPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextFollowingPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDestinationScopeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentDestinationScopeID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TravelledPathCount_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TravelledPathCount_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravelledPathCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TravelledPathCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseNavDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseNavDataID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavPointWeightOffset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavPointWeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavPointWeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Navigation/LFLNavPathFollowingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentFlowMapID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentFlowMapID = { "CurrentFlowMapID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLNavPathFollowingComponent, CurrentFlowMapID), METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentFlowMapID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentFlowMapID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentPathCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentPathCount = { "CurrentPathCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLNavPathFollowingComponent, CurrentPathCount), METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentPathCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentPathCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NextFollowingPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NextFollowingPath = { "NextFollowingPath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLNavPathFollowingComponent, NextFollowingPath), Z_Construct_UClass_ULFLPointNavPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NextFollowingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NextFollowingPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestination_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestination = { "CurrentDestination", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLNavPathFollowingComponent, CurrentDestination), Z_Construct_UClass_ULFLPointNavPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestinationScopeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestinationScopeID = { "CurrentDestinationScopeID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLNavPathFollowingComponent, CurrentDestinationScopeID), METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestinationScopeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestinationScopeID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_TravelledPathCount_ValueProp = { "TravelledPathCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_TravelledPathCount_Key_KeyProp = { "TravelledPathCount_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULFLPointNavPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_TravelledPathCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_TravelledPathCount = { "TravelledPathCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLNavPathFollowingComponent, TravelledPathCount), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_TravelledPathCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_TravelledPathCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_UseNavDataID_MetaData[] = {
		{ "Category", "NavPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_UseNavDataID = { "UseNavDataID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLNavPathFollowingComponent, UseNavDataID), METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_UseNavDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_UseNavDataID_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NavPointWeightOffset_Inner = { "NavPointWeightOffset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NavPointWeightOffset_MetaData[] = {
		{ "Category", "NavPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NavPointWeightOffset = { "NavPointWeightOffset", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLNavPathFollowingComponent, NavPointWeightOffset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NavPointWeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NavPointWeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_AgentWeight_MetaData[] = {
		{ "Category", "NavPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/Navigation/LFLNavPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_AgentWeight = { "AgentWeight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULFLNavPathFollowingComponent, AgentWeight), METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_AgentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_AgentWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentFlowMapID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentPathCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NextFollowingPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_CurrentDestinationScopeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_TravelledPathCount_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_TravelledPathCount_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_TravelledPathCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_UseNavDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NavPointWeightOffset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_NavPointWeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::NewProp_AgentWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLNavPathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::ClassParams = {
		&ULFLNavPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLNavPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLNavPathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLNavPathFollowingComponent, 3079318307);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLNavPathFollowingComponent>()
	{
		return ULFLNavPathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLNavPathFollowingComponent(Z_Construct_UClass_ULFLNavPathFollowingComponent, &ULFLNavPathFollowingComponent::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLNavPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLNavPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
