// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Furrade/FurradeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurradeGameMode() {}
// Cross Module References
	FURRADE_API UClass* Z_Construct_UClass_AFurradeGameMode_NoRegister();
	FURRADE_API UClass* Z_Construct_UClass_AFurradeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Furrade();
// End Cross Module References
	void AFurradeGameMode::StaticRegisterNativesAFurradeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFurradeGameMode);
	UClass* Z_Construct_UClass_AFurradeGameMode_NoRegister()
	{
		return AFurradeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFurradeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFurradeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Furrade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFurradeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FurradeGameMode.h" },
		{ "ModuleRelativePath", "FurradeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFurradeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFurradeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFurradeGameMode_Statics::ClassParams = {
		&AFurradeGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFurradeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFurradeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFurradeGameMode()
	{
		if (!Z_Registration_Info_UClass_AFurradeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFurradeGameMode.OuterSingleton, Z_Construct_UClass_AFurradeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFurradeGameMode.OuterSingleton;
	}
	template<> FURRADE_API UClass* StaticClass<AFurradeGameMode>()
	{
		return AFurradeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFurradeGameMode);
	struct Z_CompiledInDeferFile_FID_Furrade_Source_Furrade_FurradeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Furrade_Source_Furrade_FurradeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFurradeGameMode, AFurradeGameMode::StaticClass, TEXT("AFurradeGameMode"), &Z_Registration_Info_UClass_AFurradeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFurradeGameMode), 3436236866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Furrade_Source_Furrade_FurradeGameMode_h_2357264054(TEXT("/Script/Furrade"),
		Z_CompiledInDeferFile_FID_Furrade_Source_Furrade_FurradeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Furrade_Source_Furrade_FurradeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
