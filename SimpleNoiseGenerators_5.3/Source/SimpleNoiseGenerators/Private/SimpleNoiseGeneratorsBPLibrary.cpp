// Copyright Epic Games, Inc. All Rights Reserved.
// Studio Reborne 2024

#include "SimpleNoiseGeneratorsBPLibrary.h"
#include "SimpleNoiseGenerators.h"
#include "Math/UnrealMathUtility.h"
#include "Math/RandomStream.h"
#include "Engine/Texture2D.h"
#include "ImageUtils.h"

USimpleNoiseGeneratorsBPLibrary::USimpleNoiseGeneratorsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}
//Worley Noise

//1D Perlin Noise
//Simple Perlin Noise 1D
float USimpleNoiseGeneratorsBPLibrary::SimplePerlinNoise1D(float X, float Scale)
{
    // Ensure Scale is not zero to avoid division by zero error
    if (Scale <= 0.f)
    {
        Scale = 0.01f; // Default to a very small scale if zero or negative value is provided
    }

    // Adjust coordinate based on scale
    float AdjustedX = X / Scale;

    // Generate Perlin noise value using Unreal's built-in FMath function for 1D
    // Since Unreal Engine doesn't provide a 1D Perlin noise function directly,
    // we'll use the 2D function with a constant Y value.
    float NoiseValue = FMath::PerlinNoise2D(FVector2D(AdjustedX, 0.0f));

    // Map the output range from [-1, 1] to [0, 1]
    NoiseValue = (NoiseValue + 1.f) / 2.f;

    return NoiseValue;
}

//Perlin Noise 1D
float USimpleNoiseGeneratorsBPLibrary::PerlinNoise1D(float X, float Scale, float CellSize, float Attenuation, int32 Seed)
{
    // Ensure Scale and CellSize are not zero to avoid division by zero error
    if (Scale <= 0.f)
    {
        Scale = 0.01f; // Default to a very small scale if zero or negative value is provided
    }

    if (CellSize <= 0.f)
    {
        CellSize = 0.01f; // Default to a very small cell size if zero or negative value is provided
    }

    // Generate pseudo-random offsets from the seed
    FRandomStream RandomStream(Seed);
    float OffsetX = RandomStream.FRandRange(-100000.f, 100000.f);

    // Adjust coordinates based on scale and apply the offsets
    float AdjustedX = (X / Scale) + OffsetX;

    // Generate Perlin noise value using Unreal's built-in FMath function for 1D
    // Using the 2D noise function with a constant Y value since there's no 1D function.
    float NoiseValue = FMath::PerlinNoise2D(FVector2D(AdjustedX, 0.0f));

    // Calculate the attenuation factor based on the X position
    float BaseEffect = 2.0f; // Example value, adjust based on desired effect
    float AttenuatedAmplitude = BaseEffect - FMath::Exp(-FMath::Abs(X) / Attenuation);

    // Apply the attenuation to the noise value
    NoiseValue = (NoiseValue + 1.f) / 2.f * AttenuatedAmplitude;

    return NoiseValue;
}

//2D Perlin Noise
//Simple Perlin Noise 2D
float USimpleNoiseGeneratorsBPLibrary::SimplePerlinNoise2D(float X, float Y, float Scale)
{
    // Ensure Scale is not zero to avoid division by zero error
    if (Scale <= 0.f)
    {
        Scale = 0.01f; // Default to a very small scale if zero or negative value is provided
    }

    // Adjust coordinates based on scale
    float AdjustedX = X / Scale;
    float AdjustedY = Y / Scale;

    // Generate Perlin noise value using Unreal's built-in FMath function
    float NoiseValue = (FMath::PerlinNoise2D(FVector2D(AdjustedX, AdjustedY)) + 1.f) / 2.f;

    return NoiseValue;
}

