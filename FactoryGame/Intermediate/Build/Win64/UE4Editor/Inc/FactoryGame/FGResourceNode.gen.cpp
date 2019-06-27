// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGResourceNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResourceNode() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResourcePurity();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResourceAmount();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPurityTextPair();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_NodeFullInventory_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_NodeFullInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_NonConveyorResource_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_NonConveyorResource();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_ClearWidget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_GetResoucePurity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_GetResourceAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_GetResourceClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_GetResourceName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_HasAnyResources();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_InitResource();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_IsOccupied();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_OnRep_IsOccupied();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_SetIsOccupied();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
	static UEnum* EResourcePurity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EResourcePurity, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EResourcePurity"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResourcePurity(EResourcePurity_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EResourcePurity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EResourcePurity_CRC() { return 474107692U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EResourcePurity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResourcePurity"), 0, Get_Z_Construct_UEnum_FactoryGame_EResourcePurity_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RP_Inpure", (int64)RP_Inpure },
				{ "RP_Normal", (int64)RP_Normal },
				{ "RP_Pure", (int64)RP_Pure },
				{ "RP_MAX", (int64)RP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
				{ "RP_Inpure.DisplayName", "Impure" },
				{ "RP_MAX.Hidden", "" },
				{ "RP_Normal.DisplayName", "Normal" },
				{ "RP_Pure.DisplayName", "Pure" },
				{ "ToolTip", "How how fast it is to mine the resource" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EResourcePurity",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EResourcePurity",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EResourceAmount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EResourceAmount, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EResourceAmount"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResourceAmount(EResourceAmount_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EResourceAmount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EResourceAmount_CRC() { return 1354748327U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EResourceAmount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResourceAmount"), 0, Get_Z_Construct_UEnum_FactoryGame_EResourceAmount_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RA_Poor", (int64)RA_Poor },
				{ "RA_Normal", (int64)RA_Normal },
				{ "RA_Rich", (int64)RA_Rich },
				{ "RA_Infinite", (int64)RA_Infinite },
				{ "RA_MAX", (int64)RA_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
				{ "RA_Infinite.DisplayName", "Infinite" },
				{ "RA_MAX.Hidden", "" },
				{ "RA_Normal.DisplayName", "Normal" },
				{ "RA_Poor.DisplayName", "Poor" },
				{ "RA_Rich.DisplayName", "Rich" },
				{ "ToolTip", "How much resources this node contains, a rich vein will deplete later" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EResourceAmount",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EResourceAmount",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPurityTextPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPurityTextPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurityTextPair, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PurityTextPair"), sizeof(FPurityTextPair), Get_Z_Construct_UScriptStruct_FPurityTextPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPurityTextPair(FPurityTextPair::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PurityTextPair"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPurityTextPair
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPurityTextPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PurityTextPair")),new UScriptStruct::TCppStructOps<FPurityTextPair>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPurityTextPair;
	struct Z_Construct_UScriptStruct_FPurityTextPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Purity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Purity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurityTextPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurityTextPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Purity_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Enum to localize" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Purity = { UE4CodeGen_Private::EPropertyClass::Byte, "Purity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FPurityTextPair, Purity), Z_Construct_UEnum_FactoryGame_EResourcePurity, METADATA_PARAMS(Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Purity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Purity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Localizable text" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FPurityTextPair, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurityTextPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Purity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurityTextPair_Statics::NewProp_Text,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurityTextPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PurityTextPair",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPurityTextPair),
		alignof(FPurityTextPair),
		Z_Construct_UScriptStruct_FPurityTextPair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurityTextPair_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurityTextPair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurityTextPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurityTextPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPurityTextPair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PurityTextPair"), sizeof(FPurityTextPair), Get_Z_Construct_UScriptStruct_FPurityTextPair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPurityTextPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPurityTextPair_CRC() { return 2480001369U; }
	void UFGUseState_NodeFullInventory::StaticRegisterNativesUFGUseState_NodeFullInventory()
	{
	}
	UClass* Z_Construct_UClass_UFGUseState_NodeFullInventory_NoRegister()
	{
		return UFGUseState_NodeFullInventory::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseState_NodeFullInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseState_NodeFullInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGUseState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_NodeFullInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Resources/FGResourceNode.h" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Use state when inventory of player looking at the node has a full inventory" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseState_NodeFullInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGUseState_NodeFullInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseState_NodeFullInventory_Statics::ClassParams = {
		&UFGUseState_NodeFullInventory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseState_NodeFullInventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_NodeFullInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseState_NodeFullInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseState_NodeFullInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseState_NodeFullInventory, 198863983);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseState_NodeFullInventory(Z_Construct_UClass_UFGUseState_NodeFullInventory, &UFGUseState_NodeFullInventory::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseState_NodeFullInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseState_NodeFullInventory);
	void UFGUseState_NonConveyorResource::StaticRegisterNativesUFGUseState_NonConveyorResource()
	{
	}
	UClass* Z_Construct_UClass_UFGUseState_NonConveyorResource_NoRegister()
	{
		return UFGUseState_NonConveyorResource::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseState_NonConveyorResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseState_NonConveyorResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGUseState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_NonConveyorResource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Resources/FGResourceNode.h" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "The resource we are trying to pick can't be on a conveyor belt." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseState_NonConveyorResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGUseState_NonConveyorResource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseState_NonConveyorResource_Statics::ClassParams = {
		&UFGUseState_NonConveyorResource::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseState_NonConveyorResource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_NonConveyorResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseState_NonConveyorResource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseState_NonConveyorResource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseState_NonConveyorResource, 855884862);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseState_NonConveyorResource(Z_Construct_UClass_UFGUseState_NonConveyorResource, &UFGUseState_NonConveyorResource::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseState_NonConveyorResource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseState_NonConveyorResource);
	static FName NAME_AFGResourceNode_ClearWidget = FName(TEXT("ClearWidget"));
	void AFGResourceNode::ClearWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceNode_ClearWidget),NULL);
	}
	static FName NAME_AFGResourceNode_OnIsOccupiedChanged = FName(TEXT("OnIsOccupiedChanged"));
	void AFGResourceNode::OnIsOccupiedChanged(bool newIsOccupied)
	{
		FGResourceNode_eventOnIsOccupiedChanged_Parms Parms;
		Parms.newIsOccupied=newIsOccupied ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceNode_OnIsOccupiedChanged),&Parms);
	}
	static FName NAME_AFGResourceNode_ToggleResourcePickUI = FName(TEXT("ToggleResourcePickUI"));
	void AFGResourceNode::ToggleResourcePickUI(AFGCharacterPlayer* player)
	{
		FGResourceNode_eventToggleResourcePickUI_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceNode_ToggleResourcePickUI),&Parms);
	}
	void AFGResourceNode::StaticRegisterNativesAFGResourceNode()
	{
		UClass* Class = AFGResourceNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlaceResourceExtractor", &AFGResourceNode::execCanPlaceResourceExtractor },
			{ "ExtractResourceAndGiveToPlayer", &AFGResourceNode::execExtractResourceAndGiveToPlayer },
			{ "GetExtractionSpeedMultiplier", &AFGResourceNode::execGetExtractionSpeedMultiplier },
			{ "GetExtractMultiplier", &AFGResourceNode::execGetExtractMultiplier },
			{ "GetIsLonerNode", &AFGResourceNode::execGetIsLonerNode },
			{ "GetResoucePurity", &AFGResourceNode::execGetResoucePurity },
			{ "GetResoucePurityText", &AFGResourceNode::execGetResoucePurityText },
			{ "GetResoucesLeftText", &AFGResourceNode::execGetResoucesLeftText },
			{ "GetResourceAmount", &AFGResourceNode::execGetResourceAmount },
			{ "GetResourceClass", &AFGResourceNode::execGetResourceClass },
			{ "GetResourceName", &AFGResourceNode::execGetResourceName },
			{ "HasAnyResources", &AFGResourceNode::execHasAnyResources },
			{ "InitResource", &AFGResourceNode::execInitResource },
			{ "IsOccupied", &AFGResourceNode::execIsOccupied },
			{ "OnRep_IsOccupied", &AFGResourceNode::execOnRep_IsOccupied },
			{ "SetIsOccupied", &AFGResourceNode::execSetIsOccupied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics
	{
		struct FGResourceNode_eventCanPlaceResourceExtractor_Parms
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
	void Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResourceNode_eventCanPlaceResourceExtractor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResourceNode_eventCanPlaceResourceExtractor_Parms), &Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Is this resource node valid for placing an extractor on?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "CanPlaceResourceExtractor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGResourceNode_eventCanPlaceResourceExtractor_Parms), Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_ClearWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_ClearWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Cleanup function for UI. Placed here so that both nodes and deposits can take the same code path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_ClearWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "ClearWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_ClearWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_ClearWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_ClearWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_ClearWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics
	{
		struct FGResourceNode_eventExtractResourceAndGiveToPlayer_Parms
		{
			AFGCharacterPlayer* toPlayer;
			int32 amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_toPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::NewProp_amount = { UE4CodeGen_Private::EPropertyClass::Int, "amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventExtractResourceAndGiveToPlayer_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::NewProp_toPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "toPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventExtractResourceAndGiveToPlayer_Parms, toPlayer), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::NewProp_toPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_amount", "1" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Gives one resource to a player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "ExtractResourceAndGiveToPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(FGResourceNode_eventExtractResourceAndGiveToPlayer_Parms), Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics
	{
		struct FGResourceNode_eventGetExtractionSpeedMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventGetExtractionSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Get a speed multiplier when extracting from this resource" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "GetExtractionSpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventGetExtractionSpeedMultiplier_Parms), Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics
	{
		struct FGResourceNode_eventGetExtractMultiplier_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventGetExtractMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Getter for extract multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "GetExtractMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventGetExtractMultiplier_Parms), Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics
	{
		struct FGResourceNode_eventGetIsLonerNode_Parms
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
	void Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResourceNode_eventGetIsLonerNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResourceNode_eventGetIsLonerNode_Parms), &Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "If true, this node will NEVER join another cluster of nodes, regardless of proximity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "GetIsLonerNode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventGetIsLonerNode_Parms), Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics
	{
		struct FGResourceNode_eventGetResoucePurity_Parms
		{
			TEnumAsByte<EResourcePurity> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventGetResoucePurity_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EResourcePurity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "For UI, returns the enum" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "GetResoucePurity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGResourceNode_eventGetResoucePurity_Parms), Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_GetResoucePurity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_GetResoucePurity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics
	{
		struct FGResourceNode_eventGetResoucePurityText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventGetResoucePurityText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "For UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "GetResoucePurityText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventGetResoucePurityText_Parms), Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics
	{
		struct FGResourceNode_eventGetResoucesLeftText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventGetResoucesLeftText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "For UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "GetResoucesLeftText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventGetResoucesLeftText_Parms), Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics
	{
		struct FGResourceNode_eventGetResourceAmount_Parms
		{
			TEnumAsByte<EResourceAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventGetResourceAmount_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EResourceAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Returns the mAmount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "GetResourceAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventGetResourceAmount_Parms), Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_GetResourceAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_GetResourceAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics
	{
		struct FGResourceNode_eventGetResourceClass_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventGetResourceClass_Parms, ReturnValue), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Query the resource node what kind of resource class is of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "GetResourceClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventGetResourceClass_Parms), Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_GetResourceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_GetResourceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics
	{
		struct FGResourceNode_eventGetResourceName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventGetResourceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Localized name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "GetResourceName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventGetResourceName_Parms), Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_GetResourceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_GetResourceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics
	{
		struct FGResourceNode_eventHasAnyResources_Parms
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
	void Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResourceNode_eventHasAnyResources_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResourceNode_eventHasAnyResources_Parms), &Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "HasAnyResources", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventHasAnyResources_Parms), Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_HasAnyResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_HasAnyResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_InitResource_Statics
	{
		struct FGResourceNode_eventInitResource_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  resourceClass;
			TEnumAsByte<EResourceAmount> amount;
			TEnumAsByte<EResourcePurity> purity;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_purity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_resourceClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::NewProp_purity = { UE4CodeGen_Private::EPropertyClass::Byte, "purity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventInitResource_Parms, purity), Z_Construct_UEnum_FactoryGame_EResourcePurity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::NewProp_amount = { UE4CodeGen_Private::EPropertyClass::Byte, "amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventInitResource_Parms, amount), Z_Construct_UEnum_FactoryGame_EResourceAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::NewProp_resourceClass = { UE4CodeGen_Private::EPropertyClass::Class, "resourceClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventInitResource_Parms, resourceClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::NewProp_purity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::NewProp_resourceClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Setup the resource so it's usable, sets up amount left" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "InitResource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGResourceNode_eventInitResource_Parms), Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_InitResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_InitResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics
	{
		struct FGResourceNode_eventIsOccupied_Parms
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
	void Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResourceNode_eventIsOccupied_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResourceNode_eventIsOccupied_Parms), &Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Return true if the resource is occupied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "IsOccupied", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResourceNode_eventIsOccupied_Parms), Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_IsOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_IsOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics
	{
		static void NewProp_newIsOccupied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newIsOccupied;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::NewProp_newIsOccupied_SetBit(void* Obj)
	{
		((FGResourceNode_eventOnIsOccupiedChanged_Parms*)Obj)->newIsOccupied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::NewProp_newIsOccupied = { UE4CodeGen_Private::EPropertyClass::Bool, "newIsOccupied", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResourceNode_eventOnIsOccupiedChanged_Parms), &Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::NewProp_newIsOccupied_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::NewProp_newIsOccupied,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Let's blueprint know that we have changed occupied states" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "OnIsOccupiedChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGResourceNode_eventOnIsOccupiedChanged_Parms), Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_OnRep_IsOccupied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_OnRep_IsOccupied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Let the client know when we changed. mIsOccupied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_OnRep_IsOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "OnRep_IsOccupied", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_OnRep_IsOccupied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_OnRep_IsOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_OnRep_IsOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_OnRep_IsOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics
	{
		struct FGResourceNode_eventSetIsOccupied_Parms
		{
			bool occupied;
		};
		static void NewProp_occupied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_occupied;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::NewProp_occupied_SetBit(void* Obj)
	{
		((FGResourceNode_eventSetIsOccupied_Parms*)Obj)->occupied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::NewProp_occupied = { UE4CodeGen_Private::EPropertyClass::Bool, "occupied", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResourceNode_eventSetIsOccupied_Parms), &Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::NewProp_occupied_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::NewProp_occupied,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Set if the node is occupied by something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "SetIsOccupied", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGResourceNode_eventSetIsOccupied_Parms), Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_SetIsOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_SetIsOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceNode_eventToggleResourcePickUI_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Opens or closes the picking ui" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceNode, "ToggleResourcePickUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGResourceNode_eventToggleResourcePickUI_Parms), Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGResourceNode_NoRegister()
	{
		return AFGResourceNode::StaticClass();
	}
	struct Z_Construct_UClass_AFGResourceNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDoSpawnParticle_MetaData[];
#endif
		static void NewProp_mDoSpawnParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDoSpawnParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHighlightParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHighlightParticleSystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHighlightParticleSystemTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHighlightParticleSystemTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPurityTextArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPurityTextArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPurityTextArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseDefaultMesh_MetaData[];
#endif
		static void NewProp_mUseDefaultMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseDefaultMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mExtractMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanPlaceResourceExtractor_MetaData[];
#endif
		static void NewProp_mCanPlaceResourceExtractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanPlaceResourceExtractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsLonerNode_MetaData[];
#endif
		static void NewProp_mIsLonerNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsLonerNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRevealedOnMapBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mRevealedOnMapBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mRevealedOnMapBy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsOccupied_MetaData[];
#endif
		static void NewProp_mIsOccupied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsOccupied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourcesLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mResourcesLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDecalComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDecalComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPurity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mPurity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mResourceClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGResourceNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGResourceNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGResourceNode_CanPlaceResourceExtractor, "CanPlaceResourceExtractor" }, // 3247302522
		{ &Z_Construct_UFunction_AFGResourceNode_ClearWidget, "ClearWidget" }, // 1663655817
		{ &Z_Construct_UFunction_AFGResourceNode_ExtractResourceAndGiveToPlayer, "ExtractResourceAndGiveToPlayer" }, // 2813840811
		{ &Z_Construct_UFunction_AFGResourceNode_GetExtractionSpeedMultiplier, "GetExtractionSpeedMultiplier" }, // 2946522467
		{ &Z_Construct_UFunction_AFGResourceNode_GetExtractMultiplier, "GetExtractMultiplier" }, // 695263876
		{ &Z_Construct_UFunction_AFGResourceNode_GetIsLonerNode, "GetIsLonerNode" }, // 2340006395
		{ &Z_Construct_UFunction_AFGResourceNode_GetResoucePurity, "GetResoucePurity" }, // 1829487270
		{ &Z_Construct_UFunction_AFGResourceNode_GetResoucePurityText, "GetResoucePurityText" }, // 1598789264
		{ &Z_Construct_UFunction_AFGResourceNode_GetResoucesLeftText, "GetResoucesLeftText" }, // 1786593879
		{ &Z_Construct_UFunction_AFGResourceNode_GetResourceAmount, "GetResourceAmount" }, // 1338968394
		{ &Z_Construct_UFunction_AFGResourceNode_GetResourceClass, "GetResourceClass" }, // 1270323913
		{ &Z_Construct_UFunction_AFGResourceNode_GetResourceName, "GetResourceName" }, // 407465694
		{ &Z_Construct_UFunction_AFGResourceNode_HasAnyResources, "HasAnyResources" }, // 864753879
		{ &Z_Construct_UFunction_AFGResourceNode_InitResource, "InitResource" }, // 1902468505
		{ &Z_Construct_UFunction_AFGResourceNode_IsOccupied, "IsOccupied" }, // 1015562746
		{ &Z_Construct_UFunction_AFGResourceNode_OnIsOccupiedChanged, "OnIsOccupiedChanged" }, // 3376345443
		{ &Z_Construct_UFunction_AFGResourceNode_OnRep_IsOccupied, "OnRep_IsOccupied" }, // 2138734768
		{ &Z_Construct_UFunction_AFGResourceNode_SetIsOccupied, "SetIsOccupied" }, // 1149869421
		{ &Z_Construct_UFunction_AFGResourceNode_ToggleResourcePickUI, "ToggleResourcePickUI" }, // 1063848248
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Resources/FGResourceNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDoSpawnParticle_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Bool for is we should spawn particle" },
	};
#endif
	void Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDoSpawnParticle_SetBit(void* Obj)
	{
		((AFGResourceNode*)Obj)->mDoSpawnParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDoSpawnParticle = { UE4CodeGen_Private::EPropertyClass::Bool, "mDoSpawnParticle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001010021, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGResourceNode), &Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDoSpawnParticle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDoSpawnParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDoSpawnParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Particle system component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mHighlightParticleSystemComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mHighlightParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemTemplate_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Particle system component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "mHighlightParticleSystemTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mHighlightParticleSystemTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurityTextArray_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Text mapped to resource purity" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurityTextArray = { UE4CodeGen_Private::EPropertyClass::Array, "mPurityTextArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mPurityTextArray), METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurityTextArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurityTextArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurityTextArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mPurityTextArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPurityTextPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mUseDefaultMesh_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Should we display the default mesh?" },
	};
#endif
	void Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mUseDefaultMesh_SetBit(void* Obj)
	{
		((AFGResourceNode*)Obj)->mUseDefaultMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mUseDefaultMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseDefaultMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGResourceNode), &Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mUseDefaultMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mUseDefaultMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mUseDefaultMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mExtractMultiplier_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Multiplier that is applied in the end of extraction calculations. Is used for making deposits extract more than regular nodes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mExtractMultiplier = { UE4CodeGen_Private::EPropertyClass::Int, "mExtractMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mExtractMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mExtractMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mExtractMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mCanPlaceResourceExtractor_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Can this resource node be used for placing resource extractors on" },
	};
#endif
	void Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mCanPlaceResourceExtractor_SetBit(void* Obj)
	{
		((AFGResourceNode*)Obj)->mCanPlaceResourceExtractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mCanPlaceResourceExtractor = { UE4CodeGen_Private::EPropertyClass::Bool, "mCanPlaceResourceExtractor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGResourceNode), &Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mCanPlaceResourceExtractor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mCanPlaceResourceExtractor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mCanPlaceResourceExtractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsLonerNode_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "If true, this node will NEVER join another cluster of nodes, regardless of proximity." },
	};
#endif
	void Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsLonerNode_SetBit(void* Obj)
	{
		((AFGResourceNode*)Obj)->mIsLonerNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsLonerNode = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsLonerNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGResourceNode), &Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsLonerNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsLonerNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsLonerNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mRevealedOnMapBy_MetaData[] = {
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Radar tower modifies this to show this resource node in the map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mRevealedOnMapBy = { UE4CodeGen_Private::EPropertyClass::Array, "mRevealedOnMapBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000020, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mRevealedOnMapBy), METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mRevealedOnMapBy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mRevealedOnMapBy_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mRevealedOnMapBy_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mRevealedOnMapBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsOccupied_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "If true, then we are occupied by something" },
	};
#endif
	void Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsOccupied_SetBit(void* Obj)
	{
		((AFGResourceNode*)Obj)->mIsOccupied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsOccupied = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsOccupied", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080101000034, 1, "OnRep_IsOccupied", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGResourceNode), &Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsOccupied_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsOccupied_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsOccupied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourcesLeft_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "How much resources is left in this node" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourcesLeft = { UE4CodeGen_Private::EPropertyClass::Int, "mResourcesLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000835, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mResourcesLeft), METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourcesLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourcesLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mBoxComponent_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "If we have no static mesh but a decal, then we use this for collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mBoxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mBoxComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b001d, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mBoxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mBoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDecalComponent_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "the decal that used for displaying the resource" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDecalComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mDecalComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b001d, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mDecalComponent), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDecalComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDecalComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mStaticMeshComponent_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "The mesh we use for displaying the resource if it has a ground mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mStaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mStaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b001d, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mStaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mAmount_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "How pure the resource is" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mAmount = { UE4CodeGen_Private::EPropertyClass::Byte, "mAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mAmount), Z_Construct_UEnum_FactoryGame_EResourceAmount, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurity_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "How pure the resource is" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurity = { UE4CodeGen_Private::EPropertyClass::Byte, "mPurity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mPurity), Z_Construct_UEnum_FactoryGame_EResourcePurity, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourceClass_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceNode.h" },
		{ "ToolTip", "Type of resource" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourceClass = { UE4CodeGen_Private::EPropertyClass::Class, "mResourceClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(AFGResourceNode, mResourceClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourceClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourceClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGResourceNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDoSpawnParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mHighlightParticleSystemTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurityTextArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurityTextArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mUseDefaultMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mExtractMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mCanPlaceResourceExtractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsLonerNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mRevealedOnMapBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mRevealedOnMapBy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mIsOccupied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourcesLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mBoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mDecalComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mPurity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceNode_Statics::NewProp_mResourceClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGResourceNode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGResourceNode, IFGSaveInterface), false },
			{ Z_Construct_UClass_UFGUseableInterface_NoRegister, (int32)VTABLE_OFFSET(AFGResourceNode, IFGUseableInterface), false },
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGResourceNode, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGResourceNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGResourceNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGResourceNode_Statics::ClassParams = {
		&AFGResourceNode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGResourceNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGResourceNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGResourceNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGResourceNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGResourceNode, 137931613);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGResourceNode(Z_Construct_UClass_AFGResourceNode, &AFGResourceNode::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGResourceNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGResourceNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
