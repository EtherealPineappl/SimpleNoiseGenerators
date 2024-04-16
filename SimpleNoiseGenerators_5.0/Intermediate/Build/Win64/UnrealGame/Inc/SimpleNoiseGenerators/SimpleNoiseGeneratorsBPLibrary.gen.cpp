// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNoiseGenerators/Public/SimpleNoiseGeneratorsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleNoiseGeneratorsBPLibrary() {}
// Cross Module References
	SIMPLENOISEGENERATORS_API UClass* Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_NoRegister();
	SIMPLENOISEGENERATORS_API UClass* Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SimpleNoiseGenerators();
// End Cross Module References
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execSphericalNoise3D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::SphericalNoise3D(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Seed,Z_Param_Size,Z_Param_Thickness,Z_Param_Attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execCircleNoise2D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::CircleNoise2D(Z_Param_X,Z_Param_Y,Z_Param_Size,Z_Param_Seed,Z_Param_Attenuation,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execVoronoiNoise4D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_W);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::VoronoiNoise4D(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W,Z_Param_CellSize,Z_Param_Seed,Z_Param_Attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execVoronoiNoise3D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::VoronoiNoise3D(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_CellSize,Z_Param_Seed,Z_Param_Attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execVoronoiNoise2D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::VoronoiNoise2D(Z_Param_X,Z_Param_Y,Z_Param_CellSize,Z_Param_Seed,Z_Param_Attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execWorleyNoise4D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_W);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::WorleyNoise4D(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W,Z_Param_Seed,Z_Param_CellSize,Z_Param_Attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execWorleyNoise3D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::WorleyNoise3D(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Seed,Z_Param_CellSize,Z_Param_Attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execWorleyNoise2D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::WorleyNoise2D(Z_Param_X,Z_Param_Y,Z_Param_Seed,Z_Param_CellSize,Z_Param_Attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execWorleyNoise1D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::WorleyNoise1D(Z_Param_X,Z_Param_Seed,Z_Param_CellSize,Z_Param_Attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execPerlinNoise4D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_W);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::PerlinNoise4D(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W,Z_Param_Scale,Z_Param_CellSize,Z_Param_Attenuation,Z_Param_Seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execSimplePerlinNoise4D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_W);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::SimplePerlinNoise4D(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_W,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execPerlinNoise3D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::PerlinNoise3D(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Scale,Z_Param_CellSize,Z_Param_Attenuation,Z_Param_Seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execSimplePerlinNoise3D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::SimplePerlinNoise3D(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execPerlinNoise2D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::PerlinNoise2D(Z_Param_X,Z_Param_Y,Z_Param_Scale,Z_Param_CellSize,Z_Param_Attenuation,Z_Param_Seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execSimplePerlinNoise2D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::SimplePerlinNoise2D(Z_Param_X,Z_Param_Y,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execPerlinNoise1D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Attenuation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::PerlinNoise1D(Z_Param_X,Z_Param_Scale,Z_Param_CellSize,Z_Param_Attenuation,Z_Param_Seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleNoiseGeneratorsBPLibrary::execSimplePerlinNoise1D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNoiseGeneratorsBPLibrary::SimplePerlinNoise1D(Z_Param_X,Z_Param_Scale);
		P_NATIVE_END;
	}
	void USimpleNoiseGeneratorsBPLibrary::StaticRegisterNativesUSimpleNoiseGeneratorsBPLibrary()
	{
		UClass* Class = USimpleNoiseGeneratorsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CircleNoise2D", &USimpleNoiseGeneratorsBPLibrary::execCircleNoise2D },
			{ "PerlinNoise1D", &USimpleNoiseGeneratorsBPLibrary::execPerlinNoise1D },
			{ "PerlinNoise2D", &USimpleNoiseGeneratorsBPLibrary::execPerlinNoise2D },
			{ "PerlinNoise3D", &USimpleNoiseGeneratorsBPLibrary::execPerlinNoise3D },
			{ "PerlinNoise4D", &USimpleNoiseGeneratorsBPLibrary::execPerlinNoise4D },
			{ "SimplePerlinNoise1D", &USimpleNoiseGeneratorsBPLibrary::execSimplePerlinNoise1D },
			{ "SimplePerlinNoise2D", &USimpleNoiseGeneratorsBPLibrary::execSimplePerlinNoise2D },
			{ "SimplePerlinNoise3D", &USimpleNoiseGeneratorsBPLibrary::execSimplePerlinNoise3D },
			{ "SimplePerlinNoise4D", &USimpleNoiseGeneratorsBPLibrary::execSimplePerlinNoise4D },
			{ "SphericalNoise3D", &USimpleNoiseGeneratorsBPLibrary::execSphericalNoise3D },
			{ "VoronoiNoise2D", &USimpleNoiseGeneratorsBPLibrary::execVoronoiNoise2D },
			{ "VoronoiNoise3D", &USimpleNoiseGeneratorsBPLibrary::execVoronoiNoise3D },
			{ "VoronoiNoise4D", &USimpleNoiseGeneratorsBPLibrary::execVoronoiNoise4D },
			{ "WorleyNoise1D", &USimpleNoiseGeneratorsBPLibrary::execWorleyNoise1D },
			{ "WorleyNoise2D", &USimpleNoiseGeneratorsBPLibrary::execWorleyNoise2D },
			{ "WorleyNoise3D", &USimpleNoiseGeneratorsBPLibrary::execWorleyNoise3D },
			{ "WorleyNoise4D", &USimpleNoiseGeneratorsBPLibrary::execWorleyNoise4D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventCircleNoise2D_Parms
		{
			float X;
			float Y;
			float Size;
			int32 Seed;
			float Attenuation;
			float Thickness;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventCircleNoise2D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventCircleNoise2D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventCircleNoise2D_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventCircleNoise2D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventCircleNoise2D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventCircleNoise2D_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventCircleNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Circle Noise Generation" },
		{ "Comment", "//Circle Noise 2D\n" },
		{ "DisplayName", "CircleNoise2D" },
		{ "Keywords", "Circle Noise, 2D, Generate, Seed, Size, Attenuation, Thickness" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Circle Noise 2D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "CircleNoise2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::SimpleNoiseGeneratorsBPLibrary_eventCircleNoise2D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise1D_Parms
		{
			float X;
			float Scale;
			float CellSize;
			float Attenuation;
			int32 Seed;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise1D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise1D_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise1D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise1D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise1D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise Generation" },
		{ "Comment", "// Generate Complex Perlin Noise 1D with Cell Size and Attenuation\n" },
		{ "DisplayName", "PerlinNoise1D" },
		{ "Keywords", "Perlin Noise, 1D, Generate, Cell Size, Attenuation" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Generate Complex Perlin Noise 1D with Cell Size and Attenuation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "PerlinNoise1D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise1D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise2D_Parms
		{
			float X;
			float Y;
			float Scale;
			float CellSize;
			float Attenuation;
			int32 Seed;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise2D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise2D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise2D_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise2D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise2D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise2D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise Generation" },
		{ "Comment", "//Generate Perlin Noise 2D\n" },
		{ "DisplayName", "PerlinNoise2D" },
		{ "Keywords", "Perlin Noise, 2D, Generate, Cell Size" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Generate Perlin Noise 2D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "PerlinNoise2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise2D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms
		{
			float X;
			float Y;
			float Z;
			float Scale;
			float CellSize;
			float Attenuation;
			int32 Seed;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise Generation" },
		{ "Comment", "//Generate Perlin Noise 3D\n" },
		{ "DisplayName", "PerlinNoise3D" },
		{ "Keywords", "Perlin Noise, 3D, Generate, Cell Size, Attenuation" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Generate Perlin Noise 3D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "PerlinNoise3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise3D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms
		{
			float X;
			float Y;
			float Z;
			float W;
			float Scale;
			float CellSize;
			float Attenuation;
			int32 Seed;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_W;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms, W), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise Generation" },
		{ "Comment", "//Generate Perlin Noise 4D\n" },
		{ "DisplayName", "PerlinNoise4D" },
		{ "Keywords", "Perlin Noise, 4D, Generate, Cell Size, Attenuation" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Generate Perlin Noise 4D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "PerlinNoise4D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::SimpleNoiseGeneratorsBPLibrary_eventPerlinNoise4D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise1D_Parms
		{
			float X;
			float Scale;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise1D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise1D_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise Generation" },
		{ "Comment", "//1D Perlin Noise\n//Simple Perlin Noise 1D\n" },
		{ "DisplayName", "SimplePerlinNoise1D" },
		{ "Keywords", "Perlin Noise, 1D, Generate" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "1D Perlin Noise\nSimple Perlin Noise 1D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "SimplePerlinNoise1D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise1D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise2D_Parms
		{
			float X;
			float Y;
			float Scale;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise2D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise2D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise2D_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise Generation" },
		{ "Comment", "//2D Perlin Noise\n//Generate Simple Perlin Noise 2D\n" },
		{ "DisplayName", "SimplePerlinNoise2D" },
		{ "Keywords", "Perlin Noise, 2D, Generate" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "2D Perlin Noise\nGenerate Simple Perlin Noise 2D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "SimplePerlinNoise2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise2D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise3D_Parms
		{
			float X;
			float Y;
			float Z;
			float Scale;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise3D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise3D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise3D_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise3D_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise Generation" },
		{ "Comment", "//3D Perlin Noise\n//Generate Simple Perlin Noise 3D\n" },
		{ "DisplayName", "SimplePerlinNoise3D" },
		{ "Keywords", "Perlin Noise, 3D, Generate" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "3D Perlin Noise\nGenerate Simple Perlin Noise 3D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "SimplePerlinNoise3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise3D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise4D_Parms
		{
			float X;
			float Y;
			float Z;
			float W;
			float Scale;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_W;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise4D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise4D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise4D_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise4D_Parms, W), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise4D_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin Noise Generation" },
		{ "Comment", "//4D Perlin Noise\n//Generate Simple Perlin Noise 4D\n" },
		{ "DisplayName", "SimplePerlinNoise4D" },
		{ "Keywords", "Perlin Noise, 4D, Generate" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "4D Perlin Noise\nGenerate Simple Perlin Noise 4D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "SimplePerlinNoise4D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::SimpleNoiseGeneratorsBPLibrary_eventSimplePerlinNoise4D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms
		{
			float X;
			float Y;
			float Z;
			int32 Seed;
			float Size;
			float Thickness;
			float Attenuation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Circle Noise Generation" },
		{ "Comment", "//Circle Noise 3D\n" },
		{ "DisplayName", "SphericalNoise3D" },
		{ "Keywords", "Spherical Noise, 3D, Generate, Seed, Attenuation, Size, Thickness" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Circle Noise 3D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "SphericalNoise3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::SimpleNoiseGeneratorsBPLibrary_eventSphericalNoise3D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise2D_Parms
		{
			float X;
			float Y;
			float CellSize;
			int32 Seed;
			float Attenuation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise2D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise2D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise2D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise2D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise2D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voronoi Noise Generation" },
		{ "Comment", "//Voronoi Noise 2D\n" },
		{ "DisplayName", "VoronoiNoise2D" },
		{ "Keywords", "Voronoi Noise, 2D, Generate, Seed, Attenuation" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Voronoi Noise 2D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "VoronoiNoise2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise2D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise3D_Parms
		{
			float X;
			float Y;
			float Z;
			float CellSize;
			int32 Seed;
			float Attenuation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise3D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise3D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise3D_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise3D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise3D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise3D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voronoi Noise Generation" },
		{ "Comment", "//Voronoi Noise 3D\n" },
		{ "DisplayName", "VoronoiNoise3D" },
		{ "Keywords", "Voronoi Noise, 3D, Generate, Seed, Attenuation" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Voronoi Noise 3D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "VoronoiNoise3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise3D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms
		{
			float X;
			float Y;
			float Z;
			float W;
			float CellSize;
			int32 Seed;
			float Attenuation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_W;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms, W), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voronoi Noise Generation" },
		{ "Comment", "//Voronoi Noise 4D\n" },
		{ "DisplayName", "VoronoiNoise4D" },
		{ "Keywords", "Voronoi Noise, 4D, Generate, Seed, Attenuation" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Voronoi Noise 4D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "VoronoiNoise4D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::SimpleNoiseGeneratorsBPLibrary_eventVoronoiNoise4D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise1D_Parms
		{
			float X;
			int32 Seed;
			float CellSize;
			float Attenuation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise1D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise1D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise1D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise1D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Worley Noise Generation" },
		{ "Comment", "// Generate Worley Noise 1D\n" },
		{ "DisplayName", "WorleyNoise1D" },
		{ "Keywords", "Worley Noise, Cellular Noise, 1D, Generate" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Generate Worley Noise 1D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "WorleyNoise1D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise1D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise2D_Parms
		{
			float X;
			float Y;
			int32 Seed;
			float CellSize;
			float Attenuation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise2D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise2D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise2D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise2D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise2D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Worley Noise Generation" },
		{ "Comment", "// Generate Worley Noise 2D\n" },
		{ "DisplayName", "WorleyNoise2D" },
		{ "Keywords", "Worley Noise, Cellular Noise, 2D, Generate, Cell Size, Seed, Attenuation" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Generate Worley Noise 2D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "WorleyNoise2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise2D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise3D_Parms
		{
			float X;
			float Y;
			float Z;
			int32 Seed;
			float CellSize;
			float Attenuation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise3D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise3D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise3D_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise3D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise3D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise3D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Worley Noise Generation" },
		{ "Comment", "// Generate Worley Noise 3D\n" },
		{ "DisplayName", "WorleyNoise3D" },
		{ "Keywords", "Worley Noise, Cellular Noise, 3D, Generate" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Generate Worley Noise 3D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "WorleyNoise3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise3D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics
	{
		struct SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms
		{
			float X;
			float Y;
			float Z;
			float W;
			int32 Seed;
			float CellSize;
			float Attenuation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_W;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms, W), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms, Attenuation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Worley Noise Generation" },
		{ "Comment", "// Generate Worley Noise 4D\n" },
		{ "DisplayName", "WorleyNoise4D" },
		{ "Keywords", "Worley Noise, Cellular Noise, 4D, Generate" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ToolTip", "Generate Worley Noise 4D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, nullptr, "WorleyNoise4D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::SimpleNoiseGeneratorsBPLibrary_eventWorleyNoise4D_Parms), Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleNoiseGeneratorsBPLibrary);
	UClass* Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_NoRegister()
	{
		return USimpleNoiseGeneratorsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleNoiseGenerators,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_CircleNoise2D, "CircleNoise2D" }, // 3935847689
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise1D, "PerlinNoise1D" }, // 1687745422
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise2D, "PerlinNoise2D" }, // 3002847626
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise3D, "PerlinNoise3D" }, // 1892064127
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_PerlinNoise4D, "PerlinNoise4D" }, // 2068970811
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise1D, "SimplePerlinNoise1D" }, // 3997263489
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise2D, "SimplePerlinNoise2D" }, // 4233404987
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise3D, "SimplePerlinNoise3D" }, // 2519834370
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SimplePerlinNoise4D, "SimplePerlinNoise4D" }, // 957798980
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_SphericalNoise3D, "SphericalNoise3D" }, // 118230438
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise2D, "VoronoiNoise2D" }, // 2269984791
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise3D, "VoronoiNoise3D" }, // 945829014
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_VoronoiNoise4D, "VoronoiNoise4D" }, // 1472282192
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise1D, "WorleyNoise1D" }, // 3387819764
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise2D, "WorleyNoise2D" }, // 1056103669
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise3D, "WorleyNoise3D" }, // 3851808651
		{ &Z_Construct_UFunction_USimpleNoiseGeneratorsBPLibrary_WorleyNoise4D, "WorleyNoise4D" }, // 356299767
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleNoiseGeneratorsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleNoiseGeneratorsBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleNoiseGeneratorsBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics::ClassParams = {
		&USimpleNoiseGeneratorsBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary()
	{
		if (!Z_Registration_Info_UClass_USimpleNoiseGeneratorsBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleNoiseGeneratorsBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleNoiseGeneratorsBPLibrary.OuterSingleton;
	}
	template<> SIMPLENOISEGENERATORS_API UClass* StaticClass<USimpleNoiseGeneratorsBPLibrary>()
	{
		return USimpleNoiseGeneratorsBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleNoiseGeneratorsBPLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleNoiseGeneratorsBPLibrary, USimpleNoiseGeneratorsBPLibrary::StaticClass, TEXT("USimpleNoiseGeneratorsBPLibrary"), &Z_Registration_Info_UClass_USimpleNoiseGeneratorsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleNoiseGeneratorsBPLibrary), 1898548116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_2130365626(TEXT("/Script/SimpleNoiseGenerators"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleNoiseGenerators_Source_SimpleNoiseGenerators_Public_SimpleNoiseGeneratorsBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
