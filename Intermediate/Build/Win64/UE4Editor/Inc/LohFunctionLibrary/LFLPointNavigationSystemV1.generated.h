// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULFLPointNavigationSystemPoint;
class ULFLPointNavigationSystemData;
class ULFLPointNavigationSystemV1;
struct FVector;
struct FBox;
struct FLFLNavigationAreaConnectData;
struct FLFLNavigationAreaData;
struct FLFLNavigationTrackingActorData;
#ifdef LOHFUNCTIONLIBRARY_LFLPointNavigationSystemV1_generated_h
#error "LFLPointNavigationSystemV1.generated.h already included, missing '#pragma once' in LFLPointNavigationSystemV1.h"
#endif
#define LOHFUNCTIONLIBRARY_LFLPointNavigationSystemV1_generated_h

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_675_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLNavigationSystemNavAgentData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__NavAgent() { return STRUCT_OFFSET(FLFLNavigationSystemNavAgentData, NavAgent); } \
	FORCEINLINE static uint32 __PPO__CurrentFollowingPathList() { return STRUCT_OFFSET(FLFLNavigationSystemNavAgentData, CurrentFollowingPathList); } \
	FORCEINLINE static uint32 __PPO__CurrentFollowingPath() { return STRUCT_OFFSET(FLFLNavigationSystemNavAgentData, CurrentFollowingPath); } \
	FORCEINLINE static uint32 __PPO__CurrentFollowingPathIndex() { return STRUCT_OFFSET(FLFLNavigationSystemNavAgentData, CurrentFollowingPathIndex); }


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLNavigationSystemNavAgentData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_425_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLNavigationTrackingActorData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__IsNavPointAreaDirty() { return STRUCT_OFFSET(FLFLNavigationTrackingActorData, IsNavPointAreaDirty); } \
	FORCEINLINE static uint32 __PPO__Actor() { return STRUCT_OFFSET(FLFLNavigationTrackingActorData, Actor); } \
	FORCEINLINE static uint32 __PPO__OwingNavPoint() { return STRUCT_OFFSET(FLFLNavigationTrackingActorData, OwingNavPoint); } \
	FORCEINLINE static uint32 __PPO__NavPointArea() { return STRUCT_OFFSET(FLFLNavigationTrackingActorData, NavPointArea); }


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLNavigationTrackingActorData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_380_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLNavigationAreaData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TotalNavPointWeight() { return STRUCT_OFFSET(FLFLNavigationAreaData, TotalNavPointWeight); } \
	FORCEINLINE static uint32 __PPO__AreaNavPoint() { return STRUCT_OFFSET(FLFLNavigationAreaData, AreaNavPoint); } \
	FORCEINLINE static uint32 __PPO__ConnectArea() { return STRUCT_OFFSET(FLFLNavigationAreaData, ConnectArea); }


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLNavigationAreaData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_337_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLFLNavigationAreaConnectData_Statics; \
	LOHFUNCTIONLIBRARY_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__OwingActor() { return STRUCT_OFFSET(FLFLNavigationAreaConnectData, OwingActor); } \
	FORCEINLINE static uint32 __PPO__AreaID() { return STRUCT_OFFSET(FLFLNavigationAreaConnectData, AreaID); }


