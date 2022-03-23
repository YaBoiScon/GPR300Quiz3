// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIZ3_Quiz3Character_generated_h
#error "Quiz3Character.generated.h already included, missing '#pragma once' in Quiz3Character.h"
#endif
#define QUIZ3_Quiz3Character_generated_h

#define Quiz3_Source_Quiz3_Quiz3Character_h_12_SPARSE_DATA
#define Quiz3_Source_Quiz3_Quiz3Character_h_12_RPC_WRAPPERS
#define Quiz3_Source_Quiz3_Quiz3Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Quiz3_Source_Quiz3_Quiz3Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuiz3Character(); \
	friend struct Z_Construct_UClass_AQuiz3Character_Statics; \
public: \
	DECLARE_CLASS(AQuiz3Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiz3"), NO_API) \
	DECLARE_SERIALIZER(AQuiz3Character)


#define Quiz3_Source_Quiz3_Quiz3Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAQuiz3Character(); \
	friend struct Z_Construct_UClass_AQuiz3Character_Statics; \
public: \
	DECLARE_CLASS(AQuiz3Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quiz3"), NO_API) \
	DECLARE_SERIALIZER(AQuiz3Character)


#define Quiz3_Source_Quiz3_Quiz3Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuiz3Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuiz3Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuiz3Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuiz3Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuiz3Character(AQuiz3Character&&); \
	NO_API AQuiz3Character(const AQuiz3Character&); \
public:


#define Quiz3_Source_Quiz3_Quiz3Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuiz3Character(AQuiz3Character&&); \
	NO_API AQuiz3Character(const AQuiz3Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuiz3Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuiz3Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuiz3Character)


#define Quiz3_Source_Quiz3_Quiz3Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AQuiz3Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AQuiz3Character, FollowCamera); }


#define Quiz3_Source_Quiz3_Quiz3Character_h_9_PROLOG
#define Quiz3_Source_Quiz3_Quiz3Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_SPARSE_DATA \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_RPC_WRAPPERS \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_INCLASS \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Quiz3_Source_Quiz3_Quiz3Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_SPARSE_DATA \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_INCLASS_NO_PURE_DECLS \
	Quiz3_Source_Quiz3_Quiz3Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIZ3_API UClass* StaticClass<class AQuiz3Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Quiz3_Source_Quiz3_Quiz3Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
