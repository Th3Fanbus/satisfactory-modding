// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGHealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGHealthComponent() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHealthComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_Died();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_Heal();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_Heal();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_IsDead();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_Kill();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_ResetHealth();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_ResetHealthFromDeath();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_ReviveResetHealth();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_TakeDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_TakePointDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventHealDelegate_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventHealDelegate_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "HealDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventHealDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventAdjustDamageDelegate_Parms
		{
			AActor* damagedActor;
			float damageAmount;
			const UDamageType* damageType;
			AController* instigatedBy;
			AActor* damageCauser;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventAdjustDamageDelegate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventAdjustDamageDelegate_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventAdjustDamageDelegate_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventAdjustDamageDelegate_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventAdjustDamageDelegate_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventAdjustDamageDelegate_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "AdjustDamageDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventAdjustDamageDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventTakeAnyDamageDelegate_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventTakeAnyDamageDelegate_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventTakeAnyDamageDelegate_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventTakeAnyDamageDelegate_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventTakeAnyDamageDelegate_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventTakeAnyDamageDelegate_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "TakeAnyDamageDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventTakeAnyDamageDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventDeathDelegate_Parms
		{
			AActor* DeadActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeadActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::NewProp_DeadActor = { "DeadActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventDeathDelegate_Parms, DeadActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::NewProp_DeadActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "DeathDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventDeathDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UFGHealthComponent_Client_Died = FName(TEXT("Client_Died"));
	void UFGHealthComponent::Client_Died(AActor* deadActor)
	{
		FGHealthComponent_eventClient_Died_Parms Parms;
		Parms.deadActor=deadActor;
		ProcessEvent(FindFunctionChecked(NAME_UFGHealthComponent_Client_Died),&Parms);
	}
	static FName NAME_UFGHealthComponent_Client_Heal = FName(TEXT("Client_Heal"));
	void UFGHealthComponent::Client_Heal(float amount)
	{
		FGHealthComponent_eventClient_Heal_Parms Parms;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_UFGHealthComponent_Client_Heal),&Parms);
	}
	static FName NAME_UFGHealthComponent_Client_TakeDamage = FName(TEXT("Client_TakeDamage"));
	void UFGHealthComponent::Client_TakeDamage(AActor* damagedActor, float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser)
	{
		FGHealthComponent_eventClient_TakeDamage_Parms Parms;
		Parms.damagedActor=damagedActor;
		Parms.damageAmount=damageAmount;
		Parms.damageType=damageType;
		Parms.instigatedBy=instigatedBy;
		Parms.damageCauser=damageCauser;
		ProcessEvent(FindFunctionChecked(NAME_UFGHealthComponent_Client_TakeDamage),&Parms);
	}
	static FName NAME_UFGHealthComponent_Client_TakePointDamage = FName(TEXT("Client_TakePointDamage"));
	void UFGHealthComponent::Client_TakePointDamage(AActor* damagedActor, float damage, AController* instigatedBy, FVector hitLocation, UPrimitiveComponent* hitComponent, FName boneName, FVector shotFromDirection, const UDamageType* damageType, AActor* damageCauser)
	{
		FGHealthComponent_eventClient_TakePointDamage_Parms Parms;
		Parms.damagedActor=damagedActor;
		Parms.damage=damage;
		Parms.instigatedBy=instigatedBy;
		Parms.hitLocation=hitLocation;
		Parms.hitComponent=hitComponent;
		Parms.boneName=boneName;
		Parms.shotFromDirection=shotFromDirection;
		Parms.damageType=damageType;
		Parms.damageCauser=damageCauser;
		ProcessEvent(FindFunctionChecked(NAME_UFGHealthComponent_Client_TakePointDamage),&Parms);
	}
	static FName NAME_UFGHealthComponent_Client_TakeRadialDamage = FName(TEXT("Client_TakeRadialDamage"));
	void UFGHealthComponent::Client_TakeRadialDamage(AActor* damagedActor, float damage, const UDamageType* damageType, FVector hitLocation, FHitResult hitInfo, AController* instigatedBy, AActor* damageCauser)
	{
		FGHealthComponent_eventClient_TakeRadialDamage_Parms Parms;
		Parms.damagedActor=damagedActor;
		Parms.damage=damage;
		Parms.damageType=damageType;
		Parms.hitLocation=hitLocation;
		Parms.hitInfo=hitInfo;
		Parms.instigatedBy=instigatedBy;
		Parms.damageCauser=damageCauser;
		ProcessEvent(FindFunctionChecked(NAME_UFGHealthComponent_Client_TakeRadialDamage),&Parms);
	}
	void UFGHealthComponent::StaticRegisterNativesUFGHealthComponent()
	{
		UClass* Class = UFGHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAdjustDamageListener", &UFGHealthComponent::execAddAdjustDamageListener },
			{ "Client_Died", &UFGHealthComponent::execClient_Died },
			{ "Client_Heal", &UFGHealthComponent::execClient_Heal },
			{ "Client_TakeDamage", &UFGHealthComponent::execClient_TakeDamage },
			{ "Client_TakePointDamage", &UFGHealthComponent::execClient_TakePointDamage },
			{ "Client_TakeRadialDamage", &UFGHealthComponent::execClient_TakeRadialDamage },
			{ "GetCurrentHealth", &UFGHealthComponent::execGetCurrentHealth },
			{ "GetMaxHealth", &UFGHealthComponent::execGetMaxHealth },
			{ "Heal", &UFGHealthComponent::execHeal },
			{ "IsDead", &UFGHealthComponent::execIsDead },
			{ "Kill", &UFGHealthComponent::execKill },
			{ "RemoveAdjustDamageListener", &UFGHealthComponent::execRemoveAdjustDamageListener },
			{ "ResetHealth", &UFGHealthComponent::execResetHealth },
			{ "ResetHealthFromDeath", &UFGHealthComponent::execResetHealthFromDeath },
			{ "ReviveResetHealth", &UFGHealthComponent::execReviveResetHealth },
			{ "TakeDamage", &UFGHealthComponent::execTakeDamage },
			{ "TakePointDamage", &UFGHealthComponent::execTakePointDamage },
			{ "TakeRadialDamage", &UFGHealthComponent::execTakeRadialDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics
	{
		struct FGHealthComponent_eventAddAdjustDamageListener_Parms
		{
			FScriptDelegate adjustDamage;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_adjustDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::NewProp_adjustDamage = { "adjustDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventAddAdjustDamageListener_Parms, adjustDamage), Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::NewProp_adjustDamage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Add a listener for when we take damage. Last added listener will be called first if multiple is added\nThe return value of the listener will be the adjusted damage and is passed on to the next listener that\nget the call" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "AddAdjustDamageListener", sizeof(FGHealthComponent_eventAddAdjustDamageListener_Parms), Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deadActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::NewProp_deadActor = { "deadActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_Died_Parms, deadActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::NewProp_deadActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "Client_Died", sizeof(FGHealthComponent_eventClient_Died_Parms), Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_Died()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_Client_Died_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_Heal_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "Client_Heal", sizeof(FGHealthComponent_eventClient_Heal_Parms), Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_Client_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "Client_TakeDamage", sizeof(FGHealthComponent_eventClient_TakeDamage_Parms), Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shotFromDirection;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakePointDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakePointDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_shotFromDirection = { "shotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakePointDamage_Parms, shotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakePointDamage_Parms, boneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakePointDamage_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_hitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_hitLocation = { "hitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakePointDamage_Parms, hitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakePointDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakePointDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakePointDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_shotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_boneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_hitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_hitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "Client_TakePointDamage", sizeof(FGHealthComponent_eventClient_TakePointDamage_Parms), Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeRadialDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeRadialDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_hitInfo = { "hitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeRadialDamage_Parms, hitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_hitLocation = { "hitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeRadialDamage_Parms, hitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeRadialDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeRadialDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventClient_TakeRadialDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_hitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_hitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "Client_TakeRadialDamage", sizeof(FGHealthComponent_eventClient_TakeRadialDamage_Parms), Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics
	{
		struct FGHealthComponent_eventGetCurrentHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Gets our current health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "GetCurrentHealth", sizeof(FGHealthComponent_eventGetCurrentHealth_Parms), Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics
	{
		struct FGHealthComponent_eventGetMaxHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Gets our current health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "GetMaxHealth", sizeof(FGHealthComponent_eventGetMaxHealth_Parms), Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_Heal_Statics
	{
		struct FGHealthComponent_eventHeal_Parms
		{
			float healAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::NewProp_healAmount = { "healAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventHeal_Parms, healAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::NewProp_healAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "Heal", sizeof(FGHealthComponent_eventHeal_Parms), Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics
	{
		struct FGHealthComponent_eventIsDead_Parms
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
	void Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHealthComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHealthComponent_eventIsDead_Parms), &Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "@return true if our owner is dead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "IsDead", sizeof(FGHealthComponent_eventIsDead_Parms), Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_Kill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_Kill_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Instantly kill, bypass AdjustDamage event. Will trigger DeathDelegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_Kill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "Kill", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_Kill_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_Kill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_Kill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_Kill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics
	{
		struct FGHealthComponent_eventRemoveAdjustDamageListener_Parms
		{
			FScriptDelegate adjustDamage;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_adjustDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::NewProp_adjustDamage = { "adjustDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventRemoveAdjustDamageListener_Parms, adjustDamage), Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::NewProp_adjustDamage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Remove a listener of damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "RemoveAdjustDamageListener", sizeof(FGHealthComponent_eventRemoveAdjustDamageListener_Parms), Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_ResetHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_ResetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_ResetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "ResetHealth", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_ResetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_ResetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_ResetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_ResetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_ResetHealthFromDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_ResetHealthFromDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_ResetHealthFromDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "ResetHealthFromDeath", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_ResetHealthFromDeath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_ResetHealthFromDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_ResetHealthFromDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_ResetHealthFromDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_ReviveResetHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_ReviveResetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_ReviveResetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "ReviveResetHealth", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_ReviveResetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_ReviveResetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_ReviveResetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_ReviveResetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics
	{
		struct FGHealthComponent_eventTakeDamage_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Apply damage to this actor.\n@see https://www.unrealengine.com/blog/damage-in-ue4\n@param DamageAmount           How much damage to apply\n@param DamageType                     Damage type of the damage\n@param InstigatedBy           The Controller responsible for the damage.\n@param DamageCauser           The Actor that directly caused the damage (e.g. the projectile that exploded, the rock that landed on you)\n@return                                       The amount of damage actually applied." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "TakeDamage", sizeof(FGHealthComponent_eventTakeDamage_Parms), Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics
	{
		struct FGHealthComponent_eventTakePointDamage_Parms
		{
			AActor* damagedActor;
			float damage;
			AController* instigatedBy;
			FVector hitLocation;
			UPrimitiveComponent* hitComponent;
			FName boneName;
			FVector shotFromDirection;
			const UDamageType* damageType;
			AActor* damageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shotFromDirection;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakePointDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakePointDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_shotFromDirection = { "shotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakePointDamage_Parms, shotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakePointDamage_Parms, boneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakePointDamage_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_hitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_hitLocation = { "hitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakePointDamage_Parms, hitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakePointDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakePointDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakePointDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_shotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_boneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_hitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_hitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "TakePointDamage", sizeof(FGHealthComponent_eventTakePointDamage_Parms), Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_TakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_TakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics
	{
		struct FGHealthComponent_eventTakeRadialDamage_Parms
		{
			AActor* damagedActor;
			float damage;
			const UDamageType* damageType;
			FVector hitLocation;
			FHitResult hitInfo;
			AController* instigatedBy;
			AActor* damageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeRadialDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeRadialDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_hitInfo = { "hitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeRadialDamage_Parms, hitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_hitLocation = { "hitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeRadialDamage_Parms, hitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeRadialDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeRadialDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHealthComponent_eventTakeRadialDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_hitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_hitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHealthComponent, nullptr, "TakeRadialDamage", sizeof(FGHealthComponent_eventTakeRadialDamage_Parms), Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGHealthComponent_NoRegister()
	{
		return UFGHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicateDeathEvents_MetaData[];
#endif
		static void NewProp_mReplicateDeathEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mReplicateDeathEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicateDamageEvents_MetaData[];
#endif
		static void NewProp_mReplicateDamageEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mReplicateDamageEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsDead_MetaData[];
#endif
		static void NewProp_mIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRespawnHealthFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRespawnHealthFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnAdjustDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mOnAdjustDamage;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_mOnAdjustDamage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HealDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeathDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTakeRadialDamageDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakeRadialDamageDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTakePointDamageDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakePointDamageDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTakeAnyDamageDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakeAnyDamageDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGHealthComponent_AddAdjustDamageListener, "AddAdjustDamageListener" }, // 3489541546
		{ &Z_Construct_UFunction_UFGHealthComponent_Client_Died, "Client_Died" }, // 2921420481
		{ &Z_Construct_UFunction_UFGHealthComponent_Client_Heal, "Client_Heal" }, // 670501970
		{ &Z_Construct_UFunction_UFGHealthComponent_Client_TakeDamage, "Client_TakeDamage" }, // 318617102
		{ &Z_Construct_UFunction_UFGHealthComponent_Client_TakePointDamage, "Client_TakePointDamage" }, // 3154087144
		{ &Z_Construct_UFunction_UFGHealthComponent_Client_TakeRadialDamage, "Client_TakeRadialDamage" }, // 3010386388
		{ &Z_Construct_UFunction_UFGHealthComponent_GetCurrentHealth, "GetCurrentHealth" }, // 2699078571
		{ &Z_Construct_UFunction_UFGHealthComponent_GetMaxHealth, "GetMaxHealth" }, // 1461400429
		{ &Z_Construct_UFunction_UFGHealthComponent_Heal, "Heal" }, // 71218542
		{ &Z_Construct_UFunction_UFGHealthComponent_IsDead, "IsDead" }, // 1833136680
		{ &Z_Construct_UFunction_UFGHealthComponent_Kill, "Kill" }, // 9930734
		{ &Z_Construct_UFunction_UFGHealthComponent_RemoveAdjustDamageListener, "RemoveAdjustDamageListener" }, // 1480533951
		{ &Z_Construct_UFunction_UFGHealthComponent_ResetHealth, "ResetHealth" }, // 804152358
		{ &Z_Construct_UFunction_UFGHealthComponent_ResetHealthFromDeath, "ResetHealthFromDeath" }, // 2869370464
		{ &Z_Construct_UFunction_UFGHealthComponent_ReviveResetHealth, "ReviveResetHealth" }, // 334257967
		{ &Z_Construct_UFunction_UFGHealthComponent_TakeDamage, "TakeDamage" }, // 3843590591
		{ &Z_Construct_UFunction_UFGHealthComponent_TakePointDamage, "TakePointDamage" }, // 3623069688
		{ &Z_Construct_UFunction_UFGHealthComponent_TakeRadialDamage, "TakeRadialDamage" }, // 207888197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGHealthComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDeathEvents_MetaData[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "If true, then the client will trigger the following event: DeathDelegate" },
	};
#endif
	void Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDeathEvents_SetBit(void* Obj)
	{
		((UFGHealthComponent*)Obj)->mReplicateDeathEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDeathEvents = { "mReplicateDeathEvents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFGHealthComponent), &Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDeathEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDeathEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDeathEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDamageEvents_MetaData[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "If true, then the client will trigger the following events: OnTakeAnyDamageDelegate, OnTakePointDamageDelegate, OnTakeRadialDamageDelegate" },
	};
#endif
	void Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDamageEvents_SetBit(void* Obj)
	{
		((UFGHealthComponent*)Obj)->mReplicateDamageEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDamageEvents = { "mReplicateDamageEvents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFGHealthComponent), &Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDamageEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDamageEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDamageEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mIsDead_MetaData[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "If true, then we are dead. This is replicated to clients and they get the death event based on this." },
	};
#endif
	void Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mIsDead_SetBit(void* Obj)
	{
		((UFGHealthComponent*)Obj)->mIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mIsDead = { "mIsDead", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFGHealthComponent), &Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mIsDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mRespawnHealthFactor_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Scale of max health to use when respawning" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mRespawnHealthFactor = { "mRespawnHealthFactor", nullptr, (EPropertyFlags)0x0020080001010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHealthComponent, mRespawnHealthFactor), METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mRespawnHealthFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mRespawnHealthFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mCurrentHealth_MetaData[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Our current health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mCurrentHealth = { "mCurrentHealth", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHealthComponent, mCurrentHealth), METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mCurrentHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mCurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mMaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Our maximum health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mMaxHealth = { "mMaxHealth", nullptr, (EPropertyFlags)0x0020080001010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHealthComponent, mMaxHealth), METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mMaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mMaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mOnAdjustDamage_MetaData[] = {
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "Interested listeners for the adjust damage delegates" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mOnAdjustDamage = { "mOnAdjustDamage", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHealthComponent, mOnAdjustDamage), METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mOnAdjustDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mOnAdjustDamage_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mOnAdjustDamage_Inner = { "mOnAdjustDamage", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UDelegateFunction_FactoryGame_AdjustDamageDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_HealDelegate_MetaData[] = {
		{ "Category", "Events|Health" },
		{ "DisplayName", "OnHeal" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_HealDelegate = { "HealDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHealthComponent, HealDelegate), Z_Construct_UDelegateFunction_FactoryGame_HealDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_HealDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_HealDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_DeathDelegate_MetaData[] = {
		{ "Category", "Events|Health" },
		{ "DisplayName", "OnDeath" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
		{ "ToolTip", "SERVER ONLY: Called when we die" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_DeathDelegate = { "DeathDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHealthComponent, DeathDelegate), Z_Construct_UDelegateFunction_FactoryGame_DeathDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_DeathDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_DeathDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeRadialDamageDelegate_MetaData[] = {
		{ "Category", "Events|Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeRadialDamageDelegate = { "OnTakeRadialDamageDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHealthComponent, OnTakeRadialDamageDelegate), Z_Construct_UDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeRadialDamageDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeRadialDamageDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakePointDamageDelegate_MetaData[] = {
		{ "Category", "Events|Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakePointDamageDelegate = { "OnTakePointDamageDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHealthComponent, OnTakePointDamageDelegate), Z_Construct_UDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakePointDamageDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakePointDamageDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeAnyDamageDelegate_MetaData[] = {
		{ "Category", "Events|Health" },
		{ "ModuleRelativePath", "FGHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeAnyDamageDelegate = { "OnTakeAnyDamageDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGHealthComponent, OnTakeAnyDamageDelegate), Z_Construct_UDelegateFunction_FactoryGame_TakeAnyDamageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeAnyDamageDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeAnyDamageDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDeathEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mReplicateDamageEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mRespawnHealthFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mCurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mMaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mOnAdjustDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_mOnAdjustDamage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_HealDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_DeathDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeRadialDamageDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakePointDamageDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGHealthComponent_Statics::NewProp_OnTakeAnyDamageDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGHealthComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(UFGHealthComponent, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGHealthComponent_Statics::ClassParams = {
		&UFGHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGHealthComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGHealthComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGHealthComponent, 3684580773);
	template<> FACTORYGAME_API UClass* StaticClass<UFGHealthComponent>()
	{
		return UFGHealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGHealthComponent(Z_Construct_UClass_UFGHealthComponent, &UFGHealthComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
