// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGConveyorAttachmentHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConveyorAttachmentHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorAttachmentHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorAttachmentHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBelt_NoRegister();
// End Cross Module References
	void AFGConveyorAttachmentHologram::StaticRegisterNativesAFGConveyorAttachmentHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGConveyorAttachmentHologram_NoRegister()
	{
		return AFGConveyorAttachmentHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedConection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedConection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedConveyor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedConveyor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxValidTurnAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxValidTurnAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxValidTurnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxValidTurnOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFactoryHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGConveyorAttachmentHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorAttachmentHologram.h" },
		{ "ToolTip", "Hologram for conveyor attachments, such as splitters/mergers." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorAttachmentHologram.h" },
		{ "ToolTip", "The connection we snapped to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConection = { "mSnappedConection", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorAttachmentHologram, mSnappedConection), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorAttachmentHologram.h" },
		{ "ToolTip", "The conveyor we snapped to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor = { "mSnappedConveyor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorAttachmentHologram, mSnappedConveyor), Z_Construct_UClass_AFGBuildableConveyorBelt_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle_MetaData[] = {
		{ "Category", "Conveyor Attachment" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorAttachmentHologram.h" },
		{ "ToolTip", "Used to limit the placement in turns. What's the maximum angle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle = { "mMaxValidTurnAngle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorAttachmentHologram, mMaxValidTurnAngle), METADATA_PARAMS(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset_MetaData[] = {
		{ "Category", "Conveyor Attachment" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorAttachmentHologram.h" },
		{ "ToolTip", "Used to limit the placement in turns. What's the maximum offset to check from center to detect the curve." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset = { "mMaxValidTurnOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorAttachmentHologram, mMaxValidTurnOffset), METADATA_PARAMS(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGConveyorAttachmentHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::ClassParams = {
		&AFGConveyorAttachmentHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGConveyorAttachmentHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGConveyorAttachmentHologram, 1524772183);
	template<> FACTORYGAME_API UClass* StaticClass<AFGConveyorAttachmentHologram>()
	{
		return AFGConveyorAttachmentHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGConveyorAttachmentHologram(Z_Construct_UClass_AFGConveyorAttachmentHologram, &AFGConveyorAttachmentHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGConveyorAttachmentHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGConveyorAttachmentHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
