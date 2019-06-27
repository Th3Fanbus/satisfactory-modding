// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGPopupWidget_generated_h
#error "FGPopupWidget.generated.h already included, missing '#pragma once' in FGPopupWidget.h"
#endif
#define FACTORYGAME_FGPopupWidget_generated_h

#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPopupData_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_11_DELEGATE \
struct _Script_FactoryGame_eventPopupClosed_Parms \
{ \
	bool ConfirmClicked; \
}; \
static inline void FPopupClosed_DelegateWrapper(const FScriptDelegate& PopupClosed, bool ConfirmClicked) \
{ \
	_Script_FactoryGame_eventPopupClosed_Parms Parms; \
	Parms.ConfirmClicked=ConfirmClicked ? true : false; \
	PopupClosed.ProcessDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_9_DELEGATE \
static inline void FPopupConfirmClicked_DelegateWrapper(const FScriptDelegate& PopupConfirmClicked) \
{ \
	PopupConfirmClicked.ProcessDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallPopupClosedClicked) \
	{ \
		P_GET_UBOOL(Z_Param_confirm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPopupClosedClicked(Z_Param_confirm); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPopupConfirmClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPopupConfirmClicked(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallPopupClosedClicked) \
	{ \
		P_GET_UBOOL(Z_Param_confirm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPopupClosedClicked(Z_Param_confirm); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPopupConfirmClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPopupConfirmClicked(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGPopupWidget(); \
	friend struct Z_Construct_UClass_UFGPopupWidget_Statics; \
public: \
	DECLARE_CLASS(UFGPopupWidget, UFGInteractWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPopupWidget)


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUFGPopupWidget(); \
	friend struct Z_Construct_UClass_UFGPopupWidget_Statics; \
public: \
	DECLARE_CLASS(UFGPopupWidget, UFGInteractWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPopupWidget)


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPopupWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPopupWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPopupWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPopupWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPopupWidget(UFGPopupWidget&&); \
	NO_API UFGPopupWidget(const UFGPopupWidget&); \
public:


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPopupWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPopupWidget(UFGPopupWidget&&); \
	NO_API UFGPopupWidget(const UFGPopupWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPopupWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPopupWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPopupWidget)


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_52_PROLOG
#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_INCLASS \
	FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_FGPopupWidget_h


#define FOREACH_ENUM_EPOPUPID(op) \
	op(PID_OK) \
	op(PID_OK_CANCEL) \
	op(PID_NONE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
