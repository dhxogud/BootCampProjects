// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rocket.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef P20250522_Rocket_generated_h
#error "Rocket.generated.h already included, missing '#pragma once' in Rocket.h"
#endif
#define P20250522_Rocket_generated_h

#define FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCallCPPToDefaultExecuteBP); \
	DECLARE_FUNCTION(execProcessBeginOverlap);


#define FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_16_CALLBACK_WRAPPERS
#define FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARocket(); \
	friend struct Z_Construct_UClass_ARocket_Statics; \
public: \
	DECLARE_CLASS(ARocket, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/P20250522"), NO_API) \
	DECLARE_SERIALIZER(ARocket)


#define FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARocket(ARocket&&); \
	ARocket(const ARocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARocket) \
	NO_API virtual ~ARocket();


#define FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_13_PROLOG
#define FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_16_CALLBACK_WRAPPERS \
	FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> P20250522_API UClass* StaticClass<class ARocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_P20250522_Source_P20250522_Rocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
