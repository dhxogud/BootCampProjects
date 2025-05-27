// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P20250526/MyAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
P20250526_API UClass* Z_Construct_UClass_UMyAnimNotify();
P20250526_API UClass* Z_Construct_UClass_UMyAnimNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_P20250526();
// End Cross Module References

// Begin Class UMyAnimNotify
void UMyAnimNotify::StaticRegisterNativesUMyAnimNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAnimNotify);
UClass* Z_Construct_UClass_UMyAnimNotify_NoRegister()
{
	return UMyAnimNotify::StaticClass();
}
struct Z_Construct_UClass_UMyAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "MyAnimNotify.h" },
		{ "ModuleRelativePath", "MyAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrintMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "MyAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrintMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyAnimNotify_Statics::NewProp_PrintMessage = { "PrintMessage", nullptr, (EPropertyFlags)0x0040000000000011, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimNotify, PrintMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrintMessage_MetaData), NewProp_PrintMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAnimNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimNotify_Statics::NewProp_PrintMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_P20250526,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimNotify_Statics::ClassParams = {
	&UMyAnimNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyAnimNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotify_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAnimNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAnimNotify()
{
	if (!Z_Registration_Info_UClass_UMyAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAnimNotify.OuterSingleton, Z_Construct_UClass_UMyAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAnimNotify.OuterSingleton;
}
template<> P20250526_API UClass* StaticClass<UMyAnimNotify>()
{
	return UMyAnimNotify::StaticClass();
}
UMyAnimNotify::UMyAnimNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimNotify);
UMyAnimNotify::~UMyAnimNotify() {}
// End Class UMyAnimNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyAnimNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAnimNotify, UMyAnimNotify::StaticClass, TEXT("UMyAnimNotify"), &Z_Registration_Info_UClass_UMyAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAnimNotify), 779754903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyAnimNotify_h_1232535262(TEXT("/Script/P20250526"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyAnimNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
