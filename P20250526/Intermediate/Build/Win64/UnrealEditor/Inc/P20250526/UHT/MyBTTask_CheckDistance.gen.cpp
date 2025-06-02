// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P20250526/MyBTTask_CheckDistance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_CheckDistance() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
P20250526_API UClass* Z_Construct_UClass_UMyBTTask_CheckDistance();
P20250526_API UClass* Z_Construct_UClass_UMyBTTask_CheckDistance_NoRegister();
P20250526_API UEnum* Z_Construct_UEnum_P20250526_ECondition();
P20250526_API UEnum* Z_Construct_UEnum_P20250526_EZombieState();
UPackage* Z_Construct_UPackage__Script_P20250526();
// End Cross Module References

// Begin Enum ECondition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECondition;
static UEnum* ECondition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECondition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_P20250526_ECondition, (UObject*)Z_Construct_UPackage__Script_P20250526(), TEXT("ECondition"));
	}
	return Z_Registration_Info_UEnum_ECondition.OuterSingleton;
}
template<> P20250526_API UEnum* StaticEnum<ECondition>()
{
	return ECondition_StaticEnum();
}
struct Z_Construct_UEnum_P20250526_ECondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "GreaterThen.Comment", "/**\n * \n */" },
		{ "GreaterThen.DisplayName", ">" },
		{ "GreaterThen.Name", "ECondition::GreaterThen" },
		{ "LessThen.Comment", "/**\n * \n */" },
		{ "LessThen.DisplayName", "<" },
		{ "LessThen.Name", "ECondition::LessThen" },
		{ "ModuleRelativePath", "MyBTTask_CheckDistance.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECondition::LessThen", (int64)ECondition::LessThen },
		{ "ECondition::GreaterThen", (int64)ECondition::GreaterThen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_P20250526_ECondition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_P20250526,
	nullptr,
	"ECondition",
	"ECondition",
	Z_Construct_UEnum_P20250526_ECondition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_P20250526_ECondition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_P20250526_ECondition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_P20250526_ECondition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_P20250526_ECondition()
{
	if (!Z_Registration_Info_UEnum_ECondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECondition.InnerSingleton, Z_Construct_UEnum_P20250526_ECondition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECondition.InnerSingleton;
}
// End Enum ECondition

// Begin Class UMyBTTask_CheckDistance
void UMyBTTask_CheckDistance::StaticRegisterNativesUMyBTTask_CheckDistance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_CheckDistance);
UClass* Z_Construct_UClass_UMyBTTask_CheckDistance_NoRegister()
{
	return UMyBTTask_CheckDistance::StaticClass();
}
struct Z_Construct_UClass_UMyBTTask_CheckDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyBTTask_CheckDistance.h" },
		{ "ModuleRelativePath", "MyBTTask_CheckDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MyBTTask_CheckDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCondition_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MyBTTask_CheckDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDistance_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MyBTTask_CheckDistance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetCondition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetCondition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_CheckDistance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTask_CheckDistance, TargetState), Z_Construct_UEnum_P20250526_EZombieState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetState_MetaData), NewProp_TargetState_MetaData) }; // 3123530931
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetCondition = { "TargetCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTask_CheckDistance, TargetCondition), Z_Construct_UEnum_P20250526_ECondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCondition_MetaData), NewProp_TargetCondition_MetaData) }; // 2725653632
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetDistance = { "TargetDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTask_CheckDistance, TargetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDistance_MetaData), NewProp_TargetDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetCondition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::NewProp_TargetDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_P20250526,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::ClassParams = {
	&UMyBTTask_CheckDistance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_CheckDistance()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_CheckDistance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_CheckDistance.OuterSingleton, Z_Construct_UClass_UMyBTTask_CheckDistance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_CheckDistance.OuterSingleton;
}
template<> P20250526_API UClass* StaticClass<UMyBTTask_CheckDistance>()
{
	return UMyBTTask_CheckDistance::StaticClass();
}
UMyBTTask_CheckDistance::UMyBTTask_CheckDistance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_CheckDistance);
UMyBTTask_CheckDistance::~UMyBTTask_CheckDistance() {}
// End Class UMyBTTask_CheckDistance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECondition_StaticEnum, TEXT("ECondition"), &Z_Registration_Info_UEnum_ECondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2725653632U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_CheckDistance, UMyBTTask_CheckDistance::StaticClass, TEXT("UMyBTTask_CheckDistance"), &Z_Registration_Info_UClass_UMyBTTask_CheckDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_CheckDistance), 3907743881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_2780610234(TEXT("/Script/P20250526"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
