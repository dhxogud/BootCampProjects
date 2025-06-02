// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P20250526/ZombieCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
P20250526_API UClass* Z_Construct_UClass_AZombieCharacter();
P20250526_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
P20250526_API UEnum* Z_Construct_UEnum_P20250526_EZombieState();
UPackage* Z_Construct_UPackage__Script_P20250526();
// End Cross Module References

// Begin Enum EZombieState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZombieState;
static UEnum* EZombieState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZombieState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZombieState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_P20250526_EZombieState, (UObject*)Z_Construct_UPackage__Script_P20250526(), TEXT("EZombieState"));
	}
	return Z_Registration_Info_UEnum_EZombieState.OuterSingleton;
}
template<> P20250526_API UEnum* StaticEnum<EZombieState>()
{
	return EZombieState_StaticEnum();
}
struct Z_Construct_UEnum_P20250526_EZombieState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Battle.DispalyName", "Battle" },
		{ "Battle.Name", "EZombieState::Battle" },
		{ "BlueprintType", "true" },
		{ "Chase.DispalyName", "Chase" },
		{ "Chase.Name", "EZombieState::Chase" },
		{ "Dead.DispalyName", "Dead" },
		{ "Dead.Name", "EZombieState::Dead" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
		{ "Patrol.DispalyName", "Patrol" },
		{ "Patrol.Name", "EZombieState::Patrol" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZombieState::Patrol", (int64)EZombieState::Patrol },
		{ "EZombieState::Battle", (int64)EZombieState::Battle },
		{ "EZombieState::Chase", (int64)EZombieState::Chase },
		{ "EZombieState::Dead", (int64)EZombieState::Dead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_P20250526_EZombieState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_P20250526,
	nullptr,
	"EZombieState",
	"EZombieState",
	Z_Construct_UEnum_P20250526_EZombieState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_P20250526_EZombieState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_P20250526_EZombieState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_P20250526_EZombieState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_P20250526_EZombieState()
{
	if (!Z_Registration_Info_UEnum_EZombieState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZombieState.InnerSingleton, Z_Construct_UEnum_P20250526_EZombieState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZombieState.InnerSingleton;
}
// End Enum EZombieState

// Begin Class AZombieCharacter
void AZombieCharacter::StaticRegisterNativesAZombieCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieCharacter);
UClass* Z_Construct_UClass_AZombieCharacter_NoRegister()
{
	return AZombieCharacter::StaticClass();
}
struct Z_Construct_UClass_AZombieCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ZombieCharacter.h" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombieCharacter, CurrentState), Z_Construct_UEnum_P20250526_EZombieState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 3123530931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AZombieCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_P20250526,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieCharacter_Statics::ClassParams = {
	&AZombieCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AZombieCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombieCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AZombieCharacter()
{
	if (!Z_Registration_Info_UClass_AZombieCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieCharacter.OuterSingleton, Z_Construct_UClass_AZombieCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZombieCharacter.OuterSingleton;
}
template<> P20250526_API UClass* StaticClass<AZombieCharacter>()
{
	return AZombieCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieCharacter);
AZombieCharacter::~AZombieCharacter() {}
// End Class AZombieCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZombieState_StaticEnum, TEXT("EZombieState"), &Z_Registration_Info_UEnum_EZombieState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3123530931U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZombieCharacter, AZombieCharacter::StaticClass, TEXT("AZombieCharacter"), &Z_Registration_Info_UClass_AZombieCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieCharacter), 1648676904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_3496480307(TEXT("/Script/P20250526"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
