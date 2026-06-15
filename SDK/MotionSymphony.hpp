#ifndef UE4SS_SDK_MotionSymphony_HPP
#define UE4SS_SDK_MotionSymphony_HPP

#include "MotionSymphony_enums.hpp"

struct FAnimChannelState
{
    float Weight;                                                                     // 0x0000 (size: 0x4)
    float HighestWeight;                                                              // 0x0004 (size: 0x4)
    int32 AnimId;                                                                     // 0x0008 (size: 0x4)
    EMotionAnimAssetType AnimType;                                                    // 0x000C (size: 0x1)
    int32 StartPoseId;                                                                // 0x0010 (size: 0x4)
    float StartTime;                                                                  // 0x0014 (size: 0x4)
    FVector2D BlendSpacePosition;                                                     // 0x0018 (size: 0x10)
    float Age;                                                                        // 0x0028 (size: 0x4)
    float DecayAge;                                                                   // 0x002C (size: 0x4)
    float AnimTime;                                                                   // 0x0030 (size: 0x4)
    EBlendStatus BlendStatus;                                                         // 0x0034 (size: 0x1)
    bool bLoop;                                                                       // 0x0035 (size: 0x1)
    float PlayRate;                                                                   // 0x0038 (size: 0x4)
    bool bMirrored;                                                                   // 0x003C (size: 0x1)
    float AnimLength;                                                                 // 0x0040 (size: 0x4)
    int32 CachedTriangulationIndex;                                                   // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FAnimMirroringData
{
    TArray<FIndexedMirrorPair> IndexedMirrorPairs;                                    // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FAnimNode_MSDistanceMatching : public FAnimNode_SequencePlayer
{
    float DesiredDistance;                                                            // 0x0048 (size: 0x4)
    FName DistanceCurveName;                                                          // 0x004C (size: 0x8)
    bool bNegateDistanceCurve;                                                        // 0x0054 (size: 0x1)
    EDistanceMatchType MovementType;                                                  // 0x0055 (size: 0x1)
    float DistanceLimit;                                                              // 0x0058 (size: 0x4)
    float DestinationReachedThreshold;                                                // 0x005C (size: 0x4)
    float SmoothRate;                                                                 // 0x0060 (size: 0x4)
    float SmoothTimeThreshold;                                                        // 0x0064 (size: 0x4)
    class UAnimSequenceBase* LastAnimSequenceUsed;                                    // 0x0088 (size: 0x8)

}; // Size: 0x90

struct FAnimNode_MSFootLocker : public FAnimNode_SkeletalControlBase
{
    bool bLeftFootLock;                                                               // 0x00C8 (size: 0x1)
    bool bRightFootLock;                                                              // 0x00C9 (size: 0x1)
    EMSHyperExtensionFixMethod LegHyperExtensionFixMethod;                            // 0x00CA (size: 0x1)
    float AllowLegExtensionRatio;                                                     // 0x00CC (size: 0x4)
    float LockReleaseSmoothTime;                                                      // 0x00D0 (size: 0x4)
    FMSFootLockLimbDefinition LeftFootDefinition;                                     // 0x00E0 (size: 0x100)
    FMSFootLockLimbDefinition RightFootDefinition;                                    // 0x01E0 (size: 0x100)

}; // Size: 0x330

struct FAnimNode_MSMotionMatching : public FAnimNode_AssetPlayerBase
{
    class ACharacter* ThisCharacter;                                                  // 0x0038 (size: 0x8)
    class UCharacterMovementComponent* MovementComp;                                  // 0x0040 (size: 0x8)
    FTrajectory DesiredTrajectory;                                                    // 0x0050 (size: 0x10)
    float UpdateInterval;                                                             // 0x0060 (size: 0x4)
    float PlaybackRate;                                                               // 0x0064 (size: 0x4)
    float BlendTime;                                                                  // 0x0068 (size: 0x4)
    float OverrideQualityVsResponsivenessRatio;                                       // 0x006C (size: 0x4)
    TMap<class FMotionTraitField, class FCalibrationData> FinalCalibrationSets;       // 0x0070 (size: 0x50)
    bool bBlendOutEarly;                                                              // 0x00C0 (size: 0x1)
    EPoseMatchMethod PoseMatchMethod;                                                 // 0x00C1 (size: 0x1)
    ETransitionMethod TransitionMethod;                                               // 0x00C2 (size: 0x1)
    EPastTrajectoryMode PastTrajectoryMode;                                           // 0x00C3 (size: 0x1)
    bool bBlendTrajectory;                                                            // 0x00C4 (size: 0x1)
    float TrajectoryBlendMagnitude;                                                   // 0x00C8 (size: 0x4)
    bool bFavourCurrentPose;                                                          // 0x00CC (size: 0x1)
    float CurrentPoseFavour;                                                          // 0x00D0 (size: 0x4)
    bool bEnableToleranceTest;                                                        // 0x00D4 (size: 0x1)
    FFloatInterval PlayRateScaling;                                                   // 0x00D8 (size: 0x8)
    float PositionTolerance;                                                          // 0x00E0 (size: 0x4)
    float RotationTolerance;                                                          // 0x00E4 (size: 0x4)
    float PhaseMatchWeight;                                                           // 0x00E8 (size: 0x4)
    FMotionTraitField RequiredTraits;                                                 // 0x00EC (size: 0x8)
    FDistanceMatchPayload DistanceMatchPayload;                                       // 0x00F4 (size: 0x8)

}; // Size: 0x230

struct FAnimNode_MotionRecorder : public FAnimNode_Base
{
    FPoseLink Source;                                                                 // 0x0010 (size: 0x10)
    FVector BodyVelocity;                                                             // 0x0020 (size: 0x18)
    EBodyVelocityMethod BodyVelocityRecordMethod;                                     // 0x0038 (size: 0x1)
    bool bRetargetPose;                                                               // 0x0039 (size: 0x1)
    TArray<FBoneReference> BonesToRecord;                                             // 0x0040 (size: 0x10)

}; // Size: 0xB8

struct FAnimNode_MultiPoseMatching : public FAnimNode_PoseMatchBase
{
    TArray<class UAnimSequence*> Animations;                                          // 0x00F8 (size: 0x10)
    EDistanceMatchingUseCase DistanceMatchingUseCase;                                 // 0x0108 (size: 0x1)
    float DesiredDistance;                                                            // 0x010C (size: 0x4)
    FDistanceMatchingNodeData DistanceMatchData;                                      // 0x0110 (size: 0x1C)

}; // Size: 0x148

struct FAnimNode_PoseMatchBase : public FAnimNode_SequencePlayer
{
    float PoseInterval;                                                               // 0x0048 (size: 0x4)
    float PosesEndTime;                                                               // 0x004C (size: 0x4)
    float BodyVelocityWeight;                                                         // 0x0050 (size: 0x4)
    TArray<FMatchBone> PoseConfig;                                                    // 0x0058 (size: 0x10)
    bool bEnableMirroring;                                                            // 0x0068 (size: 0x1)
    class UMirroringProfile* MirroringProfile;                                        // 0x0070 (size: 0x8)
    TArray<FPoseMatchData> Poses;                                                     // 0x0080 (size: 0x10)

}; // Size: 0xF8

struct FAnimNode_PoseMatching : public FAnimNode_PoseMatchBase
{
}; // Size: 0xF8

struct FAnimNode_TimeMatching : public FAnimNode_SequencePlayer
{
    float DesiredTime;                                                                // 0x0048 (size: 0x4)
    float MarkerTime;                                                                 // 0x004C (size: 0x4)

}; // Size: 0x68

struct FAnimNode_TransitionMatching : public FAnimNode_PoseMatchBase
{
    FVector CurrentMoveVector;                                                        // 0x00F8 (size: 0x18)
    FVector DesiredMoveVector;                                                        // 0x0110 (size: 0x18)
    ETransitionMatchingOrder TransitionMatchingOrder;                                 // 0x0128 (size: 0x1)
    float StartDirectionWeight;                                                       // 0x012C (size: 0x4)
    float EndDirectionWeight;                                                         // 0x0130 (size: 0x4)
    TArray<FTransitionAnimData> TransitionAnimData;                                   // 0x0138 (size: 0x10)
    EDistanceMatchingUseCase DistanceMatchingUseCase;                                 // 0x0148 (size: 0x1)
    float DesiredDistance;                                                            // 0x014C (size: 0x4)
    FDistanceMatchingNodeData DistanceMatchData;                                      // 0x0150 (size: 0x1C)
    TArray<FTransitionAnimData> MirroredTransitionAnimData;                           // 0x0170 (size: 0x10)

}; // Size: 0x188

struct FBoneMirrorPair
{
    FString BoneName;                                                                 // 0x0000 (size: 0x10)
    FString MirrorBoneName;                                                           // 0x0010 (size: 0x10)
    TEnumAsByte<EAxis::Type> MirrorAxis;                                              // 0x0020 (size: 0x1)
    TEnumAsByte<EAxis::Type> FlipAxis;                                                // 0x0021 (size: 0x1)
    bool bHasMirrorBone;                                                              // 0x0022 (size: 0x1)
    bool bMirrorPosition;                                                             // 0x0023 (size: 0x1)
    FRotator RotationOffset;                                                          // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FCachedMotionBone
{
}; // Size: 0xF0

struct FCachedMotionPose
{
}; // Size: 0x58

struct FCalibrationData
{
    float Weight_Momentum;                                                            // 0x0000 (size: 0x4)
    float Weight_AngularMomentum;                                                     // 0x0004 (size: 0x4)
    TArray<FJointWeightSet> PoseJointWeights;                                         // 0x0008 (size: 0x10)
    TArray<FTrajectoryWeightSet> TrajectoryWeights;                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FDistanceMatchGroup
{
    TArray<FDistanceMatchSection> DistanceMatchSections;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDistanceMatchIdentifier
{
    EDistanceMatchType MatchType;                                                     // 0x0000 (size: 0x1)
    EDistanceMatchBasis MatchBasis;                                                   // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FDistanceMatchPayload
{
    bool bTrigger;                                                                    // 0x0000 (size: 0x1)
    EDistanceMatchType MatchType;                                                     // 0x0001 (size: 0x1)
    EDistanceMatchBasis MatchBasis;                                                   // 0x0002 (size: 0x1)
    float MarkerDistance;                                                             // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FDistanceMatchSection
{
    float TargetTime;                                                                 // 0x0008 (size: 0x4)
    float StartTime;                                                                  // 0x000C (size: 0x4)
    float EndTime;                                                                    // 0x0010 (size: 0x4)
    EDistanceMatchType MatchType;                                                     // 0x0014 (size: 0x1)
    EDistanceMatchBasis MatchBasis;                                                   // 0x0015 (size: 0x1)
    int32 AnimId;                                                                     // 0x0018 (size: 0x4)
    EMotionAnimAssetType AnimType;                                                    // 0x001C (size: 0x1)
    int32 StartPoseId;                                                                // 0x0020 (size: 0x4)
    int32 EndPoseId;                                                                  // 0x0024 (size: 0x4)
    float MaxDistance;                                                                // 0x0028 (size: 0x4)
    FFloatCurve DistanceCurve;                                                        // 0x0030 (size: 0x90)

}; // Size: 0xC0

struct FDistanceMatchingModule
{
    class UAnimSequenceBase* AnimSequence;                                            // 0x0000 (size: 0x8)

}; // Size: 0x20

struct FDistanceMatchingNodeData
{
    FName DistanceCurveName;                                                          // 0x0000 (size: 0x8)
    bool bNegateDistanceCurve;                                                        // 0x0008 (size: 0x1)
    EDistanceMatchType MovementType;                                                  // 0x0009 (size: 0x1)
    float DistanceLimit;                                                              // 0x000C (size: 0x4)
    float DestinationReachedThreshold;                                                // 0x0010 (size: 0x4)
    float SmoothRate;                                                                 // 0x0014 (size: 0x4)
    float SmoothTimeThreshold;                                                        // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FIndexedMirrorPair
{
    int32 BoneIndex;                                                                  // 0x0000 (size: 0x4)
    int32 MirrorBoneIndex;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FInputProfile
{
    TArray<FInputSet> InputSets;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FInputSet
{
    FVector2D InputRemapRange;                                                        // 0x0000 (size: 0x10)
    float SpeedMultiplier;                                                            // 0x0010 (size: 0x4)
    float MoveResponseMultiplier;                                                     // 0x0014 (size: 0x4)
    float TurnResponseMultiplier;                                                     // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FJointData
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    FVector Velocity;                                                                 // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FJointWeightSet
{
    float Weight_Pos;                                                                 // 0x0000 (size: 0x4)
    float Weight_Vel;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FKMCluster
{
}; // Size: 0x28

struct FKMeansClusteringSet
{
}; // Size: 0x28

struct FLayeredAABBStructure
{
}; // Size: 0x10

struct FMSFootLockData
{
    EMSFootLockState LockState;                                                       // 0x0000 (size: 0x1)
    float RemainingLockTime;                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMSFootLockLimbDefinition
{
    FBoneReference FootBone;                                                          // 0x0000 (size: 0x10)
    FBoneReference ToeBone;                                                           // 0x0010 (size: 0x10)
    FBoneReference IkTarget;                                                          // 0x0020 (size: 0x10)
    int32 LimbBoneCount;                                                              // 0x0030 (size: 0x4)

}; // Size: 0x100

struct FMatchBone
{
    FBoneReference bone;                                                              // 0x0000 (size: 0x10)
    float PositionWeight;                                                             // 0x0010 (size: 0x4)
    float VelocityWeight;                                                             // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FMotionAction
{
    int32 ActionId;                                                                   // 0x0000 (size: 0x4)
    int32 PoseId;                                                                     // 0x0004 (size: 0x4)
    float Time;                                                                       // 0x0008 (size: 0x4)
    FMotionTraitField Trait;                                                          // 0x000C (size: 0x8)
    int32 LastActionId;                                                               // 0x0014 (size: 0x4)
    int32 NextActionId;                                                               // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FMotionActionPayload
{
    int32 ActionId;                                                                   // 0x0000 (size: 0x4)
    float LeadLength;                                                                 // 0x0004 (size: 0x4)
    float TailLength;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMotionAnimAsset
{
    int32 AnimId;                                                                     // 0x0008 (size: 0x4)
    EMotionAnimAssetType MotionAnimAssetType;                                         // 0x000C (size: 0x1)
    bool bLoop;                                                                       // 0x000D (size: 0x1)
    float PlayRate;                                                                   // 0x0010 (size: 0x4)
    bool bEnableMirroring;                                                            // 0x0014 (size: 0x1)
    bool bFlattenTrajectory;                                                          // 0x0015 (size: 0x1)
    ETrajectoryPreProcessMethod PastTrajectory;                                       // 0x0016 (size: 0x1)
    ETrajectoryPreProcessMethod FutureTrajectory;                                     // 0x0017 (size: 0x1)
    class UAnimationAsset* AnimAsset;                                                 // 0x0018 (size: 0x8)
    class UAnimSequence* PrecedingMotion;                                             // 0x0020 (size: 0x8)
    class UAnimSequence* FollowingMotion;                                             // 0x0028 (size: 0x8)
    float CostMultiplier;                                                             // 0x0030 (size: 0x4)
    TArray<FString> TraitNames;                                                       // 0x0038 (size: 0x10)
    TArray<FAnimNotifyEvent> Tags;                                                    // 0x0048 (size: 0x10)
    class UMotionDataAsset* ParentMotionDataAsset;                                    // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FMotionAnimSequence : public FMotionAnimAsset
{
    class UAnimSequence* Sequence;                                                    // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FMotionBlendSpace : public FMotionAnimAsset
{
    class UBlendSpace* BlendSpace;                                                    // 0x0060 (size: 0x8)
    FVector2D SampleSpacing;                                                          // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FMotionComposite : public FMotionAnimAsset
{
    class UAnimComposite* AnimComposite;                                              // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FMotionTagEvent : public FAnimLinkableElement
{
    FName TagName;                                                                    // 0x0030 (size: 0x8)
    class UMotionTag* Tag;                                                            // 0x0038 (size: 0x8)
    float Duration;                                                                   // 0x0040 (size: 0x4)
    FAnimLinkableElement EndLink;                                                     // 0x0048 (size: 0x30)
    int32 TrackIndex;                                                                 // 0x0078 (size: 0x4)

}; // Size: 0x90

struct FMotionTraitField
{
    int32 A;                                                                          // 0x0000 (size: 0x4)
    int32 B;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPoseAABB
{
    TArray<FPoseMotionData> Poses;                                                    // 0x0000 (size: 0x10)
    FPoseMotionData Center;                                                           // 0x0010 (size: 0x88)
    FPoseMotionData Extents;                                                          // 0x0098 (size: 0x88)

}; // Size: 0x120

struct FPoseAABBCollection
{
    TArray<FPoseAABB> ChildAABBs;                                                     // 0x0000 (size: 0x10)
    FPoseMotionData Center;                                                           // 0x0010 (size: 0x88)
    FPoseMotionData Extents;                                                          // 0x0098 (size: 0x88)

}; // Size: 0x120

struct FPoseBin
{
    TArray<int32> SerializedPoseIds;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x20

struct FPoseCandidateSet
{
    FPoseMotionData AveragePose;                                                      // 0x0000 (size: 0x88)
    int32 SetId;                                                                      // 0x0088 (size: 0x4)
    TArray<int32> PoseCandidateIds;                                                   // 0x0090 (size: 0x10)

}; // Size: 0xB8

struct FPoseLookupTable
{
    TArray<FPoseCandidateSet> CandidateSets;                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPoseMatchData
{
    int32 PoseId;                                                                     // 0x0000 (size: 0x4)
    int32 AnimId;                                                                     // 0x0004 (size: 0x4)
    bool bMirror;                                                                     // 0x0008 (size: 0x1)
    float Time;                                                                       // 0x000C (size: 0x4)
    FVector LocalVelocity;                                                            // 0x0010 (size: 0x18)
    TArray<FJointData> BoneData;                                                      // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FPoseMotionData
{
    int32 PoseId;                                                                     // 0x0000 (size: 0x4)
    EMotionAnimAssetType AnimType;                                                    // 0x0004 (size: 0x1)
    int32 AnimId;                                                                     // 0x0008 (size: 0x4)
    int32 CandidateSetId;                                                             // 0x000C (size: 0x4)
    float Time;                                                                       // 0x0010 (size: 0x4)
    FVector2D BlendSpacePosition;                                                     // 0x0018 (size: 0x10)
    int32 NextPoseId;                                                                 // 0x0028 (size: 0x4)
    int32 LastPoseId;                                                                 // 0x002C (size: 0x4)
    bool bMirrored;                                                                   // 0x0030 (size: 0x1)
    bool bDoNotUse;                                                                   // 0x0031 (size: 0x1)
    FVector LocalVelocity;                                                            // 0x0038 (size: 0x18)
    float RotationalVelocity;                                                         // 0x0050 (size: 0x4)
    TArray<FTrajectoryPoint> Trajectory;                                              // 0x0058 (size: 0x10)
    TArray<FJointData> JointData;                                                     // 0x0068 (size: 0x10)
    float Favour;                                                                     // 0x0078 (size: 0x4)
    FMotionTraitField Traits;                                                         // 0x007C (size: 0x8)

}; // Size: 0x88

struct FTrajectory
{
    TArray<FTrajectoryPoint> TrajectoryPoints;                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTrajectoryPoint
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    float RotationZ;                                                                  // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FTrajectoryWeightSet
{
    float Weight_Pos;                                                                 // 0x0000 (size: 0x4)
    float Weight_Facing;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FTransitionAnimData
{
    class UAnimSequence* AnimSequence;                                                // 0x0000 (size: 0x8)
    FVector CurrentMove;                                                              // 0x0008 (size: 0x18)
    FVector DesiredMove;                                                              // 0x0020 (size: 0x18)
    ETransitionDirectionMethod TransitionDirectionMethod;                             // 0x0038 (size: 0x1)
    float CostMultiplier;                                                             // 0x003C (size: 0x4)
    bool bMirror;                                                                     // 0x0040 (size: 0x1)
    int32 StartPose;                                                                  // 0x0044 (size: 0x4)
    int32 EndPose;                                                                    // 0x0048 (size: 0x4)
    FDistanceMatchingModule DistanceMatchModule;                                      // 0x0050 (size: 0x20)

}; // Size: 0x70

class UAnimDecouplerComponent : public UActorComponent
{
    FName YawCurveName;                                                               // 0x00A0 (size: 0x8)
    bool bNegateCurve;                                                                // 0x00A8 (size: 0x1)

}; // Size: 0xD0

class UAnimNotify_MSFootLockSingle : public UAnimNotify
{
    EMSFootLockId FootLockId;                                                         // 0x0038 (size: 0x1)
    bool bSetLocked;                                                                  // 0x0039 (size: 0x1)

}; // Size: 0x40

class UAnimNotify_MSFootLockTimer : public UAnimNotify
{
    EMSFootLockId FootLockId;                                                         // 0x0038 (size: 0x1)
    float GroundingTime;                                                              // 0x003C (size: 0x4)

}; // Size: 0x40

class UDistanceMatching : public UActorComponent
{
    bool bAutomaticTriggers;                                                          // 0x00A0 (size: 0x1)
    float DistanceTolerance;                                                          // 0x00A4 (size: 0x4)
    float MinPlantDetectionAngle;                                                     // 0x00A8 (size: 0x4)
    float MinPlantSpeed;                                                              // 0x00AC (size: 0x4)
    float MinPlantAccel;                                                              // 0x00B0 (size: 0x4)
    class AActor* ParentActor;                                                        // 0x00F0 (size: 0x8)
    class UCharacterMovementComponent* MovementComponent;                             // 0x00F8 (size: 0x8)

    void TriggerTurnInPlaceTo(FVector DesiredDirection);
    void TriggerTurnInPlaceFrom();
    void TriggerStop(float DeltaTime);
    void TriggerStart(float DeltaTime);
    void TriggerPlant(float DeltaTime);
    void TriggerPivotTo();
    void TriggerPivotFrom();
    void TriggerJump(float DeltaTime);
    void StopDistanceMatching();
    float GetMarkerDistance();
    FDistanceMatchPayload GetDistanceMatchPayload();
    EDistanceMatchTrigger GetAndConsumeTriggeredTransition();
    void DetectTransitions(float DeltaTime);
}; // Size: 0x118

class UMMBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void TransformFromUpForwardAxis(FTransform& OutTransform, const EAllAxis UpAxis, const EAllAxis ForwardAxis);
    void SetTrajectoryPoint(FTrajectory& OutTrajectory, const int32 Index, const FVector position, const float RotationZ);
    void RemoveTraits(const TArray<FString>& TraitNames, FMotionTraitField& OutTraitField);
    void RemoveTraitField(const FMotionTraitField TraitsToRemove, FMotionTraitField& OutTraitField);
    void RemoveTrait(const FString TraitName, FMotionTraitField& OutTraitField);
    void InitializeTrajectory(FTrajectory& OutTrajectory, const int32 TrajectoryCount);
    FVector GetVectorRelativeToCamera(const float InputX, const float InputY, class UCameraComponent* CameraComponent);
    FMotionTraitField GetTraitHandleFromArray(const TArray<FString>& TraitNames);
    FMotionTraitField GetTraitHandle(const FString TraitName);
    FVector GetInputVectorRelativeToCamera(FVector InputVector, class UCameraComponent* CameraComponent);
    FMotionTraitField CreateMotionTraitFieldFromArray(const TArray<FString>& TraitNames);
    FMotionTraitField CreateMotionTraitField(const FString TraitName);
    void ClearTraitField(FMotionTraitField& OutTraitField);
    void AddTraits(const TArray<FString>& TraitNames, FMotionTraitField& OutTraitField);
    void AddTraitField(const FMotionTraitField NewTraits, FMotionTraitField& OutTraitField);
    void AddTrait(const FString TraitName, FMotionTraitField& OutTraitField);
}; // Size: 0x28

class UMMOptimisationModule : public UObject
{
    class UMotionDataAsset* ParentMotionDataAsset;                                    // 0x0028 (size: 0x8)
    bool bIsProcessed;                                                                // 0x0030 (size: 0x1)

}; // Size: 0x38

class UMMOptimisation_LayeredAABB : public UMMOptimisationModule
{
    TMap<class FMotionTraitField, class FLayeredAABBStructure> SearchStructure;       // 0x0038 (size: 0x50)

}; // Size: 0x88

class UMMOptimisation_MultiClustering : public UMMOptimisationModule
{
    int32 KMeansClusterCount;                                                         // 0x0038 (size: 0x4)
    int32 KMeansMaxIterations;                                                        // 0x003C (size: 0x4)
    int32 DesiredLookupTableSize;                                                     // 0x0040 (size: 0x4)
    TMap<class FMotionTraitField, class FPoseLookupTable> PoseLookupSets;             // 0x0048 (size: 0x50)

}; // Size: 0x98

class UMMOptimisation_TraitBins : public UMMOptimisationModule
{
    TMap<class FMotionTraitField, class FPoseBin> PoseBins;                           // 0x0038 (size: 0x50)

}; // Size: 0x88

class UMSFootLockManager : public UActorComponent
{
    TMap<class EMSFootLockId, class FMSFootLockData> FootLockMap;                     // 0x00A0 (size: 0x50)

    void UnlockFoot(const EMSFootLockId FootId);
    void ResetLockingState();
    void LockFoot(const EMSFootLockId FootId, const float Duration);
    bool IsFootLocked(const EMSFootLockId FootId);
}; // Size: 0xF0

class UMSFootLockerMath : public UBlueprintFunctionLibrary
{

    float AngleBetween(const FVector& A, const FVector& B);
}; // Size: 0x28

class UMatchFeature : public UObject
{
}; // Size: 0x28

class UMirroringProfile : public UObject
{
    class USkeleton* SourceSkeleton;                                                  // 0x0028 (size: 0x8)
    FVector CharacterMirrorAxis;                                                      // 0x0030 (size: 0x18)
    bool bMirrorPosition_Default;                                                     // 0x0048 (size: 0x1)
    FString LeftAffix;                                                                // 0x0050 (size: 0x10)
    FString RightAffix;                                                               // 0x0060 (size: 0x10)
    TArray<FBoneMirrorPair> MirrorPairs;                                              // 0x0070 (size: 0x10)

}; // Size: 0x80

class UMotionAnimMetaDataWrapper : public UObject
{
    bool bLoop;                                                                       // 0x0028 (size: 0x1)
    float PlayRate;                                                                   // 0x002C (size: 0x4)
    bool bEnableMirroring;                                                            // 0x0030 (size: 0x1)
    bool bFlattenTrajectory;                                                          // 0x0031 (size: 0x1)
    ETrajectoryPreProcessMethod PastTrajectory;                                       // 0x0032 (size: 0x1)
    class UAnimSequence* PrecedingMotion;                                             // 0x0038 (size: 0x8)
    ETrajectoryPreProcessMethod FutureTrajectory;                                     // 0x0040 (size: 0x1)
    class UAnimSequence* FollowingMotion;                                             // 0x0048 (size: 0x8)
    float CostMultiplier;                                                             // 0x0050 (size: 0x4)
    TArray<FString> TraitNames;                                                       // 0x0058 (size: 0x10)

}; // Size: 0x70

class UMotionBlendSpaceMetaDataWrapper : public UMotionAnimMetaDataWrapper
{
    FVector2D SampleSpacing;                                                          // 0x0070 (size: 0x10)

}; // Size: 0x80

class UMotionCalibration : public UObject
{
    class UMotionMatchConfig* MotionMatchConfig;                                      // 0x0028 (size: 0x8)
    bool bOverrideDefaults;                                                           // 0x0030 (size: 0x1)
    float QualityVsResponsivenessRatio;                                               // 0x0034 (size: 0x4)
    float Weight_Momentum;                                                            // 0x0038 (size: 0x4)
    float Weight_AngularMomentum;                                                     // 0x003C (size: 0x4)
    TArray<FJointWeightSet> PoseJointWeights;                                         // 0x0040 (size: 0x10)
    TArray<FTrajectoryWeightSet> TrajectoryWeights;                                   // 0x0050 (size: 0x10)
    float JointPosition_DefaultWeight;                                                // 0x0060 (size: 0x4)
    float JointVelocity_DefaultWeight;                                                // 0x0064 (size: 0x4)
    float TrajectoryPosition_DefaultWeight;                                           // 0x0068 (size: 0x4)
    float TrajectoryFacing_DefaultWeight;                                             // 0x006C (size: 0x4)

    void SetTrajectoryWeightSet(int32 Index, float Weight_Pos, float Weight_Facing);
    void SetBoneWeightSet(FName BoneName, float Weight_Pos, float Weight_Vel);
    void OnGenerateTrajectoryWeightings();
    void OnGeneratePoseWeightings();
    void OnGenerateJointWeightings();
}; // Size: 0x78

class UMotionDataAsset : public UAnimationAsset
{
    float PoseInterval;                                                               // 0x0080 (size: 0x4)
    class UMotionMatchConfig* MotionMatchConfig;                                      // 0x0088 (size: 0x8)
    EJointVelocityCalculationMethod JointVelocityCalculationMethod;                   // 0x0090 (size: 0x1)
    TEnumAsByte<ENotifyTriggerMode::Type> NotifyTriggerMode;                          // 0x0091 (size: 0x1)
    bool bOptimize;                                                                   // 0x0092 (size: 0x1)
    class UMMOptimisationModule* OptimisationModule;                                  // 0x0098 (size: 0x8)
    class UMotionCalibration* PreprocessCalibration;                                  // 0x00A0 (size: 0x8)
    class UMirroringProfile* MirroringProfile;                                        // 0x00A8 (size: 0x8)
    bool bIsProcessed;                                                                // 0x00B0 (size: 0x1)
    bool bIsOptimised;                                                                // 0x00B1 (size: 0x1)
    TArray<FMotionAnimSequence> SourceMotionAnims;                                    // 0x00B8 (size: 0x10)
    TArray<FMotionBlendSpace> SourceBlendSpaces;                                      // 0x00C8 (size: 0x10)
    TArray<FMotionComposite> SourceComposites;                                        // 0x00D8 (size: 0x10)
    TArray<FPoseMotionData> Poses;                                                    // 0x00E8 (size: 0x10)
    TMap<class FMotionTraitField, class FCalibrationData> FeatureStandardDeviations;  // 0x00F8 (size: 0x50)
    TMap<class FDistanceMatchIdentifier, class FDistanceMatchGroup> DistanceMatchSections; // 0x0148 (size: 0x50)
    TArray<FMotionAction> Actions;                                                    // 0x0198 (size: 0x10)
    FKMeansClusteringSet ChosenTrajClusterSet;                                        // 0x01A8 (size: 0x28)
    class UMotionAnimMetaDataWrapper* MotionMetaWrapper;                              // 0x01D0 (size: 0x8)

}; // Size: 0x1E0

class UMotionMatchConfig : public UObject
{
    class USkeleton* SourceSkeleton;                                                  // 0x0030 (size: 0x8)
    EAllAxis UpAxis;                                                                  // 0x0038 (size: 0x1)
    EAllAxis ForwardAxis;                                                             // 0x0039 (size: 0x1)
    TArray<float> TrajectoryTimes;                                                    // 0x0040 (size: 0x10)
    TArray<FBoneReference> PoseBones;                                                 // 0x0050 (size: 0x10)

}; // Size: 0x60

class UMotionSymphonySettings : public UObject
{
    TArray<FString> TraitNames;                                                       // 0x0028 (size: 0x10)

}; // Size: 0x48

class UMotionTag : public UObject
{

    void Received_RunPreProcessForTag(float PoseInterval);
    FString GetTagName();
}; // Size: 0x28

class UTagPoint : public UAnimNotify
{

    bool Received_PreProcessTag(const FPoseMotionData& PointPose, FMotionAnimAsset& OutMotionAnim, class UMotionDataAsset* OutMotionData, const float Time);
}; // Size: 0x38

class UTagSection : public UAnimNotifyState
{

    bool Received_PreProcessTag(FMotionAnimAsset& OutMotionAnim, class UMotionDataAsset* OutMotionData, const float StartTime, const float EndTime);
    bool Received_PreProcessPose(FPoseMotionData& OutPose, FMotionAnimAsset& OutMotionAnim, class UMotionDataAsset* OutMotionData, const float StartTime, const float EndTime);
}; // Size: 0x30

class UTag_ActionMarker : public UTagPoint
{
    FString ActionName;                                                               // 0x0038 (size: 0x10)

}; // Size: 0x48

class UTag_CostMultiplier : public UTagSection
{
    float CostMultiplier;                                                             // 0x0030 (size: 0x4)
    bool bOverride;                                                                   // 0x0034 (size: 0x1)

}; // Size: 0x38

class UTag_DistanceMatch : public UTagPoint
{
    EDistanceMatchType DistanceMatchType;                                             // 0x0038 (size: 0x1)
    EDistanceMatchBasis DistancematchBasis;                                           // 0x0039 (size: 0x1)
    float Lead;                                                                       // 0x003C (size: 0x4)
    float Tail;                                                                       // 0x0040 (size: 0x4)

}; // Size: 0x48

class UTag_DoNotUse : public UTagSection
{
}; // Size: 0x30

class UTag_Trait : public UTagSection
{
    FString TraitName;                                                                // 0x0030 (size: 0x10)

}; // Size: 0x48

class UTrajectoryErrorWarping : public UActorComponent
{
    ETrajectoryErrorWarpMode WarpMode;                                                // 0x00A0 (size: 0x1)
    float WarpRate;                                                                   // 0x00A4 (size: 0x4)
    float MinTrajectoryLength;                                                        // 0x00A8 (size: 0x4)
    FVector2D ErrorActivationRange;                                                   // 0x00B0 (size: 0x10)

    float CalculateTrajectoryErrorWarping(const float DeltaTime, const float PlaybackSpeed);
    void ApplyTrajectoryErrorWarping(const float DeltaTime, const float PlaybackSpeed);
}; // Size: 0xD0

class UTrajectoryGenerator : public UTrajectoryGenerator_Base
{
    float MaxSpeed;                                                                   // 0x0218 (size: 0x4)
    float MoveResponse;                                                               // 0x021C (size: 0x4)
    float TurnResponse;                                                               // 0x0220 (size: 0x4)
    FVector StrafeDirection;                                                          // 0x0228 (size: 0x18)
    bool bResetDirectionOnIdle;                                                       // 0x0240 (size: 0x1)
    ETrajectoryMoveMode TrajectoryBehaviour;                                          // 0x0241 (size: 0x1)
    ETrajectoryControlMode TrajectoryControlMode;                                     // 0x0242 (size: 0x1)

    void SetStrafeDirectionFromCamera(class UCameraComponent* Camera);
}; // Size: 0x270

class UTrajectoryGenerator_Base : public UActorComponent
{
    class UMotionMatchConfig* MotionMatchConfig;                                      // 0x00A0 (size: 0x8)
    float RecordingFrequency;                                                         // 0x00A8 (size: 0x4)
    float SampleRate;                                                                 // 0x00AC (size: 0x4)
    bool bFlattenTrajectory;                                                          // 0x00B0 (size: 0x1)
    float ActorToModelRotationOffset;                                                 // 0x00B4 (size: 0x4)
    bool bDebugRandomInput;                                                           // 0x00B8 (size: 0x1)
    FVector2D DebugTimeIntervalRange;                                                 // 0x00C0 (size: 0x10)
    FTrajectory Trajectory;                                                           // 0x00D0 (size: 0x10)
    FVector InputVector;                                                              // 0x00E0 (size: 0x18)

    void SetTrajectoryInputZ(float ZAxisValue);
    void SetTrajectoryInputY(float YAxisValue);
    void SetTrajectoryInputX(float XAxisValue);
    void SetTrajectoryInputVector(FVector TrajectoryInput);
    void SetTrajectoryInput(float XAxisValue, float YAxisValue, float ZAxisValue);
    void SetInputProfile(FInputProfile& InInputProfile);
    void SetCharacterSkeletalMeshComponent(class USkeletalMeshComponent* InSkelMesh);
    bool IsIdle();
    bool HasMoveInput();
    FTrajectory GetCurrentTrajectory();
    void DrawTrajectoryDebug(FVector DrawOffset);
    void ClearPastTrajectoryMotion();
    void ClearInputProfile();
    void ClearFutureTrajectoryMotion();
    void ClearAllTrajectoryMotion();
}; // Size: 0x220

#endif
