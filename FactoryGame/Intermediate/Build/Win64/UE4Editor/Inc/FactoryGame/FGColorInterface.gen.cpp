// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGColorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGColorInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColorInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_GetCanBeColored();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_GetColorSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_SetColorSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor();
// End Cross Module References
	bool IFGColorInterface::GetCanBeColored()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCanBeColored instead.");
		FGColorInterface_eventGetCanBeColored_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IFGColorInterface::GetColorSlot()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetColorSlot instead.");
		FGColorInterface_eventGetColorSlot_Parms Parms;
		return Parms.ReturnValue;
	}
	FLinearColor IFGColorInterface::GetPrimaryColor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPrimaryColor instead.");
		FGColorInterface_eventGetPrimaryColor_Parms Parms;
		return Parms.ReturnValue;
	}
	FLinearColor IFGColorInterface::GetSecondaryColor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSecondaryColor instead.");
		FGColorInterface_eventGetSecondaryColor_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGColorInterface::SetColorSlot(uint8 index)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetColorSlot instead.");
	}
	void IFGColorInterface::StartIsAimedAtForColor(AFGCharacterPlayer* byCharacter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartIsAimedAtForColor instead.");
	}
	void IFGColorInterface::StopIsAimedAtForColor(AFGCharacterPlayer* byCharacter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopIsAimedAtForColor instead.");
	}
	void UFGColorInterface::StaticRegisterNativesUFGColorInterface()
	{
		UClass* Class = UFGColorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanBeColored", &IFGColorInterface::execGetCanBeColored },
			{ "GetColorSlot", &IFGColorInterface::execGetColorSlot },
			{ "GetPrimaryColor", &IFGColorInterface::execGetPrimaryColor },
			{ "GetSecondaryColor", &IFGColorInterface::execGetSecondaryColor },
			{ "SetColorSlot", &IFGColorInterface::execSetColorSlot },
			{ "StartIsAimedAtForColor", &IFGColorInterface::execStartIsAimedAtForColor },
			{ "StopIsAimedAtForColor", &IFGColorInterface::execStopIsAimedAtForColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGColorInterface_eventGetCanBeColored_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGColorInterface_eventGetCanBeColored_Parms), &Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Returns wherther the building can be colored right now or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, nullptr, "GetCanBeColored", sizeof(FGColorInterface_eventGetCanBeColored_Parms), Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_GetCanBeColored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorInterface_eventGetColorSlot_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Returns the color slot index of this building" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, nullptr, "GetColorSlot", sizeof(FGColorInterface_eventGetColorSlot_Parms), Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_GetColorSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorInterface_eventGetPrimaryColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Returns the primary color of this building" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, nullptr, "GetPrimaryColor", sizeof(FGColorInterface_eventGetPrimaryColor_Parms), Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorInterface_eventGetSecondaryColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Returns the primary color of this building" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, nullptr, "GetSecondaryColor", sizeof(FGColorInterface_eventGetSecondaryColor_Parms), Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorInterface_eventSetColorSlot_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Sets the color slot for the buildable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, nullptr, "SetColorSlot", sizeof(FGColorInterface_eventSetColorSlot_Parms), Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_SetColorSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorInterface_eventStartIsAimedAtForColor_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Called on by the interface if we are looking at something that's useable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, nullptr, "StartIsAimedAtForColor", sizeof(FGColorInterface_eventStartIsAimedAtForColor_Parms), Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorInterface_eventStopIsAimedAtForColor_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Called when we stop looking at the item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, nullptr, "StopIsAimedAtForColor", sizeof(FGColorInterface_eventStopIsAimedAtForColor_Parms), Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGColorInterface_NoRegister()
	{
		return UFGColorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGColorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGColorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGColorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGColorInterface_GetCanBeColored, "GetCanBeColored" }, // 3011003360
		{ &Z_Construct_UFunction_UFGColorInterface_GetColorSlot, "GetColorSlot" }, // 1625478900
		{ &Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor, "GetPrimaryColor" }, // 1509126815
		{ &Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor, "GetSecondaryColor" }, // 3609883712
		{ &Z_Construct_UFunction_UFGColorInterface_SetColorSlot, "SetColorSlot" }, // 1341159115
		{ &Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor, "StartIsAimedAtForColor" }, // 3535004603
		{ &Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor, "StopIsAimedAtForColor" }, // 1315259319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGColorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGColorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGColorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGColorInterface_Statics::ClassParams = {
		&UFGColorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGColorInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGColorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGColorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGColorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGColorInterface, 2063434147);
	template<> FACTORYGAME_API UClass* StaticClass<UFGColorInterface>()
	{
		return UFGColorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGColorInterface(Z_Construct_UClass_UFGColorInterface, &UFGColorInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGColorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGColorInterface);
	static FName NAME_UFGColorInterface_GetCanBeColored = FName(TEXT("GetCanBeColored"));
	bool IFGColorInterface::Execute_GetCanBeColored(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventGetCanBeColored_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_GetCanBeColored);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCanBeColored_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGColorInterface_GetColorSlot = FName(TEXT("GetColorSlot"));
	uint8 IFGColorInterface::Execute_GetColorSlot(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventGetColorSlot_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_GetColorSlot);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetColorSlot_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGColorInterface_GetPrimaryColor = FName(TEXT("GetPrimaryColor"));
	FLinearColor IFGColorInterface::Execute_GetPrimaryColor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventGetPrimaryColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_GetPrimaryColor);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPrimaryColor_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGColorInterface_GetSecondaryColor = FName(TEXT("GetSecondaryColor"));
	FLinearColor IFGColorInterface::Execute_GetSecondaryColor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventGetSecondaryColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_GetSecondaryColor);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSecondaryColor_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGColorInterface_SetColorSlot = FName(TEXT("SetColorSlot"));
	void IFGColorInterface::Execute_SetColorSlot(UObject* O, uint8 index)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventSetColorSlot_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_SetColorSlot);
		if (Func)
		{
			Parms.index=index;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			I->SetColorSlot_Implementation(index);
		}
	}
	static FName NAME_UFGColorInterface_StartIsAimedAtForColor = FName(TEXT("StartIsAimedAtForColor"));
	void IFGColorInterface::Execute_StartIsAimedAtForColor(UObject* O, AFGCharacterPlayer* byCharacter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventStartIsAimedAtForColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_StartIsAimedAtForColor);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			I->StartIsAimedAtForColor_Implementation(byCharacter);
		}
	}
	static FName NAME_UFGColorInterface_StopIsAimedAtForColor = FName(TEXT("StopIsAimedAtForColor"));
	void IFGColorInterface::Execute_StopIsAimedAtForColor(UObject* O, AFGCharacterPlayer* byCharacter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventStopIsAimedAtForColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_StopIsAimedAtForColor);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			I->StopIsAimedAtForColor_Implementation(byCharacter);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
