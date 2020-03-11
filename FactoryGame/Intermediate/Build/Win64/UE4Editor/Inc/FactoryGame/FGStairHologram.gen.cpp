// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGStairHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGStairHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGStairHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGStairHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoundationHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGStairHologram::StaticRegisterNativesAFGStairHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGStairHologram_NoRegister()
	{
		return AFGStairHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGStairHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGStairHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFoundationHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGStairHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGStairHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGStairHologram.h" },
		{ "ToolTip", "Hologram for stairs." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGStairHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGStairHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGStairHologram_Statics::ClassParams = {
		&AFGStairHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGStairHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGStairHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGStairHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGStairHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGStairHologram, 584323752);
	template<> FACTORYGAME_API UClass* StaticClass<AFGStairHologram>()
	{
		return AFGStairHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGStairHologram(Z_Construct_UClass_AFGStairHologram, &AFGStairHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGStairHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGStairHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
