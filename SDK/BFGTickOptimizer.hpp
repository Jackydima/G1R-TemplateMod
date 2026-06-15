#ifndef UE4SS_SDK_BFGTickOptimizer_HPP
#define UE4SS_SDK_BFGTickOptimizer_HPP

#include "BFGTickOptimizer_enums.hpp"

struct FBFGInterpolationEntry_Transform
{
    class AActor* m_pActor;                                                           // 0x0000 (size: 0x8)

}; // Size: 0xD0

struct FBFGTagList
{
    EBFGInterpolationTagType m_TagType;                                               // 0x0000 (size: 0x1)
    TArray<FName> m_RequireAllTags;                                                   // 0x0008 (size: 0x10)
    TArray<FName> m_RequireAnyTags;                                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FBFGTickOptimizerLODAdjust
{
    int32 m_ActorCount;                                                               // 0x0000 (size: 0x4)
    float m_Multiplier;                                                               // 0x0004 (size: 0x4)
    float m_PreScaleBias;                                                             // 0x0008 (size: 0x4)
    float m_PostScaleBias;                                                            // 0x000C (size: 0x4)

}; // Size: 0x10

struct FBFGTickOptimizerLODLevel
{
    FText m_DescriptiveName;                                                          // 0x0000 (size: 0x10)
    float m_Distance;                                                                 // 0x0010 (size: 0x4)
    uint8 m_AmortizationRate;                                                         // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FBFGTickOptimizerTrackedType
{
    TEnumAsByte<TrackedInterpolationType> m_Interpolation;                            // 0x0000 (size: 0x1)
    FText m_tDescriptiveName;                                                         // 0x0008 (size: 0x10)
    UClass* m_ClassType;                                                              // 0x0018 (size: 0x8)
    TSoftClassPtr<UObject> m_ClassTypeSoft;                                           // 0x0020 (size: 0x28)
    FBFGTagList m_TagList_Allow;                                                      // 0x0048 (size: 0x28)
    FBFGTagList m_TagList_Deny;                                                       // 0x0070 (size: 0x28)

}; // Size: 0x98

struct FBFGTickOptimizer_ReferenceEntry
{
}; // Size: 0x110

class UBFGInterpolationSystem : public UTickableWorldSubsystem
{
    FBFGDebugPanel m_DebugPanel;                                                      // 0x0130 (size: 0x160)

}; // Size: 0x290

class UBFGTickOptimizerSystem : public UWorldSubsystem
{
    TArray<FBFGTickOptimizerLODLevel> m_LODLevels;                                    // 0x0038 (size: 0x10)
    TArray<FBFGTickOptimizerTrackedType> m_TrackedComponentClasses;                   // 0x0048 (size: 0x10)
    TArray<FBFGTickOptimizerTrackedType> m_TrackedComponentClasses_Exclusion;         // 0x0058 (size: 0x10)
    TArray<FBFGTickOptimizerTrackedType> m_MovementInterpolationActors;               // 0x0068 (size: 0x10)
    TArray<class TSubclassOf<AActor>> m_NeverOptimizeActorTypes;                      // 0x0078 (size: 0x10)
    TArray<class TSubclassOf<AActor>> m_StrictAllowListActorTypes;                    // 0x0088 (size: 0x10)
    TArray<class TSubclassOf<AActor>> m_FollowerActorTypes;                           // 0x0098 (size: 0x10)
    class UBFGInterpolationSystem* m_InterpolationSystem;                             // 0x00A8 (size: 0x8)
    FBFGTickOptimizerLODAdjust m_LodAdjust_Interpolation_Min;                         // 0x00B0 (size: 0x10)
    FBFGTickOptimizerLODAdjust m_LodAdjust_Interpolation_Max;                         // 0x00C0 (size: 0x10)
    FBFGDebugPanel m_DebugPanel;                                                      // 0x0230 (size: 0x160)

    void SetTickOptimizationRuntime_HibernateState(class AActor* Actor, bool TickHibernateState);
    void SetTickOptimizationRuntime_ForcedLOD(class AActor* Actor, int32 NewLOD);
    void SetTickOptimizationRuntime_Enabled(class AActor* Actor, bool OptimizationEnabled);
    void SetTickOptimizationRuntime_DetermineLODByDistance(class AActor* Actor);
    bool IsActorRegisteredAndActive(class AActor* _Actor);
    bool IsActorBucketTickingThisFrame(class AActor* Actor);
}; // Size: 0x390

#endif
