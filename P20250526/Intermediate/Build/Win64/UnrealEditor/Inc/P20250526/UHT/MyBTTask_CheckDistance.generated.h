// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyBTTask_CheckDistance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef P20250526_MyBTTask_CheckDistance_generated_h
#error "MyBTTask_CheckDistance.generated.h already included, missing '#pragma once' in MyBTTask_CheckDistance.h"
#endif
#define P20250526_MyBTTask_CheckDistance_generated_h

#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBTTask_CheckDistance(); \
	friend struct Z_Construct_UClass_UMyBTTask_CheckDistance_Statics; \
public: \
	DECLARE_CLASS(UMyBTTask_CheckDistance, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/P20250526"), NO_API) \
	DECLARE_SERIALIZER(UMyBTTask_CheckDistance)


#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBTTask_CheckDistance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyBTTask_CheckDistance(UMyBTTask_CheckDistance&&); \
	UMyBTTask_CheckDistance(const UMyBTTask_CheckDistance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBTTask_CheckDistance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBTTask_CheckDistance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBTTask_CheckDistance) \
	NO_API virtual ~UMyBTTask_CheckDistance();


#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_23_PROLOG
#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_26_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> P20250526_API UClass* StaticClass<class UMyBTTask_CheckDistance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyBTTask_CheckDistance_h


#define FOREACH_ENUM_ECONDITION(op) \
	op(ECondition::LessThen) \
	op(ECondition::GreaterThen) 

enum class ECondition : uint8;
template<> struct TIsUEnumClass<ECondition> { enum { Value = true }; };
template<> P20250526_API UEnum* StaticEnum<ECondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
