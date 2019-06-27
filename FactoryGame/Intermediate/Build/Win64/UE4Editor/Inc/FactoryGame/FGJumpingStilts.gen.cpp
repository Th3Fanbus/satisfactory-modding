// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGJumpingStilts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGJumpingStilts() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJumpingStilts_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJumpingStilts();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJumpingStiltsAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJumpingStiltsAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment();
// End Cross Module References
	void AFGJumpingStilts::StaticRegisterNativesAFGJumpingStilts()
	{
		UClass* Class = AFGJumpingStilts::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdjustedMaxSpeed", &AFGJumpingStilts::execGetAdjustedMaxSpeed },
			{ "GetAdjustedZJumpSpeed", &AFGJumpingStilts::execGetAdjustedZJumpSpeed },
			{ "GetCurrentFallSpeed", &AFGJumpingStilts::execGetCurrentFallSpeed },
			{ "GetMaxFallSpeedBeforeDamage", &AFGJumpingStilts::execGetMaxFallSpeedBeforeDamage },
			{ "GetNormalizedFallSpeedUntilDamaged", &AFGJumpingStilts::execGetNormalizedFallSpeedUntilDamaged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics
	{
		struct FGJumpingStilts_eventGetAdjustedMaxSpeed_Parms
		{
			float defaultMaxSpeed;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_defaultMaxSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGJumpingStilts_eventGetAdjustedMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::NewProp_defaultMaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "defaultMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGJumpingStilts_eventGetAdjustedMaxSpeed_Parms, defaultMaxSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::NewProp_defaultMaxSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jumping Stilts" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
		{ "ToolTip", "Is called by the MovementComponent to determine a new maximum speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJumpingStilts, "GetAdjustedMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGJumpingStilts_eventGetAdjustedMaxSpeed_Parms), Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics
	{
		struct FGJumpingStilts_eventGetAdjustedZJumpSpeed_Parms
		{
			float defaultJumpZ;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_defaultJumpZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGJumpingStilts_eventGetAdjustedZJumpSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::NewProp_defaultJumpZ = { UE4CodeGen_Private::EPropertyClass::Float, "defaultJumpZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGJumpingStilts_eventGetAdjustedZJumpSpeed_Parms, defaultJumpZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::NewProp_defaultJumpZ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jumping Stilts" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
		{ "ToolTip", "Called by the MovementComponent to determine a new JumpZ scalar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJumpingStilts, "GetAdjustedZJumpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGJumpingStilts_eventGetAdjustedZJumpSpeed_Parms), Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics
	{
		struct FGJumpingStilts_eventGetCurrentFallSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGJumpingStilts_eventGetCurrentFallSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jumping Stilts" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
		{ "ToolTip", "Returns the current movement components Z velocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJumpingStilts, "GetCurrentFallSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGJumpingStilts_eventGetCurrentFallSpeed_Parms), Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics
	{
		struct FGJumpingStilts_eventGetMaxFallSpeedBeforeDamage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGJumpingStilts_eventGetMaxFallSpeedBeforeDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jumping Stilts" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
		{ "ToolTip", "Returns the speed at which a player will now take damage when falling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJumpingStilts, "GetMaxFallSpeedBeforeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGJumpingStilts_eventGetMaxFallSpeedBeforeDamage_Parms), Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics
	{
		struct FGJumpingStilts_eventGetNormalizedFallSpeedUntilDamaged_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGJumpingStilts_eventGetNormalizedFallSpeedUntilDamaged_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jumping Stilts" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGJumpingStilts, "GetNormalizedFallSpeedUntilDamaged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGJumpingStilts_eventGetNormalizedFallSpeedUntilDamaged_Parms), Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGJumpingStilts_NoRegister()
	{
		return AFGJumpingStilts::StaticClass();
	}
	struct Z_Construct_UClass_AFGJumpingStilts_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mJumpSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mJumpSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSprintSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSprintSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFallDamageCurveOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFallDamageCurveOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGJumpingStilts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGJumpingStilts_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedMaxSpeed, "GetAdjustedMaxSpeed" }, // 1555474510
		{ &Z_Construct_UFunction_AFGJumpingStilts_GetAdjustedZJumpSpeed, "GetAdjustedZJumpSpeed" }, // 2971397933
		{ &Z_Construct_UFunction_AFGJumpingStilts_GetCurrentFallSpeed, "GetCurrentFallSpeed" }, // 1289980480
		{ &Z_Construct_UFunction_AFGJumpingStilts_GetMaxFallSpeedBeforeDamage, "GetMaxFallSpeedBeforeDamage" }, // 2647628117
		{ &Z_Construct_UFunction_AFGJumpingStilts_GetNormalizedFallSpeedUntilDamaged, "GetNormalizedFallSpeedUntilDamaged" }, // 3595756099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJumpingStilts_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGJumpingStilts.h" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mJumpSpeedFactor_MetaData[] = {
		{ "Category", "Jumping Stilts" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
		{ "ToolTip", "The factor by which the default JumpZ is multiplied while equipped" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mJumpSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "mJumpSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGJumpingStilts, mJumpSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mJumpSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mJumpSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mSprintSpeedFactor_MetaData[] = {
		{ "Category", "Jumping Stilts" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
		{ "ToolTip", "The factor by which the default sprint speed is multiplied while equipped" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mSprintSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "mSprintSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGJumpingStilts, mSprintSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mSprintSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mSprintSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mFallDamageCurveOverride_MetaData[] = {
		{ "Category", "Jumping Stilts" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
		{ "ToolTip", "The UCurveFloat to use to override the default fall damage curve" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mFallDamageCurveOverride = { UE4CodeGen_Private::EPropertyClass::Object, "mFallDamageCurveOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGJumpingStilts, mFallDamageCurveOverride), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mFallDamageCurveOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mFallDamageCurveOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGJumpingStilts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mJumpSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mSprintSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGJumpingStilts_Statics::NewProp_mFallDamageCurveOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGJumpingStilts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGJumpingStilts>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGJumpingStilts_Statics::ClassParams = {
		&AFGJumpingStilts::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGJumpingStilts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGJumpingStilts_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGJumpingStilts_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGJumpingStilts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGJumpingStilts()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGJumpingStilts_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGJumpingStilts, 966336342);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGJumpingStilts(Z_Construct_UClass_AFGJumpingStilts, &AFGJumpingStilts::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGJumpingStilts"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGJumpingStilts);
	void AFGJumpingStiltsAttachment::StaticRegisterNativesAFGJumpingStiltsAttachment()
	{
	}
	UClass* Z_Construct_UClass_AFGJumpingStiltsAttachment_NoRegister()
	{
		return AFGJumpingStiltsAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipmentAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGJumpingStilts.h" },
		{ "ModuleRelativePath", "FGJumpingStilts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGJumpingStiltsAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics::ClassParams = {
		&AFGJumpingStiltsAttachment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGJumpingStiltsAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGJumpingStiltsAttachment, 2615446667);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGJumpingStiltsAttachment(Z_Construct_UClass_AFGJumpingStiltsAttachment, &AFGJumpingStiltsAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGJumpingStiltsAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGJumpingStiltsAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
