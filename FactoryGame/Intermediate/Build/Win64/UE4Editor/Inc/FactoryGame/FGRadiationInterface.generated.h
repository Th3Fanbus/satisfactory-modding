// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGDamageType;
#ifdef FACTORYGAME_FGRadiationInterface_generated_h
#error "FGRadiationInterface.generated.h already included, missing '#pragma once' in FGRadiationInterface.h"
#endif
#define FACTORYGAME_FGRadiationInterface_generated_h

#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_RPC_WRAPPERS \
	virtual void ReceiveRadiation_Implementation(float amount, float duration, TSubclassOf<UFGDamageType>  damageType) {}; \
 \
	DECLARE_FUNCTION(execReceiveRadiation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_duration); \
		P_GET_OBJECT(UClass,Z_Param_damageType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceiveRadiation_Implementation(Z_Param_amount,Z_Param_duration,Z_Param_damageType); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveRadiation_Implementation(float amount, float duration, TSubclassOf<UFGDamageType>  damageType) {}; \
 \
	DECLARE_FUNCTION(execReceiveRadiation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_duration); \
		P_GET_OBJECT(UClass,Z_Param_damageType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceiveRadiation_Implementation(Z_Param_amount,Z_Param_duration,Z_Param_damageType); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_EVENT_PARMS \
	struct FGRadiationInterface_eventReceiveRadiation_Parms \
	{ \
		float amount; \
		float duration; \
		TSubclassOf<UFGDamageType>  damageType; \
	};


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRadiationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRadiationInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRadiationInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRadiationInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRadiationInterface(UFGRadiationInterface&&); \
	NO_API UFGRadiationInterface(const UFGRadiationInterface&); \
public:


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRadiationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRadiationInterface(UFGRadiationInterface&&); \
	NO_API UFGRadiationInterface(const UFGRadiationInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRadiationInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRadiationInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRadiationInterface)


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGRadiationInterface(); \
	friend struct Z_Construct_UClass_UFGRadiationInterface_Statics; \
public: \
	DECLARE_CLASS(UFGRadiationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRadiationInterface)


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGRadiationInterface() {} \
public: \
	typedef UFGRadiationInterface UClassType; \
	typedef IFGRadiationInterface ThisClass; \
	static void Execute_ReceiveRadiation(UObject* O, float amount, float duration, TSubclassOf<UFGDamageType>  damageType); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGRadiationInterface() {} \
public: \
	typedef UFGRadiationInterface UClassType; \
	typedef IFGRadiationInterface ThisClass; \
	static void Execute_ReceiveRadiation(UObject* O, float amount, float duration, TSubclassOf<UFGDamageType>  damageType); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_9_PROLOG \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRadiationInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRadiationInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRadiationInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
