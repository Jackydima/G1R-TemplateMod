#ifndef UE4SS_SDK_CustomizableObjectPopulation_HPP
#define UE4SS_SDK_CustomizableObjectPopulation_HPP

#include "CustomizableObjectPopulation_enums.hpp"

struct FClassWeightPair
{
    class UCustomizableObjectPopulationClass* Class;                                  // 0x0000 (size: 0x8)
    int32 ClassWeight;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FConstraintRanges
{
    float MinimumValue;                                                               // 0x0000 (size: 0x4)
    float MaximumValue;                                                               // 0x0004 (size: 0x4)
    int32 RangeWeight;                                                                // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FCustomizableObjectPopulationCharacteristic
{
    FString ParameterName;                                                            // 0x0000 (size: 0x10)
    TArray<FCustomizableObjectPopulationConstraint> Constraints;                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCustomizableObjectPopulationConstraint
{
    EPopulationConstraintType Type;                                                   // 0x0000 (size: 0x1)
    int32 ConstraintWeight;                                                           // 0x0004 (size: 0x4)
    int32 TrueWeight;                                                                 // 0x0008 (size: 0x4)
    int32 FalseWeight;                                                                // 0x000C (size: 0x4)
    FString DiscreteValue;                                                            // 0x0010 (size: 0x10)
    FLinearColor DiscreteColor;                                                       // 0x0020 (size: 0x10)
    TArray<FString> Allowlist;                                                        // 0x0030 (size: 0x10)
    TArray<FString> Blocklist;                                                        // 0x0040 (size: 0x10)
    TArray<FConstraintRanges> Ranges;                                                 // 0x0050 (size: 0x10)
    class UCurveBase* Curve;                                                          // 0x0060 (size: 0x8)
    ECurveColor CurveColor;                                                           // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FPopulationClassParameter
{
    TArray<FString> Tags;                                                             // 0x0000 (size: 0x10)
    TMap<class FString, class FPopulationClassParameterOptions> ParameterOptions;     // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FPopulationClassParameterOptions
{
    TArray<FString> Tags;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

class UCustomizableObjectPopulation : public UObject
{
    FString Name;                                                                     // 0x0028 (size: 0x10)
    TArray<FClassWeightPair> ClassWeights;                                            // 0x0038 (size: 0x10)
    class UCustomizableObjectPopulationGenerator* Generator;                          // 0x0048 (size: 0x8)

    bool RegeneratePopulation(int32 Seed, TArray<class UCustomizableObjectInstance*>& OutInstances, int32 NumInstancesToGenerate);
    int32 GeneratePopulation(TArray<class UCustomizableObjectInstance*>& OutInstances, int32 NumInstancesToGenerate);
}; // Size: 0x50

class UCustomizableObjectPopulationClass : public UObject
{
    FString Name;                                                                     // 0x0028 (size: 0x10)
    class UCustomizableObject* CustomizableObject;                                    // 0x0038 (size: 0x8)
    TArray<FString> Allowlist;                                                        // 0x0040 (size: 0x10)
    TArray<FString> Blocklist;                                                        // 0x0050 (size: 0x10)
    TArray<FCustomizableObjectPopulationCharacteristic> Characteristics;              // 0x0060 (size: 0x10)
    TArray<FString> Tags;                                                             // 0x0070 (size: 0x10)

}; // Size: 0x90

class UCustomizableObjectPopulationGenerator : public UObject
{
    TArray<class UCustomizableObject*> PopulationObjects;                             // 0x0028 (size: 0x10)

}; // Size: 0x48

#endif
