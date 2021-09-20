// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Navigation/LFLPointNavActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLPointNavActor() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLPointNavActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLPointNavActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavActorData_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavActorData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavPoint_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLPointNavPoint();
// End Cross Module References
	void ALFLPointNavActor::StaticRegisterNativesALFLPointNavActor()
	{
	}
	UClass* Z_Construct_UClass_ALFLPointNavActor_NoRegister()
	{
		return ALFLPointNavActor::StaticClass();
	}
	struct Z_Construct_UClass_ALFLPointNavActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALFLPointNavActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLPointNavActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/LFLPointNavActor.h" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALFLPointNavActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALFLPointNavActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALFLPointNavActor_Statics::ClassParams = {
		&ALFLPointNavActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALFLPointNavActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLPointNavActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALFLPointNavActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALFLPointNavActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALFLPointNavActor, 3425622027);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ALFLPointNavActor>()
	{
		return ALFLPointNavActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALFLPointNavActor(Z_Construct_UClass_ALFLPointNavActor, &ALFLPointNavActor::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ALFLPointNavActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALFLPointNavActor);
	void ULFLPointNavActorData::StaticRegisterNativesULFLPointNavActorData()
	{
	}
	UClass* Z_Construct_UClass_ULFLPointNavActorData_NoRegister()
	{
		return ULFLPointNavActorData::StaticClass();
	}
	struct Z_Construct_UClass_ULFLPointNavActorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLPointNavActorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavActorData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Navigation/LFLPointNavActor.h" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLPointNavActorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLPointNavActorData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLPointNavActorData_Statics::ClassParams = {
		&ULFLPointNavActorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavActorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavActorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLPointNavActorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLPointNavActorData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLPointNavActorData, 108187306);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLPointNavActorData>()
	{
		return ULFLPointNavActorData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLPointNavActorData(Z_Construct_UClass_ULFLPointNavActorData, &ULFLPointNavActorData::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLPointNavActorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLPointNavActorData);
	void ULFLPointNavPoint::StaticRegisterNativesULFLPointNavPoint()
	{
	}
	UClass* Z_Construct_UClass_ULFLPointNavPoint_NoRegister()
	{
		return ULFLPointNavPoint::StaticClass();
	}
	struct Z_Construct_UClass_ULFLPointNavPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFLPointNavPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFLPointNavPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Navigation/LFLPointNavActor.h" },
		{ "ModuleRelativePath", "Public/Navigation/LFLPointNavActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFLPointNavPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFLPointNavPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULFLPointNavPoint_Statics::ClassParams = {
		&ULFLPointNavPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULFLPointNavPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULFLPointNavPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULFLPointNavPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULFLPointNavPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULFLPointNavPoint, 212163019);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ULFLPointNavPoint>()
	{
		return ULFLPointNavPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULFLPointNavPoint(Z_Construct_UClass_ULFLPointNavPoint, &ULFLPointNavPoint::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ULFLPointNavPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFLPointNavPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
