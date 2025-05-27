// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P20250522/Rocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocket() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
P20250522_API UClass* Z_Construct_UClass_ARocket();
P20250522_API UClass* Z_Construct_UClass_ARocket_NoRegister();
UPackage* Z_Construct_UPackage__Script_P20250522();
// End Cross Module References

// Begin Class ARocket Function CallCPPToDefaultExecuteBP
struct Rocket_eventCallCPPToDefaultExecuteBP_Parms
{
	int32 Damage;
};
static const FName NAME_ARocket_CallCPPToDefaultExecuteBP = FName(TEXT("CallCPPToDefaultExecuteBP"));
void ARocket::CallCPPToDefaultExecuteBP(int32 Damage)
{
	UFunction* Func = FindFunctionChecked(NAME_ARocket_CallCPPToDefaultExecuteBP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Rocket_eventCallCPPToDefaultExecuteBP_Parms Parms;
		Parms.Damage=Damage;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		CallCPPToDefaultExecuteBP_Implementation(Damage);
	}
}
struct Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rocket_eventCallCPPToDefaultExecuteBP_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARocket, nullptr, "CallCPPToDefaultExecuteBP", nullptr, nullptr, Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::PropPointers), sizeof(Rocket_eventCallCPPToDefaultExecuteBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Rocket_eventCallCPPToDefaultExecuteBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARocket::execCallCPPToDefaultExecuteBP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallCPPToDefaultExecuteBP_Implementation(Z_Param_Damage);
	P_NATIVE_END;
}
// End Class ARocket Function CallCPPToDefaultExecuteBP

// Begin Class ARocket Function CallCPPToExecuteBP
struct Rocket_eventCallCPPToExecuteBP_Parms
{
	int32 Damage;
};
static const FName NAME_ARocket_CallCPPToExecuteBP = FName(TEXT("CallCPPToExecuteBP"));
void ARocket::CallCPPToExecuteBP(int32 Damage)
{
	Rocket_eventCallCPPToExecuteBP_Parms Parms;
	Parms.Damage=Damage;
	UFunction* Func = FindFunctionChecked(NAME_ARocket_CallCPPToExecuteBP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BluePrint\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Implemented \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, Cpp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Rocket.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BluePrint\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Implemented \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, Cpp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb5\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rocket_eventCallCPPToExecuteBP_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARocket, nullptr, "CallCPPToExecuteBP", nullptr, nullptr, Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::PropPointers), sizeof(Rocket_eventCallCPPToExecuteBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Rocket_eventCallCPPToExecuteBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARocket_CallCPPToExecuteBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARocket_CallCPPToExecuteBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARocket Function CallCPPToExecuteBP

// Begin Class ARocket Function ProcessBeginOverlap
struct Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics
{
	struct Rocket_eventProcessBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rocket_eventProcessBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rocket_eventProcessBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARocket, nullptr, "ProcessBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::Rocket_eventProcessBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::Rocket_eventProcessBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARocket_ProcessBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARocket_ProcessBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARocket::execProcessBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ARocket Function ProcessBeginOverlap

// Begin Class ARocket
void ARocket::StaticRegisterNativesARocket()
{
	UClass* Class = ARocket::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallCPPToDefaultExecuteBP", &ARocket::execCallCPPToDefaultExecuteBP },
		{ "ProcessBeginOverlap", &ARocket::execProcessBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARocket);
UClass* Z_Construct_UClass_ARocket_NoRegister()
{
	return ARocket::StaticClass();
}
struct Z_Construct_UClass_ARocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Rocket.h" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARocket_CallCPPToDefaultExecuteBP, "CallCPPToDefaultExecuteBP" }, // 4278333190
		{ &Z_Construct_UFunction_ARocket_CallCPPToExecuteBP, "CallCPPToExecuteBP" }, // 1195584610
		{ &Z_Construct_UFunction_ARocket_ProcessBeginOverlap, "ProcessBeginOverlap" }, // 254513798
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARocket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARocket_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARocket, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARocket_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARocket, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARocket_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARocket, Movement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARocket_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARocket, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocket_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocket_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocket_Statics::NewProp_Movement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocket_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARocket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARocket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_P20250522,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARocket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARocket_Statics::ClassParams = {
	&ARocket::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARocket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARocket_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARocket_Statics::Class_MetaDataParams), Z_Construct_UClass_ARocket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARocket()
{
	if (!Z_Registration_Info_UClass_ARocket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARocket.OuterSingleton, Z_Construct_UClass_ARocket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARocket.OuterSingleton;
}
template<> P20250522_API UClass* StaticClass<ARocket>()
{
	return ARocket::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARocket);
ARocket::~ARocket() {}
// End Class ARocket

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARocket, ARocket::StaticClass, TEXT("ARocket"), &Z_Registration_Info_UClass_ARocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARocket), 2913754620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_992210178(TEXT("/Script/P20250522"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
