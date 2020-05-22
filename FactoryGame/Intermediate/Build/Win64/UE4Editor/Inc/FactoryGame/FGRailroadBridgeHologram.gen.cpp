// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGRailroadBridgeHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadBridgeHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadBridgeHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadBridgeHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplineHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFoundation_NoRegister();
// End Cross Module References
	void AFGRailroadBridgeHologram::StaticRegisterNativesAFGRailroadBridgeHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGRailroadBridgeHologram_NoRegister()
	{
		return AFGRailroadBridgeHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGRailroadBridgeHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedFoundation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedFoundation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSplineHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGRailroadBridgeHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadBridgeHologram.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::NewProp_mSnappedFoundation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadBridgeHologram.h" },
		{ "ToolTip", "Where we snapped." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::NewProp_mSnappedFoundation = { "mSnappedFoundation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mSnappedFoundation, AFGRailroadBridgeHologram), STRUCT_OFFSET(AFGRailroadBridgeHologram, mSnappedFoundation), Z_Construct_UClass_AFGBuildableFoundation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::NewProp_mSnappedFoundation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::NewProp_mSnappedFoundation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::NewProp_mSnappedFoundation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRailroadBridgeHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::ClassParams = {
		&AFGRailroadBridgeHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRailroadBridgeHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRailroadBridgeHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRailroadBridgeHologram, 4179439107);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRailroadBridgeHologram>()
	{
		return AFGRailroadBridgeHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRailroadBridgeHologram(Z_Construct_UClass_AFGRailroadBridgeHologram, &AFGRailroadBridgeHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRailroadBridgeHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRailroadBridgeHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
