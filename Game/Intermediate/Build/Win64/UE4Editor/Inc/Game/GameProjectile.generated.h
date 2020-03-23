// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GAME_GameProjectile_generated_h
#error "GameProjectile.generated.h already included, missing '#pragma once' in GameProjectile.h"
#endif
#define GAME_GameProjectile_generated_h

#define Game_Source_Game_GameProjectile_h_12_SPARSE_DATA
#define Game_Source_Game_GameProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_GameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Game_Source_Game_GameProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameProjectile(); \
	friend struct Z_Construct_UClass_AGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Game_Source_Game_GameProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameProjectile(); \
	friend struct Z_Construct_UClass_AGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Game_Source_Game_GameProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameProjectile(AGameProjectile&&); \
	NO_API AGameProjectile(const AGameProjectile&); \
public:


#define Game_Source_Game_GameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameProjectile(AGameProjectile&&); \
	NO_API AGameProjectile(const AGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameProjectile)


#define Game_Source_Game_GameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGameProjectile, ProjectileMovement); }


#define Game_Source_Game_GameProjectile_h_9_PROLOG
#define Game_Source_Game_GameProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_GameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_GameProjectile_h_12_SPARSE_DATA \
	Game_Source_Game_GameProjectile_h_12_RPC_WRAPPERS \
	Game_Source_Game_GameProjectile_h_12_INCLASS \
	Game_Source_Game_GameProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_GameProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_GameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_GameProjectile_h_12_SPARSE_DATA \
	Game_Source_Game_GameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_GameProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_GameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_GameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
