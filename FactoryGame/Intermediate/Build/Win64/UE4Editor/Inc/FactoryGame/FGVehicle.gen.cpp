// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGVehicle.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVehicle() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleSeat();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDriveablePawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPassengerSeat_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_VehicleHasDriver_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_VehicleHasDriver();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_VehicleInWater_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_VehicleInWater();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_VehicleOccupied_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_VehicleOccupied();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicle_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicle();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDriveablePawn();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_Died();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_GetHealthComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHealthComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_IsDestructible();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_IsSelfDriving();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_KickAllPlayers();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_OnRep_PrimaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_OnRep_SecondaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_OnTakeDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_ReceiveDied();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleShutDown();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleStartup();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_SelfDriverEnter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicleHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDismantleInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAggroTargetInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDockableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColorInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FVehicleSeat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FVehicleSeat_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleSeat, Z_Construct_UPackage__Script_FactoryGame(), TEXT("VehicleSeat"), sizeof(FVehicleSeat), Get_Z_Construct_UScriptStruct_FVehicleSeat_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleSeat(FVehicleSeat::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("VehicleSeat"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleSeat
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFVehicleSeat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleSeat")),new UScriptStruct::TCppStructOps<FVehicleSeat>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFVehicleSeat;
	struct Z_Construct_UScriptStruct_FVehicleSeat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSeatPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSeatPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SitAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SitAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsVisible_MetaData[];