//Perlin Noise 2D
float USimpleNoiseGeneratorsBPLibrary::PerlinNoise2D(float X, float Y, float Scale, float CellSize, float Attenuation, int32 Seed)
{
    // Ensure Scale and CellSize are not zero to avoid division by zero error
    if (Scale <= 0.f)
    {
        Scale = 0.01f; // Default to a very small scale if zero or negative value is provided
    }

    if (CellSize <= 0.f)
    {
        CellSize = 0.01f; // Default to a very small cell size if zero or negative value is provided
    }

    // Generate pseudo-random offsets from the seed
    FRandomStream RandomStream(Seed);
    float OffsetX = RandomStream.FRandRange(-100000.f, 100000.f);
    float OffsetY = RandomStream.FRandRange(-100000.f, 100000.f);

    // Adjust coordinates based on scale and apply the offsets
    float AdjustedX = ((X / CellSize) / Scale) + OffsetX;
    float AdjustedY = ((Y / CellSize) / Scale) + OffsetY;

    // Generate Perlin noise value using Unreal's built-in FMath function
    float NoiseValue = (FMath::PerlinNoise2D(FVector2D(AdjustedX, AdjustedY)) + 1.f) / 2.f;

    float BaseEffect = 2.0f; // Example value, adjust based on desired effect
    float AttenuatedAmplitude = BaseEffect - FMath::Exp(-FMath::Abs(X) / Attenuation);

    // Combine noise value with attenuated amplitude
    NoiseValue = (NoiseValue + 1.f) / 2.f * AttenuatedAmplitude;

    return NoiseValue;
}

//3D Perlin Noise
//Simple Perlin Noise 3D
float USimpleNoiseGeneratorsBPLibrary::SimplePerlinNoise3D(float X, float Y, float Z, float Scale)
{
    // Ensure Scale is not zero to avoid division by zero error
    if (Scale <= 0.f)
    {
        Scale = 0.01f; // Default to a very small scale if zero or negative value is provided
    }

    // Adjust coordinates based on scale
    float AdjustedX = X / Scale;
    float AdjustedY = Y / Scale;
    float AdjustedZ = Z / Scale;

    // Generate Perlin noise value using Unreal's built-in FMath function for 3D
    float NoiseValue = FMath::PerlinNoise3D(FVector(AdjustedX, AdjustedY, AdjustedZ));

    // Map the output range from [-1, 1] to [0, 1]
    NoiseValue = (NoiseValue + 1.f) / 2.f;

    return NoiseValue;
}

//Perlin Noise 3D
float USimpleNoiseGeneratorsBPLibrary::PerlinNoise3D(float X, float Y, float Z, float Scale, float CellSize, float Attenuation, int32 Seed)
{
    // Ensure Scale and CellSize are not zero to avoid division by zero error
    if (Scale <= 0.f)
    {
        Scale = 0.01f; // Default to a very small scale if zero or negative value is provided
    }

    if (CellSize <= 0.f)
    {
        CellSize = 0.01f; // Default to a very small cell size if zero or negative value is provided
    }

    // Generate pseudo-random offsets from the seed
    FRandomStream RandomStream(Seed);
    float OffsetX = RandomStream.FRandRange(-100000.f, 100000.f);
    float OffsetY = RandomStream.FRandRange(-100000.f, 100000.f);
    float OffsetZ = RandomStream.FRandRange(-100000.f, 100000.f);

    // Adjust coordinates based on scale and apply the offsets
    float AdjustedX = ((X / CellSize) / Scale) + OffsetX;
    float AdjustedY = ((Y / CellSize) / Scale) + OffsetY;
    float AdjustedZ = ((Z / CellSize) / Scale) + OffsetZ;

    // Generate Perlin noise value using Unreal's built-in FMath function for 3D
    float NoiseValue = FMath::PerlinNoise3D(FVector(AdjustedX, AdjustedY, AdjustedZ));

    float BaseEffect = 2.0f; // Example value, adjust based on desired effect
    float AttenuatedAmplitude = BaseEffect - FMath::Exp(-FMath::Abs(X) / Attenuation);

    // Apply the attenuation to the noise value
    NoiseValue = (NoiseValue + 1.f) / 2.f * AttenuatedAmplitude;

    return NoiseValue;
}

