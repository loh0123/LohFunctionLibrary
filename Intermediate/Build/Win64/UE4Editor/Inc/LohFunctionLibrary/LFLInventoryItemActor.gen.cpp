// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionLibrary/Public/Inventory/LFLInventoryItemActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFLInventoryItemActor() {}
// Cross Module References
	LOHFUNCTIONLIBRARY_API UEnum* Z_Construct_UEnum_LohFunctionLibrary_ELFLInventoryItemTickType();
	UPackage* Z_Construct_UPackage__Script_LohFunctionLibrary();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLInventoryItemActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ALFLInventoryItemActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LOHFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLInventoryPerItemData();
	LOHFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLFLInventoryStackItemData();
// End Cross Module References
	static UEnum* ELFLInventoryItemTickType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LohFunctionLibrary_ELFLInventoryItemTickType, Z_Construct_UPackage__Script_LohFunctionLibrary(), TEXT("ELFLInventoryItemTickType"));
		}
		return Singleton;
	}
	template<> LOHFUNCTIONLIBRARY_API UEnum* StaticEnum<ELFLInventoryItemTickType>()
	{
		return ELFLInventoryItemTickType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELFLInventoryItemTickType(ELFLInventoryItemTickType_StaticEnum, TEXT("/Script/LohFunctionLibrary"), TEXT("ELFLInventoryItemTickType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LohFunctionLibrary_ELFLInventoryItemTickType_Hash() { return 1630247058U; }
	UEnum* Z_Construct_UEnum_LohFunctionLibrary_ELFLInventoryItemTickType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LohFunctionLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELFLInventoryItemTickType"), 0, Get_Z_Construct_UEnum_LohFunctionLibrary_ELFLInventoryItemTickType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Disable", (int64)Disable },
				{ "EquipAndUnequip", (int64)EquipAndUnequip },
				{ "DropOnGround", (int64)DropOnGround },
				{ "AlwaysOn", (int64)AlwaysOn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysOn.DisplayName", "Always On" },
				{ "AlwaysOn.Name", "AlwaysOn" },
				{ "BlueprintType", "true" },
				{ "Disable.DisplayName", "Disable" },
				{ "Disable.Name", "Disable" },
				{ "DropOnGround.DisplayName", "Drop On Ground" },
				{ "DropOnGround.Name", "DropOnGround" },
				{ "EquipAndUnequip.DisplayName", "Equip And Unequip" },
				{ "EquipAndUnequip.Name", "EquipAndUnequip" },
				{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
				nullptr,
				"ELFLInventoryItemTickType",
				"ELFLInventoryItemTickType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execOnActiveItem)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_ActiveCode);
		P_GET_UBOOL(Z_Param_IsEquip);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActiveItem_Implementation(Z_Param_ItemOwner,Z_Param_Inventory,Z_Param_ActiveCode,Z_Param_IsEquip,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execCommitActiveItem)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_ActiveCode);
		P_GET_UBOOL(Z_Param_IsEquip);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CommitActiveItem_Implementation(Z_Param_ItemOwner,Z_Param_Inventory,Z_Param_ActiveCode,Z_Param_IsEquip,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execOnUnequip)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnequip_Implementation(Z_Param_ItemOwner,Z_Param_Inventory,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execOnEquip)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquip_Implementation(Z_Param_ItemOwner,Z_Param_Inventory,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execOnDrop)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDrop_Implementation(Z_Param_ItemOwner,Z_Param_Inventory,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execOnPickUp)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickUp_Implementation(Z_Param_ItemOwner,Z_Param_Inventory,Z_Param_StackIndex,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execCanActiveItem)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_ActiveCode);
		P_GET_UBOOL(Z_Param_IsEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanActiveItem_Implementation(Z_Param_ItemOwner,Z_Param_Inventory,Z_Param_ActiveCode,Z_Param_IsEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execCanUnequip)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanUnequip_Implementation(Z_Param_ItemOwner,Z_Param_Inventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execCanEquip)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanEquip_Implementation(Z_Param_ItemOwner,Z_Param_Inventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execCanDrop)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_GET_STRUCT_REF(FLFLInventoryPerItemData,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanDrop_Implementation(Z_Param_ItemOwner,Z_Param_Inventory,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALFLInventoryItemActor::execCanPickUp)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemOwner);
		P_GET_OBJECT(ULFLInventoryManagementComponent,Z_Param_Inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CanPickUp_Implementation(Z_Param_ItemOwner,Z_Param_Inventory,Z_Param_StackIndex);
		P_NATIVE_END;
	}
	static FName NAME_ALFLInventoryItemActor_CanActiveItem = FName(TEXT("CanActiveItem"));
	int32 ALFLInventoryItemActor::CanActiveItem(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, bool IsEquip)
	{
		LFLInventoryItemActor_eventCanActiveItem_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		Parms.ActiveCode=ActiveCode;
		Parms.IsEquip=IsEquip ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_CanActiveItem),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ALFLInventoryItemActor_CanDrop = FName(TEXT("CanDrop"));
	int32 ALFLInventoryItemActor::CanDrop(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, FLFLInventoryPerItemData const& Value)
	{
		LFLInventoryItemActor_eventCanDrop_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_CanDrop),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ALFLInventoryItemActor_CanEquip = FName(TEXT("CanEquip"));
	int32 ALFLInventoryItemActor::CanEquip(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory)
	{
		LFLInventoryItemActor_eventCanEquip_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_CanEquip),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ALFLInventoryItemActor_CanPickUp = FName(TEXT("CanPickUp"));
	int32 ALFLInventoryItemActor::CanPickUp(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex)
	{
		LFLInventoryItemActor_eventCanPickUp_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		Parms.StackIndex=StackIndex;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_CanPickUp),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ALFLInventoryItemActor_CanUnequip = FName(TEXT("CanUnequip"));
	int32 ALFLInventoryItemActor::CanUnequip(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory)
	{
		LFLInventoryItemActor_eventCanUnequip_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_CanUnequip),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ALFLInventoryItemActor_CommitActiveItem = FName(TEXT("CommitActiveItem"));
	void ALFLInventoryItemActor::CommitActiveItem(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, bool IsEquip, bool Force)
	{
		LFLInventoryItemActor_eventCommitActiveItem_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		Parms.ActiveCode=ActiveCode;
		Parms.IsEquip=IsEquip ? true : false;
		Parms.Force=Force ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_CommitActiveItem),&Parms);
	}
	static FName NAME_ALFLInventoryItemActor_OnActiveItem = FName(TEXT("OnActiveItem"));
	void ALFLInventoryItemActor::OnActiveItem(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 ActiveCode, bool IsEquip, bool Force)
	{
		LFLInventoryItemActor_eventOnActiveItem_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		Parms.ActiveCode=ActiveCode;
		Parms.IsEquip=IsEquip ? true : false;
		Parms.Force=Force ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_OnActiveItem),&Parms);
	}
	static FName NAME_ALFLInventoryItemActor_OnDrop = FName(TEXT("OnDrop"));
	void ALFLInventoryItemActor::OnDrop(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, bool Force)
	{
		LFLInventoryItemActor_eventOnDrop_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		Parms.Force=Force ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_OnDrop),&Parms);
	}
	static FName NAME_ALFLInventoryItemActor_OnEquip = FName(TEXT("OnEquip"));
	void ALFLInventoryItemActor::OnEquip(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, bool Force)
	{
		LFLInventoryItemActor_eventOnEquip_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		Parms.Force=Force ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_OnEquip),&Parms);
	}
	static FName NAME_ALFLInventoryItemActor_OnPickUp = FName(TEXT("OnPickUp"));
	void ALFLInventoryItemActor::OnPickUp(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, const int32 StackIndex, bool Force)
	{
		LFLInventoryItemActor_eventOnPickUp_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		Parms.StackIndex=StackIndex;
		Parms.Force=Force ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_OnPickUp),&Parms);
	}
	static FName NAME_ALFLInventoryItemActor_OnUnequip = FName(TEXT("OnUnequip"));
	void ALFLInventoryItemActor::OnUnequip(AActor* ItemOwner, ULFLInventoryManagementComponent* Inventory, bool Force)
	{
		LFLInventoryItemActor_eventOnUnequip_Parms Parms;
		Parms.ItemOwner=ItemOwner;
		Parms.Inventory=Inventory;
		Parms.Force=Force ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALFLInventoryItemActor_OnUnequip),&Parms);
	}
	void ALFLInventoryItemActor::StaticRegisterNativesALFLInventoryItemActor()
	{
		UClass* Class = ALFLInventoryItemActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanActiveItem", &ALFLInventoryItemActor::execCanActiveItem },
			{ "CanDrop", &ALFLInventoryItemActor::execCanDrop },
			{ "CanEquip", &ALFLInventoryItemActor::execCanEquip },
			{ "CanPickUp", &ALFLInventoryItemActor::execCanPickUp },
			{ "CanUnequip", &ALFLInventoryItemActor::execCanUnequip },
			{ "CommitActiveItem", &ALFLInventoryItemActor::execCommitActiveItem },
			{ "OnActiveItem", &ALFLInventoryItemActor::execOnActiveItem },
			{ "OnDrop", &ALFLInventoryItemActor::execOnDrop },
			{ "OnEquip", &ALFLInventoryItemActor::execOnEquip },
			{ "OnPickUp", &ALFLInventoryItemActor::execOnPickUp },
			{ "OnUnequip", &ALFLInventoryItemActor::execOnUnequip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEquip_MetaData[];
#endif
		static void NewProp_IsEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEquip;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanActiveItem_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanActiveItem_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_ActiveCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_ActiveCode = { "ActiveCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanActiveItem_Parms, ActiveCode), METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_ActiveCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_ActiveCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_IsEquip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_IsEquip_SetBit(void* Obj)
	{
		((LFLInventoryItemActor_eventCanActiveItem_Parms*)Obj)->IsEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_IsEquip = { "IsEquip", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryItemActor_eventCanActiveItem_Parms), &Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_IsEquip_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_IsEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_IsEquip_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanActiveItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_ActiveCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_IsEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Checks" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "CanActiveItem", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventCanActiveItem_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanDrop_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanDrop_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanDrop_Parms, Value), Z_Construct_UScriptStruct_FLFLInventoryPerItemData, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanDrop_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Checks" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "CanDrop", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventCanDrop_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanEquip_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanEquip_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanEquip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Checks" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "CanEquip", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventCanEquip_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanPickUp_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanPickUp_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_StackIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanPickUp_Parms, StackIndex), METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_StackIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanPickUp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_StackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Checks" },
		{ "Comment", "// Checks //\n" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
		{ "ToolTip", "Checks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "CanPickUp", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventCanPickUp_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanUnequip_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanUnequip_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCanUnequip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Checks" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "CanUnequip", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventCanUnequip_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEquip_MetaData[];
#endif
		static void NewProp_IsEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEquip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCommitActiveItem_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCommitActiveItem_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_ActiveCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_ActiveCode = { "ActiveCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventCommitActiveItem_Parms, ActiveCode), METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_ActiveCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_ActiveCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_IsEquip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_IsEquip_SetBit(void* Obj)
	{
		((LFLInventoryItemActor_eventCommitActiveItem_Parms*)Obj)->IsEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_IsEquip = { "IsEquip", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryItemActor_eventCommitActiveItem_Parms), &Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_IsEquip_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_IsEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_IsEquip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryItemActor_eventCommitActiveItem_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryItemActor_eventCommitActiveItem_Parms), &Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_ActiveCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_IsEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Events" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "CommitActiveItem", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventCommitActiveItem_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEquip_MetaData[];
#endif
		static void NewProp_IsEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEquip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnActiveItem_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnActiveItem_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_ActiveCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_ActiveCode = { "ActiveCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnActiveItem_Parms, ActiveCode), METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_ActiveCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_ActiveCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_IsEquip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_IsEquip_SetBit(void* Obj)
	{
		((LFLInventoryItemActor_eventOnActiveItem_Parms*)Obj)->IsEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_IsEquip = { "IsEquip", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryItemActor_eventOnActiveItem_Parms), &Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_IsEquip_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_IsEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_IsEquip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryItemActor_eventOnActiveItem_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryItemActor_eventOnActiveItem_Parms), &Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_ActiveCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_IsEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Events" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "OnActiveItem", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventOnActiveItem_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnDrop_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnDrop_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryItemActor_eventOnDrop_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryItemActor_eventOnDrop_Parms), &Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Events" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "OnDrop", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventOnDrop_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnEquip_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnEquip_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryItemActor_eventOnEquip_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryItemActor_eventOnEquip_Parms), &Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Events" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "OnEquip", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventOnEquip_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnPickUp_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnPickUp_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_StackIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_StackIndex = { "StackIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnPickUp_Parms, StackIndex), METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_StackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_StackIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryItemActor_eventOnPickUp_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryItemActor_eventOnPickUp_Parms), &Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_StackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Events" },
		{ "Comment", "// Events //\n" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "OnPickUp", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventOnPickUp_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnUnequip_Parms, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LFLInventoryItemActor_eventOnUnequip_Parms, Inventory), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((LFLInventoryItemActor_eventOnUnequip_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LFLInventoryItemActor_eventOnUnequip_Parms), &Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFLInventoryItemActor | Events" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALFLInventoryItemActor, nullptr, "OnUnequip", nullptr, nullptr, sizeof(LFLInventoryItemActor_eventOnUnequip_Parms), Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALFLInventoryItemActor_NoRegister()
	{
		return ALFLInventoryItemActor::StaticClass();
	}
	struct Z_Construct_UClass_ALFLInventoryItemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTickType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemTickType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StackData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEquipment_MetaData[];
#endif
		static void NewProp_IsEquipment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEquipment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALFLInventoryItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALFLInventoryItemActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_CanActiveItem, "CanActiveItem" }, // 1538567799
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_CanDrop, "CanDrop" }, // 1060156408
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_CanEquip, "CanEquip" }, // 210988524
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_CanPickUp, "CanPickUp" }, // 1071633488
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_CanUnequip, "CanUnequip" }, // 3682168878
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_CommitActiveItem, "CommitActiveItem" }, // 2547320255
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_OnActiveItem, "OnActiveItem" }, // 2819264151
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_OnDrop, "OnDrop" }, // 1166152645
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_OnEquip, "OnEquip" }, // 1078668205
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_OnPickUp, "OnPickUp" }, // 606159275
		{ &Z_Construct_UFunction_ALFLInventoryItemActor_OnUnequip, "OnUnequip" }, // 3879202356
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLInventoryItemActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/LFLInventoryItemActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_ItemTickType_MetaData[] = {
		{ "Category", "LFLInventoryItemActor | Setting" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_ItemTickType = { "ItemTickType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALFLInventoryItemActor, ItemTickType), Z_Construct_UEnum_LohFunctionLibrary_ELFLInventoryItemTickType, METADATA_PARAMS(Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_ItemTickType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_ItemTickType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "LFLInventoryItemActor | Variable" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALFLInventoryItemActor, InventoryComponent), Z_Construct_UClass_ULFLInventoryManagementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_InventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_InventoryComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_StackData_MetaData[] = {
		{ "Category", "LFLInventoryItemActor | Variable" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_StackData = { "StackData", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALFLInventoryItemActor, StackData), Z_Construct_UScriptStruct_FLFLInventoryStackItemData, METADATA_PARAMS(Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_StackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_StackData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_IsEquipment_MetaData[] = {
		{ "Category", "LFLInventoryItemActor | Variable" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Inventory/LFLInventoryItemActor.h" },
	};
#endif
	void Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_IsEquipment_SetBit(void* Obj)
	{
		((ALFLInventoryItemActor*)Obj)->IsEquipment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_IsEquipment = { "IsEquipment", nullptr, (EPropertyFlags)0x0011000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALFLInventoryItemActor), &Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_IsEquipment_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_IsEquipment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_IsEquipment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALFLInventoryItemActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_ItemTickType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_InventoryComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_StackData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALFLInventoryItemActor_Statics::NewProp_IsEquipment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALFLInventoryItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALFLInventoryItemActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALFLInventoryItemActor_Statics::ClassParams = {
		&ALFLInventoryItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALFLInventoryItemActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALFLInventoryItemActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALFLInventoryItemActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALFLInventoryItemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALFLInventoryItemActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALFLInventoryItemActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALFLInventoryItemActor, 2391110639);
	template<> LOHFUNCTIONLIBRARY_API UClass* StaticClass<ALFLInventoryItemActor>()
	{
		return ALFLInventoryItemActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALFLInventoryItemActor(Z_Construct_UClass_ALFLInventoryItemActor, &ALFLInventoryItemActor::StaticClass, TEXT("/Script/LohFunctionLibrary"), TEXT("ALFLInventoryItemActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALFLInventoryItemActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
