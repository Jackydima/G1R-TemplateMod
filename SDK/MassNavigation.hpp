#ifndef UE4SS_SDK_MassNavigation_HPP
#define UE4SS_SDK_MassNavigation_HPP

#include "MassNavigation_enums.hpp"

struct FMassAvoidanceColliderFragment : public FMassFragment
{
}; // Size: 0xC

struct FMassGhostLocationFragment : public FMassFragment
{
}; // Size: 0x38

struct FMassInNavigationObstacleGridTag : public FMassTag
{
}; // Size: 0x1

struct FMassMoveTargetFragment : public FMassFragment
{
}; // Size: 0x50

struct FMassMovingAvoidanceParameters : public FMassSharedFragment
{
    float ObstacleDetectionDistance;                                                  // 0x0000 (size: 0x4)
    float StartOfPathDuration;                                                        // 0x0004 (size: 0x4)
    float EndOfPathDuration;                                                          // 0x0008 (size: 0x4)
    float StartOfPathAvoidanceScale;                                                  // 0x000C (size: 0x4)
    float EndOfPathAvoidanceScale;                                                    // 0x0010 (size: 0x4)
    float StandingObstacleAvoidanceScale;                                             // 0x0014 (size: 0x4)
    float StaticObstacleClearanceScale;                                               // 0x0018 (size: 0x4)
    float SeparationRadiusScale;                                                      // 0x001C (size: 0x4)
    float ObstacleSeparationStiffness;                                                // 0x0020 (size: 0x4)
    float ObstacleSeparationDistance;                                                 // 0x0024 (size: 0x4)
    float EnvironmentSeparationStiffness;                                             // 0x0028 (size: 0x4)
    float EnvironmentSeparationDistance;                                              // 0x002C (size: 0x4)
    float PredictiveAvoidanceTime;                                                    // 0x0030 (size: 0x4)
    float PredictiveAvoidanceRadiusScale;                                             // 0x0034 (size: 0x4)
    float PredictiveAvoidanceDistance;                                                // 0x0038 (size: 0x4)
    float ObstaclePredictiveAvoidanceStiffness;                                       // 0x003C (size: 0x4)
    float EnvironmentPredictiveAvoidanceStiffness;                                    // 0x0040 (size: 0x4)

}; // Size: 0x44

struct FMassMovingSteeringParameters : public FMassSharedFragment
{
    float ReactionTime;                                                               // 0x0000 (size: 0x4)
    float LookAheadTime;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMassNavigationEdgesFragment : public FMassFragment
{
}; // Size: 0x248

struct FMassNavigationObstacleGridCellLocationFragment : public FMassFragment
{
}; // Size: 0xC

struct FMassSmoothOrientationParameters : public FMassSharedFragment
{
    float EndOfPathDuration;                                                          // 0x0000 (size: 0x4)
    float OrientationSmoothingTime;                                                   // 0x0004 (size: 0x4)
    FMassSmoothOrientationWeights Moving;                                             // 0x0008 (size: 0x8)
    FMassSmoothOrientationWeights Standing;                                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FMassSmoothOrientationWeights : public FMassSharedFragment
{
    float MoveTargetWeight;                                                           // 0x0000 (size: 0x4)
    float VelocityWeight;                                                             // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMassStandingAvoidanceParameters : public FMassSharedFragment
{
    float GhostObstacleDetectionDistance;                                             // 0x0000 (size: 0x4)
    float GhostToTargetMaxDeviation;                                                  // 0x0004 (size: 0x4)
    float GhostSteeringReactionTime;                                                  // 0x0008 (size: 0x4)
    float GhostStandSlowdownRadius;                                                   // 0x000C (size: 0x4)
    float GhostMaxSpeed;                                                              // 0x0010 (size: 0x4)
    float GhostMaxAcceleration;                                                       // 0x0014 (size: 0x4)
    float GhostVelocityDampingTime;                                                   // 0x0018 (size: 0x4)
    float GhostSeparationRadiusScale;                                                 // 0x001C (size: 0x4)
    float GhostSeparationDistance;                                                    // 0x0020 (size: 0x4)
    float GhostSeparationStiffness;                                                   // 0x0024 (size: 0x4)
    float MovingObstacleAvoidanceScale;                                               // 0x0028 (size: 0x4)
    float MovingObstacleDirectionalScale;                                             // 0x002C (size: 0x4)
    float MovingObstaclePersonalSpaceScale;                                           // 0x0030 (size: 0x4)

}; // Size: 0x34

struct FMassStandingSteeringFragment : public FMassFragment
{
}; // Size: 0x28

struct FMassStandingSteeringParameters : public FMassSharedFragment
{
    float ReactionTime;                                                               // 0x0000 (size: 0x4)
    float TargetMoveThreshold;                                                        // 0x0004 (size: 0x4)
    float TargetMoveThresholdVariance;                                                // 0x0008 (size: 0x4)
    float LowSpeedThreshold;                                                          // 0x000C (size: 0x4)
    float TargetSpeedHysteresisScale;                                                 // 0x0010 (size: 0x4)
    float TargetSelectionCooldown;                                                    // 0x0014 (size: 0x4)
    float TargetSelectionCooldownVariance;                                            // 0x0018 (size: 0x4)
    float DeadZoneRadius;                                                             // 0x001C (size: 0x4)

}; // Size: 0x20

struct FMassSteeringFragment : public FMassFragment
{
}; // Size: 0x18

class UMassMoveTargetFragmentInitializer : public UMassObserverProcessor
{
}; // Size: 0x380

class UMassMovingAvoidanceProcessor : public UMassProcessor
{
}; // Size: 0x370

class UMassNavigationObstacleGridProcessor : public UMassProcessor
{
}; // Size: 0x8A0

class UMassNavigationObstacleRemoverProcessor : public UMassObserverProcessor
{
}; // Size: 0x380

class UMassNavigationObstacleTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UMassNavigationSmoothHeightProcessor : public UMassProcessor
{
}; // Size: 0x360

class UMassNavigationSubsystem : public UMassSubsystemBase
{
}; // Size: 0xE0

class UMassObstacleAvoidanceTrait : public UMassEntityTraitBase
{
    FMassMovingAvoidanceParameters MovingParameters;                                  // 0x0028 (size: 0x44)
    FMassStandingAvoidanceParameters StandingParameters;                              // 0x006C (size: 0x34)

}; // Size: 0xA0

class UMassOffLODNavigationProcessor : public UMassProcessor
{
}; // Size: 0x360

class UMassSmoothOrientationProcessor : public UMassProcessor
{
}; // Size: 0x600

class UMassSmoothOrientationTrait : public UMassEntityTraitBase
{
    FMassSmoothOrientationParameters Orientation;                                     // 0x0028 (size: 0x18)

}; // Size: 0x40

class UMassStandingAvoidanceProcessor : public UMassProcessor
{
}; // Size: 0x370

class UMassSteerToMoveTargetProcessor : public UMassProcessor
{
}; // Size: 0x360

class UMassSteeringTrait : public UMassEntityTraitBase
{
    FMassMovingSteeringParameters MovingSteering;                                     // 0x0028 (size: 0x8)
    FMassStandingSteeringParameters StandingSteering;                                 // 0x0030 (size: 0x20)

}; // Size: 0x50

#endif
