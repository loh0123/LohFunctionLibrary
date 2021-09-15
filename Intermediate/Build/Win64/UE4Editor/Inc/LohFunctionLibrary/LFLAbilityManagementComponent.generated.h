// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULFLEffectComponent;
struct FLFLAbilityArgumentData;
class ALFLSpellActor;
class AActor;
class ULFLAbilityHandlerComponent;
class APawn;
struct FTransform;
struct FLFLSpellSpawnData;
struct FLFLAbilityComponentData;
#ifdef LOHFUNCTIONLIBRARY_LFLAbilityManagementComponent_generated_h
#error "LFLAbilityManagementComponent.generated.h already included, missing '#pragma once' in LFLAbilityManagementComponent.h"
#endif
#define LOHFUNCTIONLIBRARY_LFLAbilityManagementComponent_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLSpellSpawnData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLSpellSpawnData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLAbilityComponentData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLAbilityComponentData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLAbilityAttributeData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLAbilityAttributeData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLAbilityArgumentData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLAbilityArgumentData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_RPC_WRAPPERS \
	virtual FTransform GetSpellSpawnTransform_Implementation(AActor* SpawnTransformActor, TArray<FLFLAbilityArgumentData> const& SpellArguments, TArray<AActor*> const& SpellTargetActors, ALFLSpellActor* PreviousSpell, ULFLAbilityHandlerComponent* OwningAbility, float& LifeTime); \
 \
	DECLARE_FUNCTION(execIsEffectRunning); \
	DECLARE_FUNCTION(execGetEffectRunning); \
	DECLARE_FUNCTION(execStopAllEffect); \
	DECLARE_FUNCTION(execStopEffect); \
	DECLARE_FUNCTION(execRunEffect); \
	DECLARE_FUNCTION(execIsSpellRunning); \
	DECLARE_FUNCTION(execGetSpellRunning); \
	DECLARE_FUNCTION(execStopAllSpell); \
	DECLARE_FUNCTION(execStopSpell); \
	DECLARE_FUNCTION(execRunSpell); \
	DECLARE_FUNCTION(execGetSpellSpawnTransform); \
	DECLARE_FUNCTION(execClearPreviousSpell); \
	DECLARE_FUNCTION(execGetAbility); \
	DECLARE_FUNCTION(execIsAbilityRunning); \
	DECLARE_FUNCTION(execIsOwnedAbility); \
	DECLARE_FUNCTION(execSetAbilitySpellCallTree); \
	DECLARE_FUNCTION(execResetAbilityCoolDown); \
	DECLARE_FUNCTION(execCancelAllAbility); \
	DECLARE_FUNCTION(execCancelAbility); \
	DECLARE_FUNCTION(execRunAbility); \
	DECLARE_FUNCTION(execRemoveAbility); \
	DECLARE_FUNCTION(execAssignAbility); \
	DECLARE_FUNCTION(execIsContainGlobalArgument); \
	DECLARE_FUNCTION(execGetSingleGlobalArgument); \
	DECLARE_FUNCTION(execGetGlobalArguments); \
	DECLARE_FUNCTION(execRemoveGlobalArgument); \
	DECLARE_FUNCTION(execAddGlobalArgument); \
	DECLARE_FUNCTION(execSetGlobalArguments); \
	DECLARE_FUNCTION(execGetTargetActors); \
	DECLARE_FUNCTION(execRemoveTargetActors); \
	DECLARE_FUNCTION(execAddTargetActors); \
	DECLARE_FUNCTION(execSetTargetActors); \
	DECLARE_FUNCTION(execCollectAttributeDatas); \
	DECLARE_FUNCTION(execIsContainArgumentData); \
	DECLARE_FUNCTION(execReplaceSingleArgumentData); \
	DECLARE_FUNCTION(execCombineArgumentDatas); \
	DECLARE_FUNCTION(execFindArgumentData); \
	DECLARE_FUNCTION(execDeserializeData); \
	DECLARE_FUNCTION(execSerializeData);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FTransform GetSpellSpawnTransform_Implementation(AActor* SpawnTransformActor, TArray<FLFLAbilityArgumentData> const& SpellArguments, TArray<AActor*> const& SpellTargetActors, ALFLSpellActor* PreviousSpell, ULFLAbilityHandlerComponent* OwningAbility, float& LifeTime); \
 \
	DECLARE_FUNCTION(execIsEffectRunning); \
	DECLARE_FUNCTION(execGetEffectRunning); \
	DECLARE_FUNCTION(execStopAllEffect); \
	DECLARE_FUNCTION(execStopEffect); \
	DECLARE_FUNCTION(execRunEffect); \
	DECLARE_FUNCTION(execIsSpellRunning); \
	DECLARE_FUNCTION(execGetSpellRunning); \
	DECLARE_FUNCTION(execStopAllSpell); \
	DECLARE_FUNCTION(execStopSpell); \
	DECLARE_FUNCTION(execRunSpell); \
	DECLARE_FUNCTION(execGetSpellSpawnTransform); \
	DECLARE_FUNCTION(execClearPreviousSpell); \
	DECLARE_FUNCTION(execGetAbility); \
	DECLARE_FUNCTION(execIsAbilityRunning); \
	DECLARE_FUNCTION(execIsOwnedAbility); \
	DECLARE_FUNCTION(execSetAbilitySpellCallTree); \
	DECLARE_FUNCTION(execResetAbilityCoolDown); \
	DECLARE_FUNCTION(execCancelAllAbility); \
	DECLARE_FUNCTION(execCancelAbility); \
	DECLARE_FUNCTION(execRunAbility); \
	DECLARE_FUNCTION(execRemoveAbility); \
	DECLARE_FUNCTION(execAssignAbility); \
	DECLARE_FUNCTION(execIsContainGlobalArgument); \
	DECLARE_FUNCTION(execGetSingleGlobalArgument); \
	DECLARE_FUNCTION(execGetGlobalArguments); \
	DECLARE_FUNCTION(execRemoveGlobalArgument); \
	DECLARE_FUNCTION(execAddGlobalArgument); \
	DECLARE_FUNCTION(execSetGlobalArguments); \
	DECLARE_FUNCTION(execGetTargetActors); \
	DECLARE_FUNCTION(execRemoveTargetActors); \
	DECLARE_FUNCTION(execAddTargetActors); \
	DECLARE_FUNCTION(execSetTargetActors); \
	DECLARE_FUNCTION(execCollectAttributeDatas); \
	DECLARE_FUNCTION(execIsContainArgumentData); \
	DECLARE_FUNCTION(execReplaceSingleArgumentData); \
	DECLARE_FUNCTION(execCombineArgumentDatas); \
	DECLARE_FUNCTION(execFindArgumentData); \
	DECLARE_FUNCTION(execDeserializeData); \
	DECLARE_FUNCTION(execSerializeData);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_EVENT_PARMS \
	struct LFLAbilityManagementComponent_eventGetSpellSpawnTransform_Parms \
	{ \
		AActor* SpawnTransformActor; \
		TArray<FLFLAbilityArgumentData> SpellArguments; \
		TArray<AActor*> SpellTargetActors; \
		ALFLSpellActor* PreviousSpell; \
		ULFLAbilityHandlerComponent* OwningAbility; \
		float LifeTime; \
		FTransform ReturnValue; \
	};


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_CALLBACK_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULFLAbilityManagementComponent, NO_API)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFLAbilityManagementComponent(); \
	friend struct Z_Construct_UClass_ULFLAbilityManagementComponent_Statics; \
