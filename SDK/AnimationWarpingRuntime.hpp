#ifndef UE4SS_SDK_AnimationWarpingRuntime_HPP
#define UE4SS_SDK_AnimationWarpingRuntime_HPP

#include "AnimationWarpingRuntime_enums.hpp"

struct FAnimNode_FootPlacement : public FAnimNode_SkeletalControlBase
{
    EWarpingEvaluationMode PlantSpeedMode;                                            // 0x00C8 (size: 0x1)
    FBoneReference IKFootRootBone;                                                    // 0x00CC (size: 0x10)
    FBoneReference PelvisBone;                                                        // 0x00DC (size: 0x10)
    FFootPlacementPelvisSettings PelvisSettings;                                      // 0x00EC (size: 0x24)
    TArray<FFootPlacemenLegDefinition> LegDefinitions;                                // 0x0110 (size: 0x10)
    FFootPlacementPlantSettings PlantSettings;                                        // 0x0120 (size: 0x34)
    FFootPlacementInterpolationSettings InterpolationSettings;                        // 0x0154 (size: 0x2C)
    FFootPlacementTraceSettings TraceSettings;                                        // 0x0180 (size: 0x1C)

}; // Size: 0x430

struct FAnimNode_GothicFootplacement : public FAnimNode_SkeletalControlBase
{
    class USkeletalMeshComponent* SkelMeshComp;                                       // 0x00D0 (size: 0x8)
    float EnableFootIK;                                                               // 0x00D8 (size: 0x4)
    class ACharacter* CharacterOwner;                                                 // 0x00E0 (size: 0x8)
    class UCharacterMovementComponent* MovementComp;                                  // 0x00E8 (size: 0x8)
    class UWorld* CompWorld;                                                          // 0x00F0 (size: 0x8)
    FBoneReference IKFootRoot;                                                        // 0x00F8 (size: 0x10)
    TArray<FGothicFootData> FootDataArray;                                            // 0x0108 (size: 0x10)
    TArray<FPelvisBoneData> AffectedBoneDataArray;                                    // 0x0118 (size: 0x10)
    bool bFlipForwardNormalAdjustments;                                               // 0x0128 (size: 0x1)
    bool bFlipRightNormalAdjustments;                                                 // 0x0129 (size: 0x1)
    float GroundNormalSmoothingSpeed;                                                 // 0x012C (size: 0x4)
    float PelvisVerticalWeight;                                                       // 0x0130 (size: 0x4)
    float PelvisHorizontalWeight;                                                     // 0x0134 (size: 0x4)
    float PelvisRotationWeight;                                                       // 0x0138 (size: 0x4)
    float PelvisOverallWeight;                                                        // 0x013C (size: 0x4)
    float HorizontalOffsetMagnitude;                                                  // 0x0140 (size: 0x4)
    float OverallSmoothingSpeed;                                                      // 0x0144 (size: 0x4)
    float LowSpeedThreshold;                                                          // 0x0148 (size: 0x4)
    float HighSpeedThreshold;                                                         // 0x014C (size: 0x4)
    float ContactThreshold;                                                           // 0x0150 (size: 0x4)
    float TraceOffset;                                                                // 0x0154 (size: 0x4)
    float OverallFootInterpSpeed;                                                     // 0x0158 (size: 0x4)
    float OverallFootInterpRotSpeed;                                                  // 0x015C (size: 0x4)
    FVector DebugForwardVector;                                                       // 0x0160 (size: 0x18)

}; // Size: 0x260

