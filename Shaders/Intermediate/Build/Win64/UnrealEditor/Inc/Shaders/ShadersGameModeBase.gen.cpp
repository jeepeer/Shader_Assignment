// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shaders/ShadersGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadersGameModeBase() {}
// Cross Module References
	SHADERS_API UClass* Z_Construct_UClass_AShadersGameModeBase_NoRegister();
	SHADERS_API UClass* Z_Construct_UClass_AShadersGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Shaders();
// End Cross Module References
	void AShadersGameModeBase::StaticRegisterNativesAShadersGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShadersGameModeBase);
	UClass* Z_Construct_UClass_AShadersGameModeBase_NoRegister()
	{
		return AShadersGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShadersGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShadersGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Shaders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadersGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShadersGameModeBase.h" },
		{ "ModuleRelativePath", "ShadersGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShadersGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShadersGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShadersGameModeBase_Statics::ClassParams = {
		&AShadersGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShadersGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShadersGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShadersGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AShadersGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShadersGameModeBase.OuterSingleton, Z_Construct_UClass_AShadersGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShadersGameModeBase.OuterSingleton;
	}
	template<> SHADERS_API UClass* StaticClass<AShadersGameModeBase>()
	{
		return AShadersGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShadersGameModeBase);
	struct Z_CompiledInDeferFile_FID_Shaders_Source_Shaders_ShadersGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shaders_Source_Shaders_ShadersGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShadersGameModeBase, AShadersGameModeBase::StaticClass, TEXT("AShadersGameModeBase"), &Z_Registration_Info_UClass_AShadersGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShadersGameModeBase), 243779063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shaders_Source_Shaders_ShadersGameModeBase_h_988114129(TEXT("/Script/Shaders"),
		Z_CompiledInDeferFile_FID_Shaders_Source_Shaders_ShadersGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shaders_Source_Shaders_ShadersGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
