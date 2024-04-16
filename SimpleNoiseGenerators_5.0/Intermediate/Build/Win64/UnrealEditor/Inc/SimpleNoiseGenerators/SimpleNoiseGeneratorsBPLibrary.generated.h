// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLENOISEGENERATORS_SimpleNoiseGeneratorsBPLibrary_generated_h
#error "SimpleNoiseGeneratorsBPLibrary.generated.h already included, missing '#pragma once' in SimpleNoiseGeneratorsBPLibrary.h"
#endif
#define SIMPLENOISEGENERATORS_SimpleNoiseGeneratorsBPLibrary_generated_h

#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSphericalNoise3D); \
	DECLARE_FUNCTION(execCircleNoise2D); \
	DECLARE_FUNCTION(execVoronoiNoise4D); \
	DECLARE_FUNCTION(execVoronoiNoise3D); \
	DECLARE_FUNCTION(execVoronoiNoise2D); \
	DECLARE_FUNCTION(execWorleyNoise4D); \
	DECLARE_FUNCTION(execWorleyNoise3D); \
	DECLARE_FUNCTION(execWorleyNoise2D); \
	DECLARE_FUNCTION(execWorleyNoise1D); \
	DECLARE_FUNCTION(execPerlinNoise4D); \
	DECLARE_FUNCTION(execSimplePerlinNoise4D); \
	DECLARE_FUNCTION(execPerlinNoise3D); \
	DECLARE_FUNCTION(execSimplePerlinNoise3D); \
	DECLARE_FUNCTION(execPerlinNoise2D); \
	DECLARE_FUNCTION(execSimplePerlinNoise2D); \
	DECLARE_FUNCTION(execPerlinNoise1D); \
	DECLARE_FUNCTION(execSimplePerlinNoise1D);


#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSphericalNoise3D); \
	DECLARE_FUNCTION(execCircleNoise2D); \
	DECLARE_FUNCTION(execVoronoiNoise4D); \
	DECLARE_FUNCTION(execVoronoiNoise3D); \
	DECLARE_FUNCTION(execVoronoiNoise2D); \
	DECLARE_FUNCTION(execWorleyNoise4D); \
	DECLARE_FUNCTION(execWorleyNoise3D); \
	DECLARE_FUNCTION(execWorleyNoise2D); \
	DECLARE_FUNCTION(execWorleyNoise1D); \
	DECLARE_FUNCTION(execPerlinNoise4D); \
	DECLARE_FUNCTION(execSimplePerlinNoise4D); \
	DECLARE_FUNCTION(execPerlinNoise3D); \
	DECLARE_FUNCTION(execSimplePerlinNoise3D); \
	DECLARE_FUNCTION(execPerlinNoise2D); \
	DECLARE_FUNCTION(execSimplePerlinNoise2D); \
	DECLARE_FUNCTION(execPerlinNoise1D); \
	DECLARE_FUNCTION(execSimplePerlinNoise1D);


#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleNoiseGeneratorsBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleNoiseGeneratorsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleNoiseGenerators"), NO_API) \
	DECLARE_SERIALIZER(USimpleNoiseGeneratorsBPLibrary)


#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleNoiseGeneratorsBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleNoiseGeneratorsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleNoiseGenerators"), NO_API) \
	DECLARE_SERIALIZER(USimpleNoiseGeneratorsBPLibrary)


#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleNoiseGeneratorsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleNoiseGeneratorsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleNoiseGeneratorsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleNoiseGeneratorsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleNoiseGeneratorsBPLibrary(USimpleNoiseGeneratorsBPLibrary&&); \
	NO_API USimpleNoiseGeneratorsBPLibrary(const USimpleNoiseGeneratorsBPLibrary&); \
public:


#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleNoiseGeneratorsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleNoiseGeneratorsBPLibrary(USimpleNoiseGeneratorsBPLibrary&&); \
	NO_API USimpleNoiseGeneratorsBPLibrary(const USimpleNoiseGeneratorsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleNoiseGeneratorsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleNoiseGeneratorsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleNoiseGeneratorsBPLibrary)


#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_11_PROLOG
#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_INCLASS \
	FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SimpleNoiseGeneratorsBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLENOISEGENERATORS_API UClass* StaticClass<class USimpleNoiseGeneratorsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
