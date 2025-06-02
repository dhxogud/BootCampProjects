// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZombieCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef P20250526_ZombieCharacter_generated_h
#error "ZombieCharacter.generated.h already included, missing '#pragma once' in ZombieCharacter.h"
#endif
#define P20250526_ZombieCharacter_generated_h

#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieCharacter(); \
	friend struct Z_Construct_UClass_AZombieCharacter_Statics; \
public: \
	DECLARE_CLASS(AZombieCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/P20250526"), NO_API) \
	DECLARE_SERIALIZER(AZombieCharacter)


#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AZombieCharacter(AZombieCharacter&&); \
	AZombieCharacter(const AZombieCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombieCharacter) \
	NO_API virtual ~AZombieCharacter();


#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_20_PROLOG
#define FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> P20250526_API UClass* StaticClass<class AZombieCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_BootCampProjects_P20250526_Source_P20250526_ZombieCharacter_h


#define FOREACH_ENUM_EZOMBIESTATE(op) \
	op(EZombieState::Patrol) \
	op(EZombieState::Battle) \
	op(EZombieState::Chase) \
	op(EZombieState::Dead) 

enum class EZombieState : uint8;
template<> struct TIsUEnumClass<EZombieState> { enum { Value = true }; };
template<> P20250526_API UEnum* StaticEnum<EZombieState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
