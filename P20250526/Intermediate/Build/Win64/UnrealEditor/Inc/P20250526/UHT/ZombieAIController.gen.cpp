// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P20250526/ZombieAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
P20250526_API UClass* Z_Construct_UClass_AZombieAIController();
P20250526_API UClass* Z_Construct_UClass_AZombieAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_P20250526();
// End Cross Module References

// Begin Class AZombieAIController
void AZombieAIController::StaticRegisterNativesAZombieAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieAIController);
UClass* Z_Construct_UClass_AZombieAIController_NoRegister()
{
	return AZombieAIController::StaticClass();
}
struct Z_Construct_UClass_AZombieAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ZombieAIController.h" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AZombieAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_P20250526,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieAIController_Statics::ClassParams = {
	&AZombieAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AZombieAIController()
{
	if (!Z_Registration_Info_UClass_AZombieAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieAIController.OuterSingleton, Z_Construct_UClass_AZombieAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZombieAIController.OuterSingleton;
}
template<> P20250526_API UClass* StaticClass<AZombieAIController>()
{
	return AZombieAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAIController);
AZombieAIController::~AZombieAIController() {}
// End Class AZombieAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZombieAIController, AZombieAIController::StaticClass, TEXT("AZombieAIController"), &Z_Registration_Info_UClass_AZombieAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieAIController), 3431560353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieAIController_h_140038956(TEXT("/Script/P20250526"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