//4D perlin Noise
//Simple Perlin Noise 4D
float USimpleNoiseGeneratorsBPLibrary::SimplePerlinNoise4D(float X, float Y, float Z, float W, float Scale)
{
    // Ensure Scale is not zero to avoid division by zero error
    if (Scale <= 0.f)
    {
        Scale = 0.01f;
    }

    // Adjust coordinates based on scale
    float AdjustedX = X / Scale;
    float AdjustedY = Y / Scale;
    float AdjustedZ = Z / Scale;
    float AdjustedW = W / Scale;

    // Example approach: Combine two 3D noise values, using W as a phase shift for one
    float NoiseValue1 = FMath::PerlinNoise3D(FVector(AdjustedX, AdjustedY, AdjustedZ));
    float NoiseValue2 = FMath::PerlinNoise3D(FVector(AdjustedX + AdjustedW, AdjustedY + AdjustedW, AdjustedZ + AdjustedW));

    // Blend the two noise values (simple average)
    float NoiseValue = (NoiseValue1 + NoiseValue2) / 2.0f;

    // Normalize the result to [0, 1]
    NoiseValue = (NoiseValue + 1.f) / 2.f;

    return NoiseValue;
}

//Perlin Noise 4D
float USimpleNoiseGeneratorsBPLibrary::PerlinNoise4D(float X, float Y, float Z, float W, float Scale, float CellSize, float Attenuation, int32 Seed)
{
    if (Scale <= 0.f) Scale = 0.01f;
    if (CellSize <= 0.f) CellSize = 0.01f;

    // Generate pseudo-random offsets from the seed
    FRandomStream RandomStream(Seed);
    float OffsetX = RandomStream.FRandRange(-100000.f, 100000.f);
    float OffsetY = RandomStream.FRandRange(-100000.f, 100000.f);
    float OffsetZ = RandomStream.FRandRange(-100000.f, 100000.f);
    float OffsetW = RandomStream.FRandRange(-100000.f, 100000.f);

    // Adjust coordinates based on scale and apply the offsets
    float AdjustedX = (X / Scale) + OffsetX;
    float AdjustedY = (Y / Scale) + OffsetY;
    float AdjustedZ = (Y / Scale) + OffsetZ;
    float AdjustedW = (Y / Scale) + OffsetW;

    // Use W as a phase shift for one of the noise values
    float NoiseValue1 = FMath::PerlinNoise3D(FVector(AdjustedX, AdjustedY, AdjustedZ));
    float NoiseValue2 = FMath::PerlinNoise3D(FVector(AdjustedX + AdjustedW, AdjustedY + AdjustedW, AdjustedZ + AdjustedW));

    float BaseEffect = 2.0f; // Example value, adjust based on desired effect
    float AttenuatedAmplitude = BaseEffect - FMath::Exp(-FMath::Abs(X) / Attenuation);

    // Blend and normalize
    float NoiseValue = ((NoiseValue1 + NoiseValue2) / 2.0f + 1.f) / 2.f * AttenuatedAmplitude;

    return NoiseValue;
}



//Worley Noise

//Worley Noise 1D
float USimpleNoiseGeneratorsBPLibrary::WorleyNoise1D(float X, int Seed, float CellSize, float Attenuation)
{
    FRandomStream RandomStream(Seed);
    float MinDistance = MAX_flt;

    // Determine cell index based on CellSize
    int CellX = FMath::FloorToInt(X / CellSize);

    // Inspect the current cell and the two adjacent cells
    for (int offsetX = -1; offsetX <= 1; offsetX++)
    {
        // Unique seed for each cell based on its coordinate and the global seed
        int CellSeed = (CellX + offsetX) * 73856093 ^ Seed;
        RandomStream.Initialize(CellSeed);

        // Random point within this cell
        float PointX = (CellX + offsetX) * CellSize + RandomStream.FRand() * CellSize;

        // Update minimum distance
        float Distance = FMath::Abs(PointX - X);
        MinDistance = FMath::Min(MinDistance, Distance);
    }

    // Apply attenuation
    MinDistance *= Attenuation;

    // Normalize distance. Since we're in 1D, we adjust normalization accordingly.
    return FMath::Clamp(MinDistance / CellSize, 0.0f, 1.0f);
}

