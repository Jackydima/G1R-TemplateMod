#ifndef UE4SS_SDK_MassAIBehavior_HPP
#define UE4SS_SDK_MassAIBehavior_HPP

#include "MassAIBehavior_enums.hpp"

struct FMassClaimSmartObjectTask : public FMassStateTreeTaskBase
{
    float InteractionCooldown;                                                        // 0x003C (size: 0x4)

}; // Size: 0x40

struct FMassClaimSmartObjectTaskInstanceData
{
    FStateTreeStructRef CandidateSlots;                                               // 0x0000 (size: 0x10)
    FSmartObjectClaimHandle ClaimedSlot;                                              // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FMassComponentHitEvaluator : public FMassStateTreeEvaluatorBase
{
}; // Size: 0x28

struct FMassComponentHitEvaluatorInstanceData
{
    bool bGotHit;                                                                     // 0x0000 (size: 0x1)
    FMassEntityHandle LastHitEntity;                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMassFindSmartObjectTask : public FMassStateTreeTaskBase
{
    FGameplayTagQuery ActivityRequirements;                                           // 0x0048 (size: 0x48)
    float SearchInterval;                                                             // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FMassFindSmartObjectTaskInstanceData
{
    FMassSmartObjectCandidateSlots FoundCandidateSlots;                               // 0x0000 (size: 0x88)
    bool bHasCandidateSlots;                                                          // 0x0088 (size: 0x1)
    FMassSmartObjectRequestID SearchRequestID;                                        // 0x0090 (size: 0x8)
    double NextUpdate;                                                                // 0x0098 (size: 0x8)
    FZoneGraphLaneHandle LastLane;                                                    // 0x00A0 (size: 0x8)

}; // Size: 0xA8

struct FMassHitResult
{
}; // Size: 0x18

struct FMassLookAtFragment : public FMassFragment
{
    FVector Direction;                                                                // 0x0000 (size: 0x18)
    FVector GazeDirection;                                                            // 0x0018 (size: 0x18)
    FMassEntityHandle TrackedEntity;                                                  // 0x0030 (size: 0x8)
    FMassEntityHandle GazeTrackedEntity;                                              // 0x0038 (size: 0x8)
    double GazeStartTime;                                                             // 0x0040 (size: 0x8)
    float GazeDuration;                                                               // 0x0048 (size: 0x4)
    uint16 LastSeenActionID;                                                          // 0x004C (size: 0x2)
    EMassLookAtMode LookAtMode;                                                       // 0x004E (size: 0x1)
    EMassLookAtGazeMode RandomGazeMode;                                               // 0x004F (size: 0x1)
    uint8 RandomGazeYawVariation;                                                     // 0x0050 (size: 0x1)
    uint8 RandomGazePitchVariation;                                                   // 0x0051 (size: 0x1)
    uint8 bRandomGazeEntities;                                                        // 0x0052 (size: 0x1)

}; // Size: 0x58

struct FMassLookAtTargetTag : public FMassTag
{
}; // Size: 0x1

struct FMassLookAtTask : public FMassStateTreeTaskBase
{
    EMassLookAtMode LookAtMode;                                                       // 0x0034 (size: 0x1)
    EMassLookAtGazeMode RandomGazeMode;                                               // 0x0035 (size: 0x1)
    uint8 RandomGazeYawVariation;                                                     // 0x0036 (size: 0x1)
    uint8 RandomGazePitchVariation;                                                   // 0x0037 (size: 0x1)
    bool bRandomGazeEntities;                                                         // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FMassLookAtTaskInstanceData
{
    FMassEntityHandle TargetEntity;                                                   // 0x0000 (size: 0x8)
    float Duration;                                                                   // 0x0008 (size: 0x4)
    float Time;                                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMassLookAtTrajectoryFragment : public FMassFragment
{
}; // Size: 0x70

struct FMassLookAtTrajectoryPoint
{
}; // Size: 0x20

struct FMassStateTreeActivatedTag : public FMassTag
{
}; // Size: 0x1

struct FMassStateTreeEvaluatorBase : public FStateTreeEvaluatorBase
{
}; // Size: 0x20

struct FMassStateTreeInstanceDataItem
{
    FStateTreeInstanceData InstanceData;                                              // 0x0000 (size: 0x10)
    int32 Generation;                                                                 // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FMassStateTreeInstanceFragment : public FMassFragment
{
}; // Size: 0x10

struct FMassStateTreeSharedFragment : public FMassSharedFragment
{
    class UStateTree* StateTree;                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMassStateTreeTaskBase : public FStateTreeTaskBase
{
}; // Size: 0x28

struct FMassUseSmartObjectTask : public FMassStateTreeTaskBase
{
}; // Size: 0x48

struct FMassUseSmartObjectTaskInstanceData
{
    FSmartObjectClaimHandle ClaimedSlot;                                              // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FMassZoneGraphAnnotationEvaluator : public FMassStateTreeEvaluatorBase
{
}; // Size: 0x28

struct FMassZoneGraphAnnotationEvaluatorInstanceData
{
    FZoneGraphTagMask AnnotationTags;                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMassZoneGraphAnnotationFragment : public FMassFragment
{
    FZoneGraphTagMask Tags;                                                           // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMassZoneGraphAnnotationVariableTickChunkFragment : public FMassChunkFragment
{
}; // Size: 0x8

struct FMassZoneGraphFindEscapeTarget : public FMassStateTreeTaskBase
{
    FZoneGraphTag DisturbanceAnnotationTag;                                           // 0x003A (size: 0x1)

}; // Size: 0x40

struct FMassZoneGraphFindEscapeTargetInstanceData
{
    FMassZoneGraphTargetLocation EscapeTargetLocation;                                // 0x0000 (size: 0x60)

}; // Size: 0x60

struct FMassZoneGraphFindSmartObjectTarget : public FMassStateTreeTaskBase
{
}; // Size: 0x40

struct FMassZoneGraphFindSmartObjectTargetInstanceData
{
    FSmartObjectClaimHandle ClaimedSlot;                                              // 0x0000 (size: 0x20)
    FMassZoneGraphTargetLocation SmartObjectLocation;                                 // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FMassZoneGraphPathFollowTask : public FMassStateTreeTaskBase
{
}; // Size: 0x58

struct FMassZoneGraphPathFollowTaskInstanceData
{
    FStateTreeStructRef TargetLocation;                                               // 0x0000 (size: 0x10)
    FMassMovementStyleRef MovementStyle;                                              // 0x0010 (size: 0x18)
    float SpeedScale;                                                                 // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMassZoneGraphStandTask : public FMassStateTreeTaskBase
{
}; // Size: 0x58

struct FMassZoneGraphStandTaskInstanceData
{
    float Duration;                                                                   // 0x0000 (size: 0x4)
    float Time;                                                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMassZoneGraphTargetLocation
{
}; // Size: 0x60

struct FZoneGraphTagCondition : public FStateTreeConditionBase
{
    bool bInvert;                                                                     // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FZoneGraphTagConditionInstanceData
{
    FZoneGraphTag Left;                                                               // 0x0000 (size: 0x1)
    FZoneGraphTag Right;                                                              // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FZoneGraphTagFilterCondition : public FStateTreeConditionBase
{
    FZoneGraphTagFilter Filter;                                                       // 0x0028 (size: 0xC)
    bool bInvert;                                                                     // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FZoneGraphTagFilterConditionInstanceData
{
    FZoneGraphTagMask Tags;                                                           // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FZoneGraphTagMaskCondition : public FStateTreeConditionBase
{
    EZoneLaneTagMaskComparison Operator;                                              // 0x0028 (size: 0x1)
    bool bInvert;                                                                     // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FZoneGraphTagMaskConditionInstanceData
{
    FZoneGraphTagMask Left;                                                           // 0x0000 (size: 0x4)
    FZoneGraphTagMask Right;                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

class UMassBehaviorSettings : public UMassModuleSettings
{
    int32 MaxActivationsPerLOD;                                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

class UMassComponentHitSubsystem : public UMassTickableSubsystemBase
{
    class UMassSignalSubsystem* SignalSubsystem;                                      // 0x0048 (size: 0x8)
    class UMassAgentSubsystem* AgentSubsystem;                                        // 0x0050 (size: 0x8)
    TMap<class FMassEntityHandle, class FMassHitResult> HitResults;                   // 0x0058 (size: 0x50)
    TMap<class UActorComponent*, class FMassEntityHandle> ComponentToEntityMap;       // 0x00A8 (size: 0x50)
    TMap<class FMassEntityHandle, class UActorComponent*> EntityToComponentMap;       // 0x00F8 (size: 0x50)

    void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x148

class UMassLookAtProcessor : public UMassProcessor
{
    float QueryExtent;                                                                // 0x00C0 (size: 0x4)
    float Duration;                                                                   // 0x00C4 (size: 0x4)
    float DurationVariation;                                                          // 0x00C8 (size: 0x4)
    float DebugZOffset;                                                               // 0x00CC (size: 0x4)
    float AngleThresholdInDegrees;                                                    // 0x00D0 (size: 0x4)

}; // Size: 0x380

class UMassLookAtTargetTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UMassLookAtTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UMassStateTreeActivationProcessor : public UMassProcessor
{
}; // Size: 0x360

class UMassStateTreeFragmentDestructor : public UMassObserverProcessor
{
    class UMassSignalSubsystem* SignalSubsystem;                                      // 0x0380 (size: 0x8)

}; // Size: 0x390

class UMassStateTreeProcessor : public UMassSignalProcessorBase
{
}; // Size: 0x420

class UMassStateTreeSchema : public UStateTreeSchema
{
}; // Size: 0x28

class UMassStateTreeSubsystem : public UMassSubsystemBase
{
    TArray<FMassStateTreeInstanceDataItem> InstanceDataArray;                         // 0x0048 (size: 0x10)

}; // Size: 0x58

class UMassStateTreeTrait : public UMassEntityTraitBase
{
    class UStateTree* StateTree;                                                      // 0x0028 (size: 0x8)

}; // Size: 0x30

class UMassZoneGraphAnnotationTagUpdateProcessor : public UMassSignalProcessorBase
{
}; // Size: 0x430

class UMassZoneGraphAnnotationTagsInitializer : public UMassObserverProcessor
{
}; // Size: 0x380

class UMassZoneGraphAnnotationTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

#endif
