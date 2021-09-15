// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Other/BoxMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxMeshActor() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ABoxMeshActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ABoxMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABoxMeshActor::execSetLoopOffset)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoopOffset(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execSetLoopSize)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoopSize(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execSetMeshMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execSetMeshSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Offset);
		P_GET_STRUCT(FVector,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshSize(Z_Param_Offset,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execSetAllMesh)
	{
		P_GET_TARRAY(UStaticMesh*,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllMesh(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execSetSingleMesh)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSingleMesh(Z_Param_Index,Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execGetCustomMeshData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetCustomMeshData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execSetAllMeshCustomData4D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector4,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAllMeshCustomData4D(Z_Param_Index,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execSetAllMeshCustomData3D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAllMeshCustomData3D(Z_Param_Index,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execSetAllMeshCustomData2D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector2D,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAllMeshCustomData2D(Z_Param_Index,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execSetAllMeshCustomData1D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAllMeshCustomData1D(Z_Param_Index,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execReconfigure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reconfigure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execOnMeshListUpdate_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMeshListUpdate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxMeshActor::execOnMeshListUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMeshListUpdate_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ABoxMeshActor_OnMeshListUpdate = FName(TEXT("OnMeshListUpdate"));
	void ABoxMeshActor::OnMeshListUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoxMeshActor_OnMeshListUpdate),NULL);
	}
	void ABoxMeshActor::StaticRegisterNativesABoxMeshActor()
	{
		UClass* Class = ABoxMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomMeshData", &ABoxMeshActor::execGetCustomMeshData },
			{ "OnMeshListUpdate", &ABoxMeshActor::execOnMeshListUpdate },
			{ "OnMeshListUpdate_Implementation", &ABoxMeshActor::execOnMeshListUpdate_Implementation },
			{ "Reconfigure", &ABoxMeshActor::execReconfigure },
			{ "SetAllMesh", &ABoxMeshActor::execSetAllMesh },
			{ "SetAllMeshCustomData1D", &ABoxMeshActor::execSetAllMeshCustomData1D },
			{ "SetAllMeshCustomData2D", &ABoxMeshActor::execSetAllMeshCustomData2D },
			{ "SetAllMeshCustomData3D", &ABoxMeshActor::execSetAllMeshCustomData3D },
			{ "SetAllMeshCustomData4D", &ABoxMeshActor::execSetAllMeshCustomData4D },
			{ "SetLoopOffset", &ABoxMeshActor::execSetLoopOffset },
			{ "SetLoopSize", &ABoxMeshActor::execSetLoopSize },
			{ "SetMeshMaterial", &ABoxMeshActor::execSetMeshMaterial },
			{ "SetMeshSize", &ABoxMeshActor::execSetMeshSize },
			{ "SetSingleMesh", &ABoxMeshActor::execSetSingleMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics
	{
		struct BoxMeshActor_eventGetCustomMeshData_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventGetCustomMeshData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ABoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "GetCustomMeshData", nullptr, nullptr, sizeof(BoxMeshActor_eventGetCustomMeshData_Parms), Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "OnMeshListUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Implementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "OnMeshListUpdate_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_Reconfigure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_Reconfigure_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_Reconfigure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "Reconfigure", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_Reconfigure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_Reconfigure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_Reconfigure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_Reconfigure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics
	{
		struct BoxMeshActor_eventSetAllMesh_Parms
		{
			TArray<UStaticMesh*> Mesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::NewProp_Mesh_Inner = { "Mesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetAllMesh_Parms, Mesh), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::NewProp_Mesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetAllMesh", nullptr, nullptr, sizeof(BoxMeshActor_eventSetAllMesh_Parms), Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetAllMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetAllMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics
	{
		struct BoxMeshActor_eventSetAllMeshCustomData1D_Parms
		{
			int32 Index;
			float Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetAllMeshCustomData1D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetAllMeshCustomData1D_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxMeshActor_eventSetAllMeshCustomData1D_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxMeshActor_eventSetAllMeshCustomData1D_Parms), &Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetAllMeshCustomData1D", nullptr, nullptr, sizeof(BoxMeshActor_eventSetAllMeshCustomData1D_Parms), Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics
	{
		struct BoxMeshActor_eventSetAllMeshCustomData2D_Parms
		{
			int32 Index;
			FVector2D Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetAllMeshCustomData2D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetAllMeshCustomData2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxMeshActor_eventSetAllMeshCustomData2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxMeshActor_eventSetAllMeshCustomData2D_Parms), &Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetAllMeshCustomData2D", nullptr, nullptr, sizeof(BoxMeshActor_eventSetAllMeshCustomData2D_Parms), Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics
	{
		struct BoxMeshActor_eventSetAllMeshCustomData3D_Parms
		{
			int32 Index;
			FVector Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetAllMeshCustomData3D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetAllMeshCustomData3D_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxMeshActor_eventSetAllMeshCustomData3D_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxMeshActor_eventSetAllMeshCustomData3D_Parms), &Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetAllMeshCustomData3D", nullptr, nullptr, sizeof(BoxMeshActor_eventSetAllMeshCustomData3D_Parms), Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics
	{
		struct BoxMeshActor_eventSetAllMeshCustomData4D_Parms
		{
			int32 Index;
			FVector4 Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetAllMeshCustomData4D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetAllMeshCustomData4D_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxMeshActor_eventSetAllMeshCustomData4D_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxMeshActor_eventSetAllMeshCustomData4D_Parms), &Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetAllMeshCustomData4D", nullptr, nullptr, sizeof(BoxMeshActor_eventSetAllMeshCustomData4D_Parms), Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics
	{
		struct BoxMeshActor_eventSetLoopOffset_Parms
		{
			FIntVector Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetLoopOffset_Parms, Value), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetLoopOffset", nullptr, nullptr, sizeof(BoxMeshActor_eventSetLoopOffset_Parms), Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics
	{
		struct BoxMeshActor_eventSetLoopSize_Parms
		{
			FIntVector Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetLoopSize_Parms, Value), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetLoopSize", nullptr, nullptr, sizeof(BoxMeshActor_eventSetLoopSize_Parms), Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetLoopSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetLoopSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics
	{
		struct BoxMeshActor_eventSetMeshMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetMeshMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetMeshMaterial", nullptr, nullptr, sizeof(BoxMeshActor_eventSetMeshMaterial_Parms), Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics
	{
		struct BoxMeshActor_eventSetMeshSize_Parms
		{
			FVector2D Offset;
			FVector Size;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetMeshSize_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetMeshSize_Parms, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetMeshSize", nullptr, nullptr, sizeof(BoxMeshActor_eventSetMeshSize_Parms), Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetMeshSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetMeshSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics
	{
		struct BoxMeshActor_eventSetSingleMesh_Parms
		{
			int32 Index;
			UStaticMesh* Mesh;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetSingleMesh_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxMeshActor_eventSetSingleMesh_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxMeshActor_eventSetSingleMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxMeshActor_eventSetSingleMesh_Parms), &Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoxMeshActor | Function" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxMeshActor, nullptr, "SetSingleMesh", nullptr, nullptr, sizeof(BoxMeshActor_eventSetSingleMesh_Parms), Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoxMeshActor_NoRegister()
	{
		return ABoxMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ABoxMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BottomEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BottomEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BottomFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerLoopAddon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerLoopAddon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoopSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoopOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomMeshData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomMeshData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshRenderList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshRenderList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMeshRenderList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TotalLoop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxMeshActor_GetCustomMeshData, "GetCustomMeshData" }, // 446814208
		{ &Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate, "OnMeshListUpdate" }, // 2351101603
		{ &Z_Construct_UFunction_ABoxMeshActor_OnMeshListUpdate_Implementation, "OnMeshListUpdate_Implementation" }, // 1323806789
		{ &Z_Construct_UFunction_ABoxMeshActor_Reconfigure, "Reconfigure" }, // 2430242834
		{ &Z_Construct_UFunction_ABoxMeshActor_SetAllMesh, "SetAllMesh" }, // 2592750640
		{ &Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData1D, "SetAllMeshCustomData1D" }, // 4003511772
		{ &Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData2D, "SetAllMeshCustomData2D" }, // 1814494262
		{ &Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData3D, "SetAllMeshCustomData3D" }, // 356786248
		{ &Z_Construct_UFunction_ABoxMeshActor_SetAllMeshCustomData4D, "SetAllMeshCustomData4D" }, // 970189267
		{ &Z_Construct_UFunction_ABoxMeshActor_SetLoopOffset, "SetLoopOffset" }, // 2938193937
		{ &Z_Construct_UFunction_ABoxMeshActor_SetLoopSize, "SetLoopSize" }, // 4042511901
		{ &Z_Construct_UFunction_ABoxMeshActor_SetMeshMaterial, "SetMeshMaterial" }, // 1846043332
		{ &Z_Construct_UFunction_ABoxMeshActor_SetMeshSize, "SetMeshSize" }, // 1404273004
		{ &Z_Construct_UFunction_ABoxMeshActor_SetSingleMesh, "SetSingleMesh" }, // 165453502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Other/BoxMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEnd_MetaData[] = {
		{ "Category", "BoxMeshActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEnd = { "TopEnd", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, TopEnd), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEdge_MetaData[] = {
		{ "Category", "BoxMeshActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEdge = { "TopEdge", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, TopEdge), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_SideEdge_MetaData[] = {
		{ "Category", "BoxMeshActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_SideEdge = { "SideEdge", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, SideEdge), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_SideEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_SideEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_Wall_MetaData[] = {
		{ "Category", "BoxMeshActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_Wall = { "Wall", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, Wall), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_Wall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_Wall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEnd_MetaData[] = {
		{ "Category", "BoxMeshActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEnd = { "BottomEnd", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, BottomEnd), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEdge_MetaData[] = {
		{ "Category", "BoxMeshActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEdge = { "BottomEdge", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, BottomEdge), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopFloor_MetaData[] = {
		{ "Category", "BoxMeshActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopFloor = { "TopFloor", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, TopFloor), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomFloor_MetaData[] = {
		{ "Category", "BoxMeshActor | Mesh" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomFloor = { "BottomFloor", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, BottomFloor), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshMaterial_MetaData[] = {
		{ "Category", "BoxMeshActor | Material" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshMaterial = { "MeshMaterial", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, MeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PositionOffset_MetaData[] = {
		{ "Category", "BoxMeshActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, PositionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshSize_MetaData[] = {
		{ "Category", "BoxMeshActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshSize = { "MeshSize", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, MeshSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PerLoopAddon_MetaData[] = {
		{ "Category", "BoxMeshActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PerLoopAddon = { "PerLoopAddon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, PerLoopAddon), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PerLoopAddon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PerLoopAddon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopSize_MetaData[] = {
		{ "Category", "BoxMeshActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopSize = { "LoopSize", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, LoopSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopOffset_MetaData[] = {
		{ "Category", "BoxMeshActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopOffset = { "LoopOffset", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, LoopOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopOffset_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_CustomMeshData_Inner = { "CustomMeshData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_CustomMeshData_MetaData[] = {
		{ "Category", "BoxMeshActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_CustomMeshData = { "CustomMeshData", nullptr, (EPropertyFlags)0x0010000000000021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, CustomMeshData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_CustomMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_CustomMeshData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_StaticMeshRenderList_Inner = { "StaticMeshRenderList", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_StaticMeshRenderList_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_StaticMeshRenderList = { "StaticMeshRenderList", "OnMeshListUpdate", (EPropertyFlags)0x0010008100000028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, StaticMeshRenderList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_StaticMeshRenderList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_StaticMeshRenderList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TotalLoop_MetaData[] = {
		{ "Category", "BoxMeshActor | Setting" },
		{ "ModuleRelativePath", "Public/Other/BoxMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TotalLoop = { "TotalLoop", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxMeshActor, TotalLoop), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TotalLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TotalLoop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_SideEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_Wall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TopFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_BottomFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_MeshSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_PerLoopAddon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_LoopOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_CustomMeshData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_CustomMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_StaticMeshRenderList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_StaticMeshRenderList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxMeshActor_Statics::NewProp_TotalLoop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxMeshActor_Statics::ClassParams = {
		&ABoxMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoxMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxMeshActor, 2198647787);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ABoxMeshActor>()
	{
		return ABoxMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxMeshActor(Z_Construct_UClass_ABoxMeshActor, &ABoxMeshActor::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ABoxMeshActor"), false, nullptr, nullptr, nullptr);

	void ABoxMeshActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TopEnd(TEXT("TopEnd"));
		static const FName Name_TopEdge(TEXT("TopEdge"));
		static const FName Name_SideEdge(TEXT("SideEdge"));
		static const FName Name_Wall(TEXT("Wall"));
		static const FName Name_BottomEnd(TEXT("BottomEnd"));
		static const FName Name_BottomEdge(TEXT("BottomEdge"));
		static const FName Name_TopFloor(TEXT("TopFloor"));
		static const FName Name_BottomFloor(TEXT("BottomFloor"));
		static const FName Name_MeshMaterial(TEXT("MeshMaterial"));
		static const FName Name_PositionOffset(TEXT("PositionOffset"));
		static const FName Name_MeshSize(TEXT("MeshSize"));
		static const FName Name_LoopSize(TEXT("LoopSize"));
		static const FName Name_LoopOffset(TEXT("LoopOffset"));
		static const FName Name_CustomMeshData(TEXT("CustomMeshData"));
		static const FName Name_StaticMeshRenderList(TEXT("StaticMeshRenderList"));
		static const FName Name_TotalLoop(TEXT("TotalLoop"));

		const bool bIsValid = true
			&& Name_TopEnd == ClassReps[(int32)ENetFields_Private::TopEnd].Property->GetFName()
			&& Name_TopEdge == ClassReps[(int32)ENetFields_Private::TopEdge].Property->GetFName()
			&& Name_SideEdge == ClassReps[(int32)ENetFields_Private::SideEdge].Property->GetFName()
			&& Name_Wall == ClassReps[(int32)ENetFields_Private::Wall].Property->GetFName()
			&& Name_BottomEnd == ClassReps[(int32)ENetFields_Private::BottomEnd].Property->GetFName()
			&& Name_BottomEdge == ClassReps[(int32)ENetFields_Private::BottomEdge].Property->GetFName()
			&& Name_TopFloor == ClassReps[(int32)ENetFields_Private::TopFloor].Property->GetFName()
			&& Name_BottomFloor == ClassReps[(int32)ENetFields_Private::BottomFloor].Property->GetFName()
			&& Name_MeshMaterial == ClassReps[(int32)ENetFields_Private::MeshMaterial].Property->GetFName()
			&& Name_PositionOffset == ClassReps[(int32)ENetFields_Private::PositionOffset].Property->GetFName()
			&& Name_MeshSize == ClassReps[(int32)ENetFields_Private::MeshSize].Property->GetFName()
			&& Name_LoopSize == ClassReps[(int32)ENetFields_Private::LoopSize].Property->GetFName()
			&& Name_LoopOffset == ClassReps[(int32)ENetFields_Private::LoopOffset].Property->GetFName()
			&& Name_CustomMeshData == ClassReps[(int32)ENetFields_Private::CustomMeshData].Property->GetFName()
			&& Name_StaticMeshRenderList == ClassReps[(int32)ENetFields_Private::StaticMeshRenderList].Property->GetFName()
			&& Name_TotalLoop == ClassReps[(int32)ENetFields_Private::TotalLoop].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABoxMeshActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
