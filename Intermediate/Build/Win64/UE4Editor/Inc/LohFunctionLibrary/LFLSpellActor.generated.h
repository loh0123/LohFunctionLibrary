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
class ALFLSpellActor;
#ifdef LOHFUNCTIONLIBRARY_LFLSpellActor_generated_h
#error "LFLSpellActor.generated.h already included, missing '#pragma once' in LFLSpellActor.h"
#endif
#define LOHFUNCTIONLIBRARY_LFLSpellActor_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_RPC_WRAPPERS \
	virtual int32 CanStopSpell_Implementation(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& StopCode); \
	virtual void CommitSpell_Implementation(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual int32 CanRunSpell_Implementation(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager); \
 \
	DECLARE_FUNCTION(execCanStopSpell); \
	DECLARE_FUNCTION(execCommitSpell); \
	DECLARE_FUNCTION(execCanRunSpell); \
	DECLARE_FUNCTION(execIsTargetActorContain); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execIsContainSpellArgument); \
	DECLARE_FUNCTION(execGetSingleSpellArgument); \
	DECLARE_FUNCTION(execGetSpellArguments); \
	DECLARE_FUNCTION(execRemoveSpellArgument); \
	DECLARE_FUNCTION(execAddSpellArgument); \
	DECLARE_FUNCTION(execSetSpellArguments); \
	DECLARE_FUNCTION(execGetPreviousCastSpell);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 CanStopSpell_Implementation(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& StopCode); \
	virtual void CommitSpell_Implementation(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual int32 CanRunSpell_Implementation(AActor* SpellOwner, ULFLAbilityManagementComponent* AbilityManager); \
 \
	DECLARE_FUNCTION(execCanStopSpell); \
	DECLARE_FUNCTION(execCommitSpell); \
	DECLARE_FUNCTION(execCanRunSpell); \
	DECLARE_FUNCTION(execIsTargetActorContain); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execIsContainSpellArgument); \
	DECLARE_FUNCTION(execGetSingleSpellArgument); \
	DECLARE_FUNCTION(execGetSpellArguments); \
	DECLARE_FUNCTION(execRemoveSpellArgument); \
	DECLARE_FUNCTION(execAddSpellArgument); \
	DECLARE_FUNCTION(execSetSpellArguments); \
	DECLARE_FUNCTION(execGetPreviousCastSpell);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_EVENT_PARMS \
	struct LFLSpellActor_eventCanRunSpell_Parms \
	{ \
		AActor* SpellOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLSpellActor_eventCanRunSpell_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLSpellActor_eventCanStopSpell_Parms \
	{ \
		AActor* SpellOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
		int32 StopCode; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLSpellActor_eventCanStopSpell_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLSpellActor_eventCommitSpell_Parms \
	{ \
		AActor* SpellOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
	};


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_CALLBACK_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALFLSpellActor(); \
	friend struct Z_Construct_UClass_ALFLSpellActor_Statics; \
public: \
	DECLARE_CLASS(ALFLSpellActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ALFLSpellActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpellArguments=NETFIELD_REP_START, \
		Manager, \
		OwningAbility, \
		TargetActors, \
		PreviousCastSpell, \
		NETFIELD_REP_END=PreviousCastSpell	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALFLSpellActor(); \
	friend struct Z_Construct_UClass_ALFLSpellActor_Statics; \
public: \
	DECLARE_CLASS(ALFLSpellActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ALFLSpellActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpellArguments=NETFIELD_REP_START, \
		Manager, \
		OwningAbility, \
		TargetActors, \
		PreviousCastSpell, \
		NETFIELD_REP_END=PreviousCastSpell	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALFLSpellActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALFLSpellActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALFLSpellActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALFLSpellActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALFLSpellActor(ALFLSpellActor&&); \
	NO_API ALFLSpellActor(const ALFLSpellActor&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALFLSpellActor(ALFLSpellActor&&); \
	NO_API ALFLSpellActor(const ALFLSpellActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALFLSpellActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALFLSpellActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALFLSpellActor)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_PRIVATE_PROPERTY_OFFSET
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_12_PROLOG \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_EVENT_PARMS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ALFLSpellActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLSpellActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
