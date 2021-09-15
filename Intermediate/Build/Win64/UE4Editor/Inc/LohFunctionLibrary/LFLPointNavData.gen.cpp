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
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLPointNavData_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLPointNavData();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
// End Cross Module References
	void ALFLPointNavData::StaticRegisterNativesALFLPointNavData()
	{
	}
	UClass* Z_Construct_UClass_ALFLPointNavData_NoRegister()
	{
		return ALFLPointNavData::StaticClass();
	}
	struct Z_Construct_UClass_ALFLPointNavData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALFLPointNavData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLPointNavData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/LFLPointNavData.h" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALFLPointNavData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALFLPointNavData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALFLPointNavData_Statics::ClassParams = {
		&ALFLPointNavData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALFLPointNavData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLPointNavData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALFLPointNavData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALFLPointNavData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALFLPointNavData, 1182668034);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ALFLPointNavData>()
	{
		return ALFLPointNavData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALFLPointNavData(Z_Construct_UClass_ALFLPointNavData, &ALFLPointNavData::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ALFLPointNavData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALFLPointNavData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
