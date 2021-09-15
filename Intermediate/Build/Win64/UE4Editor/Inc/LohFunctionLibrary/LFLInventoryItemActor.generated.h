// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULFLInventoryManagementComponent;
struct FLFLInventoryPerItemData;
#ifdef LOHFUNCTIONLIBRARY_LFLInventoryItemActor_generated_h
#error "LFLInventoryItemActor.generated.h already included, missing '#pragma once' in LFLInventoryItemActor.h"
#endif
#define LOHFUNCTIONLIBRARY_LFLInventoryItemActor_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_RPC_WRAPPERS \
	virtual void OnActiveItem_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, bool IsEquip, bool Force); \
	virtual void CommitActiveItem_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, bool IsEquip, bool Force); \
	virtual void OnUnequip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, bool Force); \
	virtual void OnEquip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, bool Force); \
	virtual void OnDrop_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, bool Force); \
	virtual void OnPickUp_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex, bool Force); \
	virtual int32 CanActiveItem_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, bool IsEquip); \
	virtual int32 CanUnequip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory); \
	virtual int32 CanEquip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory); \
	virtual int32 CanDrop_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, FLFLInventoryPerItemData const& Value); \
	virtual int32 CanPickUp_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex); \
 \
	DECLARE_FUNCTION(execOnActiveItem); \
	DECLARE_FUNCTION(execCommitActiveItem); \
	DECLARE_FUNCTION(execOnUnequip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnDrop); \
	DECLARE_FUNCTION(execOnPickUp); \
	DECLARE_FUNCTION(execCanActiveItem); \
	DECLARE_FUNCTION(execCanUnequip); \
	DECLARE_FUNCTION(execCanEquip); \
	DECLARE_FUNCTION(execCanDrop); \
	DECLARE_FUNCTION(execCanPickUp);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnActiveItem_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, bool IsEquip, bool Force); \
	virtual void CommitActiveItem_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, bool IsEquip, bool Force); \
	virtual void OnUnequip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, bool Force); \
	virtual void OnEquip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, bool Force); \
	virtual void OnDrop_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, bool Force); \
	virtual void OnPickUp_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex, bool Force); \
	virtual int32 CanActiveItem_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, bool IsEquip); \
	virtual int32 CanUnequip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory); \
	virtual int32 CanEquip_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory); \
	virtual int32 CanDrop_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, FLFLInventoryPerItemData const& Value); \
	virtual int32 CanPickUp_Implementation(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex); \
 \
	DECLARE_FUNCTION(execOnActiveItem); \
	DECLARE_FUNCTION(execCommitActiveItem); \
	DECLARE_FUNCTION(execOnUnequip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnDrop); \
	DECLARE_FUNCTION(execOnPickUp); \
	DECLARE_FUNCTION(execCanActiveItem); \
	DECLARE_FUNCTION(execCanUnequip); \
	DECLARE_FUNCTION(execCanEquip); \
	DECLARE_FUNCTION(execCanDrop); \
	DECLARE_FUNCTION(execCanPickUp);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_EVENT_PARMS \
	struct LFLInventoryItemActor_eventCanActiveItem_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		int32 ActiveCode; \
		bool IsEquip; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLInventoryItemActor_eventCanActiveItem_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLInventoryItemActor_eventCanDrop_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		FLFLInventoryPerItemData Value; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLInventoryItemActor_eventCanDrop_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLInventoryItemActor_eventCanEquip_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLInventoryItemActor_eventCanEquip_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLInventoryItemActor_eventCanPickUp_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		int32 StackIndex; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLInventoryItemActor_eventCanPickUp_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLInventoryItemActor_eventCanUnequip_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LFLInventoryItemActor_eventCanUnequip_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct LFLInventoryItemActor_eventCommitActiveItem_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		int32 ActiveCode; \
		bool IsEquip; \
		bool Force; \
	}; \
	struct LFLInventoryItemActor_eventOnActiveItem_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		int32 ActiveCode; \
		bool IsEquip; \
		bool Force; \
	}; \
	struct LFLInventoryItemActor_eventOnDrop_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		bool Force; \
	}; \
	struct LFLInventoryItemActor_eventOnEquip_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		bool Force; \
	}; \
	struct LFLInventoryItemActor_eventOnPickUp_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		int32 StackIndex; \
		bool Force; \
	}; \
	struct LFLInventoryItemActor_eventOnUnequip_Parms \
	{ \
		AActor* ItemOwner; \
		ULFLInventoryManagementComponent* Inventory; \
		bool Force; \
	};


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_CALLBACK_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALFLInventoryItemActor(); \
	friend struct Z_Construct_UClass_ALFLInventoryItemActor_Statics; \
public: \
	DECLARE_CLASS(ALFLInventoryItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ALFLInventoryItemActor)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesALFLInventoryItemActor(); \
	friend struct Z_Construct_UClass_ALFLInventoryItemActor_Statics; \
public: \
	DECLARE_CLASS(ALFLInventoryItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ALFLInventoryItemActor)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALFLInventoryItemActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALFLInventoryItemActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALFLInventoryItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALFLInventoryItemActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALFLInventoryItemActor(ALFLInventoryItemActor&&); \
	NO_API ALFLInventoryItemActor(const ALFLInventoryItemActor&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALFLInventoryItemActor(ALFLInventoryItemActor&&); \
	NO_API ALFLInventoryItemActor(const ALFLInventoryItemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALFLInventoryItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALFLInventoryItemActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALFLInventoryItemActor)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_PRIVATE_PROPERTY_OFFSET
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_19_PROLOG \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_EVENT_PARMS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ALFLInventoryItemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Inventory_LFLInventoryItemActor_h


#define FOREACH_ENUM_ELFLINVENTORYITEMTICKTYPE(op) \
	op(Disable) \
	op(EquipAndUnequip) \
	op(DropOnGround) \
	op(AlwaysOn) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
