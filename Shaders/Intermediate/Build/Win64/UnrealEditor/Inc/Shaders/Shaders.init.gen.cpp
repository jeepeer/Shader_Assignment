// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaders_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Shaders;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Shaders()
	{
		if (!Z_Registration_Info_UPackage__Script_Shaders.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Shaders",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA466A404,
				0x243BCF74,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Shaders.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Shaders.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Shaders(Z_Construct_UPackage__Script_Shaders, TEXT("/Script/Shaders"), Z_Registration_Info_UPackage__Script_Shaders, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA466A404, 0x243BCF74));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