public: \
	DECLARE_CLASS(ULFLAbilityManagementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLAbilityManagementComponent) \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GlobalArguments=NETFIELD_REP_START, \
		TargetActors, \
		RunningSpell, \
		RunningEffect, \
		OwnedAbility, \
		NETFIELD_REP_END=OwnedAbility	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_INCLASS \
private: \
	static void StaticRegisterNativesULFLAbilityManagementComponent(); \
	friend struct Z_Construct_UClass_ULFLAbilityManagementComponent_Statics; \
public: \
	DECLARE_CLASS(ULFLAbilityManagementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLAbilityManagementComponent) \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GlobalArguments=NETFIELD_REP_START, \
		TargetActors, \
		RunningSpell, \
		RunningEffect, \
		OwnedAbility, \
		NETFIELD_REP_END=OwnedAbility	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLAbilityManagementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLAbilityManagementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLAbilityManagementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLAbilityManagementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLAbilityManagementComponent(ULFLAbilityManagementComponent&&); \
	NO_API ULFLAbilityManagementComponent(const ULFLAbilityManagementComponent&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLAbilityManagementComponent(ULFLAbilityManagementComponent&&); \
	NO_API ULFLAbilityManagementComponent(const ULFLAbilityManagementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLAbilityManagementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLAbilityManagementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFLAbilityManagementComponent)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SavedSerializeData() { return STRUCT_OFFSET(ULFLAbilityManagementComponent, SavedSerializeData); } \
	FORCEINLINE static uint32 __PPO__GlobalArguments() { return STRUCT_OFFSET(ULFLAbilityManagementComponent, GlobalArguments); } \
	FORCEINLINE static uint32 __PPO__TargetActors() { return STRUCT_OFFSET(ULFLAbilityManagementComponent, TargetActors); } \
	FORCEINLINE static uint32 __PPO__PreviousCastSpell() { return STRUCT_OFFSET(ULFLAbilityManagementComponent, PreviousCastSpell); }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_79_PROLOG \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_EVENT_PARMS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ULFLAbilityManagementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityManagementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
