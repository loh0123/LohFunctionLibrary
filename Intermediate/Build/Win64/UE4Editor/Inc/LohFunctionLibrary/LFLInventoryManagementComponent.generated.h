// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALFLInventoryItemActor;
struct FLFLInventoryStackItemData;
struct FLFLInventoryPerItemData;
struct FLFLInventoryEquipmentSaveData;
#ifdef LOHFUNCTIONLIBRARY_LFLInventoryManagementComponent_generated_h
#error "LFLInventoryManagementComponent.generated.h already included, missing '#pragma once' in LFLInventoryManagementComponent.h"
#endif
#define LOHFUNCTIONLIBRARY_LFLInventoryManagementComponent_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLInventoryStackItemData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLInventoryStackItemData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLInventoryPerItemData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLInventoryPerItemData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLInventoryEquipmentSaveData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLInventoryEquipmentSaveData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActiveItem); \
	DECLARE_FUNCTION(execIsEquiped); \
	DECLARE_FUNCTION(execGetEquipmentsList); \
	DECLARE_FUNCTION(execUnequipItem); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execPickUpItem); \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execGetInventoryItem); \
	DECLARE_FUNCTION(execGetInventoryItemAmount); \
	DECLARE_FUNCTION(execGetTotalInventoryItemAmount); \
	DECLARE_FUNCTION(execGetTotalInventoryItemStackAmount); \
	DECLARE_FUNCTION(execGetTotalInventoryItemWeight); \
	DECLARE_FUNCTION(execFindInventoryItemByEquipment); \
	DECLARE_FUNCTION(execFindInventoryItemStackIndex); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execAddItemStackToInventory); \
	DECLARE_FUNCTION(execAddItemToInventory); \
	DECLARE_FUNCTION(execDeserializeData); \
	DECLARE_FUNCTION(execSerializeData); \
	DECLARE_FUNCTION(execSpawnItemForOperation);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActiveItem); \
	DECLARE_FUNCTION(execIsEquiped); \
	DECLARE_FUNCTION(execGetEquipmentsList); \
	DECLARE_FUNCTION(execUnequipItem); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execPickUpItem); \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execGetInventoryItem); \
	DECLARE_FUNCTION(execGetInventoryItemAmount); \
	DECLARE_FUNCTION(execGetTotalInventoryItemAmount); \
	DECLARE_FUNCTION(execGetTotalInventoryItemStackAmount); \
	DECLARE_FUNCTION(execGetTotalInventoryItemWeight); \
	DECLARE_FUNCTION(execFindInventoryItemByEquipment); \
	DECLARE_FUNCTION(execFindInventoryItemStackIndex); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execAddItemStackToInventory); \
	DECLARE_FUNCTION(execAddItemToInventory); \
	DECLARE_FUNCTION(execDeserializeData); \
	DECLARE_FUNCTION(execSerializeData); \
	DECLARE_FUNCTION(execSpawnItemForOperation);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULFLInventoryManagementComponent, NO_API)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFLInventoryManagementComponent(); \
	friend struct Z_Construct_UClass_ULFLInventoryManagementComponent_Statics; \
public: \
	DECLARE_CLASS(ULFLInventoryManagementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLInventoryManagementComponent) \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentList=NETFIELD_REP_START, \
		InventoryData, \
		NETFIELD_REP_END=InventoryData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_INCLASS \
private: \
	static void StaticRegisterNativesULFLInventoryManagementComponent(); \
	friend struct Z_Construct_UClass_ULFLInventoryManagementComponent_Statics; \
public: \
	DECLARE_CLASS(ULFLInventoryManagementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLInventoryManagementComponent) \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentList=NETFIELD_REP_START, \
		InventoryData, \
		NETFIELD_REP_END=InventoryData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLInventoryManagementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLInventoryManagementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLInventoryManagementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLInventoryManagementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLInventoryManagementComponent(ULFLInventoryManagementComponent&&); \
	NO_API ULFLInventoryManagementComponent(const ULFLInventoryManagementComponent&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLInventoryManagementComponent(ULFLInventoryManagementComponent&&); \
	NO_API ULFLInventoryManagementComponent(const ULFLInventoryManagementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLInventoryManagementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLInventoryManagementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFLInventoryManagementComponent)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SavedSerializeData() { return STRUCT_OFFSET(ULFLInventoryManagementComponent, SavedSerializeData); }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_115_PROLOG
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ULFLInventoryManagementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryManagementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
