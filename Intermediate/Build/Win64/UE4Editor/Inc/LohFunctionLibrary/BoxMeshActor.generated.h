// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntVector;
class UMaterialInterface;
struct FVector2D;
struct FVector;
class UStaticMesh;
struct FVector4;
#ifdef LOHFUNCTIONLIBRARY_BoxMeshActor_generated_h
#error "BoxMeshActor.generated.h already included, missing '#pragma once' in BoxMeshActor.h"
#endif
#define LOHFUNCTIONLIBRARY_BoxMeshActor_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_RPC_WRAPPERS \
	virtual void OnMeshListUpdate_Implementation(); \
 \
	DECLARE_FUNCTION(execSetLoopOffset); \
	DECLARE_FUNCTION(execSetLoopSize); \
	DECLARE_FUNCTION(execSetMeshMaterial); \
	DECLARE_FUNCTION(execSetMeshSize); \
	DECLARE_FUNCTION(execSetAllMesh); \
	DECLARE_FUNCTION(execSetSingleMesh); \
	DECLARE_FUNCTION(execGetCustomMeshData); \
	DECLARE_FUNCTION(execSetAllMeshCustomData4D); \
	DECLARE_FUNCTION(execSetAllMeshCustomData3D); \
	DECLARE_FUNCTION(execSetAllMeshCustomData2D); \
	DECLARE_FUNCTION(execSetAllMeshCustomData1D); \
	DECLARE_FUNCTION(execReconfigure); \
	DECLARE_FUNCTION(execOnMeshListUpdate_Implementation); \
	DECLARE_FUNCTION(execOnMeshListUpdate);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLoopOffset); \
	DECLARE_FUNCTION(execSetLoopSize); \
	DECLARE_FUNCTION(execSetMeshMaterial); \
	DECLARE_FUNCTION(execSetMeshSize); \
	DECLARE_FUNCTION(execSetAllMesh); \
	DECLARE_FUNCTION(execSetSingleMesh); \
	DECLARE_FUNCTION(execGetCustomMeshData); \
	DECLARE_FUNCTION(execSetAllMeshCustomData4D); \
	DECLARE_FUNCTION(execSetAllMeshCustomData3D); \
	DECLARE_FUNCTION(execSetAllMeshCustomData2D); \
	DECLARE_FUNCTION(execSetAllMeshCustomData1D); \
	DECLARE_FUNCTION(execReconfigure); \
	DECLARE_FUNCTION(execOnMeshListUpdate_Implementation); \
	DECLARE_FUNCTION(execOnMeshListUpdate);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_EVENT_PARMS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_CALLBACK_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxMeshActor(); \
	friend struct Z_Construct_UClass_ABoxMeshActor_Statics; \
public: \
	DECLARE_CLASS(ABoxMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ABoxMeshActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TopEnd=NETFIELD_REP_START, \
		TopEdge, \
		SideEdge, \
		Wall, \
		BottomEnd, \
		BottomEdge, \
		TopFloor, \
		BottomFloor, \
		MeshMaterial, \
		PositionOffset, \
		MeshSize, \
		LoopSize, \
		LoopOffset, \
		CustomMeshData, \
		StaticMeshRenderList, \
		TotalLoop, \
		NETFIELD_REP_END=TotalLoop	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABoxMeshActor(); \
	friend struct Z_Construct_UClass_ABoxMeshActor_Statics; \
public: \
	DECLARE_CLASS(ABoxMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ABoxMeshActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TopEnd=NETFIELD_REP_START, \
		TopEdge, \
		SideEdge, \
		Wall, \
		BottomEnd, \
		BottomEdge, \
		TopFloor, \
		BottomFloor, \
		MeshMaterial, \
		PositionOffset, \
		MeshSize, \
		LoopSize, \
		LoopOffset, \
		CustomMeshData, \
		StaticMeshRenderList, \
		TotalLoop, \
		NETFIELD_REP_END=TotalLoop	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxMeshActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxMeshActor(ABoxMeshActor&&); \
	NO_API ABoxMeshActor(const ABoxMeshActor&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxMeshActor(ABoxMeshActor&&); \
	NO_API ABoxMeshActor(const ABoxMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoxMeshActor)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_PRIVATE_PROPERTY_OFFSET
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_9_PROLOG \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_EVENT_PARMS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ABoxMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Other_BoxMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
