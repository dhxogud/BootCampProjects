// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P20250526/MyBTTask_NextPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_NextPoint() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
P20250526_API UClass* Z_Construct_UClass_UMyBTTask_NextPoint();
P20250526_API UClass* Z_Construct_UClass_UMyBTTask_NextPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_P20250526();
// End Cross Module References

// Begin Class UMyBTTask_NextPoint
void UMyBTTask_NextPoint::StaticRegisterNativesUMyBTTask_NextPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_NextPoint);
UClass* Z_Construct_UClass_UMyBTTask_NextPoint_NoRegister()
{
	return UMyBTTask_NextPoint::StaticClass();
}
struct Z_Construct_UClass_UMyBTTask_NextPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBTTask_NextPoint.h" },
		{ "ModuleRelativePath", "MyBTTask_NextPoint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_NextPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBTTask_NextPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_P20250526,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_NextPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_NextPoint_Statics::ClassParams = {
	&UMyBTTask_NextPoint::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_NextPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_NextPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_NextPoint()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_NextPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_NextPoint.OuterSingleton, Z_Construct_UClass_UMyBTTask_NextPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_NextPoint.OuterSingleton;
}
template<> P20250526_API UClass* StaticClass<UMyBTTask_NextPoint>()
{
	return UMyBTTask_NextPoint::StaticClass();
}
UMyBTTask_NextPoint::UMyBTTask_NextPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_NextPoint);
UMyBTTask_NextPoint::~UMyBTTask_NextPoint() {}
// End Class UMyBTTask_NextPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_NextPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_NextPoint, UMyBTTask_NextPoint::StaticClass, TEXT("UMyBTTask_NextPoint"), &Z_Registration_Info_UClass_UMyBTTask_NextPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_NextPoint), 2966467159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_NextPoint_h_4104713767(TEXT("/Script/P20250526"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_NextPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_NextPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
