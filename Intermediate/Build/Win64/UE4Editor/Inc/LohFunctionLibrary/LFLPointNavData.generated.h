// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOHFUNCTIONLIBRARY_LFLPointNavData_generated_h
#error "LFLPointNavData.generated.h already included, missing '#pragma once' in LFLPointNavData.h"
#endif
#define LOHFUNCTIONLIBRARY_LFLPointNavData_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlowMapData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FFlowMapData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMNavPointData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FFMNavPointData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlowDirectionData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FFlowDirectionData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_RPC_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFLPointNavData(); \
	friend struct Z_Construct_UClass_ULFLPointNavData_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavData)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_INCLASS \
private: \
	static void StaticRegisterNativesULFLPointNavData(); \
	friend struct Z_Construct_UClass_ULFLPointNavData_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavData)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLPointNavData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLPointNavData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavData(ULFLPointNavData&&); \
	NO_API ULFLPointNavData(const ULFLPointNavData&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLPointNavData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavData(ULFLPointNavData&&); \
	NO_API ULFLPointNavData(const ULFLPointNavData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLPointNavData)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavDataID() { return STRUCT_OFFSET(ULFLPointNavData, NavDataID); } \
	FORCEINLINE static uint32 __PPO__CacheFlowMapData() { return STRUCT_OFFSET(ULFLPointNavData, CacheFlowMapData); } \
	FORCEINLINE static uint32 __PPO__DelayCounter() { return STRUCT_OFFSET(ULFLPointNavData, DelayCounter); } \
	FORCEINLINE static uint32 __PPO__CanStartNavigation() { return STRUCT_OFFSET(ULFLPointNavData, CanStartNavigation); } \
	FORCEINLINE static uint32 __PPO__AgentWidth() { return STRUCT_OFFSET(ULFLPointNavData, AgentWidth); } \
	FORCEINLINE static uint32 __PPO__AgentHeight() { return STRUCT_OFFSET(ULFLPointNavData, AgentHeight); }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_77_PROLOG
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ULFLPointNavData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
