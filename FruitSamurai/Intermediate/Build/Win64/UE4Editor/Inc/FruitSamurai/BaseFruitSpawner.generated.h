// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef FRUITSAMURAI_BaseFruitSpawner_generated_h
#error "BaseFruitSpawner.generated.h already included, missing '#pragma once' in BaseFruitSpawner.h"
#endif
#define FRUITSAMURAI_BaseFruitSpawner_generated_h

#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_SPARSE_DATA
#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpawnTransform);


#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpawnTransform);


#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseFruitSpawner(); \
	friend struct Z_Construct_UClass_ABaseFruitSpawner_Statics; \
public: \
	DECLARE_CLASS(ABaseFruitSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FruitSamurai"), NO_API) \
	DECLARE_SERIALIZER(ABaseFruitSpawner)


#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseFruitSpawner(); \
	friend struct Z_Construct_UClass_ABaseFruitSpawner_Statics; \
public: \
	DECLARE_CLASS(ABaseFruitSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FruitSamurai"), NO_API) \
	DECLARE_SERIALIZER(ABaseFruitSpawner)


#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseFruitSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseFruitSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseFruitSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseFruitSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseFruitSpawner(ABaseFruitSpawner&&); \
	NO_API ABaseFruitSpawner(const ABaseFruitSpawner&); \
public:


#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseFruitSpawner(ABaseFruitSpawner&&); \
	NO_API ABaseFruitSpawner(const ABaseFruitSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseFruitSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseFruitSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseFruitSpawner)


#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnAngleRange() { return STRUCT_OFFSET(ABaseFruitSpawner, SpawnAngleRange); } \
	FORCEINLINE static uint32 __PPO__MaxSpawnAngleTilt() { return STRUCT_OFFSET(ABaseFruitSpawner, MaxSpawnAngleTilt); } \
	FORCEINLINE static uint32 __PPO__SpawnYLocationRange() { return STRUCT_OFFSET(ABaseFruitSpawner, SpawnYLocationRange); } \
	FORCEINLINE static uint32 __PPO__SpawnXLocation() { return STRUCT_OFFSET(ABaseFruitSpawner, SpawnXLocation); } \
	FORCEINLINE static uint32 __PPO__SpawnZLocation() { return STRUCT_OFFSET(ABaseFruitSpawner, SpawnZLocation); }


#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_9_PROLOG
#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_SPARSE_DATA \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_RPC_WRAPPERS \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_INCLASS \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_SPARSE_DATA \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_INCLASS_NO_PURE_DECLS \
	FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRUITSAMURAI_API UClass* StaticClass<class ABaseFruitSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FruitSamurai_Source_FruitSamurai_Spawners_BaseFruitSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