struct FAnimNode_OffsetRootBone : public FAnimNode_Base
{
    FPoseLink Source;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x100

struct FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
{
    EWarpingEvaluationMode Mode;                                                      // 0x00C8 (size: 0x1)
    float OrientationAngle;                                                           // 0x00CC (size: 0x4)
    float LocomotionAngle;                                                            // 0x00D0 (size: 0x4)
    FVector LocomotionDirection;                                                      // 0x00D8 (size: 0x18)
    float MinRootMotionSpeedThreshold;                                                // 0x00F0 (size: 0x4)
    float LocomotionAngleDeltaThreshold;                                              // 0x00F4 (size: 0x4)
    TArray<FBoneReference> SpineBones;                                                // 0x00F8 (size: 0x10)
    FBoneReference IKFootRootBone;                                                    // 0x0108 (size: 0x10)
    TArray<FBoneReference> IKFootBones;                                               // 0x0118 (size: 0x10)
    TEnumAsByte<EAxis::Type> RotationAxis;                                            // 0x0128 (size: 0x1)
    float DistributedBoneOrientationAlpha;                                            // 0x012C (size: 0x4)
    float RotationInterpSpeed;                                                        // 0x0130 (size: 0x4)
    float MaxCorrectionDegrees;                                                       // 0x0134 (size: 0x4)
    float MaxRootMotionDeltaToCompensateDegrees;                                      // 0x0138 (size: 0x4)
    bool bCounterCompenstateInterpolationByRootMotion;                                // 0x013C (size: 0x1)
    bool bScaleByGlobalBlendWeight;                                                   // 0x013D (size: 0x1)
    bool bUseManualRootMotionVelocity;                                                // 0x013E (size: 0x1)
    FVector ManualRootMotionVelocity;                                                 // 0x0140 (size: 0x18)
    EOrientationWarpingSpace WarpingSpace;                                            // 0x0158 (size: 0x1)
    FTransform WarpingSpaceTransform;                                                 // 0x0160 (size: 0x60)

}; // Size: 0x220

struct FAnimNode_QuadPedAdjustments : public FAnimNode_SkeletalControlBase
{
    FBoneReference PelvisBone;                                                        // 0x00C8 (size: 0x10)
    FVector GroundNormal;                                                             // 0x00D8 (size: 0x18)
    float BlendWeight;                                                                // 0x00F0 (size: 0x4)
    float InterpSpeed;                                                                // 0x00F4 (size: 0x4)
    FRotator AdditionalRotator;                                                       // 0x00F8 (size: 0x18)
    bool bShouldCopyMotion;                                                           // 0x0110 (size: 0x1)
    class ACharacter* CharacterOwner;                                                 // 0x0130 (size: 0x8)
    class UCharacterMovementComponent* MovementComp;                                  // 0x0138 (size: 0x8)

}; // Size: 0x140

struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{
    FBoneReference IKFootRootBone;                                                    // 0x00E0 (size: 0x10)
    FBoneReference PelvisBone;                                                        // 0x00F0 (size: 0x10)
    TArray<FSlopeWarpingFootDefinition> FeetDefinitions;                              // 0x0100 (size: 0x10)
    TArray<FSlopeWarpingFootData> FeetData;                                           // 0x0110 (size: 0x10)
    FVectorRK4SpringInterpolator PelvisOffsetInterpolator;                            // 0x0120 (size: 0x8)
    FVector GravityDir;                                                               // 0x0180 (size: 0x18)
    FVector CustomFloorOffset;                                                        // 0x0198 (size: 0x18)
    float CachedDeltaTime;                                                            // 0x01B0 (size: 0x4)
    FVector TargetFloorNormalWorldSpace;                                              // 0x01B8 (size: 0x18)
    FVectorRK4SpringInterpolator FloorNormalInterpolator;                             // 0x01D0 (size: 0x8)
    FVector TargetFloorOffsetLocalSpace;                                              // 0x0230 (size: 0x18)
    FVectorRK4SpringInterpolator FloorOffsetInterpolator;                             // 0x0248 (size: 0x8)
    float MaxStepHeight;                                                              // 0x02A8 (size: 0x4)
    uint8 bKeepMeshInsideOfCapsule;                                                   // 0x02AC (size: 0x1)
    uint8 bPullPelvisDown;                                                            // 0x02AC (size: 0x1)
    uint8 bUseCustomFloorOffset;                                                      // 0x02AC (size: 0x1)
    uint8 bWasOnGround;                                                               // 0x02AC (size: 0x1)
    uint8 bShowDebug;                                                                 // 0x02AC (size: 0x1)
    uint8 bFloorSmoothingInitialized;                                                 // 0x02AC (size: 0x1)
    FVector ActorLocation;                                                            // 0x02B0 (size: 0x18)
    FVector GravityDirCompSpace;                                                      // 0x02C8 (size: 0x18)

}; // Size: 0x2E0

struct FAnimNode_Steering : public FAnimNode_SkeletalControlBase
{
    FQuat TargetOrientation;                                                          // 0x00D0 (size: 0x20)
    bool bEnableTargetSmoothing;                                                      // 0x00F0 (size: 0x1)
    float SmoothTargetStiffness;                                                      // 0x00F4 (size: 0x4)
    float SmoothTargetDamping;                                                        // 0x00F8 (size: 0x4)
    float ProceduralTargetTime;                                                       // 0x00FC (size: 0x4)
    float TargetTime;                                                                 // 0x0100 (size: 0x4)
    float AnimatedTargetTime;                                                         // 0x0104 (size: 0x4)
    float RootMotionThreshold;                                                        // 0x0108 (size: 0x4)
    float DisableSteeringBelowSpeed;                                                  // 0x010C (size: 0x4)
    class UAnimationAsset* CurrentAnimAsset;                                          // 0x0110 (size: 0x8)
    float CurrentAnimAssetTime;                                                       // 0x0118 (size: 0x4)

}; // Size: 0x1E0

struct FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase
{
    EWarpingEvaluationMode Mode;                                                      // 0x00C8 (size: 0x1)
    FVector StrideDirection;                                                          // 0x00D0 (size: 0x18)
    float StrideScale;                                                                // 0x00E8 (size: 0x4)
    float LocomotionSpeed;                                                            // 0x00EC (size: 0x4)
    float MinRootMotionSpeedThreshold;                                                // 0x00F0 (size: 0x4)
    FBoneReference PelvisBone;                                                        // 0x00F4 (size: 0x10)
    FBoneReference IKFootRootBone;                                                    // 0x0104 (size: 0x10)
    TArray<FStrideWarpingFootDefinition> FootDefinitions;                             // 0x0118 (size: 0x10)
    FInputClampConstants StrideScaleModifier;                                         // 0x0128 (size: 0x14)
    FWarpingVectorValue FloorNormalDirection;                                         // 0x0140 (size: 0x20)
    FWarpingVectorValue GravityDirection;                                             // 0x0160 (size: 0x20)
    FIKFootPelvisPullDownSolver PelvisIKFootSolver;                                   // 0x0180 (size: 0x80)
    bool bOrientStrideDirectionUsingFloorNormal;                                      // 0x0200 (size: 0x1)
    bool bCompensateIKUsingFKThighRotation;                                           // 0x0201 (size: 0x1)
    bool bClampIKUsingFKLimits;                                                       // 0x0202 (size: 0x1)
    bool bDisableIfMissingRootMotion;                                                 // 0x0203 (size: 0x1)

}; // Size: 0x248

struct FFootPlacemenLegDefinition
{
    FBoneReference FKFootBone;                                                        // 0x0000 (size: 0x10)
    FBoneReference IKFootBone;                                                        // 0x0010 (size: 0x10)
    FBoneReference BallBone;                                                          // 0x0020 (size: 0x10)
    int32 NumBonesInLimb;                                                             // 0x0030 (size: 0x4)
    FName SpeedCurveName;                                                             // 0x0034 (size: 0x8)
    FName DisableLockCurveName;                                                       // 0x003C (size: 0x8)
    FName DisableLegCurveName;                                                        // 0x0044 (size: 0x8)

}; // Size: 0x4C

struct FFootPlacementInterpolationSettings
{
    float UnplantLinearStiffness;                                                     // 0x0000 (size: 0x4)
    float UnplantLinearDamping;                                                       // 0x0004 (size: 0x4)
    float UnplantAngularStiffness;                                                    // 0x0008 (size: 0x4)
    float UnplantAngularDamping;                                                      // 0x000C (size: 0x4)
    float SeparationStiffness;                                                        // 0x0010 (size: 0x4)
    float SeparationDamping;                                                          // 0x0014 (size: 0x4)
    float FloorLinearStiffness;                                                       // 0x0018 (size: 0x4)
    float FloorLinearDamping;                                                         // 0x001C (size: 0x4)
    float FloorAngularStiffness;                                                      // 0x0020 (size: 0x4)
    float FloorAngularDamping;                                                        // 0x0024 (size: 0x4)
    bool bEnableFloorInterpolation;                                                   // 0x0028 (size: 0x1)
    bool bEnableSeparationInterpolation;                                              // 0x0029 (size: 0x1)

}; // Size: 0x2C

struct FFootPlacementPelvisSettings
{
    float MaxOffset;                                                                  // 0x0000 (size: 0x4)
    float LinearStiffness;                                                            // 0x0004 (size: 0x4)
    float LinearDamping;                                                              // 0x0008 (size: 0x4)
    float HorizontalRebalancingWeight;                                                // 0x000C (size: 0x4)
    float MaxOffsetHorizontal;                                                        // 0x0010 (size: 0x4)
    float HeelLiftRatio;                                                              // 0x0014 (size: 0x4)
    EPelvisHeightMode PelvisHeightMode;                                               // 0x0018 (size: 0x1)
    EActorMovementCompensationMode ActorMovementCompensationMode;                     // 0x0019 (size: 0x1)
    bool bEnableInterpolation;                                                        // 0x001A (size: 0x1)
    bool bDisablePelvisOffsetInAir;                                                   // 0x001B (size: 0x1)
    FName DisablePelvisCurveName;                                                     // 0x001C (size: 0x8)

}; // Size: 0x24

struct FFootPlacementPlantSettings
{
    float SpeedThreshold;                                                             // 0x0000 (size: 0x4)
    float DistanceToGround;                                                           // 0x0004 (size: 0x4)
    EFootPlacementLockType LockType;                                                  // 0x0008 (size: 0x1)
    float UnplantRadius;                                                              // 0x000C (size: 0x4)
    float ReplantRadiusRatio;                                                         // 0x0010 (size: 0x4)
    float UnplantAngle;                                                               // 0x0014 (size: 0x4)
    float ReplantAngleRatio;                                                          // 0x0018 (size: 0x4)
    float MaxExtensionRatio;                                                          // 0x001C (size: 0x4)
    float MinExtensionRatio;                                                          // 0x0020 (size: 0x4)
    float SeparatingDistance;                                                         // 0x0024 (size: 0x4)
    float UnalignmentSpeedThreshold;                                                  // 0x0028 (size: 0x4)
    float AnkleTwistReduction;                                                        // 0x002C (size: 0x4)
    bool bAdjustHeelBeforePlanting;                                                   // 0x0030 (size: 0x1)

}; // Size: 0x34

struct FFootPlacementRootDefinition
{
    FBoneReference PelvisBone;                                                        // 0x0000 (size: 0x10)
    FBoneReference IKRootBone;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FFootPlacementTraceSettings
{
    float StartOffset;                                                                // 0x0000 (size: 0x4)
    float EndOffset;                                                                  // 0x0004 (size: 0x4)
    float SweepRadius;                                                                // 0x0008 (size: 0x4)
    TEnumAsByte<ETraceTypeQuery> ComplexTraceChannel;                                 // 0x000C (size: 0x1)
    float MaxGroundPenetration;                                                       // 0x0010 (size: 0x4)
    float SimpleCollisionInfluence;                                                   // 0x0014 (size: 0x4)
    TEnumAsByte<ETraceTypeQuery> SimpleTraceChannel;                                  // 0x0018 (size: 0x1)
    bool bEnabled;                                                                    // 0x0019 (size: 0x1)

}; // Size: 0x1C

struct FGothicFootData
{
    FBoneReference FKFootBone;                                                        // 0x0000 (size: 0x10)
    FBoneReference IKFootBone;                                                        // 0x0014 (size: 0x10)
    FBoneReference BallBone;                                                          // 0x0028 (size: 0x10)
    int32 NumBonesInLimb;                                                             // 0x003C (size: 0x4)
    FName SpeedCurveName;                                                             // 0x0040 (size: 0x8)
    FName DisableLockCurveName;                                                       // 0x0048 (size: 0x8)
    FName DisableLegCurveName;                                                        // 0x0050 (size: 0x8)
    FTransform FKFootTransform;                                                       // 0x0060 (size: 0x60)
    FTransform IKFootTransform;                                                       // 0x00C0 (size: 0x60)
    FVector GroundHitLocation;                                                        // 0x0120 (size: 0x18)
    FVector GroundAdjustmentHitLocation;                                              // 0x0138 (size: 0x18)
    FVector GroundHitNormal;                                                          // 0x0150 (size: 0x18)
    bool bIsLocked;                                                                   // 0x0168 (size: 0x1)
    float IKOffset;                                                                   // 0x016C (size: 0x4)
    float TraceDistance;                                                              // 0x0170 (size: 0x4)
    FTransform PrevFootTransform;                                                     // 0x01B0 (size: 0x60)
    FTransform PrevIkFootTransform;                                                   // 0x0210 (size: 0x60)
    bool bIsFirstUpdate;                                                              // 0x0288 (size: 0x1)

}; // Size: 0x290

struct FPelvisBoneData
{
    FBoneReference AffectedBoneRef;                                                   // 0x0000 (size: 0x10)
    TArray<FVector> GroundTraceLocations;                                             // 0x0018 (size: 0x10)
    FQuat RefAlignmentOffset;                                                         // 0x0030 (size: 0x20)
    FTransform OriginalTransform;                                                     // 0x0050 (size: 0x60)
    FTransform PreviousTransform;                                                     // 0x00B0 (size: 0x60)
    float AdjustmentZ;                                                                // 0x0110 (size: 0x4)
    float CachedAdjustmentZ;                                                          // 0x0114 (size: 0x4)

}; // Size: 0x120

struct FSlopeWarpingFootData
{
}; // Size: 0xB0

struct FSlopeWarpingFootDefinition
{
    FBoneReference IKFootBone;                                                        // 0x0000 (size: 0x10)
    FBoneReference FKFootBone;                                                        // 0x0010 (size: 0x10)
    int32 NumBonesInLimb;                                                             // 0x0020 (size: 0x4)
    float FootSize;                                                                   // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FStrideWarpingFootDefinition
{
    FBoneReference IKFootBone;                                                        // 0x0000 (size: 0x10)
    FBoneReference FKFootBone;                                                        // 0x0010 (size: 0x10)
    FBoneReference ThighBone;                                                         // 0x0020 (size: 0x10)

}; // Size: 0x30

class UAnimationWarpingLibrary : public UBlueprintFunctionLibrary
{

    FTransform GetOffsetRootTransform(const FAnimNodeReference& Node);
    bool GetCurveValueFromAnimation(const class UAnimSequenceBase* Animation, FName CurveName, float Time, float& OutValue);
}; // Size: 0x28

#endif
