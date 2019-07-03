// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGBuildingDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildingDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildingDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildingDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction();
// End Cross Module References
	void UFGBuildingDescriptor::StaticRegisterNativesUFGBuildingDescriptor()
	{
		UClass* Class = UFGBuildingDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBuildableClass", &UFGBuildingDescriptor::execGetBuildableClass },
			{ "GetPowerConsumption", &UFGBuildingDescriptor::execGetPowerConsumption },
			{ "GetPowerProduction", &UFGBuildingDescriptor::execGetPowerProduction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics
	{
		struct FGBuildingDescriptor_eventGetBuildableClass_Parms
		{
			TSubclassOf<UFGBuildingDescriptor>  inClass;
			TSubclassOf<AFGBuildable>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildingDescriptor_eventGetBuildableClass_Parms, ReturnValue), Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildingDescriptor_eventGetBuildableClass_Parms, inClass), Z_Construct_UClass_UFGBuildingDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Building" },
		{ "ModuleRelativePath", "Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "Get the buildable class for this building descriptor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildingDescriptor, "GetBuildableClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGBuildingDescriptor_eventGetBuildableClass_Parms), Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics
	{
		struct FGBuildingDescriptor_eventGetPowerConsumption_Parms
		{
			TSubclassOf<UFGBuildingDescriptor>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildingDescriptor_eventGetPowerConsumption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildingDescriptor_eventGetPowerConsumption_Parms, inClass), Z_Construct_UClass_UFGBuildingDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Building" },
		{ "ModuleRelativePath", "Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "Get the the power consumption of buildable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildingDescriptor, "GetPowerConsumption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGBuildingDescriptor_eventGetPowerConsumption_Parms), Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics
	{
		struct FGBuildingDescriptor_eventGetPowerProduction_Parms
		{
			TSubclassOf<UFGBuildingDescriptor>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildingDescriptor_eventGetPowerProduction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildingDescriptor_eventGetPowerProduction_Parms, inClass), Z_Construct_UClass_UFGBuildingDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Building" },
		{ "ModuleRelativePath", "Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "Get the the power production of buildable, 0 for non-producers." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildingDescriptor, "GetPowerProduction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGBuildingDescriptor_eventGetPowerProduction_Parms), Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGBuildingDescriptor_NoRegister()
	{
		return UFGBuildingDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGBuildingDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mBuildableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGBuildingDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBuildDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGBuildingDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass, "GetBuildableClass" }, // 3116856466
		{ &Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption, "GetPowerConsumption" }, // 263058599
		{ &Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction, "GetPowerProduction" }, // 1023899857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildingDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGBuildingDescriptor.h" },
		{ "ModuleRelativePath", "Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "Build descriptor for buildables." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "The class to build." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass = { UE4CodeGen_Private::EPropertyClass::Class, "mBuildableClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGBuildingDescriptor, mBuildableClass), Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGBuildingDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGBuildingDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGBuildingDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGBuildingDescriptor_Statics::ClassParams = {
		&UFGBuildingDescriptor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGBuildingDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGBuildingDescriptor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGBuildingDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGBuildingDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGBuildingDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGBuildingDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGBuildingDescriptor, 3341168559);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGBuildingDescriptor(Z_Construct_UClass_UFGBuildingDescriptor, &UFGBuildingDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGBuildingDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGBuildingDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
