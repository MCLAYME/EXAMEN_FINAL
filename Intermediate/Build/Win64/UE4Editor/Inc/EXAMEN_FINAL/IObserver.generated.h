// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXAMEN_FINAL_IObserver_generated_h
#error "IObserver.generated.h already included, missing '#pragma once' in IObserver.h"
#endif
#define EXAMEN_FINAL_IObserver_generated_h

#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_SPARSE_DATA
#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_RPC_WRAPPERS
#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXAMEN_FINAL_API UIObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXAMEN_FINAL_API, UIObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EXAMEN_FINAL_API UIObserver(UIObserver&&); \
	EXAMEN_FINAL_API UIObserver(const UIObserver&); \
public:


#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXAMEN_FINAL_API UIObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EXAMEN_FINAL_API UIObserver(UIObserver&&); \
	EXAMEN_FINAL_API UIObserver(const UIObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXAMEN_FINAL_API, UIObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIObserver)


#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIObserver(); \
	friend struct Z_Construct_UClass_UIObserver_Statics; \
public: \
	DECLARE_CLASS(UIObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EXAMEN_FINAL"), EXAMEN_FINAL_API) \
	DECLARE_SERIALIZER(UIObserver)


#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_GENERATED_UINTERFACE_BODY() \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_GENERATED_UINTERFACE_BODY() \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIObserver() {} \
public: \
	typedef UIObserver UClassType; \
	typedef IIObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIObserver() {} \
public: \
	typedef UIObserver UClassType; \
	typedef IIObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_10_PROLOG
#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_SPARSE_DATA \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_RPC_WRAPPERS \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_SPARSE_DATA \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXAMEN_FINAL_API UClass* StaticClass<class UIObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EXAMEN_FINAL_Source_EXAMEN_FINAL_IObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