template<> LOHFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<struct FLFLNavigationAreaConnectData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_RPC_WRAPPERS \
	virtual void OnNavAgentReachNavPoint_Implementation(AActor* Agent, ULFLPointNavigationSystemPoint* ReachedNavPoint) {}; \
	virtual bool OnBlockActorRemoved_Implementation(AActor* Actor) { return false; }; \
	virtual bool OnBlockActorMoved_Implementation(AActor* Actor) { return false; }; \
	virtual bool OnBlockActorDetected_Implementation(AActor* Actor) { return false; }; \
	virtual bool OnNavigationRemove_Implementation(ULFLPointNavigationSystemData* NavData) { return false; }; \
	virtual bool RequestNavigationUpdate_Implementation(ULFLPointNavigationSystemData* NavData) { return false; }; \
	virtual bool OnNavigationCreate_Implementation(ULFLPointNavigationSystemData* NavData) { return false; }; \
 \
	DECLARE_FUNCTION(execOnNavAgentReachNavPoint); \
	DECLARE_FUNCTION(execOnBlockActorRemoved); \
	DECLARE_FUNCTION(execOnBlockActorMoved); \
	DECLARE_FUNCTION(execOnBlockActorDetected); \
	DECLARE_FUNCTION(execOnNavigationRemove); \
	DECLARE_FUNCTION(execRequestNavigationUpdate); \
	DECLARE_FUNCTION(execOnNavigationCreate);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNavAgentReachNavPoint); \
	DECLARE_FUNCTION(execOnBlockActorRemoved); \
	DECLARE_FUNCTION(execOnBlockActorMoved); \
	DECLARE_FUNCTION(execOnBlockActorDetected); \
	DECLARE_FUNCTION(execOnNavigationRemove); \
	DECLARE_FUNCTION(execRequestNavigationUpdate); \
	DECLARE_FUNCTION(execOnNavigationCreate);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_EVENT_PARMS \
	struct PointNavigationSystemTrackingActorInterface_eventOnBlockActorDetected_Parms \
	{ \
		AActor* Actor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemTrackingActorInterface_eventOnBlockActorDetected_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemTrackingActorInterface_eventOnBlockActorMoved_Parms \
	{ \
		AActor* Actor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemTrackingActorInterface_eventOnBlockActorMoved_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemTrackingActorInterface_eventOnBlockActorRemoved_Parms \
	{ \
		AActor* Actor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemTrackingActorInterface_eventOnBlockActorRemoved_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemTrackingActorInterface_eventOnNavAgentReachNavPoint_Parms \
	{ \
		AActor* Agent; \
		ULFLPointNavigationSystemPoint* ReachedNavPoint; \
	}; \
	struct PointNavigationSystemTrackingActorInterface_eventOnNavigationCreate_Parms \
	{ \
		ULFLPointNavigationSystemData* NavData; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemTrackingActorInterface_eventOnNavigationCreate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemTrackingActorInterface_eventOnNavigationRemove_Parms \
	{ \
		ULFLPointNavigationSystemData* NavData; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemTrackingActorInterface_eventOnNavigationRemove_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemTrackingActorInterface_eventRequestNavigationUpdate_Parms \
	{ \
		ULFLPointNavigationSystemData* NavData; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemTrackingActorInterface_eventRequestNavigationUpdate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_CALLBACK_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemTrackingActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointNavigationSystemTrackingActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOHFUNCTIONLIBRARY_API, UPointNavigationSystemTrackingActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointNavigationSystemTrackingActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemTrackingActorInterface(UPointNavigationSystemTrackingActorInterface&&); \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemTrackingActorInterface(const UPointNavigationSystemTrackingActorInterface&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemTrackingActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemTrackingActorInterface(UPointNavigationSystemTrackingActorInterface&&); \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemTrackingActorInterface(const UPointNavigationSystemTrackingActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOHFUNCTIONLIBRARY_API, UPointNavigationSystemTrackingActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointNavigationSystemTrackingActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointNavigationSystemTrackingActorInterface)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPointNavigationSystemTrackingActorInterface(); \
	friend struct Z_Construct_UClass_UPointNavigationSystemTrackingActorInterface_Statics; \
public: \
	DECLARE_CLASS(UPointNavigationSystemTrackingActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), LOHFUNCTIONLIBRARY_API) \
	DECLARE_SERIALIZER(UPointNavigationSystemTrackingActorInterface)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_GENERATED_UINTERFACE_BODY() \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_GENERATED_UINTERFACE_BODY() \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPointNavigationSystemTrackingActorInterface() {} \
public: \
	typedef UPointNavigationSystemTrackingActorInterface UClassType; \
	typedef IPointNavigationSystemTrackingActorInterface ThisClass; \
	static bool Execute_OnBlockActorDetected(UObject* O, AActor* Actor); \
	static bool Execute_OnBlockActorMoved(UObject* O, AActor* Actor); \
	static bool Execute_OnBlockActorRemoved(UObject* O, AActor* Actor); \
	static void Execute_OnNavAgentReachNavPoint(UObject* O, AActor* Agent, ULFLPointNavigationSystemPoint* ReachedNavPoint); \
	static bool Execute_OnNavigationCreate(UObject* O, ULFLPointNavigationSystemData* NavData); \
	static bool Execute_OnNavigationRemove(UObject* O, ULFLPointNavigationSystemData* NavData); \
	static bool Execute_RequestNavigationUpdate(UObject* O, ULFLPointNavigationSystemData* NavData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IPointNavigationSystemTrackingActorInterface() {} \
public: \
	typedef UPointNavigationSystemTrackingActorInterface UClassType; \
	typedef IPointNavigationSystemTrackingActorInterface ThisClass; \
	static bool Execute_OnBlockActorDetected(UObject* O, AActor* Actor); \
	static bool Execute_OnBlockActorMoved(UObject* O, AActor* Actor); \
	static bool Execute_OnBlockActorRemoved(UObject* O, AActor* Actor); \
	static void Execute_OnNavAgentReachNavPoint(UObject* O, AActor* Agent, ULFLPointNavigationSystemPoint* ReachedNavPoint); \
	static bool Execute_OnNavigationCreate(UObject* O, ULFLPointNavigationSystemData* NavData); \
	static bool Execute_OnNavigationRemove(UObject* O, ULFLPointNavigationSystemData* NavData); \
	static bool Execute_RequestNavigationUpdate(UObject* O, ULFLPointNavigationSystemData* NavData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_12_PROLOG \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_EVENT_PARMS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class UPointNavigationSystemTrackingActorInterface>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_RPC_WRAPPERS \
	virtual void OnFinishFollowingPath_Implementation(ULFLPointNavigationSystemV1* ByNavSystem) {}; \
	virtual void OnFollowingPathAbort_Implementation(ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, ULFLPointNavigationSystemPoint* NextPath) {}; \
	virtual bool OnFollowingPath_Implementation(ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, const int32 CurrentPathIndex) { return false; }; \
	virtual bool OnNavSystemPathReceived_Implementation(ULFLPointNavigationSystemData* ByNavData, TArray<ULFLPointNavigationSystemPoint*> const& Path) { return false; }; \
	virtual bool RequestContinuesFollowingPath_Implementation() { return false; }; \
	virtual bool RequestStopFollowingPath_Implementation() { return false; }; \
	virtual bool RequestStartFollowingPath_Implementation() { return false; }; \
	virtual void OnNavAgentRemove_Implementation() {}; \
	virtual void OnNavAgentAdded_Implementation(ULFLPointNavigationSystemV1* NavSystem) {}; \
	virtual float GetAgentBufferForPath_Implementation(ULFLPointNavigationSystemPoint* Path) { return 0; }; \
 \
	DECLARE_FUNCTION(execOnFinishFollowingPath); \
	DECLARE_FUNCTION(execOnFollowingPathAbort); \
	DECLARE_FUNCTION(execOnFollowingPath); \
	DECLARE_FUNCTION(execOnNavSystemPathReceived); \
	DECLARE_FUNCTION(execRequestContinuesFollowingPath); \
	DECLARE_FUNCTION(execRequestStopFollowingPath); \
	DECLARE_FUNCTION(execRequestStartFollowingPath); \
	DECLARE_FUNCTION(execOnNavAgentRemove); \
	DECLARE_FUNCTION(execOnNavAgentAdded); \
	DECLARE_FUNCTION(execGetAgentBufferForPath);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFinishFollowingPath); \
	DECLARE_FUNCTION(execOnFollowingPathAbort); \
	DECLARE_FUNCTION(execOnFollowingPath); \
	DECLARE_FUNCTION(execOnNavSystemPathReceived); \
	DECLARE_FUNCTION(execRequestContinuesFollowingPath); \
	DECLARE_FUNCTION(execRequestStopFollowingPath); \
	DECLARE_FUNCTION(execRequestStartFollowingPath); \
	DECLARE_FUNCTION(execOnNavAgentRemove); \
	DECLARE_FUNCTION(execOnNavAgentAdded); \
	DECLARE_FUNCTION(execGetAgentBufferForPath);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_EVENT_PARMS \
	struct PointNavigationSystemAgentInterface_eventGetAgentBufferForPath_Parms \
	{ \
		ULFLPointNavigationSystemPoint* Path; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemAgentInterface_eventGetAgentBufferForPath_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct PointNavigationSystemAgentInterface_eventOnFinishFollowingPath_Parms \
	{ \
		ULFLPointNavigationSystemV1* ByNavSystem; \
	}; \
	struct PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms \
	{ \
		ULFLPointNavigationSystemV1* ByNavSystem; \
		ULFLPointNavigationSystemPoint* CurrentPath; \
		int32 CurrentPathIndex; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemAgentInterface_eventOnFollowingPath_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemAgentInterface_eventOnFollowingPathAbort_Parms \
	{ \
		ULFLPointNavigationSystemV1* ByNavSystem; \
		ULFLPointNavigationSystemPoint* CurrentPath; \
		ULFLPointNavigationSystemPoint* NextPath; \
	}; \
	struct PointNavigationSystemAgentInterface_eventOnNavAgentAdded_Parms \
	{ \
		ULFLPointNavigationSystemV1* NavSystem; \
	}; \
	struct PointNavigationSystemAgentInterface_eventOnNavSystemPathReceived_Parms \
	{ \
		ULFLPointNavigationSystemData* ByNavData; \
		TArray<ULFLPointNavigationSystemPoint*> Path; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemAgentInterface_eventOnNavSystemPathReceived_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemAgentInterface_eventRequestContinuesFollowingPath_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemAgentInterface_eventRequestContinuesFollowingPath_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemAgentInterface_eventRequestStartFollowingPath_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemAgentInterface_eventRequestStartFollowingPath_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemAgentInterface_eventRequestStopFollowingPath_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemAgentInterface_eventRequestStopFollowingPath_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_CALLBACK_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointNavigationSystemAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOHFUNCTIONLIBRARY_API, UPointNavigationSystemAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointNavigationSystemAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemAgentInterface(UPointNavigationSystemAgentInterface&&); \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemAgentInterface(const UPointNavigationSystemAgentInterface&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemAgentInterface(UPointNavigationSystemAgentInterface&&); \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemAgentInterface(const UPointNavigationSystemAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOHFUNCTIONLIBRARY_API, UPointNavigationSystemAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointNavigationSystemAgentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointNavigationSystemAgentInterface)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPointNavigationSystemAgentInterface(); \
	friend struct Z_Construct_UClass_UPointNavigationSystemAgentInterface_Statics; \
public: \
	DECLARE_CLASS(UPointNavigationSystemAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), LOHFUNCTIONLIBRARY_API) \
	DECLARE_SERIALIZER(UPointNavigationSystemAgentInterface)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_GENERATED_UINTERFACE_BODY() \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_GENERATED_UINTERFACE_BODY() \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPointNavigationSystemAgentInterface() {} \
public: \
	typedef UPointNavigationSystemAgentInterface UClassType; \
	typedef IPointNavigationSystemAgentInterface ThisClass; \
	static float Execute_GetAgentBufferForPath(UObject* O, ULFLPointNavigationSystemPoint* Path); \
	static void Execute_OnFinishFollowingPath(UObject* O, ULFLPointNavigationSystemV1* ByNavSystem); \
	static bool Execute_OnFollowingPath(UObject* O, ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, const int32 CurrentPathIndex); \
	static void Execute_OnFollowingPathAbort(UObject* O, ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, ULFLPointNavigationSystemPoint* NextPath); \
	static void Execute_OnNavAgentAdded(UObject* O, ULFLPointNavigationSystemV1* NavSystem); \
	static void Execute_OnNavAgentRemove(UObject* O); \
	static bool Execute_OnNavSystemPathReceived(UObject* O, ULFLPointNavigationSystemData* ByNavData, TArray<ULFLPointNavigationSystemPoint*> const& Path); \
	static bool Execute_RequestContinuesFollowingPath(UObject* O); \
	static bool Execute_RequestStartFollowingPath(UObject* O); \
	static bool Execute_RequestStopFollowingPath(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_INCLASS_IINTERFACE \
protected: \
	virtual ~IPointNavigationSystemAgentInterface() {} \
public: \
	typedef UPointNavigationSystemAgentInterface UClassType; \
	typedef IPointNavigationSystemAgentInterface ThisClass; \
	static float Execute_GetAgentBufferForPath(UObject* O, ULFLPointNavigationSystemPoint* Path); \
	static void Execute_OnFinishFollowingPath(UObject* O, ULFLPointNavigationSystemV1* ByNavSystem); \
	static bool Execute_OnFollowingPath(UObject* O, ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, const int32 CurrentPathIndex); \
	static void Execute_OnFollowingPathAbort(UObject* O, ULFLPointNavigationSystemV1* ByNavSystem, ULFLPointNavigationSystemPoint* CurrentPath, ULFLPointNavigationSystemPoint* NextPath); \
	static void Execute_OnNavAgentAdded(UObject* O, ULFLPointNavigationSystemV1* NavSystem); \
	static void Execute_OnNavAgentRemove(UObject* O); \
	static bool Execute_OnNavSystemPathReceived(UObject* O, ULFLPointNavigationSystemData* ByNavData, TArray<ULFLPointNavigationSystemPoint*> const& Path); \
	static bool Execute_RequestContinuesFollowingPath(UObject* O); \
	static bool Execute_RequestStartFollowingPath(UObject* O); \
	static bool Execute_RequestStopFollowingPath(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_59_PROLOG \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_EVENT_PARMS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_62_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class UPointNavigationSystemAgentInterface>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_RPC_WRAPPERS \
	virtual void OnNavAgentUsePointLink_Implementation(ULFLPointNavigationSystemV1* NavSystem, AActor* Agent, ULFLPointNavigationSystemPoint* NavPoint) {}; \
	virtual bool IsLinkUsable_Implementation(ULFLPointNavigationSystemPoint* FromNavPoint, ULFLPointNavigationSystemPoint* ToNavPoint) { return false; }; \
	virtual TArray<ULFLPointNavigationSystemPoint*> GetConnectPoint_Implementation(ULFLPointNavigationSystemData* NavData) { return TArray<ULFLPointNavigationSystemPoint*>(); }; \
 \
	DECLARE_FUNCTION(execOnNavAgentUsePointLink); \
	DECLARE_FUNCTION(execIsLinkUsable); \
	DECLARE_FUNCTION(execGetConnectPoint);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNavAgentUsePointLink); \
	DECLARE_FUNCTION(execIsLinkUsable); \
	DECLARE_FUNCTION(execGetConnectPoint);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_EVENT_PARMS \
	struct PointNavigationSystemPointLinkInterface_eventGetConnectPoint_Parms \
	{ \
		ULFLPointNavigationSystemData* NavData; \
		TArray<ULFLPointNavigationSystemPoint*> ReturnValue; \
	}; \
	struct PointNavigationSystemPointLinkInterface_eventIsLinkUsable_Parms \
	{ \
		ULFLPointNavigationSystemPoint* FromNavPoint; \
		ULFLPointNavigationSystemPoint* ToNavPoint; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PointNavigationSystemPointLinkInterface_eventIsLinkUsable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PointNavigationSystemPointLinkInterface_eventOnNavAgentUsePointLink_Parms \
	{ \
		ULFLPointNavigationSystemV1* NavSystem; \
		AActor* Agent; \
		ULFLPointNavigationSystemPoint* NavPoint; \
	};


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_CALLBACK_WRAPPERS
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemPointLinkInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointNavigationSystemPointLinkInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOHFUNCTIONLIBRARY_API, UPointNavigationSystemPointLinkInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointNavigationSystemPointLinkInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemPointLinkInterface(UPointNavigationSystemPointLinkInterface&&); \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemPointLinkInterface(const UPointNavigationSystemPointLinkInterface&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemPointLinkInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemPointLinkInterface(UPointNavigationSystemPointLinkInterface&&); \
	LOHFUNCTIONLIBRARY_API UPointNavigationSystemPointLinkInterface(const UPointNavigationSystemPointLinkInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOHFUNCTIONLIBRARY_API, UPointNavigationSystemPointLinkInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointNavigationSystemPointLinkInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointNavigationSystemPointLinkInterface)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPointNavigationSystemPointLinkInterface(); \
	friend struct Z_Construct_UClass_UPointNavigationSystemPointLinkInterface_Statics; \
public: \
	DECLARE_CLASS(UPointNavigationSystemPointLinkInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), LOHFUNCTIONLIBRARY_API) \
	DECLARE_SERIALIZER(UPointNavigationSystemPointLinkInterface)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_GENERATED_UINTERFACE_BODY() \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_GENERATED_UINTERFACE_BODY() \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPointNavigationSystemPointLinkInterface() {} \
public: \
	typedef UPointNavigationSystemPointLinkInterface UClassType; \
	typedef IPointNavigationSystemPointLinkInterface ThisClass; \
	static TArray<ULFLPointNavigationSystemPoint*> Execute_GetConnectPoint(UObject* O, ULFLPointNavigationSystemData* NavData); \
	static bool Execute_IsLinkUsable(UObject* O, ULFLPointNavigationSystemPoint* FromNavPoint, ULFLPointNavigationSystemPoint* ToNavPoint); \
	static void Execute_OnNavAgentUsePointLink(UObject* O, ULFLPointNavigationSystemV1* NavSystem, AActor* Agent, ULFLPointNavigationSystemPoint* NavPoint); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_INCLASS_IINTERFACE \
protected: \
	virtual ~IPointNavigationSystemPointLinkInterface() {} \
public: \
	typedef UPointNavigationSystemPointLinkInterface UClassType; \
	typedef IPointNavigationSystemPointLinkInterface ThisClass; \
	static TArray<ULFLPointNavigationSystemPoint*> Execute_GetConnectPoint(UObject* O, ULFLPointNavigationSystemData* NavData); \
	static bool Execute_IsLinkUsable(UObject* O, ULFLPointNavigationSystemPoint* FromNavPoint, ULFLPointNavigationSystemPoint* ToNavPoint); \
	static void Execute_OnNavAgentUsePointLink(UObject* O, ULFLPointNavigationSystemV1* NavSystem, AActor* Agent, ULFLPointNavigationSystemPoint* NavPoint); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_122_PROLOG \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_EVENT_PARMS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_CALLBACK_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_125_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class UPointNavigationSystemPointLinkInterface>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAverageWeightWithConnectNavPoint); \
	DECLARE_FUNCTION(execRemoveWalkableToPoint); \
	DECLARE_FUNCTION(execAddWalkableToPoint); \
	DECLARE_FUNCTION(execClearConnection); \
	DECLARE_FUNCTION(execBeginClearUp); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execBroadcastReach); \
	DECLARE_FUNCTION(execHasReach); \
	DECLARE_FUNCTION(execIsNavPointPassable); \
	DECLARE_FUNCTION(execIsNavPointWalkable); \
	DECLARE_FUNCTION(execAddPointBuffer); \
	DECLARE_FUNCTION(execBufferTick); \
	DECLARE_FUNCTION(execGetNavData); \
	DECLARE_FUNCTION(execGetPassableNavPoint); \
	DECLARE_FUNCTION(execGetPointIndex); \
	DECLARE_FUNCTION(execGetConnectPoint); \
	DECLARE_FUNCTION(execGetWalkablePoint); \
	DECLARE_FUNCTION(execGetOwingLink); \
	DECLARE_FUNCTION(execGetOwingActor); \
	DECLARE_FUNCTION(execGetPointWeight); \
	DECLARE_FUNCTION(execGetPointBuffer); \
	DECLARE_FUNCTION(execGetWorldLocation); \
	DECLARE_FUNCTION(execGetLocalLocation); \
	DECLARE_FUNCTION(execBeginDestroy);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAverageWeightWithConnectNavPoint); \
	DECLARE_FUNCTION(execRemoveWalkableToPoint); \
	DECLARE_FUNCTION(execAddWalkableToPoint); \
	DECLARE_FUNCTION(execClearConnection); \
	DECLARE_FUNCTION(execBeginClearUp); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execBroadcastReach); \
	DECLARE_FUNCTION(execHasReach); \
	DECLARE_FUNCTION(execIsNavPointPassable); \
	DECLARE_FUNCTION(execIsNavPointWalkable); \
	DECLARE_FUNCTION(execAddPointBuffer); \
	DECLARE_FUNCTION(execBufferTick); \
	DECLARE_FUNCTION(execGetNavData); \
	DECLARE_FUNCTION(execGetPassableNavPoint); \
	DECLARE_FUNCTION(execGetPointIndex); \
	DECLARE_FUNCTION(execGetConnectPoint); \
	DECLARE_FUNCTION(execGetWalkablePoint); \
	DECLARE_FUNCTION(execGetOwingLink); \
	DECLARE_FUNCTION(execGetOwingActor); \
	DECLARE_FUNCTION(execGetPointWeight); \
	DECLARE_FUNCTION(execGetPointBuffer); \
	DECLARE_FUNCTION(execGetWorldLocation); \
	DECLARE_FUNCTION(execGetLocalLocation); \
	DECLARE_FUNCTION(execBeginDestroy);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFLPointNavigationSystemPoint(); \
	friend struct Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavigationSystemPoint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavigationSystemPoint)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_INCLASS \
private: \
	static void StaticRegisterNativesULFLPointNavigationSystemPoint(); \
	friend struct Z_Construct_UClass_ULFLPointNavigationSystemPoint_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavigationSystemPoint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavigationSystemPoint)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLPointNavigationSystemPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLPointNavigationSystemPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavigationSystemPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavigationSystemPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavigationSystemPoint(ULFLPointNavigationSystemPoint&&); \
	NO_API ULFLPointNavigationSystemPoint(const ULFLPointNavigationSystemPoint&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLPointNavigationSystemPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavigationSystemPoint(ULFLPointNavigationSystemPoint&&); \
	NO_API ULFLPointNavigationSystemPoint(const ULFLPointNavigationSystemPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavigationSystemPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavigationSystemPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLPointNavigationSystemPoint)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocalLocation() { return STRUCT_OFFSET(ULFLPointNavigationSystemPoint, LocalLocation); } \
	FORCEINLINE static uint32 __PPO__PointWeight() { return STRUCT_OFFSET(ULFLPointNavigationSystemPoint, PointWeight); } \
	FORCEINLINE static uint32 __PPO__PointBuffer() { return STRUCT_OFFSET(ULFLPointNavigationSystemPoint, PointBuffer); } \
	FORCEINLINE static uint32 __PPO__OwingActor() { return STRUCT_OFFSET(ULFLPointNavigationSystemPoint, OwingActor); } \
	FORCEINLINE static uint32 __PPO__OwingLink() { return STRUCT_OFFSET(ULFLPointNavigationSystemPoint, OwingLink); } \
	FORCEINLINE static uint32 __PPO__WalkablePoint() { return STRUCT_OFFSET(ULFLPointNavigationSystemPoint, WalkablePoint); } \
	FORCEINLINE static uint32 __PPO__ConnectPoint() { return STRUCT_OFFSET(ULFLPointNavigationSystemPoint, ConnectPoint); } \
	FORCEINLINE static uint32 __PPO__CacheIndex() { return STRUCT_OFFSET(ULFLPointNavigationSystemPoint, CacheIndex); } \
	FORCEINLINE static uint32 __PPO__BufferHandler() { return STRUCT_OFFSET(ULFLPointNavigationSystemPoint, BufferHandler); }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_150_PROLOG
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ULFLPointNavigationSystemPoint>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginClearUp); \
	DECLARE_FUNCTION(execFindNearestNavigationPointFromLocation); \
	DECLARE_FUNCTION(execFindNearestNavigationPoint); \
	DECLARE_FUNCTION(execFindNearestTrackingActorFromLocation); \
	DECLARE_FUNCTION(execFindNearestTrackingActor); \
	DECLARE_FUNCTION(execGetNavigationPointAtLocationsOffset); \
	DECLARE_FUNCTION(execGetNavigationPointAtLocations); \
	DECLARE_FUNCTION(execGetNavigationPointAtLocation); \
	DECLARE_FUNCTION(execGetSingleNavigationPointAtLocation); \
	DECLARE_FUNCTION(execGetNavigationPointInBoxs); \
	DECLARE_FUNCTION(execGetNavigationPointInBox); \
	DECLARE_FUNCTION(execGetSingleNavigationPointInBox); \
	DECLARE_FUNCTION(execRemoveWalkablesToPoint); \
	DECLARE_FUNCTION(execRemoveWalkableToPoint); \
	DECLARE_FUNCTION(execAddWalkablesToPoint); \
	DECLARE_FUNCTION(execAddWalkableToPoint); \
	DECLARE_FUNCTION(execClearConnection); \
	DECLARE_FUNCTION(execSetNavigationPointActive); \
	DECLARE_FUNCTION(execAddNavigationPoint); \
	DECLARE_FUNCTION(execGetNavigationAreaData); \
	DECLARE_FUNCTION(execAverageNavPointWeightInTrackingActor); \
	DECLARE_FUNCTION(execGetTrackingActorData); \
	DECLARE_FUNCTION(execRemoveTrackingActor); \
	DECLARE_FUNCTION(execAddTrackingActor); \
	DECLARE_FUNCTION(execGetTrackingActorList); \
	DECLARE_FUNCTION(execBeginDestroy);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginClearUp); \
	DECLARE_FUNCTION(execFindNearestNavigationPointFromLocation); \
	DECLARE_FUNCTION(execFindNearestNavigationPoint); \
	DECLARE_FUNCTION(execFindNearestTrackingActorFromLocation); \
	DECLARE_FUNCTION(execFindNearestTrackingActor); \
	DECLARE_FUNCTION(execGetNavigationPointAtLocationsOffset); \
	DECLARE_FUNCTION(execGetNavigationPointAtLocations); \
	DECLARE_FUNCTION(execGetNavigationPointAtLocation); \
	DECLARE_FUNCTION(execGetSingleNavigationPointAtLocation); \
	DECLARE_FUNCTION(execGetNavigationPointInBoxs); \
	DECLARE_FUNCTION(execGetNavigationPointInBox); \
	DECLARE_FUNCTION(execGetSingleNavigationPointInBox); \
	DECLARE_FUNCTION(execRemoveWalkablesToPoint); \
	DECLARE_FUNCTION(execRemoveWalkableToPoint); \
	DECLARE_FUNCTION(execAddWalkablesToPoint); \
	DECLARE_FUNCTION(execAddWalkableToPoint); \
	DECLARE_FUNCTION(execClearConnection); \
	DECLARE_FUNCTION(execSetNavigationPointActive); \
	DECLARE_FUNCTION(execAddNavigationPoint); \
	DECLARE_FUNCTION(execGetNavigationAreaData); \
	DECLARE_FUNCTION(execAverageNavPointWeightInTrackingActor); \
	DECLARE_FUNCTION(execGetTrackingActorData); \
	DECLARE_FUNCTION(execRemoveTrackingActor); \
	DECLARE_FUNCTION(execAddTrackingActor); \
	DECLARE_FUNCTION(execGetTrackingActorList); \
	DECLARE_FUNCTION(execBeginDestroy);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFLPointNavigationSystemData(); \
	friend struct Z_Construct_UClass_ULFLPointNavigationSystemData_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavigationSystemData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavigationSystemData)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_INCLASS \
private: \
	static void StaticRegisterNativesULFLPointNavigationSystemData(); \
	friend struct Z_Construct_UClass_ULFLPointNavigationSystemData_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavigationSystemData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavigationSystemData)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLPointNavigationSystemData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLPointNavigationSystemData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavigationSystemData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavigationSystemData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavigationSystemData(ULFLPointNavigationSystemData&&); \
	NO_API ULFLPointNavigationSystemData(const ULFLPointNavigationSystemData&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLPointNavigationSystemData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavigationSystemData(ULFLPointNavigationSystemData&&); \
	NO_API ULFLPointNavigationSystemData(const ULFLPointNavigationSystemData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavigationSystemData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavigationSystemData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLPointNavigationSystemData)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackingActorData() { return STRUCT_OFFSET(ULFLPointNavigationSystemData, TrackingActorData); }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_553_PROLOG
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_556_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ULFLPointNavigationSystemData>();

#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_SPARSE_DATA
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestRandomNavigation); \
	DECLARE_FUNCTION(execRequestRandomNavigationPath); \
	DECLARE_FUNCTION(execRequestAStarNavigation); \
	DECLARE_FUNCTION(execRequestNavigationPath); \
	DECLARE_FUNCTION(execRemoveNavigationData); \
	DECLARE_FUNCTION(execCreateNavigationData); \
	DECLARE_FUNCTION(execGetNavigationData); \
	DECLARE_FUNCTION(execBeginClearUp); \
	DECLARE_FUNCTION(execContinuesNavAgentFollowingPath); \
	DECLARE_FUNCTION(execStopNavAgentFollowingPath); \
	DECLARE_FUNCTION(execNextNavAgentFollowingPath); \
	DECLARE_FUNCTION(execStartNavAgentFollowingPath); \
	DECLARE_FUNCTION(execRemoveNavAgent); \
	DECLARE_FUNCTION(execAddNavAgent); \
	DECLARE_FUNCTION(execBeginDestroy);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestRandomNavigation); \
	DECLARE_FUNCTION(execRequestRandomNavigationPath); \
	DECLARE_FUNCTION(execRequestAStarNavigation); \
	DECLARE_FUNCTION(execRequestNavigationPath); \
	DECLARE_FUNCTION(execRemoveNavigationData); \
	DECLARE_FUNCTION(execCreateNavigationData); \
	DECLARE_FUNCTION(execGetNavigationData); \
	DECLARE_FUNCTION(execBeginClearUp); \
	DECLARE_FUNCTION(execContinuesNavAgentFollowingPath); \
	DECLARE_FUNCTION(execStopNavAgentFollowingPath); \
	DECLARE_FUNCTION(execNextNavAgentFollowingPath); \
	DECLARE_FUNCTION(execStartNavAgentFollowingPath); \
	DECLARE_FUNCTION(execRemoveNavAgent); \
	DECLARE_FUNCTION(execAddNavAgent); \
	DECLARE_FUNCTION(execBeginDestroy);


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFLPointNavigationSystemV1(); \
	friend struct Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavigationSystemV1, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavigationSystemV1)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_INCLASS \
private: \
	static void StaticRegisterNativesULFLPointNavigationSystemV1(); \
	friend struct Z_Construct_UClass_ULFLPointNavigationSystemV1_Statics; \
public: \
	DECLARE_CLASS(ULFLPointNavigationSystemV1, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohFunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULFLPointNavigationSystemV1)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULFLPointNavigationSystemV1(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULFLPointNavigationSystemV1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavigationSystemV1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavigationSystemV1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavigationSystemV1(ULFLPointNavigationSystemV1&&); \
	NO_API ULFLPointNavigationSystemV1(const ULFLPointNavigationSystemV1&); \
public:


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFLPointNavigationSystemV1(ULFLPointNavigationSystemV1&&); \
	NO_API ULFLPointNavigationSystemV1(const ULFLPointNavigationSystemV1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFLPointNavigationSystemV1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFLPointNavigationSystemV1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFLPointNavigationSystemV1)


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavigationData() { return STRUCT_OFFSET(ULFLPointNavigationSystemV1, NavigationData); } \
	FORCEINLINE static uint32 __PPO__NavAgentList() { return STRUCT_OFFSET(ULFLPointNavigationSystemV1, NavAgentList); } \
	FORCEINLINE static uint32 __PPO__bIsCreateOnRunning() { return STRUCT_OFFSET(ULFLPointNavigationSystemV1, bIsCreateOnRunning); }


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_798_PROLOG
#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_RPC_WRAPPERS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_INCLASS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_PRIVATE_PROPERTY_OFFSET \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_SPARSE_DATA \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_INCLASS_NO_PURE_DECLS \
	PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h_801_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<class ULFLPointNavigationSystemV1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLabV3_Plugins_LohFunctionLibrary_Source_LohFunctionLibrary_Public_Navigation_LFLPointNavigationSystemV1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
