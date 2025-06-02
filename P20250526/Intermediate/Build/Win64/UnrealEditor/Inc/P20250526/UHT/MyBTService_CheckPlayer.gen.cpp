// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P20250526/MyBTService_CheckPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTService_CheckPlayer() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
P20250526_API UClass* Z_Construct_UClass_UMyBTService_CheckPlayer();
P20250526_API UClass* Z_Construct_UClass_UMyBTService_CheckPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_P20250526();
// End Cross Module References

// Begin Class UMyBTService_CheckPlayer
void UMyBTService_CheckPlayer::StaticRegisterNativesUMyBTService_CheckPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTService_CheckPlayer);
UClass* Z_Construct_UClass_UMyBTService_CheckPlayer_NoRegister()
{
	return UMyBTService_CheckPlayer::StaticClass();
}
struct Z_Construct_UClass_UMyBTService_CheckPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBTService_CheckPlayer.h" },
		{ "ModuleRelativePath", "MyBTService_CheckPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTService_CheckPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBTService_CheckPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_P20250526,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTService_CheckPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTService_CheckPlayer_Statics::ClassParams = {
	&UMyBTService_CheckPlayer::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTService_CheckPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTService_CheckPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTService_CheckPlayer()
{
	if (!Z_Registration_Info_UClass_UMyBTService_CheckPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTService_CheckPlayer.OuterSingleton, Z_Construct_UClass_UMyBTService_CheckPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTService_CheckPlayer.OuterSingleton;
}
template<> P20250526_API UClass* StaticClass<UMyBTService_CheckPlayer>()
{
	return UMyBTService_CheckPlayer::StaticClass();
}
UMyBTService_CheckPlayer::UMyBTService_CheckPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTService_CheckPlayer);
UMyBTService_CheckPlayer::~UMyBTService_CheckPlayer() {}
// End Class UMyBTService_CheckPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTService_CheckPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTService_CheckPlayer, UMyBTService_CheckPlayer::StaticClass, TEXT("UMyBTService_CheckPlayer"), &Z_Registration_Info_UClass_UMyBTService_CheckPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTService_CheckPlayer), 2934469395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTService_CheckPlayer_h_3381417016(TEXT("/Script/P20250526"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTService_CheckPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTService_CheckPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