//Worley Noise 2D
float USimpleNoiseGeneratorsBPLibrary::WorleyNoise2D(float X, float Y, int Seed, float CellSize, float Attenuation)
{
    FRandomStream RandomStream(Seed);
    float MinDistance = MAX_flt;

    // Determine cell indices based on CellSize
    int CellX = FMath::FloorToInt(X / CellSize);
    int CellY = FMath::FloorToInt(Y / CellSize);

    // Inspect surrounding cells
    for (int offsetY = -1; offsetY <= 1; offsetY++)
    {
        for (int offsetX = -1; offsetX <= 1; offsetX++)
        {
            // Unique seed for each cell based on its coordinates and the global seed
            int CellSeed = (CellX + offsetX) * 73856093 ^ (CellY + offsetY) * 19349663 ^ Seed;
            RandomStream.Initialize(CellSeed);

            // Random point within this cell
            float PointX = (CellX + offsetX) * CellSize + RandomStream.FRand() * CellSize;
            float PointY = (CellY + offsetY) * CellSize + RandomStream.FRand() * CellSize;

            // Update minimum distance
            float Distance = FMath::Sqrt(FMath::Pow(PointX - X, 2) + FMath::Pow(PointY - Y, 2));
            MinDistance = FMath::Min(MinDistance, Distance);
        }
    }

    // Apply attenuation (simplified example)
    MinDistance *= Attenuation;

    // Normalize distance
    return FMath::Clamp(MinDistance / CellSize, 0.0f, 1.0f);
}

//Worley Noise 3D
float USimpleNoiseGeneratorsBPLibrary::WorleyNoise3D(float X, float Y, float Z, int Seed, float CellSize, float Attenuation)
{
    FRandomStream RandomStream(Seed);
    float MinDistance = MAX_flt;

    // Determine cell indices based on CellSize
    int CellX = FMath::FloorToInt(X / CellSize);
    int CellY = FMath::FloorToInt(Y / CellSize);
    int CellZ = FMath::FloorToInt(Z / CellSize);

    // Inspect surrounding cells in 3D
    for (int offsetZ = -1; offsetZ <= 1; offsetZ++)
    {
        for (int offsetY = -1; offsetY <= 1; offsetY++)
        {
            for (int offsetX = -1; offsetX <= 1; offsetX++)
            {
                // Unique seed for each cell based on its coordinates and the global seed
                int CellSeed = (CellX + offsetX) * 73856093 ^ (CellY + offsetY) * 19349663 ^ (CellZ + offsetZ) * 83492791 ^ Seed;
                RandomStream.Initialize(CellSeed);

                // Random point within this cell
                float PointX = (CellX + offsetX) * CellSize + RandomStream.FRand() * CellSize;
                float PointY = (CellY + offsetY) * CellSize + RandomStream.FRand() * CellSize;
                float PointZ = (CellZ + offsetZ) * CellSize + RandomStream.FRand() * CellSize;

                // Update minimum distance
                float Distance = FMath::Sqrt(FMath::Pow(PointX - X, 2) + FMath::Pow(PointY - Y, 2) + FMath::Pow(PointZ - Z, 2));
                MinDistance = FMath::Min(MinDistance, Distance);
            }
        }
    }

    // Apply attenuation (simplified example)
    MinDistance *= Attenuation;

    // Normalize distance
    return FMath::Clamp(MinDistance / CellSize, 0.0f, 1.0f);
}

