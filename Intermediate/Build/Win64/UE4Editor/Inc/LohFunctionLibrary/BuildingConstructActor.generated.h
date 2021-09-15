// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntVector;
#ifdef LOHFUNCTIONLIBRARY_BuildingConstructActor_generated_h
#error "BuildingConstructActor.generated.h already included, missing '#pragma once' in BuildingConstructActor.h"
#endif
#define LOHFUNCTIONLIBRARY_BuildingConstructActor_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLBuildingFrameJointData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLBuildingFrameJointData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLBuildingFrameRoomData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLBuildingFrameRoomData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsIntVectorInRange); \
	DECLARE_FUNCTION(execIsRoomOverlapping); \
	DECLARE_FUNCTION(execConstructionAllointConnect); \
	DECLARE_FUNCTION(execUpdateRender); \
	DECLARE_FUNCTION(execConstructionAllRoom); \
	DECLARE_FUNCTION(execSetupInstance);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsIntVectorInRange); \
	DECLARE_FUNCTION(execIsRoomOverlapping); \
	DECLARE_FUNCTION(execConstructionAllointConnect); \
	DECLARE_FUNCTION(execUpdateRender); \
	DECLARE_FUNCTION(execConstructionAllRoom); \
	DECLARE_FUNCTION(execSetupInstance);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildingConstructActor(); \
	friend struct Z_Construct_UClass_ABuildingConstructActor_Statics; \
public: \
	DECLARE_CLASS(ABuildingConstructActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ABuildingConstructActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RoomList=NETFIELD_REP_START, \
		NETFIELD_REP_END=RoomList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_INCLASS \
private: \
	static void StaticRegisterNativesABuildingConstructActor(); \
	friend struct Z_Construct_UClass_ABuildingConstructActor_Statics; \
public: \
	DECLARE_CLASS(ABuildingConstructActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ABuildingConstructActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RoomList=NETFIELD_REP_START, \
		NETFIELD_REP_END=RoomList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingConstructActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingConstructActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingConstructActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingConstructActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingConstructActor(ABuildingConstructActor&&); \
	NO_API ABuildingConstructActor(const ABuildingConstructActor&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingConstructActor(ABuildingConstructActor&&); \
	NO_API ABuildingConstructActor(const ABuildingConstructActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingConstructActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingConstructActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuildingConstructActor)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_PRIVATE_PROPERTY_OFFSET
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_94_PROLOG
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ABuildingConstructActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BuildingConstructActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
