// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/FabricaEstorbos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaEstorbos() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UFabricaEstorbos_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UFabricaEstorbos();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void UFabricaEstorbos::StaticRegisterNativesUFabricaEstorbos()
	{
	}
	UClass* Z_Construct_UClass_UFabricaEstorbos_NoRegister()
	{
		return UFabricaEstorbos::StaticClass();
	}
	struct Z_Construct_UClass_UFabricaEstorbos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFabricaEstorbos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFabricaEstorbos_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "FabricaEstorbos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFabricaEstorbos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFabricaEstorbos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFabricaEstorbos_Statics::ClassParams = {
		&UFabricaEstorbos::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFabricaEstorbos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFabricaEstorbos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFabricaEstorbos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFabricaEstorbos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFabricaEstorbos, 1867222750);
	template<> DONKEYKONG_L02_API UClass* StaticClass<UFabricaEstorbos>()
	{
		return UFabricaEstorbos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFabricaEstorbos(Z_Construct_UClass_UFabricaEstorbos, &UFabricaEstorbos::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("UFabricaEstorbos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFabricaEstorbos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