//Worley Noise 4D
float USimpleNoiseGeneratorsBPLibrary::WorleyNoise4D(float X, float Y, float Z, float W, int Seed, float CellSize, float Attenuation)
{
    FRandomStream RandomStream(Seed);
    float MinDistance = MAX_flt;

    // Determine cell indices based on CellSize
    int CellX = FMath::FloorToInt(X / CellSize);
    int CellY = FMath::FloorToInt(Y / CellSize);
    int CellZ = FMath::FloorToInt(Z / CellSize);
    int CellW = FMath::FloorToInt(W / CellSize);

    // Inspect surrounding cells in 4D
    for (int offsetW = -1; offsetW <= 1; offsetW++)
    {
        for (int offsetZ = -1; offsetZ <= 1; offsetZ++)
        {
            for (int offsetY = -1; offsetY <= 1; offsetY++)
            {
                for (int offsetX = -1; offsetX <= 1; offsetX++)
                {
                    // Unique seed for each cell based on its coordinates and the global seed
                    int CellSeed = (CellX + offsetX) * 73856093 ^ (CellY + offsetY) * 19349663 ^ (CellZ + offsetZ) * 83492791 ^ (CellW + offsetW) * 286293355 ^ Seed;
                    RandomStream.Initialize(CellSeed);

                    // Random point within this 4D cell
                    float PointX = (CellX + offsetX) * CellSize + RandomStream.FRand() * CellSize;
                    float PointY = (CellY + offsetY) * CellSize + RandomStream.FRand() * CellSize;
                    float PointZ = (CellZ + offsetZ) * CellSize + RandomStream.FRand() * CellSize;
                    float PointW = (CellW + offsetW) * CellSize + RandomStream.FRand() * CellSize;

                    // Update minimum distance considering 4D space
                    float Distance = FMath::Sqrt(FMath::Pow(PointX - X, 2) + FMath::Pow(PointY - Y, 2) + FMath::Pow(PointZ - Z, 2) + FMath::Pow(PointW - W, 2));
                    MinDistance = FMath::Min(MinDistance, Distance);
                }
            }
        }
    }

    // Apply attenuation
    MinDistance *= Attenuation;

    // Normalize distance. In 4D, normalization might need adjustment based on your application.
    return FMath::Clamp(MinDistance / CellSize, 0.0f, 1.0f);
}



//Voroni Noise

//Voroni Noise 2D
float USimpleNoiseGeneratorsBPLibrary::VoronoiNoise2D(float X, float Y, float CellSize, int Seed, float Attenuation)
{
    // Ensure CellSize and Attenuation are positive to avoid division by zero or negative attenuation
    if (CellSize <= 0.0f)
    {
        CellSize = 1.0f;
    }
    if (Attenuation <= 0.0f)
    {
        Attenuation = 1.0f; // Default Attenuation to avoid potential errors
    }

    FRandomStream RandomStream(Seed);
    float MinDistance = MAX_flt;

    int CellX = FMath::FloorToInt(X / CellSize);
    int CellY = FMath::FloorToInt(Y / CellSize);

    for (int offsetY = -1; offsetY <= 1; offsetY++)
    {
        for (int offsetX = -1; offsetX <= 1; offsetX++)
        {
            // Adjust seed for each cell based on its coordinates, global seed, and offsets
            RandomStream.Initialize(Seed + (CellX + offsetX) * 73856093 ^ (CellY + offsetY) * 19349663);

            float PointX = (CellX + offsetX) * CellSize + RandomStream.FRand() * CellSize;
            float PointY = (CellY + offsetY) * CellSize + RandomStream.FRand() * CellSize;

            float Distance = FVector2D::Distance(FVector2D(X, Y), FVector2D(PointX, PointY));

            // Update minimum distance
            MinDistance = FMath::Min(MinDistance, Distance);
        }
    }

    // Apply attenuation to the distance
    float NoiseValue = MinDistance / CellSize;
    NoiseValue = FMath::Pow(NoiseValue, Attenuation); // Adjust the impact of distance based on Attenuation

    return NoiseValue;
}

