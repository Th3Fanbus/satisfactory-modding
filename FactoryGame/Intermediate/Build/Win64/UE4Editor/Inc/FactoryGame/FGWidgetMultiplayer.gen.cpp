// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGWidgetMultiplayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWidgetMultiplayer() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWidgetMultiplayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWidgetMultiplayer();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGWidgetMultiplayer::StaticRegisterNativesUFGWidgetMultiplayer()
	{
	}
	UClass* Z_Construct_UClass_UFGWidgetMultiplayer_NoRegister()
	{
		return UFGWidgetMultiplayer::StaticClass();
	}
	struct Z_Construct_UClass_UFGWidgetMultiplayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsPlayingSatisfactory_MetaData[];
#endif
		static void NewProp_mIsPlayingSatisfactory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsPlayingSatisfactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsOnline_MetaData[];
#endif
		static void NewProp_mIsOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsOnline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWidgetMultiplayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetMultiplayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGWidgetMultiplayer.h" },
		{ "ModuleRelativePath", "UI/FGWidgetMultiplayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle_MetaData[] = {
		{ "Category", "FGWidgetMultiplayer" },
		{ "ModuleRelativePath", "UI/FGWidgetMultiplayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle = { "mTitle", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWidgetMultiplayer, mTitle), METADATA_PARAMS(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_MetaData[] = {
		{ "Category", "FGWidgetMultiplayer" },
		{ "ModuleRelativePath", "UI/FGWidgetMultiplayer.h" },
	};
#endif
	void Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_SetBit(void* Obj)
	{
		((UFGWidgetMultiplayer*)Obj)->mIsPlayingSatisfactory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory = { "mIsPlayingSatisfactory", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGWidgetMultiplayer), &Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_MetaData[] = {
		{ "Category", "FGWidgetMultiplayer" },
		{ "ModuleRelativePath", "UI/FGWidgetMultiplayer.h" },
	};
#endif
	void Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_SetBit(void* Obj)
	{
		((UFGWidgetMultiplayer*)Obj)->mIsOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline = { "mIsOnline", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGWidgetMultiplayer), &Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGWidgetMultiplayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWidgetMultiplayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGWidgetMultiplayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::ClassParams = {
		&UFGWidgetMultiplayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGWidgetMultiplayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWidgetMultiplayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWidgetMultiplayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWidgetMultiplayer, 807431134);
	template<> FACTORYGAME_API UClass* StaticClass<UFGWidgetMultiplayer>()
	{
		return UFGWidgetMultiplayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWidgetMultiplayer(Z_Construct_UClass_UFGWidgetMultiplayer, &UFGWidgetMultiplayer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWidgetMultiplayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWidgetMultiplayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
