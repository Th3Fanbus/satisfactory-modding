// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGLocomotiveMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGLocomotiveMovementComponent() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EMultipleUnitControl();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadVehicleInputRate();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadVehicleMovementComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	static UEnum* EMultipleUnitControl_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EMultipleUnitControl, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EMultipleUnitControl"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EMultipleUnitControl>()
	{
		return EMultipleUnitControl_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMultipleUnitControl(EMultipleUnitControl_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EMultipleUnitControl"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EMultipleUnitControl_Hash() { return 2249822235U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EMultipleUnitControl()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMultipleUnitControl"), 0, Get_Z_Construct_UEnum_FactoryGame_EMultipleUnitControl_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMultipleUnitControl::MUC_Disabled", (int64)EMultipleUnitControl::MUC_Disabled },
				{ "EMultipleUnitControl::MUC_Master", (int64)EMultipleUnitControl::MUC_Master },
				{ "EMultipleUnitControl::MUC_Slave", (int64)EMultipleUnitControl::MUC_Slave },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
				{ "MUC_Disabled.DisplayName", "Disabled" },
				{ "MUC_Master.DisplayName", "Master" },
				{ "MUC_Slave.DisplayName", "Slave" },
				{ "ToolTip", "Enum to indicate which MU state a locomotive is in.\nDisabled: MU is disabled, train has no driver (nor AI).\nMaster: This unit controls all slave units in the train, this is where the driver sits (or AI).\nSlave: Cannot be controlled, even if occupied by a player, gets input from the master." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EMultipleUnitControl",
				"EMultipleUnitControl",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRailroadVehicleInputRate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRailroadVehicleInputRate, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RailroadVehicleInputRate"), sizeof(FRailroadVehicleInputRate), Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FRailroadVehicleInputRate>()
{
	return FRailroadVehicleInputRate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRailroadVehicleInputRate(FRailroadVehicleInputRate::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("RailroadVehicleInputRate"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadVehicleInputRate
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadVehicleInputRate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RailroadVehicleInputRate")),new UScriptStruct::TCppStructOps<FRailroadVehicleInputRate>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFRailroadVehicleInputRate;
	struct Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiseRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRailroadVehicleInputRate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which the input value falls" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate = { "FallRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRailroadVehicleInputRate, FallRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which the input value rises" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate = { "RiseRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRailroadVehicleInputRate, RiseRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_FallRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::NewProp_RiseRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"RailroadVehicleInputRate",
		sizeof(FRailroadVehicleInputRate),
		alignof(FRailroadVehicleInputRate),
		Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRailroadVehicleInputRate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RailroadVehicleInputRate"), sizeof(FRailroadVehicleInputRate), Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRailroadVehicleInputRate_Hash() { return 1007732005U; }
class UScriptStruct* FReplicatedRailroadVehicleState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ReplicatedRailroadVehicleState"), sizeof(FReplicatedRailroadVehicleState), Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FReplicatedRailroadVehicleState>()
{
	return FReplicatedRailroadVehicleState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicatedRailroadVehicleState(FReplicatedRailroadVehicleState::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ReplicatedRailroadVehicleState"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFReplicatedRailroadVehicleState
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFReplicatedRailroadVehicleState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicatedRailroadVehicleState")),new UScriptStruct::TCppStructOps<FReplicatedRailroadVehicleState>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFReplicatedRailroadVehicleState;
	struct Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrottleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverserInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReverserInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Some replicated state for this movement component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedRailroadVehicleState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: air brakes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput = { "AirBrakeInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedRailroadVehicleState, AirBrakeInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: dynamic brakes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput = { "DynamicBrakeInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedRailroadVehicleState, DynamicBrakeInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: throttle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput = { "ThrottleInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedRailroadVehicleState, ThrottleInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: steering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput = { "SteeringInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedRailroadVehicleState, SteeringInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "input replication: steering" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput = { "ReverserInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedRailroadVehicleState, ReverserInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_AirBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_DynamicBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_SteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::NewProp_ReverserInput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ReplicatedRailroadVehicleState",
		sizeof(FReplicatedRailroadVehicleState),
		alignof(FReplicatedRailroadVehicleState),
		Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicatedRailroadVehicleState"), sizeof(FReplicatedRailroadVehicleState), Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState_Hash() { return 581172320U; }
	static FName NAME_UFGLocomotiveMovementComponent_ServerUpdateState = FName(TEXT("ServerUpdateState"));
	void UFGLocomotiveMovementComponent::ServerUpdateState(int32 inReverserInput, float inSteeringInput, float inThrottleInput, float inDynamicBrakeInput, float inAirBrakeInput)
	{
		FGLocomotiveMovementComponent_eventServerUpdateState_Parms Parms;
		Parms.inReverserInput=inReverserInput;
		Parms.inSteeringInput=inSteeringInput;
		Parms.inThrottleInput=inThrottleInput;
		Parms.inDynamicBrakeInput=inDynamicBrakeInput;
		Parms.inAirBrakeInput=inAirBrakeInput;
		ProcessEvent(FindFunctionChecked(NAME_UFGLocomotiveMovementComponent_ServerUpdateState),&Parms);
	}
	void UFGLocomotiveMovementComponent::StaticRegisterNativesUFGLocomotiveMovementComponent()
	{
		UClass* Class = UFGLocomotiveMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAirBrake", &UFGLocomotiveMovementComponent::execGetAirBrake },
			{ "GetDynamicBrake", &UFGLocomotiveMovementComponent::execGetDynamicBrake },
			{ "GetReverser", &UFGLocomotiveMovementComponent::execGetReverser },
			{ "GetThrottle", &UFGLocomotiveMovementComponent::execGetThrottle },
			{ "ServerUpdateState", &UFGLocomotiveMovementComponent::execServerUpdateState },
			{ "SetAirBrakeInput", &UFGLocomotiveMovementComponent::execSetAirBrakeInput },
			{ "SetEmergencyBrake", &UFGLocomotiveMovementComponent::execSetEmergencyBrake },
			{ "SetReverserInput", &UFGLocomotiveMovementComponent::execSetReverserInput },
			{ "SetSteeringInput", &UFGLocomotiveMovementComponent::execSetSteeringInput },
			{ "SetThrottleInput", &UFGLocomotiveMovementComponent::execSetThrottleInput },
			{ "UseReplicatedState", &UFGLocomotiveMovementComponent::execUseReplicatedState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetAirBrake_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetAirBrake_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Get the amount of pressure applied to the air brakes in range [0,1]. This is the trains version of hand brake." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "GetAirBrake", sizeof(FGLocomotiveMovementComponent_eventGetAirBrake_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetDynamicBrake_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetDynamicBrake_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Get the amount of dynamic braking in range [0,1]. This is the trains version of a cars engine brake.\nIt is applied when moving forward and applying reverse throttle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "GetDynamicBrake", sizeof(FGLocomotiveMovementComponent_eventGetDynamicBrake_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetReverser_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetReverser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Returns the value of the reverser control. @see SetReverserInput" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "GetReverser", sizeof(FGLocomotiveMovementComponent_eventGetReverser_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics
	{
		struct FGLocomotiveMovementComponent_eventGetThrottle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventGetThrottle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Get the throttle value in range [0,1]. This is not the same as the raw data passed to SetThrottleInput" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "GetThrottle", sizeof(FGLocomotiveMovementComponent_eventGetThrottle_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inAirBrakeInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDynamicBrakeInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inThrottleInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inSteeringInput;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inReverserInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inAirBrakeInput = { "inAirBrakeInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inAirBrakeInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inDynamicBrakeInput = { "inDynamicBrakeInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inDynamicBrakeInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inThrottleInput = { "inThrottleInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inThrottleInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inSteeringInput = { "inSteeringInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inSteeringInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inReverserInput = { "inReverserInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventServerUpdateState_Parms, inReverserInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inAirBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inDynamicBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inSteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::NewProp_inReverserInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Pass current state to server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "ServerUpdateState", sizeof(FGLocomotiveMovementComponent_eventServerUpdateState_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics
	{
		struct FGLocomotiveMovementComponent_eventSetAirBrakeInput_Parms
		{
			float brake;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_brake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::NewProp_brake = { "brake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventSetAirBrakeInput_Parms, brake), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::NewProp_brake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Set the user input for air brakes (handbrake)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "SetAirBrakeInput", sizeof(FGLocomotiveMovementComponent_eventSetAirBrakeInput_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Sets all brakes to max and the throttle to zero." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "SetEmergencyBrake", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics
	{
		struct FGLocomotiveMovementComponent_eventSetReverserInput_Parms
		{
			int32 reverser;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_reverser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::NewProp_reverser = { "reverser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventSetReverserInput_Parms, reverser), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::NewProp_reverser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Set the value of the reverser control.\n 1: Forward, locomotive goes forwards.\n-1: Reverse, locomotive goes backwards.\n 0: Neutral, locomotive goes nowhere!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "SetReverserInput", sizeof(FGLocomotiveMovementComponent_eventSetReverserInput_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics
	{
		struct FGLocomotiveMovementComponent_eventSetSteeringInput_Parms
		{
			float steering;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_steering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::NewProp_steering = { "steering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventSetSteeringInput_Parms, steering), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::NewProp_steering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle steering\nNegative: Flip turnout ahead to the right.\nPositive: Flip turnout ahead to the left.\nZero: Do nothing and go with the flow." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "SetSteeringInput", sizeof(FGLocomotiveMovementComponent_eventSetSteeringInput_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics
	{
		struct FGLocomotiveMovementComponent_eventSetThrottleInput_Parms
		{
			float throttle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_throttle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::NewProp_throttle = { "throttle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLocomotiveMovementComponent_eventSetThrottleInput_Parms, throttle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::NewProp_throttle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Movement" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle throttle. Range [-1, 1].\nIf negative and the vehicle is moving forward this applies dynamic braking (not same as handbrake)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "SetThrottleInput", sizeof(FGLocomotiveMovementComponent_eventSetThrottleInput_Parms), Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Update the clients state from the replicated state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLocomotiveMovementComponent, nullptr, "UseReplicatedState", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent_NoRegister()
	{
		return UFGLocomotiveMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicBrakingEffortCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDynamicBrakingEffortCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTractiveEffortCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTractiveEffortCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDynamicBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAirBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAirBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mThrottleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSteeringInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSteeringInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReverserInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mReverserInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAirBrakeInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mAirBrakeInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicBrakeVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDynamicBrakeVelocityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicBrakeInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDynamicBrakeInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThrottleInputRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mThrottleInputRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawAirBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRawAirBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawDynamicBrakeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRawDynamicBrakeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRawThrottleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawSteeringInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRawSteeringInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRawReverserInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mRawReverserInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicatedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mReplicatedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetAirBrake, "GetAirBrake" }, // 2951457389
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetDynamicBrake, "GetDynamicBrake" }, // 396513124
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetReverser, "GetReverser" }, // 2566341334
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_GetThrottle, "GetThrottle" }, // 3611632795
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_ServerUpdateState, "ServerUpdateState" }, // 3046780918
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetAirBrakeInput, "SetAirBrakeInput" }, // 2067395769
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetEmergencyBrake, "SetEmergencyBrake" }, // 421245011
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetReverserInput, "SetReverserInput" }, // 3111644199
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetSteeringInput, "SetSteeringInput" }, // 1282991981
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_SetThrottleInput, "SetThrottleInput" }, // 2660001234
		{ &Z_Construct_UFunction_UFGLocomotiveMovementComponent_UseReplicatedState, "UseReplicatedState" }, // 3600181179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGLocomotiveMovementComponent.h" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movement component for locomotives.\nThis is where input and controlling of the train is happening." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "The maximum dynamic braking force [kN] [kg m/s^2 * 1000] that can be delivered at a given speed [km/h]." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve = { "mDynamicBrakingEffortCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakingEffortCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "The maximum tractive force [kN] [kg m/s^2 * 1000] that can be delivered at a given speed [km/h]." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve = { "mTractiveEffortCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mTractiveEffortCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Dynamic brake output to physics system. Range 0...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput = { "mDynamicBrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Air brake output to physics system. Range 0...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput = { "mAirBrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mAirBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Accelerator output to physics system. Range 0...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput = { "mThrottleInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mThrottleInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Steering output to physics system. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput = { "mSteeringInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mSteeringInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Reversing control output to physics system. -1, 0, 1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput = { "mReverserInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mReverserInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which input air brake can rise and fall." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate = { "mAirBrakeInputRate", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mAirBrakeInputRate), Z_Construct_UScriptStruct_FRailroadVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Velocity at which the dynamic brake can be engaged." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold = { "mDynamicBrakeVelocityThreshold", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakeVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which input dynamic brake can rise and fall." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate = { "mDynamicBrakeInputRate", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mDynamicBrakeInputRate), Z_Construct_UScriptStruct_FRailroadVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "Rate at which input throttle can rise and fall." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate = { "mThrottleInputRate", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mThrottleInputRate), Z_Construct_UScriptStruct_FRailroadVehicleInputRate, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the air brake input is set to." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput = { "mRawAirBrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawAirBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the dynamic brake input is set to." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput = { "mRawDynamicBrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawDynamicBrakeInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the player has the accelerator set to. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput = { "mRawThrottleInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawThrottleInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the player has the steering set to. Range -1...1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput = { "mRawSteeringInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawSteeringInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "What the player has the reverser set to. Values -1, 0, 1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput = { "mRawReverserInput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mRawReverserInput), METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState_MetaData[] = {
		{ "ModuleRelativePath", "FGLocomotiveMovementComponent.h" },
		{ "ToolTip", "replicated state of vehicle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState = { "mReplicatedState", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLocomotiveMovementComponent, mReplicatedState), Z_Construct_UScriptStruct_FReplicatedRailroadVehicleState, METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakingEffortCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mTractiveEffortCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mSteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReverserInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mAirBrakeInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeVelocityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mDynamicBrakeInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mThrottleInputRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawAirBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawDynamicBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawSteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mRawReverserInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::NewProp_mReplicatedState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGLocomotiveMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::ClassParams = {
		&UFGLocomotiveMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGLocomotiveMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGLocomotiveMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGLocomotiveMovementComponent, 1040903196);
	template<> FACTORYGAME_API UClass* StaticClass<UFGLocomotiveMovementComponent>()
	{
		return UFGLocomotiveMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGLocomotiveMovementComponent(Z_Construct_UClass_UFGLocomotiveMovementComponent, &UFGLocomotiveMovementComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGLocomotiveMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGLocomotiveMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