//Voroni Noise 3D
float USimpleNoiseGeneratorsBPLibrary::VoronoiNoise3D(float X, float Y, float Z, float CellSize, int Seed, float Attenuation)
{
    if (CellSize <= 0.0f) CellSize = 1.0f;
    if (Attenuation <= 0.0f) Attenuation = 1.0f;

    FRandomStream RandomStream(Seed);
    float MinDistance = MAX_flt;

    int CellX = FMath::FloorToInt(X / CellSize);
    int CellY = FMath::FloorToInt(Y / CellSize);
    int CellZ = FMath::FloorToInt(Z / CellSize);

    for (int offsetZ = -1; offsetZ <= 1; offsetZ++)
    {
        for (int offsetY = -1; offsetY <= 1; offsetY++)
        {
            for (int offsetX = -1; offsetX <= 1; offsetX++)
            {
                // Seed adjustment to ensure variability across cells
                RandomStream.Initialize(Seed + (CellX + offsetX) * 73856093 ^ (CellY + offsetY) * 19349663 ^ (CellZ + offsetZ) * 83492791);

                float PointX = (CellX + offsetX) * CellSize + RandomStream.FRand() * CellSize;
                float PointY = (CellY + offsetY) * CellSize + RandomStream.FRand() * CellSize;
                float PointZ = (CellZ + offsetZ) * CellSize + RandomStream.FRand() * CellSize;

                float Distance = FVector::Dist(FVector(X, Y, Z), FVector(PointX, PointY, PointZ));

                MinDistance = FMath::Min(MinDistance, Distance);
            }
        }
    }

    // Apply attenuation
    float NoiseValue = MinDistance / CellSize;
    NoiseValue = FMath::Pow(NoiseValue, Attenuation);

    return NoiseValue;
}

//Voronoi Noise 4D
float USimpleNoiseGeneratorsBPLibrary::VoronoiNoise4D(float X, float Y, float Z, float W, float CellSize, int Seed, float Attenuation)
{
    if (CellSize <= 0.0f) CellSize = 1.0f;
    if (Attenuation <= 0.0f) Attenuation = 1.0f;

    FRandomStream RandomStream(Seed);
    float MinDistance = MAX_flt;

    // Compute the cell indices for the 4D position
    int CellX = FMath::FloorToInt(X / CellSize);
    int CellY = FMath::FloorToInt(Y / CellSize);
    int CellZ = FMath::FloorToInt(Z / CellSize);
    int CellW = FMath::FloorToInt(W / CellSize);

    // Inspect surrounding cells in 4D
    for (int offsetW = -1; offsetW <= 1; offsetW++)
    {
        for (int offsetZ = -1; offsetZ <= 1; offsetZ++)
        {
            for (int offsetY = -1; offsetY <= 1; offsetY++)
            {
                for (int offsetX = -1; offsetX <= 1; offsetX++)
                {
                    // Adjust the seed for each cell to ensure unique randomness
                    RandomStream.Initialize(Seed + (CellX + offsetX) * 73856093 ^ (CellY + offsetY) * 19349663 ^ (CellZ + offsetZ) * 83492791 ^ (CellW + offsetW) * 286293355);

                    // Generate a random point within this 4D cell
                    float PointX = (CellX + offsetX) * CellSize + RandomStream.FRand() * CellSize;
                    float PointY = (CellY + offsetY) * CellSize + RandomStream.FRand() * CellSize;
                    float PointZ = (CellZ + offsetZ) * CellSize + RandomStream.FRand() * CellSize;
                    float PointW = (CellW + offsetW) * CellSize + RandomStream.FRand() * CellSize;

                    // Calculate the 4D distance
                    float Distance = FMath::Sqrt(FMath::Pow(PointX - X, 2) + FMath::Pow(PointY - Y, 2) + FMath::Pow(PointZ - Z, 2) + FMath::Pow(PointW - W, 2));

                    // Update the minimum distance
                    MinDistance = FMath::Min(MinDistance, Distance);
                }
            }
        }
    }

    // Apply attenuation
    float NoiseValue = MinDistance / CellSize;
    NoiseValue = FMath::Pow(NoiseValue, Attenuation);

    return NoiseValue;
}



