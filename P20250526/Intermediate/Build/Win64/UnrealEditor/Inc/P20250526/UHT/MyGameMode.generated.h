// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef P20250526_MyGameMode_generated_h
#error "MyGameMode.generated.h already included, missing '#pragma once' in MyGameMode.h"
#endif
#define P20250526_MyGameMode_generated_h

#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/P20250526"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyGameMode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyGameMode(AMyGameMode&&); \
	AMyGameMode(const AMyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode) \
	NO_API virtual ~AMyGameMode();


#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyGameMode_h_13_PROLOG
#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyGameMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> P20250526_API UClass* StaticClass<class AMyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_MyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
