// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EXAMEN_FINAL/ObserverActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserverActor() {}
// Cross Module References
	EXAMEN_FINAL_API UClass* Z_Construct_UClass_AObserverActor_NoRegister();
	EXAMEN_FINAL_API UClass* Z_Construct_UClass_AObserverActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EXAMEN_FINAL();
	EXAMEN_FINAL_API UClass* Z_Construct_UClass_UIObserver_NoRegister();
// End Cross Module References
	void AObserverActor::StaticRegisterNativesAObserverActor()
	{
	}
	UClass* Z_Construct_UClass_AObserverActor_NoRegister()
	{
		return AObserverActor::StaticClass();
	}
	struct Z_Construct_UClass_AObserverActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObserverActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EXAMEN_FINAL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserverActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObserverActor.h" },
		{ "ModuleRelativePath", "ObserverActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AObserverActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIObserver_NoRegister, (int32)VTABLE_OFFSET(AObserverActor, IIObserver), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObserverActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObserverActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObserverActor_Statics::ClassParams = {
		&AObserverActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObserverActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObserverActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObserverActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObserverActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObserverActor, 2425819360);
	template<> EXAMEN_FINAL_API UClass* StaticClass<AObserverActor>()
	{
		return AObserverActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObserverActor(Z_Construct_UClass_AObserverActor, &AObserverActor::StaticClass, TEXT("/Script/EXAMEN_FINAL"), TEXT("AObserverActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObserverActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
