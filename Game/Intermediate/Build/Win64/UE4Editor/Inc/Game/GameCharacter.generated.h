// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GameCharacter_generated_h
#error "GameCharacter.generated.h already included, missing '#pragma once' in GameCharacter.h"
#endif
#define GAME_GameCharacter_generated_h

#define Game_Source_Game_GameCharacter_h_14_SPARSE_DATA
#define Game_Source_Game_GameCharacter_h_14_RPC_WRAPPERS
#define Game_Source_Game_GameCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Game_GameCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend struct Z_Construct_UClass_AGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGameCharacter)


#define Game_Source_Game_GameCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend struct Z_Construct_UClass_AGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGameCharacter)


#define Game_Source_Game_GameCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCharacter(AGameCharacter&&); \
	NO_API AGameCharacter(const AGameCharacter&); \
public:


#define Game_Source_Game_GameCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCharacter(AGameCharacter&&); \
	NO_API AGameCharacter(const AGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameCharacter)


#define Game_Source_Game_GameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AGameCharacter, L_MotionController); }


#define Game_Source_Game_GameCharacter_h_11_PROLOG
#define Game_Source_Game_GameCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_GameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_GameCharacter_h_14_SPARSE_DATA \
	Game_Source_Game_GameCharacter_h_14_RPC_WRAPPERS \
	Game_Source_Game_GameCharacter_h_14_INCLASS \
	Game_Source_Game_GameCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_GameCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_GameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_GameCharacter_h_14_SPARSE_DATA \
	Game_Source_Game_GameCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_GameCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_GameCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_GameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