#endif
		static void NewProp_IsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SitSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SitSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeatClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SeatClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSeat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleSeat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mController_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mController = { UE4CodeGen_Private::EPropertyClass::Object, "mController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVehicleSeat, mController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mController_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mCharacter_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Info about the character in this seat." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "mCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVehicleSeat, mCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mCharacter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mSeatPawn_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Pawn we possess when entering this seat." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mSeatPawn = { UE4CodeGen_Private::EPropertyClass::Object, "mSeatPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVehicleSeat, mSeatPawn), Z_Construct_UClass_AFGDriveablePawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mSeatPawn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mSeatPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "VehicleSeat" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "How much damage do we take in this seat." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_DamageMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "DamageMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080010001, 1, nullptr, STRUCT_OFFSET(FVehicleSeat, DamageMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_DamageMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_DamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitAnimation_MetaData[] = {
		{ "Category", "VehicleSeat" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Animation to play on characters in this seat." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "SitAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080010001, 1, nullptr, STRUCT_OFFSET(FVehicleSeat, SitAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitAnimation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_IsVisible_MetaData[] = {
		{ "Category", "VehicleSeat" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Is seat and characters in this seat visible." },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_IsVisible_SetBit(void* Obj)
	{
		((FVehicleSeat*)Obj)->IsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_IsVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "IsVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FVehicleSeat), &Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_IsVisible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_IsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitSocket_MetaData[] = {
		{ "Category", "VehicleSeat" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Socket to attach character to." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitSocket = { UE4CodeGen_Private::EPropertyClass::Name, "SitSocket", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080010001, 1, nullptr, STRUCT_OFFSET(FVehicleSeat, SitSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitSocket_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SeatClass_MetaData[] = {
		{ "Category", "VehicleSeat" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Seat class to spawn." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SeatClass = { UE4CodeGen_Private::EPropertyClass::Class, "SeatClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000080010001, 1, nullptr, STRUCT_OFFSET(FVehicleSeat, SeatClass), Z_Construct_UClass_AFGPassengerSeat_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SeatClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SeatClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleSeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_mSeatPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_DamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_IsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SitSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSeat_Statics::NewProp_SeatClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleSeat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"VehicleSeat",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FVehicleSeat),
		alignof(FVehicleSeat),
		Z_Construct_UScriptStruct_FVehicleSeat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSeat_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSeat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleSeat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleSeat_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleSeat"), sizeof(FVehicleSeat), Get_Z_Construct_UScriptStruct_FVehicleSeat_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleSeat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleSeat_CRC() { return 1723561684U; }
class UScriptStruct* FVehiclePhysicsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehiclePhysicsData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("VehiclePhysicsData"), sizeof(FVehiclePhysicsData), Get_Z_Construct_UScriptStruct_FVehiclePhysicsData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehiclePhysicsData(FVehiclePhysicsData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("VehiclePhysicsData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFVehiclePhysicsData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFVehiclePhysicsData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehiclePhysicsData")),new UScriptStruct::TCppStructOps<FVehiclePhysicsData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFVehiclePhysicsData;
	struct Z_Construct_UScriptStruct_FVehiclePhysicsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Physics data we want to be able to restore, we store the bone name to be able to change the bone structure in updates" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehiclePhysicsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehiclePhysicsData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehiclePhysicsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"VehiclePhysicsData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FVehiclePhysicsData),
		alignof(FVehiclePhysicsData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehiclePhysicsData"), sizeof(FVehiclePhysicsData), Get_Z_Construct_UScriptStruct_FVehiclePhysicsData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehiclePhysicsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsData_CRC() { return 1410709606U; }
	void UFGUseState_VehicleHasDriver::StaticRegisterNativesUFGUseState_VehicleHasDriver()
	{
	}
	UClass* Z_Construct_UClass_UFGUseState_VehicleHasDriver_NoRegister()
	{
		return UFGUseState_VehicleHasDriver::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGUseState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGVehicle.h" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Vehicle has a driver but has empty passenger seats" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGUseState_VehicleHasDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics::ClassParams = {
		&UFGUseState_VehicleHasDriver::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseState_VehicleHasDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseState_VehicleHasDriver, 303802665);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseState_VehicleHasDriver(Z_Construct_UClass_UFGUseState_VehicleHasDriver, &UFGUseState_VehicleHasDriver::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseState_VehicleHasDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseState_VehicleHasDriver);
	void UFGUseState_VehicleInWater::StaticRegisterNativesUFGUseState_VehicleInWater()
	{
	}
	UClass* Z_Construct_UClass_UFGUseState_VehicleInWater_NoRegister()
	{
		return UFGUseState_VehicleInWater::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseState_VehicleInWater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseState_VehicleInWater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGUseState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_VehicleInWater_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGVehicle.h" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Vehicle is in water, can't enter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseState_VehicleInWater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGUseState_VehicleInWater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseState_VehicleInWater_Statics::ClassParams = {
		&UFGUseState_VehicleInWater::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseState_VehicleInWater_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_VehicleInWater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseState_VehicleInWater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseState_VehicleInWater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseState_VehicleInWater, 2960231305);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseState_VehicleInWater(Z_Construct_UClass_UFGUseState_VehicleInWater, &UFGUseState_VehicleInWater::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseState_VehicleInWater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseState_VehicleInWater);
	void UFGUseState_VehicleOccupied::StaticRegisterNativesUFGUseState_VehicleOccupied()
	{
	}
	UClass* Z_Construct_UClass_UFGUseState_VehicleOccupied_NoRegister()
	{
		return UFGUseState_VehicleOccupied::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGUseState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGVehicle.h" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Vehicle is fully occupied" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGUseState_VehicleOccupied>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics::ClassParams = {
		&UFGUseState_VehicleOccupied::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseState_VehicleOccupied()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseState_VehicleOccupied, 3839373629);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseState_VehicleOccupied(Z_Construct_UClass_UFGUseState_VehicleOccupied, &UFGUseState_VehicleOccupied::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseState_VehicleOccupied"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseState_VehicleOccupied);
	static FName NAME_AFGVehicle_GetDismantleBlueprintReturns = FName(TEXT("GetDismantleBlueprintReturns"));
	void AFGVehicle::GetDismantleBlueprintReturns(TArray<FInventoryStack>& out_returns) const
	{
		FGVehicle_eventGetDismantleBlueprintReturns_Parms Parms;
		Parms.out_returns=out_returns;
		const_cast<AFGVehicle*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFGVehicle_GetDismantleBlueprintReturns),&Parms);
		out_returns=Parms.out_returns;
	}
	static FName NAME_AFGVehicle_NotifyOnTakeDamage = FName(TEXT("NotifyOnTakeDamage"));
	void AFGVehicle::NotifyOnTakeDamage(AActor* damagedActor, float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser)
	{
		FGVehicle_eventNotifyOnTakeDamage_Parms Parms;
		Parms.damagedActor=damagedActor;
		Parms.damageAmount=damageAmount;
		Parms.damageType=damageType;
		Parms.instigatedBy=instigatedBy;
		Parms.damageCauser=damageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AFGVehicle_NotifyOnTakeDamage),&Parms);
	}
	static FName NAME_AFGVehicle_ReceiveDied = FName(TEXT("ReceiveDied"));
	void AFGVehicle::ReceiveDied(AActor* thisActor)
	{
		FGVehicle_eventReceiveDied_Parms Parms;
		Parms.thisActor=thisActor;
		ProcessEvent(FindFunctionChecked(NAME_AFGVehicle_ReceiveDied),&Parms);
	}
	static FName NAME_AFGVehicle_ReceiveOnVehicleShutDown = FName(TEXT("ReceiveOnVehicleShutDown"));
	void AFGVehicle::ReceiveOnVehicleShutDown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGVehicle_ReceiveOnVehicleShutDown),NULL);
	}
	static FName NAME_AFGVehicle_ReceiveOnVehicleStartup = FName(TEXT("ReceiveOnVehicleStartup"));
	void AFGVehicle::ReceiveOnVehicleStartup()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGVehicle_ReceiveOnVehicleStartup),NULL);
	}
	void AFGVehicle::StaticRegisterNativesAFGVehicle()
	{
		UClass* Class = AFGVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSelfDriverEnter", &AFGVehicle::execCanSelfDriverEnter },
			{ "Died", &AFGVehicle::execDied },
			{ "GetHealthComponent", &AFGVehicle::execGetHealthComponent },
			{ "HasAnyPassengerSeatAvailable", &AFGVehicle::execHasAnyPassengerSeatAvailable },
			{ "IsDestructible", &AFGVehicle::execIsDestructible },
			{ "IsSelfDriving", &AFGVehicle::execIsSelfDriving },
			{ "KickAllPlayers", &AFGVehicle::execKickAllPlayers },
			{ "OnRep_PrimaryColor", &AFGVehicle::execOnRep_PrimaryColor },
			{ "OnRep_SecondaryColor", &AFGVehicle::execOnRep_SecondaryColor },
			{ "OnTakeDamage", &AFGVehicle::execOnTakeDamage },
			{ "SelfDriverEnter", &AFGVehicle::execSelfDriverEnter },
			{ "UpdatePhysicsVolume", &AFGVehicle::execUpdatePhysicsVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics
	{
		struct FGVehicle_eventCanSelfDriverEnter_Parms
		{
			AAIController* ai;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ai;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGVehicle_eventCanSelfDriverEnter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGVehicle_eventCanSelfDriverEnter_Parms), &Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::NewProp_ai = { UE4CodeGen_Private::EPropertyClass::Object, "ai", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventCanSelfDriverEnter_Parms, ai), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::NewProp_ai,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|SelfDriving" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "@return true if an ai can start driving this vehicle; false otherwise. (server only)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "CanSelfDriverEnter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(FGVehicle_eventCanSelfDriverEnter_Parms), Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_Died_Statics
	{
		struct FGVehicle_eventDied_Parms
		{
			AActor* thisActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thisActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_Died_Statics::NewProp_thisActor = { UE4CodeGen_Private::EPropertyClass::Object, "thisActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventDied_Parms, thisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_Died_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_Died_Statics::NewProp_thisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_Died_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_Died_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "Died", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, sizeof(FGVehicle_eventDied_Parms), Z_Construct_UFunction_AFGVehicle_Died_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_Died_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_Died_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_Died_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_Died()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_Died_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_returns;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_returns_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::NewProp_out_returns = { UE4CodeGen_Private::EPropertyClass::Array, "out_returns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventGetDismantleBlueprintReturns_Parms, out_returns), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::NewProp_out_returns_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_returns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::NewProp_out_returns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::NewProp_out_returns_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "If blueprint has anything to return when this vehicle is dismantled. Not consolidated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "GetDismantleBlueprintReturns", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48480800, sizeof(FGVehicle_eventGetDismantleBlueprintReturns_Parms), Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics
	{
		struct FGVehicle_eventGetHealthComponent_Parms
		{
			UFGHealthComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventGetHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UFGHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Health component for this vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "GetHealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGVehicle_eventGetHealthComponent_Parms), Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_GetHealthComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_GetHealthComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics
	{
		struct FGVehicle_eventHasAnyPassengerSeatAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGVehicle_eventHasAnyPassengerSeatAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGVehicle_eventHasAnyPassengerSeatAvailable_Parms), &Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Check if any passenger seats are available" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "HasAnyPassengerSeatAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGVehicle_eventHasAnyPassengerSeatAvailable_Parms), Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics
	{
		struct FGVehicle_eventIsDestructible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGVehicle_eventIsDestructible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGVehicle_eventIsDestructible_Parms), &Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Is this vehicle destructible" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "IsDestructible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGVehicle_eventIsDestructible_Parms), Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_IsDestructible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_IsDestructible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics
	{
		struct FGVehicle_eventIsSelfDriving_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGVehicle_eventIsSelfDriving_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGVehicle_eventIsSelfDriving_Parms), &Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|SelfDriving" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "@return true if there's an ai controlling this vehicle; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "IsSelfDriving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGVehicle_eventIsSelfDriving_Parms), Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_IsSelfDriving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_IsSelfDriving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_KickAllPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_KickAllPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Kicks out all players in the vehicle including its passengers\nCan be called on both client and server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_KickAllPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "KickAllPlayers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_KickAllPlayers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_KickAllPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_KickAllPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_KickAllPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "damageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventNotifyOnTakeDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_instigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "instigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventNotifyOnTakeDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Object, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventNotifyOnTakeDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damageAmount = { UE4CodeGen_Private::EPropertyClass::Float, "damageAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventNotifyOnTakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "damagedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventNotifyOnTakeDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "DisplayName", "OnTakeDamage" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "We have taken damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "NotifyOnTakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGVehicle_eventNotifyOnTakeDamage_Parms), Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_OnRep_PrimaryColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_OnRep_PrimaryColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Rep notifies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_OnRep_PrimaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "OnRep_PrimaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_OnRep_PrimaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_OnRep_PrimaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_OnRep_PrimaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_OnRep_PrimaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_OnRep_SecondaryColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_OnRep_SecondaryColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_OnRep_SecondaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "OnRep_SecondaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_OnRep_SecondaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_OnRep_SecondaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_OnRep_SecondaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_OnRep_SecondaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics
	{
		struct FGVehicle_eventOnTakeDamage_Parms
		{
			AActor* damagedActor;
			float damageAmount;
			const UDamageType* damageType;
			AController* instigatedBy;
			AActor* damageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "damageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventOnTakeDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_instigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "instigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventOnTakeDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Object, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventOnTakeDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damageAmount = { UE4CodeGen_Private::EPropertyClass::Float, "damageAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventOnTakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "damagedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventOnTakeDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Notifies from our health component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "OnTakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, sizeof(FGVehicle_eventOnTakeDamage_Parms), Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thisActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::NewProp_thisActor = { UE4CodeGen_Private::EPropertyClass::Object, "thisActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventReceiveDied_Parms, thisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::NewProp_thisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "DisplayName", "Died" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "We have died" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "ReceiveDied", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGVehicle_eventReceiveDied_Parms), Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_ReceiveDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_ReceiveDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleShutDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleShutDown_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnVehicleShutDown" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Called when the vehicle (engine) is shut down." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleShutDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "ReceiveOnVehicleShutDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleShutDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleShutDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleShutDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleShutDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleStartup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleStartup_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnVehicleStartup" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Called when the vehicle (engine) is started." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleStartup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "ReceiveOnVehicleStartup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleStartup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleStartup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleStartup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleStartup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics
	{
		struct FGVehicle_eventSelfDriverEnter_Parms
		{
			AAIController* ai;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ai;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGVehicle_eventSelfDriverEnter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGVehicle_eventSelfDriverEnter_Parms), &Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::NewProp_ai = { UE4CodeGen_Private::EPropertyClass::Object, "ai", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventSelfDriverEnter_Parms, ai), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::NewProp_ai,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle|SelfDriving" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Let an ai enter the vehicle. Will not succeed if there is a human driver in the vehicle already." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "SelfDriverEnter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020404, sizeof(FGVehicle_eventSelfDriverEnter_Parms), Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_SelfDriverEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_SelfDriverEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics
	{
		struct FGVehicle_eventUpdatePhysicsVolume_Parms
		{
			APhysicsVolume* physicsVolume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicsVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::NewProp_physicsVolume = { UE4CodeGen_Private::EPropertyClass::Object, "physicsVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicle_eventUpdatePhysicsVolume_Parms, physicsVolume), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::NewProp_physicsVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Notifies from out mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVehicle, "UpdatePhysicsVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGVehicle_eventUpdatePhysicsVolume_Parms), Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGVehicle_NoRegister()
	{
		return AFGVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AFGVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGasDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mGasDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSubmergedBouyantForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSubmergedBouyantForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSubmergedLinearDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSubmergedLinearDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSubmergedAngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSubmergedAngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsSubmergedInWater_MetaData[];
#endif
		static void NewProp_mIsSubmergedInWater_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsSubmergedInWater;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsDestructible_MetaData[];
#endif
		static void NewProp_mIsDestructible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsDestructible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConstructSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConstructSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStoredPhysicsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mStoredPhysicsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mStoredPhysicsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSelfDrivingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSelfDrivingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsSelfDriving_MetaData[];
#endif
		static void NewProp_mIsSelfDriving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsSelfDriving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSecondaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSecondaryColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPrimaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPrimaryColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDismantleRefund_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDismantleRefund;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDismantleRefund_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisabledByWaterLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDisabledByWaterLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDisabledByWaterLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHologramClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mHologramClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGDriveablePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGVehicle_CanSelfDriverEnter, "CanSelfDriverEnter" }, // 2307071365
		{ &Z_Construct_UFunction_AFGVehicle_Died, "Died" }, // 526855650
		{ &Z_Construct_UFunction_AFGVehicle_GetDismantleBlueprintReturns, "GetDismantleBlueprintReturns" }, // 1706641204
		{ &Z_Construct_UFunction_AFGVehicle_GetHealthComponent, "GetHealthComponent" }, // 343684598
		{ &Z_Construct_UFunction_AFGVehicle_HasAnyPassengerSeatAvailable, "HasAnyPassengerSeatAvailable" }, // 1008518455
		{ &Z_Construct_UFunction_AFGVehicle_IsDestructible, "IsDestructible" }, // 3787895782
		{ &Z_Construct_UFunction_AFGVehicle_IsSelfDriving, "IsSelfDriving" }, // 2431377008
		{ &Z_Construct_UFunction_AFGVehicle_KickAllPlayers, "KickAllPlayers" }, // 3118733206
		{ &Z_Construct_UFunction_AFGVehicle_NotifyOnTakeDamage, "NotifyOnTakeDamage" }, // 150339734
		{ &Z_Construct_UFunction_AFGVehicle_OnRep_PrimaryColor, "OnRep_PrimaryColor" }, // 4040997247
		{ &Z_Construct_UFunction_AFGVehicle_OnRep_SecondaryColor, "OnRep_SecondaryColor" }, // 1835404689
		{ &Z_Construct_UFunction_AFGVehicle_OnTakeDamage, "OnTakeDamage" }, // 190808331
		{ &Z_Construct_UFunction_AFGVehicle_ReceiveDied, "ReceiveDied" }, // 346003994
		{ &Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleShutDown, "ReceiveOnVehicleShutDown" }, // 983551279
		{ &Z_Construct_UFunction_AFGVehicle_ReceiveOnVehicleStartup, "ReceiveOnVehicleStartup" }, // 3042564628
		{ &Z_Construct_UFunction_AFGVehicle_SelfDriverEnter, "SelfDriverEnter" }, // 2404993031
		{ &Z_Construct_UFunction_AFGVehicle_UpdatePhysicsVolume, "UpdatePhysicsVolume" }, // 3374765676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGVehicle.h" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Base class for all vehicles in the game, cars, train etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mGasDamageType_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Gas damage typ that should be redirected to the driver" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mGasDamageType = { UE4CodeGen_Private::EPropertyClass::Class, "mGasDamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mGasDamageType), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mGasDamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mGasDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedBouyantForce_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "upwards force applied to vehicles when underwater" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedBouyantForce = { UE4CodeGen_Private::EPropertyClass::Float, "mSubmergedBouyantForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mSubmergedBouyantForce), METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedBouyantForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedBouyantForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedLinearDamping_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "increased linear damping when vehicle is under water" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedLinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "mSubmergedLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mSubmergedLinearDamping), METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedLinearDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedLinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedAngularDamping_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "increased angular damping when vehicle is under water" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedAngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "mSubmergedAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mSubmergedAngularDamping), METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedAngularDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedAngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSubmergedInWater_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "If true, then we are submerged in water" },
	};
#endif
	void Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSubmergedInWater_SetBit(void* Obj)
	{
		((AFGVehicle*)Obj)->mIsSubmergedInWater = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSubmergedInWater = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsSubmergedInWater", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AFGVehicle), &Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSubmergedInWater_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSubmergedInWater_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSubmergedInWater_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsDestructible_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Can this vehicle be destroyed by damage?" },
	};
#endif
	void Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsDestructible_SetBit(void* Obj)
	{
		((AFGVehicle*)Obj)->mIsDestructible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsDestructible = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsDestructible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AFGVehicle), &Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsDestructible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsDestructible_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsDestructible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mConstructSound_MetaData[] = {
		{ "Category", "Vehicle|Sound" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Sound played when this vehicle is created" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mConstructSound = { UE4CodeGen_Private::EPropertyClass::Object, "mConstructSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mConstructSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mConstructSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mConstructSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mStoredPhysicsData_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Saved like this, as we can't store it in serialize, as it will be killed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mStoredPhysicsData = { UE4CodeGen_Private::EPropertyClass::Array, "mStoredPhysicsData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mStoredPhysicsData), METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mStoredPhysicsData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mStoredPhysicsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mStoredPhysicsData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mStoredPhysicsData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVehiclePhysicsData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSelfDrivingController_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "The AI that controls this vehicle when self-driving is activated." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSelfDrivingController = { UE4CodeGen_Private::EPropertyClass::Object, "mSelfDrivingController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mSelfDrivingController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSelfDrivingController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSelfDrivingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSelfDriving_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "If this vehicle is self driving." },
	};
#endif
	void Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSelfDriving_SetBit(void* Obj)
	{
		((AFGVehicle*)Obj)->mIsSelfDriving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSelfDriving = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsSelfDriving", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGVehicle), &Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSelfDriving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSelfDriving_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSelfDriving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSecondaryColor_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "The primary color of this buildable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSecondaryColor = { UE4CodeGen_Private::EPropertyClass::Struct, "mSecondaryColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000101000020, 1, "OnRep_SecondaryColor", STRUCT_OFFSET(AFGVehicle, mSecondaryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSecondaryColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSecondaryColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mPrimaryColor_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "The primary color of this buildable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mPrimaryColor = { UE4CodeGen_Private::EPropertyClass::Struct, "mPrimaryColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000101000020, 1, "OnRep_PrimaryColor", STRUCT_OFFSET(AFGVehicle, mPrimaryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mPrimaryColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mPrimaryColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDismantleRefund_MetaData[] = {
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "How much did we pay when building this." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDismantleRefund = { UE4CodeGen_Private::EPropertyClass::Array, "mDismantleRefund", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mDismantleRefund), METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDismantleRefund_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDismantleRefund_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDismantleRefund_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mDismantleRefund", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisabledByWaterLocations_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "If any of these locations enters water, then we are unusable" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisabledByWaterLocations = { UE4CodeGen_Private::EPropertyClass::Array, "mDisabledByWaterLocations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mDisabledByWaterLocations), METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisabledByWaterLocations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisabledByWaterLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisabledByWaterLocations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mDisabledByWaterLocations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHealthComponent_MetaData[] = {
		{ "Category", "Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Keeps track of our current health" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHealthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mHealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800010a0029, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mHealthComponent), Z_Construct_UClass_UFGHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHealthComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Vehicle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b001d, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHologramClass_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "Hologram to build this class with." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHologramClass = { UE4CodeGen_Private::EPropertyClass::Class, "mHologramClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mHologramClass), Z_Construct_UClass_AFGVehicleHologram_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHologramClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHologramClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDescription_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The human readable description for this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDescription = { UE4CodeGen_Private::EPropertyClass::Text, "mDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mDescription), METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisplayName_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGVehicle.h" },
		{ "ToolTip", "The human readable name for this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "mDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFGVehicle, mDisplayName), METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mGasDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedBouyantForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedLinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSubmergedAngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSubmergedInWater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsDestructible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mConstructSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mStoredPhysicsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mStoredPhysicsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSelfDrivingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mIsSelfDriving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mSecondaryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mPrimaryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDismantleRefund,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDismantleRefund_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisabledByWaterLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisabledByWaterLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mHologramClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicle_Statics::NewProp_mDisplayName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGVehicle_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGUseableInterface_NoRegister, (int32)VTABLE_OFFSET(AFGVehicle, IFGUseableInterface), false },
			{ Z_Construct_UClass_UFGDismantleInterface_NoRegister, (int32)VTABLE_OFFSET(AFGVehicle, IFGDismantleInterface), false },
			{ Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, (int32)VTABLE_OFFSET(AFGVehicle, IFGAggroTargetInterface), false },
			{ Z_Construct_UClass_UFGDockableInterface_NoRegister, (int32)VTABLE_OFFSET(AFGVehicle, IFGDockableInterface), false },
			{ Z_Construct_UClass_UFGColorInterface_NoRegister, (int32)VTABLE_OFFSET(AFGVehicle, IFGColorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGVehicle_Statics::ClassParams = {
		&AFGVehicle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGVehicle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGVehicle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGVehicle, 2859908188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGVehicle(Z_Construct_UClass_AFGVehicle, &AFGVehicle::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGVehicle);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGVehicle)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
