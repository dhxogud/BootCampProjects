// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P20250526/MyAnimNotifyState_PrintMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimNotifyState_PrintMessages() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
P20250526_API UClass* Z_Construct_UClass_UMyAnimNotifyState_PrintMessages();
P20250526_API UClass* Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_NoRegister();
UPackage* Z_Construct_UPackage__Script_P20250526();
// End Cross Module References

// Begin Class UMyAnimNotifyState_PrintMessages
void UMyAnimNotifyState_PrintMessages::StaticRegisterNativesUMyAnimNotifyState_PrintMessages()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAnimNotifyState_PrintMessages);
UClass* Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_NoRegister()
{
	return UMyAnimNotifyState_PrintMessages::StaticClass();
}
struct Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "PrintMessages" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MyAnimNotifyState_PrintMessages.h" },
		{ "ModuleRelativePath", "MyAnimNotifyState_PrintMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "MyAnimNotifyState_PrintMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimNotifyState_PrintMessages>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0040000000000011, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimNotifyState_PrintMessages, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_P20250526,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::ClassParams = {
	&UMyAnimNotifyState_PrintMessages::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAnimNotifyState_PrintMessages()
{
	if (!Z_Registration_Info_UClass_UMyAnimNotifyState_PrintMessages.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAnimNotifyState_PrintMessages.OuterSingleton, Z_Construct_UClass_UMyAnimNotifyState_PrintMessages_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAnimNotifyState_PrintMessages.OuterSingleton;
}
template<> P20250526_API UClass* StaticClass<UMyAnimNotifyState_PrintMessages>()
{
	return UMyAnimNotifyState_PrintMessages::StaticClass();
}
UMyAnimNotifyState_PrintMessages::UMyAnimNotifyState_PrintMessages(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimNotifyState_PrintMessages);
UMyAnimNotifyState_PrintMessages::~UMyAnimNotifyState_PrintMessages() {}
// End Class UMyAnimNotifyState_PrintMessages

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyAnimNotifyState_PrintMessages_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAnimNotifyState_PrintMessages, UMyAnimNotifyState_PrintMessages::StaticClass, TEXT("UMyAnimNotifyState_PrintMessages"), &Z_Registration_Info_UClass_UMyAnimNotifyState_PrintMessages, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAnimNotifyState_PrintMessages), 1051231489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyAnimNotifyState_PrintMessages_h_694026978(TEXT("/Script/P20250526"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyAnimNotifyState_PrintMessages_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyAnimNotifyState_PrintMessages_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
