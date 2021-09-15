// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULFLAbilityManagementComponent;
struct FLFLAbilityArgumentData;
#ifdef LOHFUNCTIONLIBRARY_LFLEffectComponent_generated_h
#error "LFLEffectComponent.generated.h already included, missing '#pragma once' in LFLEffectComponent.h"
#endif
#define LOHFUNCTIONLIBRARY_LFLEffectComponent_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_RPC_WRAPPERS \
	virtual int32 CanStopEffect_Implementation(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& StopCode); \
	virtual int32 CanRunEffect_Implementation(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager); \
 \
	DECLARE_FUNCTION(execCanStopEffect); \
	DECLARE_FUNCTION(execCanRunEffect); \
	DECLARE_FUNCTION(execIsContainEffectArgument); \
	DECLARE_FUNCTION(execGetSingleEffectArgument); \
	DECLARE_FUNCTION(execGetEffectArguments); \
	DECLARE_FUNCTION(execRemoveEffectArgument); \
	DECLARE_FUNCTION(execAddEffectArgument); \
	DECLARE_FUNCTION(execSetEffectArguments); \
	DECLARE_FUNCTION(execIsAttributeIDExist); \
	DECLARE_FUNCTION(execGetAttributeData); \
	DECLARE_FUNCTION(execAddAttributeDataOffset); \
	DECLARE_FUNCTION(execAddAttributeDataMultiplyOffset); \
	DECLARE_FUNCTION(execAddAttributeDataValueOffset); \
	DECLARE_FUNCTION(execSetAttributeData);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 CanStopEffect_Implementation(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& StopCode); \
	virtual int32 CanRunEffect_Implementation(AActor* EffectOwner, ULFLAbilityManagementComponent* AbilityManager); \
 \
	DECLARE_FUNCTION(execCanStopEffect); \
	DECLARE_FUNCTION(execCanRunEffect); \
	DECLARE_FUNCTION(execIsContainEffectArgument); \
	DECLARE_FUNCTION(execGetSingleEffectArgument); \
	DECLARE_FUNCTION(execGetEffectArguments); \
	DECLARE_FUNCTION(execRemoveEffectArgument); \
	DECLARE_FUNCTION(execAddEffectArgument); \
	DECLARE_FUNCTION(execSetEffectArguments); \
	DECLARE_FUNCTION(execIsAttributeIDExist); \
	DECLARE_FUNCTION(execGetAttributeData); \
	DECLARE_FUNCTION(execAddAttributeDataOffset); \
	DECLARE_FUNCTION(execAddAttributeDataMultiplyOffset); \
	DECLARE_FUNCTION(execAddAttributeDataValueOffset); \
	DECLARE_FUNCTION(execSetAttributeData);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_EVENT_PARMS \
	struct LFLEffectComponent_eventCanRunEffect_Parms \
	{ \
		AActor* EffectOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLEffectComponent_eventCanRunEffect_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLEffectComponent_eventCanStopEffect_Parms \
	{ \
		AActor* EffectOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
		int32 StopCode; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLEffectComponent_eventCanStopEffect_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_CALLBACK_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFLEffectComponent(); \
	friend struct Z_Construct_UClass_ULFLEffectComponent_Statics; \
public: \
	DECLARE_CLASS(ULFLEffectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLEffectComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttributeDatas=NETFIELD_REP_START, \
		EffectArguments, \
		Manager, \
		NETFIELD_REP_END=Manager	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULFLEffectComponent(); \
	friend struct Z_Construct_UClass_ULFLEffectComponent_Statics; \
public: \
	DECLARE_CLASS(ULFLEffectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLEffectComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttributeDatas=NETFIELD_REP_START, \
		EffectArguments, \
		Manager, \
		NETFIELD_REP_END=Manager	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLEffectComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLEffectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLEffectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLEffectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLEffectComponent(ULFLEffectComponent&&); \
	NO_API ULFLEffectComponent(const ULFLEffectComponent&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLEffectComponent(ULFLEffectComponent&&); \
	NO_API ULFLEffectComponent(const ULFLEffectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLEffectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLEffectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFLEffectComponent)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_10_PROLOG \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_EVENT_PARMS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ULFLEffectComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLEffectComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
