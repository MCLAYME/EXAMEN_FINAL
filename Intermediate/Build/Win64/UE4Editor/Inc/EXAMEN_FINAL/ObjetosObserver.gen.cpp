// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EXAMEN_FINAL/ObjetosObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjetosObserver() {}
// Cross Module References
	EXAMEN_FINAL_API UClass* Z_Construct_UClass_AObjetosObserver_NoRegister();
	EXAMEN_FINAL_API UClass* Z_Construct_UClass_AObjetosObserver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EXAMEN_FINAL();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	EXAMEN_FINAL_API UClass* Z_Construct_UClass_UIObserver_NoRegister();
// End Cross Module References
	void AObjetosObserver::StaticRegisterNativesAObjetosObserver()
	{
	}
	UClass* Z_Construct_UClass_AObjetosObserver_NoRegister()
	{
		return AObjetosObserver::StaticClass();
	}
	struct Z_Construct_UClass_AObjetosObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjetosObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EXAMEN_FINAL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjetosObserver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjetosObserver.h" },
		{ "ModuleRelativePath", "ObjetosObserver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjetosObserver_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ObjetosObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjetosObserver_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjetosObserver, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjetosObserver_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjetosObserver_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjetosObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjetosObserver_Statics::NewProp_Mesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AObjetosObserver_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIObserver_NoRegister, (int32)VTABLE_OFFSET(AObjetosObserver, IIObserver), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjetosObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjetosObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjetosObserver_Statics::ClassParams = {
		&AObjetosObserver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObjetosObserver_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjetosObserver_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjetosObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjetosObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjetosObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjetosObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjetosObserver, 2146044234);
	template<> EXAMEN_FINAL_API UClass* StaticClass<AObjetosObserver>()
	{
		return AObjetosObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjetosObserver(Z_Construct_UClass_AObjetosObserver, &AObjetosObserver::StaticClass, TEXT("/Script/EXAMEN_FINAL"), TEXT("AObjetosObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjetosObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
