// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRailroadVehicleMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadVehicleMovementComponent() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCouplerSetup();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWheelsetSetup();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadVehicleMovementComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadVehicleMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass();
// End Cross Module References
class UScriptStruct* FCouplerSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCouplerSetup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCouplerSetup, Z_Construct_UPackage__Script_FactoryGame(), TEXT("CouplerSetup"), sizeof(FCouplerSetup), Get_Z_Construct_UScriptStruct_FCouplerSetup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCouplerSetup(FCouplerSetup::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("CouplerSetup"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFCouplerSetup
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFCouplerSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CouplerSetup")),new UScriptStruct::TCppStructOps<FCouplerSetup>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFCouplerSetup;
	struct Z_Construct_UScriptStruct_FCouplerSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCouplerSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Vehicle-specific setup for couplers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCouplerSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "CouplerSetup" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "How long is the couplers arm, from the bone to the point where is attaches to the other coupler." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCouplerSetup, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_Length_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "CouplerSetup" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Bone name on mesh where the coupler's base is attached." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCouplerSetup, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCouplerSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCouplerSetup_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCouplerSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"CouplerSetup",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCouplerSetup),
		alignof(FCouplerSetup),
		Z_Construct_UScriptStruct_FCouplerSetup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCouplerSetup_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCouplerSetup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCouplerSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCouplerSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCouplerSetup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CouplerSetup"), sizeof(FCouplerSetup), Get_Z_Construct_UScriptStruct_FCouplerSetup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCouplerSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCouplerSetup_CRC() { return 1436460336U; }
class UScriptStruct* FWheelsetSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FWheelsetSetup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelsetSetup, Z_Construct_UPackage__Script_FactoryGame(), TEXT("WheelsetSetup"), sizeof(FWheelsetSetup), Get_Z_Construct_UScriptStruct_FWheelsetSetup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheelsetSetup(FWheelsetSetup::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("WheelsetSetup"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFWheelsetSetup
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFWheelsetSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WheelsetSetup")),new UScriptStruct::TCppStructOps<FWheelsetSetup>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFWheelsetSetup;
	struct Z_Construct_UScriptStruct_FWheelsetSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanSwivel_MetaData[];
#endif
		static void NewProp_CanSwivel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanSwivel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelsetSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Vehicle-specific setup for wheelsets and bogies." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelsetSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_CanSwivel_MetaData[] = {
		{ "Category", "WheelsetSetup" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Is this wheel set a bogie." },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_CanSwivel_SetBit(void* Obj)
	{
		((FWheelsetSetup*)Obj)->CanSwivel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_CanSwivel = { UE4CodeGen_Private::EPropertyClass::Bool, "CanSwivel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelsetSetup), &Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_CanSwivel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_CanSwivel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_CanSwivel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "WheelsetSetup" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Bone name on mesh where the wheelset/bogie is located." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FWheelsetSetup, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelsetSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_CanSwivel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelsetSetup_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelsetSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"WheelsetSetup",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FWheelsetSetup),
		alignof(FWheelsetSetup),
		Z_Construct_UScriptStruct_FWheelsetSetup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelsetSetup_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelsetSetup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelsetSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheelsetSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheelsetSetup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheelsetSetup"), sizeof(FWheelsetSetup), Get_Z_Construct_UScriptStruct_FWheelsetSetup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWheelsetSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheelsetSetup_CRC() { return 2620561246U; }
	void UFGRailroadVehicleMovementComponent::StaticRegisterNativesUFGRailroadVehicleMovementComponent()
	{
		UClass* Class = UFGRailroadVehicleMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAirBrakingForce", &UFGRailroadVehicleMovementComponent::execGetAirBrakingForce },
			{ "GetCouplerRotationAndExtention", &UFGRailroadVehicleMovementComponent::execGetCouplerRotationAndExtention },
			{ "GetDynamicBrakingForce", &UFGRailroadVehicleMovementComponent::execGetDynamicBrakingForce },
			{ "GetForwardSpeed", &UFGRailroadVehicleMovementComponent::execGetForwardSpeed },
			{ "GetMass", &UFGRailroadVehicleMovementComponent::execGetMass },
			{ "GetMaxAirBrakingEffort", &UFGRailroadVehicleMovementComponent::execGetMaxAirBrakingEffort },
			{ "GetMaxForwardSpeed", &UFGRailroadVehicleMovementComponent::execGetMaxForwardSpeed },
			{ "GetNumWheelsets", &UFGRailroadVehicleMovementComponent::execGetNumWheelsets },
			{ "GetPayloadMass", &UFGRailroadVehicleMovementComponent::execGetPayloadMass },
			{ "GetRelativeForwardSpeed", &UFGRailroadVehicleMovementComponent::execGetRelativeForwardSpeed },
			{ "GetTrackCurvature", &UFGRailroadVehicleMovementComponent::execGetTrackCurvature },
			{ "GetTrackGrade", &UFGRailroadVehicleMovementComponent::execGetTrackGrade },
			{ "GetTractiveForce", &UFGRailroadVehicleMovementComponent::execGetTractiveForce },
			{ "GetWheelsetOffset", &UFGRailroadVehicleMovementComponent::execGetWheelsetOffset },
			{ "GetWheelsetRotation", &UFGRailroadVehicleMovementComponent::execGetWheelsetRotation },
			{ "IsMoving", &UFGRailroadVehicleMovementComponent::execIsMoving },
			{ "SetPayloadMass", &UFGRailroadVehicleMovementComponent::execSetPayloadMass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetAirBrakingForce_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetAirBrakingForce_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get air braking force. [N] [kg cm/s^2]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetAirBrakingForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetAirBrakingForce_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetCouplerRotationAndExtention_Parms
		{
			int32 index;
			float out_extention;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_extention_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_out_extention;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetCouplerRotationAndExtention_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::NewProp_out_extention_MetaData[] = {
		{ "DisplayName", "Extention" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::NewProp_out_extention = { UE4CodeGen_Private::EPropertyClass::Float, "out_extention", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetCouplerRotationAndExtention_Parms, out_extention), METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::NewProp_out_extention_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::NewProp_out_extention_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetCouplerRotationAndExtention_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::NewProp_out_extention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get the couplers rotation for a coupler." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetCouplerRotationAndExtention", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(FGRailroadVehicleMovementComponent_eventGetCouplerRotationAndExtention_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetDynamicBrakingForce_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetDynamicBrakingForce_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get dynamic braking force. [N] [kg cm/s^2]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetDynamicBrakingForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetDynamicBrakingForce_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetForwardSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetForwardSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Speed of this vehicle along the track. In the direction of the train. [cm/s]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetForwardSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetForwardSpeed_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetMass_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get the total mass of this vehicle, tare + payload. [kg]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetMass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(FGRailroadVehicleMovementComponent_eventGetMass_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetMaxAirBrakingEffort_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetMaxAirBrakingEffort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get max air braking force. [N] [kg cm/s^2]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetMaxAirBrakingEffort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetMaxAirBrakingEffort_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetMaxForwardSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetMaxForwardSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Arbitrary maximum speed of this vehicle along the track. [cm/s]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetMaxForwardSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetMaxForwardSpeed_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetNumWheelsets_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetNumWheelsets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get number of wheel sets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetNumWheelsets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetNumWheelsets_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetPayloadMass_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetPayloadMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get the current payload mass for vehicle. [kg]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetPayloadMass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetPayloadMass_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetRelativeForwardSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetRelativeForwardSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Speed of this vehicle in relative to it's orientation. [cm/s]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetRelativeForwardSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetRelativeForwardSpeed_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetTrackCurvature_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetTrackCurvature_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Expressed as degree of curvature over 30 m. [radians]\n5 degrees means the forward direction (of the track) changes by 5 degrees over 30 m." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetTrackCurvature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetTrackCurvature_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetTrackGrade_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetTrackGrade_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Slope of the track. [radians]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetTrackGrade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetTrackGrade_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetTractiveForce_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetTractiveForce_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get the tractive force for this vehicle, this have a direction. [N] [kg cm/s^2]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetTractiveForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetTractiveForce_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetWheelsetOffset_Parms
		{
			int32 index;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetWheelsetOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetWheelsetOffset_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get the offset for a wheelset relative to the root bone along the forward (X) axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetWheelsetOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventGetWheelsetOffset_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventGetWheelsetRotation_Parms
		{
			int32 index;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetWheelsetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventGetWheelsetRotation_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Get the rotation for a wheelset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "GetWheelsetRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FGRailroadVehicleMovementComponent_eventGetWheelsetRotation_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventIsMoving_Parms
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
	void Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRailroadVehicleMovementComponent_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGRailroadVehicleMovementComponent_eventIsMoving_Parms), &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "If this vehicle is moving. Within a small threshold." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "IsMoving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRailroadVehicleMovementComponent_eventIsMoving_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics
	{
		struct FGRailroadVehicleMovementComponent_eventSetPayloadMass_Parms
		{
			float payload;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::NewProp_payload = { UE4CodeGen_Private::EPropertyClass::Float, "payload", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRailroadVehicleMovementComponent_eventSetPayloadMass_Parms, payload), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::NewProp_payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|RailroadVehicleMovement" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Set the current payload mass for vehicle. [kg]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadVehicleMovementComponent, "SetPayloadMass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGRailroadVehicleMovementComponent_eventSetPayloadMass_Parms), Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGRailroadVehicleMovementComponent_NoRegister()
	{
		return UFGRailroadVehicleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxAirBrakingEffort_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxAirBrakingEffort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurvatureResistanceCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurvatureResistanceCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRollingResistanceCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRollingResistanceCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mChassisHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mChassisHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mChassisWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mChassisWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPayloadMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPayloadMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCouplerSetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCouplerSetups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCouplerSetups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWheelsetSetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mWheelsetSetups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mWheelsetSetups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetAirBrakingForce, "GetAirBrakingForce" }, // 3705968798
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetCouplerRotationAndExtention, "GetCouplerRotationAndExtention" }, // 530424512
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetDynamicBrakingForce, "GetDynamicBrakingForce" }, // 1023551468
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetForwardSpeed, "GetForwardSpeed" }, // 1109450805
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMass, "GetMass" }, // 1516297082
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxAirBrakingEffort, "GetMaxAirBrakingEffort" }, // 1596074683
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetMaxForwardSpeed, "GetMaxForwardSpeed" }, // 4049677847
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetNumWheelsets, "GetNumWheelsets" }, // 3685503382
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetPayloadMass, "GetPayloadMass" }, // 1350312045
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetRelativeForwardSpeed, "GetRelativeForwardSpeed" }, // 2523324266
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackCurvature, "GetTrackCurvature" }, // 125711102
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTrackGrade, "GetTrackGrade" }, // 68292103
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetTractiveForce, "GetTractiveForce" }, // 1537194407
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetOffset, "GetWheelsetOffset" }, // 3169153830
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_GetWheelsetRotation, "GetWheelsetRotation" }, // 3865529683
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_IsMoving, "IsMoving" }, // 2475334373
		{ &Z_Construct_UFunction_UFGRailroadVehicleMovementComponent_SetPayloadMass, "SetPayloadMass" }, // 2607898131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Base class for all types of rolling stock on the railroad.\nThis is where the physics happen." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxAirBrakingEffort_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "The maximum air braking force that can be delivered. [kN] [kg m/s^2 * 1000]" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxAirBrakingEffort = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxAirBrakingEffort", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mMaxAirBrakingEffort), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxAirBrakingEffort_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxAirBrakingEffort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCurvatureResistanceCoefficient_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "The rolling resistance coefficient for rolling the wheels along a curved track. Good values [0.0001, 0.0004]." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCurvatureResistanceCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "mCurvatureResistanceCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mCurvatureResistanceCoefficient), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCurvatureResistanceCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCurvatureResistanceCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mRollingResistanceCoefficient_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "The rolling resistance coefficient for rolling the wheels along the track. Good values [0.0010, 0.0024]." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mRollingResistanceCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "mRollingResistanceCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mRollingResistanceCoefficient), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mRollingResistanceCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mRollingResistanceCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisHeight_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Chassis height used for drag force computation. [cm]" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisHeight = { UE4CodeGen_Private::EPropertyClass::Float, "mChassisHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mChassisHeight), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisWidth_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Chassis width used for drag force computation. [cm]" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisWidth = { UE4CodeGen_Private::EPropertyClass::Float, "mChassisWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mChassisWidth), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mDragCoefficient_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "DragCoefficient of the vehicle chassis. Good values [0.4, 0.8]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mDragCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "mDragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mDragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mDragCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mPayloadMass_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "How much cargo, fuel or other extra weight do we have." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mPayloadMass = { UE4CodeGen_Private::EPropertyClass::Float, "mPayloadMass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mPayloadMass), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mPayloadMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mPayloadMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxVelocity_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Rated maximum velocity for this vehicle, actual velocity can be higher or lower, use this for cosmetic calculations, sounds, particles etc. [km/h]" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mMaxVelocity), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMass_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Mass to set the vehicle chassis to. It's much easier to tweak vehicle settings when\nthe mass doesn't change due to tweaks with the physics asset. [kg]" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMass = { UE4CodeGen_Private::EPropertyClass::Float, "mMass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mMass), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCouplerSetups_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Couplers for this train. Front is 0 and back is 1." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCouplerSetups = { UE4CodeGen_Private::EPropertyClass::Array, "mCouplerSetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mCouplerSetups), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCouplerSetups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCouplerSetups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCouplerSetups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mCouplerSetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCouplerSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mWheelsetSetups_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ModuleRelativePath", "FGRailroadVehicleMovementComponent.h" },
		{ "ToolTip", "Wheelsets for this train. Front is 0 and back is 1." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mWheelsetSetups = { UE4CodeGen_Private::EPropertyClass::Array, "mWheelsetSetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGRailroadVehicleMovementComponent, mWheelsetSetups), METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mWheelsetSetups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mWheelsetSetups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mWheelsetSetups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mWheelsetSetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWheelsetSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxAirBrakingEffort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCurvatureResistanceCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mRollingResistanceCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mChassisWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mDragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mPayloadMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCouplerSetups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mCouplerSetups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mWheelsetSetups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::NewProp_mWheelsetSetups_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGRailroadVehicleMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::ClassParams = {
		&UFGRailroadVehicleMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRailroadVehicleMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRailroadVehicleMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRailroadVehicleMovementComponent, 1594977536);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRailroadVehicleMovementComponent(Z_Construct_UClass_UFGRailroadVehicleMovementComponent, &UFGRailroadVehicleMovementComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRailroadVehicleMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRailroadVehicleMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
