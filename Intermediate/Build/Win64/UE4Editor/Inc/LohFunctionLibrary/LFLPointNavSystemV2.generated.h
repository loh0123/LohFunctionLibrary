// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULFLPointNavSystemV2;
class ALFLPointNavActor;
class ULFLPointNavData;
#ifdef LOHFUNCTIONLIBRARY_LFLPointNavSystemV2_generated_h
#error "LFLPointNavSystemV2.generated.h already included, missing '#pragma once' in LFLPointNavSystemV2.h"
#endif
#define LOHFUNCTIONLIBRARY_LFLPointNavSystemV2_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavDataSpawnParam_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FNavDataSpawnParam>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestoryNavSystem); \
	DECLARE_FUNCTION(execCreatePointNavigationSystem); \
	DECLARE_FUNCTION(execGetNavigationActorList); \
	DECLARE_FUNCTION(execGetNavigationData); \
	DECLARE_FUNCTION(execGetPointNavigationSystem);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestoryNavSystem); \
	DECLARE_FUNCTION(execCreatePointNavigationSystem); \
	DECLARE_FUNCTION(execGetNavigationActorList); \
	DECLARE_FUNCTION(execGetNavigationData); \
	DECLARE_FUNCTION(execGetPointNavigationSystem);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFLPointNavSystemV2(); \
	friend struct Z_Construct_UClass_ULFLPointNavSystemV2_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavSystemV2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavSystemV2)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_INCLASS \
private: \
	static void StaticRegisterNativesULFLPointNavSystemV2(); \
	friend struct Z_Construct_UClass_ULFLPointNavSystemV2_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavSystemV2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavSystemV2)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLPointNavSystemV2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLPointNavSystemV2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavSystemV2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavSystemV2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavSystemV2(ULFLPointNavSystemV2&&); \
	NO_API ULFLPointNavSystemV2(const ULFLPointNavSystemV2&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLPointNavSystemV2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavSystemV2(ULFLPointNavSystemV2&&); \
	NO_API ULFLPointNavSystemV2(const ULFLPointNavSystemV2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavSystemV2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavSystemV2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLPointNavSystemV2)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavigationDataList() { return STRUCT_OFFSET(ULFLPointNavSystemV2, NavigationDataList); } \
	FORCEINLINE static uint32 __PPO__NavigationActorList() { return STRUCT_OFFSET(ULFLPointNavSystemV2, NavigationActorList); }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_36_PROLOG
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ULFLPointNavSystemV2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavSystemV2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
