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
struct FLFLSpellSpawnData;
class APawn;
#ifdef LOHFUNCTIONLIBRARY_LFLAbilityHandlerComponent_generated_h
#error "LFLAbilityHandlerComponent.generated.h already included, missing '#pragma once' in LFLAbilityHandlerComponent.h"
#endif
#define LOHFUNCTIONLIBRARY_LFLAbilityHandlerComponent_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_RPC_WRAPPERS \
	virtual void OmEndAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual void OnCancelAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& CancelCode); \
	virtual void OnRunAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual void OnCommitAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual void OnAbilityFailToRun_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& FailCode); \
	virtual int32 CanCancelAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& CancelCode); \
	virtual int32 CanRunAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual void TryCancelAbility_Implementation(int32 const& CancelCode); \
	virtual void TryRunAbility_Implementation(); \
 \
	DECLARE_FUNCTION(execIsAbilityRunning); \
	DECLARE_FUNCTION(execOmEndAbility); \
	DECLARE_FUNCTION(execOnCancelAbility); \
	DECLARE_FUNCTION(execOnRunAbility); \
	DECLARE_FUNCTION(execOnCommitAbility); \
	DECLARE_FUNCTION(execOnAbilityFailToRun); \
	DECLARE_FUNCTION(execCanCancelAbility); \
	DECLARE_FUNCTION(execCanRunAbility); \
	DECLARE_FUNCTION(execTryCancelAbility); \
	DECLARE_FUNCTION(execTryRunAbility); \
	DECLARE_FUNCTION(execIsCoolingDown); \
	DECLARE_FUNCTION(execGetCoolDownTimer); \
	DECLARE_FUNCTION(execResetCoolDownTimer); \
	DECLARE_FUNCTION(execAddCoolDownTimerOffset); \
	DECLARE_FUNCTION(execSetCoolDownTimerOnPercentage); \
	DECLARE_FUNCTION(execSetCoolDownTimer); \
	DECLARE_FUNCTION(execIsContainAbilityArgument); \
	DECLARE_FUNCTION(execGetSingleAbilityArgument); \
	DECLARE_FUNCTION(execGetAbilityArguments); \
	DECLARE_FUNCTION(execRemoveAbilityArgument); \
	DECLARE_FUNCTION(execAddAbilityArgument); \
	DECLARE_FUNCTION(execSetAbilityArguments); \
	DECLARE_FUNCTION(execIsTargetActorContain); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execIsSpellCallTreeReady); \
	DECLARE_FUNCTION(execGetSpellCallTree); \
	DECLARE_FUNCTION(execRunSpellCallTree); \
	DECLARE_FUNCTION(execSetSpellCallTree); \
	DECLARE_FUNCTION(execIsAttributeIDExist); \
	DECLARE_FUNCTION(execGetAttributeData); \
	DECLARE_FUNCTION(execAddAttributeDataOffset); \
	DECLARE_FUNCTION(execAddAttributeDataMultiplyOffset); \
	DECLARE_FUNCTION(execAddAttributeDataValueOffset); \
	DECLARE_FUNCTION(execSetAttributeData);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OmEndAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual void OnCancelAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& CancelCode); \
	virtual void OnRunAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual void OnCommitAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual void OnAbilityFailToRun_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& FailCode); \
	virtual int32 CanCancelAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager, int32 const& CancelCode); \
	virtual int32 CanRunAbility_Implementation(AActor* AbilityOwner, ULFLAbilityManagementComponent* AbilityManager); \
	virtual void TryCancelAbility_Implementation(int32 const& CancelCode); \
	virtual void TryRunAbility_Implementation(); \
 \
	DECLARE_FUNCTION(execIsAbilityRunning); \
	DECLARE_FUNCTION(execOmEndAbility); \
	DECLARE_FUNCTION(execOnCancelAbility); \
	DECLARE_FUNCTION(execOnRunAbility); \
	DECLARE_FUNCTION(execOnCommitAbility); \
	DECLARE_FUNCTION(execOnAbilityFailToRun); \
	DECLARE_FUNCTION(execCanCancelAbility); \
	DECLARE_FUNCTION(execCanRunAbility); \
	DECLARE_FUNCTION(execTryCancelAbility); \
	DECLARE_FUNCTION(execTryRunAbility); \
	DECLARE_FUNCTION(execIsCoolingDown); \
	DECLARE_FUNCTION(execGetCoolDownTimer); \
	DECLARE_FUNCTION(execResetCoolDownTimer); \
	DECLARE_FUNCTION(execAddCoolDownTimerOffset); \
	DECLARE_FUNCTION(execSetCoolDownTimerOnPercentage); \
	DECLARE_FUNCTION(execSetCoolDownTimer); \
	DECLARE_FUNCTION(execIsContainAbilityArgument); \
	DECLARE_FUNCTION(execGetSingleAbilityArgument); \
	DECLARE_FUNCTION(execGetAbilityArguments); \
	DECLARE_FUNCTION(execRemoveAbilityArgument); \
	DECLARE_FUNCTION(execAddAbilityArgument); \
	DECLARE_FUNCTION(execSetAbilityArguments); \
	DECLARE_FUNCTION(execIsTargetActorContain); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execIsSpellCallTreeReady); \
	DECLARE_FUNCTION(execGetSpellCallTree); \
	DECLARE_FUNCTION(execRunSpellCallTree); \
	DECLARE_FUNCTION(execSetSpellCallTree); \
	DECLARE_FUNCTION(execIsAttributeIDExist); \
	DECLARE_FUNCTION(execGetAttributeData); \
	DECLARE_FUNCTION(execAddAttributeDataOffset); \
	DECLARE_FUNCTION(execAddAttributeDataMultiplyOffset); \
	DECLARE_FUNCTION(execAddAttributeDataValueOffset); \
	DECLARE_FUNCTION(execSetAttributeData);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_EVENT_PARMS \
	struct LFLAbilityHandlerComponent_eventCanCancelAbility_Parms \
	{ \
		AActor* AbilityOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
		int32 CancelCode; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLAbilityHandlerComponent_eventCanCancelAbility_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLAbilityHandlerComponent_eventCanRunAbility_Parms \
	{ \
		AActor* AbilityOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLAbilityHandlerComponent_eventCanRunAbility_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLAbilityHandlerComponent_eventOmEndAbility_Parms \
	{ \
		AActor* AbilityOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
	}; \
	struct LFLAbilityHandlerComponent_eventOnAbilityFailToRun_Parms \
	{ \
		AActor* AbilityOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
		int32 FailCode; \
	}; \
	struct LFLAbilityHandlerComponent_eventOnCancelAbility_Parms \
	{ \
		AActor* AbilityOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
		int32 CancelCode; \
	}; \
	struct LFLAbilityHandlerComponent_eventOnCommitAbility_Parms \
	{ \
		AActor* AbilityOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
	}; \
	struct LFLAbilityHandlerComponent_eventOnRunAbility_Parms \
	{ \
		AActor* AbilityOwner; \
		ULFLAbilityManagementComponent* AbilityManager; \
	}; \
	struct LFLAbilityHandlerComponent_eventTryCancelAbility_Parms \
	{ \
		int32 CancelCode; \
	};


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_CALLBACK_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFLAbilityHandlerComponent(); \
	friend struct Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(ULFLAbilityHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLAbilityHandlerComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CoolDownTimer=NETFIELD_REP_START, \
		SpellCallTree, \
		TreeBranchIndex, \
		AttributeDatas, \
		AbilityArguments, \
		Manager, \
		TargetActors, \
		SlotIndex, \
		IsRunning, \
		NETFIELD_REP_END=IsRunning	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULFLAbilityHandlerComponent(); \
	friend struct Z_Construct_UClass_ULFLAbilityHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(ULFLAbilityHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLAbilityHandlerComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CoolDownTimer=NETFIELD_REP_START, \
		SpellCallTree, \
		TreeBranchIndex, \
		AttributeDatas, \
		AbilityArguments, \
		Manager, \
		TargetActors, \
		SlotIndex, \
		IsRunning, \
		NETFIELD_REP_END=IsRunning	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLAbilityHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLAbilityHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLAbilityHandlerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLAbilityHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLAbilityHandlerComponent(ULFLAbilityHandlerComponent&&); \
	NO_API ULFLAbilityHandlerComponent(const ULFLAbilityHandlerComponent&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLAbilityHandlerComponent(ULFLAbilityHandlerComponent&&); \
	NO_API ULFLAbilityHandlerComponent(const ULFLAbilityHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLAbilityHandlerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLAbilityHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFLAbilityHandlerComponent)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CoolDownTimer() { return STRUCT_OFFSET(ULFLAbilityHandlerComponent, CoolDownTimer); } \
	FORCEINLINE static uint32 __PPO__SpellCallTree() { return STRUCT_OFFSET(ULFLAbilityHandlerComponent, SpellCallTree); } \
	FORCEINLINE static uint32 __PPO__TreeBranchIndex() { return STRUCT_OFFSET(ULFLAbilityHandlerComponent, TreeBranchIndex); } \
	FORCEINLINE static uint32 __PPO__IsRunning() { return STRUCT_OFFSET(ULFLAbilityHandlerComponent, IsRunning); }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_10_PROLOG \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_EVENT_PARMS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ULFLAbilityHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Ability_LFLAbilityHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
