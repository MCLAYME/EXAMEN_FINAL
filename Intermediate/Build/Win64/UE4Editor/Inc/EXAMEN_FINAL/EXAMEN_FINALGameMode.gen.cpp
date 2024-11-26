// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EXAMEN_FINAL/EXAMEN_FINALGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEXAMEN_FINALGameMode() {}
// Cross Module References
	EXAMEN_FINAL_API UClass* Z_Construct_UClass_AEXAMEN_FINALGameMode_NoRegister();
	EXAMEN_FINAL_API UClass* Z_Construct_UClass_AEXAMEN_FINALGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EXAMEN_FINAL();
// End Cross Module References
	void AEXAMEN_FINALGameMode::StaticRegisterNativesAEXAMEN_FINALGameMode()
	{
	}
	UClass* Z_Construct_UClass_AEXAMEN_FINALGameMode_NoRegister()
	{
		return AEXAMEN_FINALGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEXAMEN_FINALGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEXAMEN_FINALGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EXAMEN_FINAL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEXAMEN_FINALGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EXAMEN_FINALGameMode.h" },
		{ "ModuleRelativePath", "EXAMEN_FINALGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEXAMEN_FINALGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEXAMEN_FINALGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEXAMEN_FINALGameMode_Statics::ClassParams = {
		&AEXAMEN_FINALGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEXAMEN_FINALGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEXAMEN_FINALGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEXAMEN_FINALGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEXAMEN_FINALGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEXAMEN_FINALGameMode, 2801399782);
	template<> EXAMEN_FINAL_API UClass* StaticClass<AEXAMEN_FINALGameMode>()
	{
		return AEXAMEN_FINALGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEXAMEN_FINALGameMode(Z_Construct_UClass_AEXAMEN_FINALGameMode, &AEXAMEN_FINALGameMode::StaticClass, TEXT("/Script/EXAMEN_FINAL"), TEXT("AEXAMEN_FINALGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEXAMEN_FINALGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