//Circle Noise

//Circle Noise 2D
float USimpleNoiseGeneratorsBPLibrary::CircleNoise2D(float X, float Y, float Size, int Seed, float Attenuation, float Thickness)
{
    if (Size <= 0.0f) Size = 1.0f;
    if (Thickness <= 0.0f) Thickness = 1.0f;
    if (Attenuation <= 0.0f) Attenuation = 1.0f;

    FRandomStream RandomStream(Seed);
    float MinDistance = MAX_flt;
    bool InsideAnyCircle = false;

    // Define the area in which circles will be placed
    // For simplicity, use a fixed grid based on Size to determine circle centers
    int GridSize = FMath::CeilToInt(Size);
    for (int i = -GridSize; i <= GridSize; i++)
    {
        for (int j = -GridSize; j <= GridSize; j++)
        {
            // Seed adjustment to ensure variability
            RandomStream.Initialize(Seed + i * 73856093 ^ j * 19349663);

            // Determine the center of the circle in this grid cell
            float CenterX = i * Size + RandomStream.FRandRange(-Size / 2, Size / 2);
            float CenterY = j * Size + RandomStream.FRandRange(-Size / 2, Size / 2);

            // Calculate distance from point to the center of the circle
            float DistanceToCenter = FVector2D::Distance(FVector2D(X, Y), FVector2D(CenterX, CenterY));
            float DistanceToEdge = FMath::Abs(DistanceToCenter - Thickness);

            // Update the minimum distance to the edge of any circle
            if (DistanceToCenter < Thickness)
            {
                InsideAnyCircle = true;
                MinDistance = FMath::Min(MinDistance, DistanceToEdge);
            }
            else if (!InsideAnyCircle)
            {
                MinDistance = FMath::Min(MinDistance, DistanceToEdge);
            }
        }
    }

    // Apply attenuation
    float NoiseValue = FMath::Clamp(MinDistance / Size, 0.0f, 1.0f);
    NoiseValue = FMath::Pow(NoiseValue, Attenuation);

    return InsideAnyCircle ? 1.0f - NoiseValue : NoiseValue;
}
//Circle Noise 3D
float USimpleNoiseGeneratorsBPLibrary::SphericalNoise3D(float X, float Y, float Z, int Seed, float Size, float Thickness, float Attenuation)
{
    FRandomStream RandomStream(Seed);
    // Adjust parameters as necessary, ensuring they're within reasonable bounds
    float SphereRadius = Size;
    float ShellThickness = FMath::Clamp(Thickness, 0.1f, SphereRadius);

    // Initialize variables for noise calculation
    float MinDistance = MAX_flt; // Use a large initial value

    // Example: Simplified approach with a single sphere for demonstration
    // In a full implementation, you would iterate through multiple sphere centers generated randomly
    RandomStream.Initialize(Seed);
    FVector SphereCenter(RandomStream.FRandRange(-100, 100), RandomStream.FRandRange(-100, 100), RandomStream.FRandRange(-100, 100));

    float DistanceToCenter = FVector::Dist(FVector(X, Y, Z), SphereCenter);
    float DistanceToSurface = FMath::Abs(DistanceToCenter - SphereRadius);

    // Use the distance to the sphere's surface, considering shell thickness
    if (DistanceToSurface <= ShellThickness)
    {
        MinDistance = 0.0f; // Point is within the thickness of the sphere's shell
    }
    else
    {
        MinDistance = (DistanceToSurface - ShellThickness) / Attenuation; // Apply attenuation outside the shell
    }

    // Normalize based on the specific use case
    // Example normalization to [0, 1] range
    return FMath::Clamp(MinDistance / 100.0f, 0.0f, 1.0f); // Adjust the divisor as per your scene's scale
}
