#ifndef UE4SS_SDK_PhysicsControl_HPP
#define UE4SS_SDK_PhysicsControl_HPP

#include "PhysicsControl_enums.hpp"

struct FAnimNode_RigidBodyWithControl : public FAnimNode_SkeletalControlBase
{
    class UPhysicsAsset* OverridePhysicsAsset;                                        // 0x00C8 (size: 0x8)
    bool bDefaultToSkeletalMeshPhysicsAsset;                                          // 0x00D0 (size: 0x1)
    FVector OverrideWorldGravity;                                                     // 0x0208 (size: 0x18)
    FVector ExternalForce;                                                            // 0x0220 (size: 0x18)
    FVector ComponentLinearAccScale;                                                  // 0x0238 (size: 0x18)
    FVector ComponentLinearVelScale;                                                  // 0x0250 (size: 0x18)
    FVector ComponentAppliedLinearAccClamp;                                           // 0x0268 (size: 0x18)
    FSimSpaceSettings SimSpaceSettings;                                               // 0x0280 (size: 0x60)
    float CachedBoundsScale;                                                          // 0x02E0 (size: 0x4)
    bool bUpdateCacheEveryFrame;                                                      // 0x02E4 (size: 0x1)
    FBoneReference BaseBoneRef;                                                       // 0x02E8 (size: 0x10)
    TEnumAsByte<ECollisionChannel> OverlapChannel;                                    // 0x02F8 (size: 0x1)
    ESimulationSpace SimulationSpace;                                                 // 0x02F9 (size: 0x1)
    uint8 bCalculateVelocitiesForWorldGeometry;                                       // 0x02FA (size: 0x1)
    uint8 bForceDisableCollisionBetweenConstraintBodies;                              // 0x02FA (size: 0x1)
    uint8 bUseExternalClothCollision;                                                 // 0x02FA (size: 0x1)
    uint8 bMakeKinematicConstraints;                                                  // 0x02FA (size: 0x1)
    uint8 bEnableWorldGeometry;                                                       // 0x02FC (size: 0x1)
    uint8 bOverrideWorldGravity;                                                      // 0x02FC (size: 0x1)
    uint8 bTransferBoneVelocities;                                                    // 0x02FC (size: 0x1)
    uint8 bFreezeIncomingPoseOnStart;                                                 // 0x02FC (size: 0x1)
    uint8 bModifyConstraintTransformsToMatchSkeleton;                                 // 0x02FC (size: 0x1)
    float WorldSpaceMinimumScale;                                                     // 0x0300 (size: 0x4)
    float EvaluationResetTime;                                                        // 0x0304 (size: 0x4)
    bool bEnableControls;                                                             // 0x0308 (size: 0x1)
    class UPhysicsControlProfileAsset* PhysicsControlProfileAsset;                    // 0x0310 (size: 0x8)
    TMap<class FName, class FName> BoneToBodyNameMap;                                 // 0x0318 (size: 0x50)
    FPhysicsControlCharacterSetupData CharacterSetupData;                             // 0x0368 (size: 0xC0)
    bool bEnableCharacterSetupData;                                                   // 0x0428 (size: 0x1)
    FPhysicsControlAndBodyModifierCreationDatas AdditionalControlsAndBodyModifiers;   // 0x0430 (size: 0xA0)
    FPhysicsControlSetUpdates AdditionalSets;                                         // 0x04D0 (size: 0x20)
    FPhysicsControlControlAndModifierParameters InitialControlAndBodyModifierUpdates; // 0x04F0 (size: 0x30)
    FPhysicsControlControlAndModifierParameters ControlAndModifierParameters;         // 0x0520 (size: 0x30)
    FPhysicsControlControlAndModifierUpdates ControlAndModifierUpdates;               // 0x0550 (size: 0x30)
    FRigidBodyControlTargets ControlTargets;                                          // 0x0580 (size: 0x50)
    FRigidBodyKinematicTargets KinematicTargets;                                      // 0x05D0 (size: 0x50)
    class USkeletalMesh* PhysicsAssetAuthoredSkeletalMesh;                            // 0x0620 (size: 0x8)
    FName ConstraintProfile;                                                          // 0x0628 (size: 0x8)
    FName ControlProfile;                                                             // 0x0630 (size: 0x8)
    ESimulationTiming SimulationTiming;                                               // 0x0639 (size: 0x1)

}; // Size: 0xE60

struct FInitialBodyModifier
{
    TWeakObjectPtr<class AActor> Actor;                                               // 0x0000 (size: 0x8)
    FName MeshComponentName;                                                          // 0x0008 (size: 0x8)
    FName BoneName;                                                                   // 0x0010 (size: 0x8)
    FPhysicsControlModifierData BodyModifierData;                                     // 0x0018 (size: 0x10)
    FVector KinematicTargetPosition;                                                  // 0x0028 (size: 0x18)
    FRotator KinematicTargetOrientation;                                              // 0x0040 (size: 0x18)

}; // Size: 0x58

struct FInitialCharacterControls
{
    TWeakObjectPtr<class AActor> CharacterActor;                                      // 0x0000 (size: 0x8)
    FName SkeletalMeshComponentName;                                                  // 0x0008 (size: 0x8)
    TArray<FPhysicsControlLimbSetupData> LimbSetupData;                               // 0x0010 (size: 0x10)
    FPhysicsControlData WorldSpaceControlData;                                        // 0x0020 (size: 0x50)
    FPhysicsControlData ParentSpaceControlData;                                       // 0x0070 (size: 0x50)
    FPhysicsControlModifierData BodyModifierData;                                     // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FInitialPhysicsControl
{
    TWeakObjectPtr<class AActor> ParentActor;                                         // 0x0000 (size: 0x8)
    FName ParentMeshComponentName;                                                    // 0x0008 (size: 0x8)
    FName ParentBoneName;                                                             // 0x0010 (size: 0x8)
    TWeakObjectPtr<class AActor> ChildActor;                                          // 0x0018 (size: 0x8)
    FName ChildMeshComponentName;                                                     // 0x0020 (size: 0x8)
    FName ChildBoneName;                                                              // 0x0028 (size: 0x8)
    FPhysicsControlData ControlData;                                                  // 0x0030 (size: 0x50)
    FPhysicsControlMultiplier ControlMultiplier;                                      // 0x0080 (size: 0x70)
    FPhysicsControlTarget ControlTarget;                                              // 0x00F0 (size: 0x68)

}; // Size: 0x158

struct FPhysicsBodyModifier
{
    FName BoneName;                                                                   // 0x0000 (size: 0x8)
    FPhysicsControlModifierData ModifierData;                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPhysicsBodyModifierCreationData
{
    FPhysicsBodyModifier Modifier;                                                    // 0x0000 (size: 0x18)
    TArray<FName> Sets;                                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FPhysicsControl
{
    FName ParentBoneName;                                                             // 0x0000 (size: 0x8)
    FName ChildBoneName;                                                              // 0x0008 (size: 0x8)
    FPhysicsControlData ControlData;                                                  // 0x0010 (size: 0x50)
    FPhysicsControlMultiplier ControlMultiplier;                                      // 0x0060 (size: 0x70)

}; // Size: 0xD0

struct FPhysicsControlAndBodyModifierCreationDatas
{
    TMap<class FName, class FPhysicsControlCreationData> Controls;                    // 0x0000 (size: 0x50)
    TMap<class FName, class FPhysicsBodyModifierCreationData> Modifiers;              // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FPhysicsControlCharacterSetupData
{
    TArray<FPhysicsControlLimbSetupData> LimbSetupData;                               // 0x0000 (size: 0x10)
    FPhysicsControlData DefaultWorldSpaceControlData;                                 // 0x0010 (size: 0x50)
    FPhysicsControlData DefaultParentSpaceControlData;                                // 0x0060 (size: 0x50)
    FPhysicsControlModifierData DefaultBodyModifierData;                              // 0x00B0 (size: 0x10)

}; // Size: 0xC0

struct FPhysicsControlControlAndModifierParameters
{
    TArray<FPhysicsControlNamedControlParameters> ControlParameters;                  // 0x0000 (size: 0x10)
    TArray<FPhysicsControlNamedControlMultiplierParameters> ControlMultiplierParameters; // 0x0010 (size: 0x10)
    TArray<FPhysicsControlNamedModifierParameters> ModifierParameters;                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FPhysicsControlControlAndModifierUpdates
{
    TArray<FPhysicsControlNamedControlParameters> ControlUpdates;                     // 0x0000 (size: 0x10)
    TArray<FPhysicsControlNamedControlMultiplierParameters> ControlMultiplierUpdates; // 0x0010 (size: 0x10)
    TArray<FPhysicsControlNamedModifierParameters> ModifierUpdates;                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FPhysicsControlCreationData
{
    FPhysicsControl Control;                                                          // 0x0000 (size: 0xD0)
    TArray<FName> Sets;                                                               // 0x00D0 (size: 0x10)

}; // Size: 0xE0

struct FPhysicsControlData
{
    float LinearStrength;                                                             // 0x0000 (size: 0x4)
    float LinearDampingRatio;                                                         // 0x0004 (size: 0x4)
    float LinearExtraDamping;                                                         // 0x0008 (size: 0x4)
    float MaxForce;                                                                   // 0x000C (size: 0x4)
    float AngularStrength;                                                            // 0x0010 (size: 0x4)
    float AngularDampingRatio;                                                        // 0x0014 (size: 0x4)
    float AngularExtraDamping;                                                        // 0x0018 (size: 0x4)
    float MaxTorque;                                                                  // 0x001C (size: 0x4)
    float LinearTargetVelocityMultiplier;                                             // 0x0020 (size: 0x4)
    float AngularTargetVelocityMultiplier;                                            // 0x0024 (size: 0x4)
    float SkeletalAnimationVelocityMultiplier;                                        // 0x0028 (size: 0x4)
    FVector CustomControlPoint;                                                       // 0x0030 (size: 0x18)
    uint8 bEnabled;                                                                   // 0x0048 (size: 0x1)
    uint8 bUseCustomControlPoint;                                                     // 0x0048 (size: 0x1)
    uint8 bUseSkeletalAnimation;                                                      // 0x0048 (size: 0x1)
    uint8 bDisableCollision;                                                          // 0x0048 (size: 0x1)
    uint8 bOnlyControlChildObject;                                                    // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FPhysicsControlLimbBones
{
}; // Size: 0x20

struct FPhysicsControlLimbSetupData
{
    FName LimbName;                                                                   // 0x0000 (size: 0x8)
    FName StartBone;                                                                  // 0x0008 (size: 0x8)
    uint8 bIncludeParentBone;                                                         // 0x0010 (size: 0x1)
    uint8 bCreateWorldSpaceControls;                                                  // 0x0010 (size: 0x1)
    uint8 bCreateParentSpaceControls;                                                 // 0x0010 (size: 0x1)
    uint8 bCreateBodyModifiers;                                                       // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FPhysicsControlModifierData
{
    EPhysicsMovementType MovementType;                                                // 0x0000 (size: 0x1)
    TEnumAsByte<ECollisionEnabled::Type> CollisionType;                               // 0x0001 (size: 0x1)
    float GravityMultiplier;                                                          // 0x0004 (size: 0x4)
    float PhysicsBlendWeight;                                                         // 0x0008 (size: 0x4)
    uint8 bUseSkeletalAnimation;                                                      // 0x000C (size: 0x1)
    uint8 bUpdateKinematicFromSimulation;                                             // 0x000C (size: 0x1)

}; // Size: 0x10

struct FPhysicsControlModifierSparseData
{
    EPhysicsMovementType MovementType;                                                // 0x0000 (size: 0x1)
    TEnumAsByte<ECollisionEnabled::Type> CollisionType;                               // 0x0001 (size: 0x1)
    float GravityMultiplier;                                                          // 0x0004 (size: 0x4)
    float PhysicsBlendWeight;                                                         // 0x0008 (size: 0x4)
    uint8 bUseSkeletalAnimation;                                                      // 0x000C (size: 0x1)
    uint8 bUpdateKinematicFromSimulation;                                             // 0x000C (size: 0x1)
    uint8 bEnableMovementType;                                                        // 0x000C (size: 0x1)
    uint8 bEnableCollisionType;                                                       // 0x000C (size: 0x1)
    uint8 bEnableGravityMultiplier;                                                   // 0x000C (size: 0x1)
    uint8 bEnablePhysicsBlendWeight;                                                  // 0x000C (size: 0x1)
    uint8 bEnablebUseSkeletalAnimation;                                               // 0x000C (size: 0x1)
    uint8 bEnablebUpdateKinematicFromSimulation;                                      // 0x000C (size: 0x1)

}; // Size: 0x10

struct FPhysicsControlMultiplier
{
    FVector LinearStrengthMultiplier;                                                 // 0x0000 (size: 0x18)
    FVector LinearDampingRatioMultiplier;                                             // 0x0018 (size: 0x18)
    FVector LinearExtraDampingMultiplier;                                             // 0x0030 (size: 0x18)
    FVector MaxForceMultiplier;                                                       // 0x0048 (size: 0x18)
    float AngularStrengthMultiplier;                                                  // 0x0060 (size: 0x4)
    float AngularDampingRatioMultiplier;                                              // 0x0064 (size: 0x4)
    float AngularExtraDampingMultiplier;                                              // 0x0068 (size: 0x4)
    float MaxTorqueMultiplier;                                                        // 0x006C (size: 0x4)

}; // Size: 0x70

struct FPhysicsControlNamedControlMultiplierParameters
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FPhysicsControlSparseMultiplier Data;                                             // 0x0008 (size: 0x78)

}; // Size: 0x80

struct FPhysicsControlNamedControlParameters
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FPhysicsControlSparseData Data;                                                   // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FPhysicsControlNamedModifierParameters
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FPhysicsControlModifierSparseData Data;                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPhysicsControlNames
{
    TArray<FName> Names;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPhysicsControlSetUpdate
{
    FName SetName;                                                                    // 0x0000 (size: 0x8)
    TArray<FName> Names;                                                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPhysicsControlSetUpdates
{
    TArray<FPhysicsControlSetUpdate> ControlSetUpdates;                               // 0x0000 (size: 0x10)
    TArray<FPhysicsControlSetUpdate> ModifierSetUpdates;                              // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FPhysicsControlSparseData
{
    float LinearStrength;                                                             // 0x0000 (size: 0x4)
    float LinearDampingRatio;                                                         // 0x0004 (size: 0x4)
    float LinearExtraDamping;                                                         // 0x0008 (size: 0x4)
    float MaxForce;                                                                   // 0x000C (size: 0x4)
    float AngularStrength;                                                            // 0x0010 (size: 0x4)
    float AngularDampingRatio;                                                        // 0x0014 (size: 0x4)
    float AngularExtraDamping;                                                        // 0x0018 (size: 0x4)
    float MaxTorque;                                                                  // 0x001C (size: 0x4)
    float LinearTargetVelocityMultiplier;                                             // 0x0020 (size: 0x4)
    float AngularTargetVelocityMultiplier;                                            // 0x0024 (size: 0x4)
    float SkeletalAnimationVelocityMultiplier;                                        // 0x0028 (size: 0x4)
    FVector CustomControlPoint;                                                       // 0x0030 (size: 0x18)
    uint8 bEnabled;                                                                   // 0x0048 (size: 0x1)
    uint8 bUseCustomControlPoint;                                                     // 0x0048 (size: 0x1)
    uint8 bUseSkeletalAnimation;                                                      // 0x0048 (size: 0x1)
    uint8 bDisableCollision;                                                          // 0x0048 (size: 0x1)
    uint8 bOnlyControlChildObject;                                                    // 0x0048 (size: 0x1)
    uint8 bEnableLinearStrength;                                                      // 0x0048 (size: 0x1)
    uint8 bEnableLinearDampingRatio;                                                  // 0x0048 (size: 0x1)
    uint8 bEnableLinearExtraDamping;                                                  // 0x0048 (size: 0x1)
    uint8 bEnableMaxForce;                                                            // 0x0049 (size: 0x1)
    uint8 bEnableAngularStrength;                                                     // 0x0049 (size: 0x1)
    uint8 bEnableAngularDampingRatio;                                                 // 0x0049 (size: 0x1)
    uint8 bEnableAngularExtraDamping;                                                 // 0x0049 (size: 0x1)
    uint8 bEnableMaxTorque;                                                           // 0x0049 (size: 0x1)
    uint8 bEnableLinearTargetVelocityMultiplier;                                      // 0x0049 (size: 0x1)
    uint8 bEnableAngularTargetVelocityMultiplier;                                     // 0x0049 (size: 0x1)
    uint8 bEnableSkeletalAnimationVelocityMultiplier;                                 // 0x0049 (size: 0x1)
    uint8 bEnableCustomControlPoint;                                                  // 0x004A (size: 0x1)
    uint8 bEnablebEnabled;                                                            // 0x004A (size: 0x1)
    uint8 bEnablebUseCustomControlPoint;                                              // 0x004A (size: 0x1)
    uint8 bEnablebUseSkeletalAnimation;                                               // 0x004A (size: 0x1)
    uint8 bEnablebDisableCollision;                                                   // 0x004A (size: 0x1)
    uint8 bEnablebOnlyControlChildObject;                                             // 0x004A (size: 0x1)

}; // Size: 0x50

struct FPhysicsControlSparseMultiplier
{
    FVector LinearStrengthMultiplier;                                                 // 0x0000 (size: 0x18)
    FVector LinearDampingRatioMultiplier;                                             // 0x0018 (size: 0x18)
    FVector LinearExtraDampingMultiplier;                                             // 0x0030 (size: 0x18)
    FVector MaxForceMultiplier;                                                       // 0x0048 (size: 0x18)
    float AngularStrengthMultiplier;                                                  // 0x0060 (size: 0x4)
    float AngularDampingRatioMultiplier;                                              // 0x0064 (size: 0x4)
    float AngularExtraDampingMultiplier;                                              // 0x0068 (size: 0x4)
    float MaxTorqueMultiplier;                                                        // 0x006C (size: 0x4)
    uint8 bEnableLinearStrengthMultiplier;                                            // 0x0070 (size: 0x1)
    uint8 bEnableLinearDampingRatioMultiplier;                                        // 0x0070 (size: 0x1)
    uint8 bEnableLinearExtraDampingMultiplier;                                        // 0x0070 (size: 0x1)
    uint8 bEnableMaxForceMultiplier;                                                  // 0x0070 (size: 0x1)
    uint8 bEnableAngularStrengthMultiplier;                                           // 0x0070 (size: 0x1)
    uint8 bEnableAngularDampingRatioMultiplier;                                       // 0x0070 (size: 0x1)
    uint8 bEnableAngularExtraDampingMultiplier;                                       // 0x0070 (size: 0x1)
    uint8 bEnableMaxTorqueMultiplier;                                                 // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FPhysicsControlTarget
{
    FVector TargetPosition;                                                           // 0x0000 (size: 0x18)
    FVector TargetVelocity;                                                           // 0x0018 (size: 0x18)
    FRotator TargetOrientation;                                                       // 0x0030 (size: 0x18)
    FVector TargetAngularVelocity;                                                    // 0x0048 (size: 0x18)
    bool bApplyControlPointToTarget;                                                  // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FRigidBodyControlTarget
{
    FVector TargetPosition;                                                           // 0x0000 (size: 0x18)
    FRotator TargetOrientation;                                                       // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRigidBodyControlTargets
{
    TMap<class FName, class FRigidBodyControlTarget> Targets;                         // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FRigidBodyKinematicTarget
{
    FVector TargetPosition;                                                           // 0x0000 (size: 0x18)
    FRotator TargetOrientation;                                                       // 0x0018 (size: 0x18)
    uint8 bUseSkeletalAnimation;                                                      // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FRigidBodyKinematicTargets
{
    TMap<class FName, class FRigidBodyKinematicTarget> Targets;                       // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FRigidBodyWithControlReference : public FAnimNodeReference
{
}; // Size: 0x10

class APhysicsControlActor : public AActor
{
    class UPhysicsControlComponent* ControlComponent;                                 // 0x0290 (size: 0x8)
    class UPhysicsControlInitializerComponent* ControlInitializerComponent;           // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UPhysicsControlBPLibrary : public UBlueprintFunctionLibrary
{

    FRigidBodyWithControlReference SetOverridePhysicsAsset(const FRigidBodyWithControlReference& Node, class UPhysicsAsset* PhysicsAsset);
    TArray<FName> GetControlNamesInSet(const FRigidBodyWithControlReference& RigidBodyWithControl, const FName SetName);
    TArray<FName> GetBodyModifierNamesInSet(const FRigidBodyWithControlReference& RigidBodyWithControl, const FName SetName);
    void ConvertToRigidBodyWithControlPure(const FAnimNodeReference& Node, FRigidBodyWithControlReference& RigidBodyWithControl, bool& Result);
    FRigidBodyWithControlReference ConvertToRigidBodyWithControl(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    void BlendParameters(FPhysicsControlControlAndModifierParameters& InParametersA, FPhysicsControlControlAndModifierParameters& InParametersB, const float InInterpolationWeight, FPhysicsControlControlAndModifierParameters& OutParameters);
    void BlendModifierParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, const FPhysicsControlNamedModifierParameters& InStartModifierParameters, const FPhysicsControlNamedModifierParameters& InEndModifierParameters, const TArray<FName>& ModifierNames, FPhysicsControlControlAndModifierParameters& OutParameters);
    void BlendControlParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, const FPhysicsControlNamedControlParameters& InStartControlParameters, const FPhysicsControlNamedControlParameters& InEndControlParameters, const TArray<FName>& ControlNames, FPhysicsControlControlAndModifierParameters& OutParameters);
    void AddMultipleModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, const TArray<FName>& Names, const FPhysicsControlModifierSparseData& ModifierData);
    void AddMultipleControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, const TArray<FName>& Names, const FPhysicsControlSparseData& ControlData);
    void AddModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, const FName Name, const FPhysicsControlModifierSparseData& ModifierData);
    void AddControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, const FName Name, const FPhysicsControlSparseData& ControlData);
}; // Size: 0x28

class UPhysicsControlComponent : public USceneComponent
{
    TSoftObjectPtr<UPhysicsControlProfileAsset> PhysicsControlProfileAsset;           // 0x0230 (size: 0x28)
    float TeleportDistanceThreshold;                                                  // 0x0258 (size: 0x4)
    float TeleportRotationThreshold;                                                  // 0x025C (size: 0x4)
    bool bShowDebugVisualization;                                                     // 0x0260 (size: 0x1)
    float VisualizationSizeScale;                                                     // 0x0264 (size: 0x4)
    bool bShowDebugControlList;                                                       // 0x0268 (size: 0x1)
    FString DebugControlDetailFilter;                                                 // 0x0270 (size: 0x10)
    bool bShowDebugBodyModifierList;                                                  // 0x0280 (size: 0x1)
    FString DebugBodyModifierDetailFilter;                                            // 0x0288 (size: 0x10)
    float VelocityPredictionTime;                                                     // 0x0298 (size: 0x4)
    int32 MaxNumControlsOrModifiersPerName;                                           // 0x029C (size: 0x4)
    bool bWarnAboutInvalidNames;                                                      // 0x02A0 (size: 0x1)

    void UpdateTargetCaches(float DeltaTime);
    void UpdateControls(float DeltaTime);
    bool SetControlUseSkeletalAnimation(const FName Name, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier);
    void SetControlTargetsInSet(const FName Set, const FPhysicsControlTarget ControlTarget, const bool bEnableControl);
    void SetControlTargets(const TArray<FName>& Names, const FPhysicsControlTarget ControlTarget, const bool bEnableControl);
    void SetControlTargetPositionsInSet(const FName SetName, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPositionsFromArray(const TArray<FName>& Names, const TArray<FVector>& Positions, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    void SetControlTargetPositionsAndOrientationsInSet(const FName SetName, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPositionsAndOrientationsFromArray(const TArray<FName>& Names, const TArray<FVector>& Positions, const TArray<FRotator>& Orientations, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    void SetControlTargetPositionsAndOrientations(const TArray<FName>& Names, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    void SetControlTargetPositions(const TArray<FName>& Names, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPositionAndOrientation(const FName Name, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPosition(const FName Name, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPoses(const FName Name, const FVector ParentPosition, const FRotator ParentOrientation, const FVector ChildPosition, const FRotator ChildOrientation, const float VelocityDeltaTime, const bool bEnableControl);
    void SetControlTargetOrientationsInSet(const FName SetName, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetOrientationsFromArray(const TArray<FName>& Names, const TArray<FRotator>& Orientations, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    void SetControlTargetOrientations(const TArray<FName>& Names, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetOrientation(const FName Name, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTarget(const FName Name, const FPhysicsControlTarget ControlTarget, const bool bEnableControl);
    void SetControlsUseSkeletalAnimation(const TArray<FName>& Names, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier);
    void SetControlSparseMultipliersInSet(const FName Set, const FPhysicsControlSparseMultiplier ControlMultiplier, const bool bEnableControl);
    void SetControlSparseMultipliers(const TArray<FName>& Names, const FPhysicsControlSparseMultiplier ControlMultiplier, const bool bEnableControl);
    bool SetControlSparseMultiplier(const FName Name, const FPhysicsControlSparseMultiplier ControlMultiplier, const bool bEnableControl);
    void SetControlSparseDatasInSet(const FName Set, const FPhysicsControlSparseData ControlData);
    void SetControlSparseDatas(const TArray<FName>& Names, const FPhysicsControlSparseData ControlData);
    bool SetControlSparseData(const FName Name, const FPhysicsControlSparseData ControlData);
    void SetControlsInSetUseSkeletalAnimation(const FName Set, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier);
    void SetControlsInSetEnabled(const FName Set, const bool bEnable);
    void SetControlsInSetDisableCollision(const FName Set, const bool bDisableCollision);
    void SetControlsEnabled(const TArray<FName>& Names, const bool bEnable);
    void SetControlsDisableCollision(const TArray<FName>& Names, const bool bDisableCollision);
    bool SetControlPoint(const FName Name, const FVector position);
    void SetControlParentsInSet(const FName Set, class UMeshComponent* ParentMeshComponent, const FName ParentBoneName);
    void SetControlParents(const TArray<FName>& Names, class UMeshComponent* ParentMeshComponent, const FName ParentBoneName);
    bool SetControlParent(const FName Name, class UMeshComponent* ParentMeshComponent, const FName ParentBoneName);
    void SetControlMultipliersInSet(const FName Set, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl);
    void SetControlMultipliers(const TArray<FName>& Names, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl);
    bool SetControlMultiplier(const FName Name, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl);
    bool SetControlLinearData(const FName Name, const float Strength, const float DampingRatio, const float ExtraDamping, const float MaxForce, const bool bEnableControl);
    bool SetControlEnabled(const FName Name, const bool bEnable);
    bool SetControlDisableCollision(const FName Name, const bool bDisableCollision);
    void SetControlDatasInSet(const FName Set, const FPhysicsControlData ControlData);
    void SetControlDatas(const TArray<FName>& Names, const FPhysicsControlData ControlData);
    bool SetControlData(const FName Name, const FPhysicsControlData ControlData);
    bool SetControlAngularData(const FName Name, const float Strength, const float DampingRatio, const float ExtraDamping, const float MaxTorque, const bool bEnableControl);
    bool SetCachedBoneData(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const FTransform& TM, const FVector Velocity, const FVector AngularVelocity);
    bool SetBodyModifierUseSkeletalAnimation(const FName Name, const bool bUseSkeletalAnimation);
    bool SetBodyModifierUpdateKinematicFromSimulation(const FName Name, const bool bUpdateKinematicFromSimulation);
    void SetBodyModifiersUseSkeletalAnimation(const TArray<FName>& Names, const bool bUseSkeletalAnimation);
    void SetBodyModifiersUpdateKinematicFromSimulation(const TArray<FName>& Names, const bool bUpdateKinematicFromSimulation);
    void SetBodyModifiersPhysicsBlendWeight(const TArray<FName>& Names, const float PhysicsBlendWeight);
    void SetBodyModifierSparseDatasInSet(const FName Set, const FPhysicsControlModifierSparseData ModifierData);
    void SetBodyModifierSparseDatas(const TArray<FName>& Names, const FPhysicsControlModifierSparseData ModifierData);
    bool SetBodyModifierSparseData(const FName Name, const FPhysicsControlModifierSparseData ModifierData);
    void SetBodyModifiersMovementType(const TArray<FName>& Names, const EPhysicsMovementType MovementType);
    void SetBodyModifiersInSetUseSkeletalAnimation(const FName Set, const bool bUseSkeletalAnimation);
    void SetBodyModifiersInSetUpdateKinematicFromSimulation(const FName Set, const bool bUpdateKinematicFromSimulation);
    void SetBodyModifiersInSetPhysicsBlendWeight(const FName Set, const float PhysicsBlendWeight);
    void SetBodyModifiersInSetMovementType(const FName Set, const EPhysicsMovementType MovementType);
    void SetBodyModifiersInSetGravityMultiplier(const FName Set, const float GravityMultiplier);
    void SetBodyModifiersInSetCollisionType(const FName Set, const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    void SetBodyModifiersGravityMultiplier(const TArray<FName>& Names, const float GravityMultiplier);
    void SetBodyModifiersCollisionType(const TArray<FName>& Names, const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    bool SetBodyModifierPhysicsBlendWeight(const FName Name, const float PhysicsBlendWeight);
    bool SetBodyModifierMovementType(const FName Name, const EPhysicsMovementType MovementType);
    bool SetBodyModifierKinematicTarget(const FName Name, const FVector KinematicTargetPosition, const FRotator KinematicTargetOrienation, const bool bMakeKinematic);
    bool SetBodyModifierGravityMultiplier(const FName Name, const float GravityMultiplier);
    void SetBodyModifierDatasInSet(const FName Set, const FPhysicsControlModifierData ModifierData);
    void SetBodyModifierDatas(const TArray<FName>& Names, const FPhysicsControlModifierData ModifierData);
    bool SetBodyModifierData(const FName Name, const FPhysicsControlModifierData ModifierData);
    bool SetBodyModifierCollisionType(const FName Name, const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    bool ResetControlPoint(const FName Name);
    bool ResetBodyModifierToCachedBoneTransform(const FName Name, const EResetToCachedTargetBehavior Behavior);
    void ResetBodyModifiersToCachedBoneTransforms(const TArray<FName>& Names, const EResetToCachedTargetBehavior Behavior);
    void ResetBodyModifiersInSetToCachedBoneTransforms(const FName SetName, const EResetToCachedTargetBehavior Behavior);
    void InvokeControlProfile(FName ProfileName);
    TArray<FName> GetSetsContainingControl(const FName Control);
    TArray<FName> GetSetsContainingBodyModifier(const FName Control);
    TMap<class FName, class FPhysicsControlLimbBones> GetLimbBonesFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FPhysicsControlLimbSetupData>& LimbSetupData);
    bool GetControlTarget(const FName Name, FPhysicsControlTarget& ControlTarget);
    TArray<FName> GetControlNamesInSet(const FName Set);
    bool GetControlMultiplier(const FName Name, FPhysicsControlMultiplier& ControlMultiplier);
    bool GetControlExists(const FName Name);
    bool GetControlEnabled(const FName Name);
    bool GetControlData(const FName Name, FPhysicsControlData& ControlData);
    FVector GetCachedBoneVelocity(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    TArray<FVector> GetCachedBoneVelocities(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    TArray<FTransform> GetCachedBoneTransforms(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    FTransform GetCachedBoneTransform(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    TArray<FVector> GetCachedBonePositions(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    FVector GetCachedBonePosition(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    TArray<FRotator> GetCachedBoneOrientations(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    FRotator GetCachedBoneOrientation(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    FVector GetCachedBoneAngularVelocity(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    TArray<FVector> GetCachedBoneAngularVelocities(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    TArray<FName> GetBodyModifierNamesInSet(const FName Set);
    bool GetBodyModifierExists(const FName Name);
    TArray<FName> GetAllControlNames();
    TArray<FName> GetAllBodyModifierNames();
    void DestroyControlsInSet(const FName Set);
    void DestroyControls(const TArray<FName>& Names);
    bool DestroyControl(const FName Name);
    void DestroyBodyModifiersInSet(const FName Set);
    void DestroyBodyModifiers(const TArray<FName>& Names);
    bool DestroyBodyModifier(const FName Name);
    bool CreateNamedControl(FName Name, class UMeshComponent* ParentMeshComponent, const FName ParentBoneName, class UMeshComponent* ChildMeshComponent, const FName ChildBoneName, const FPhysicsControlData ControlData, const FPhysicsControlTarget ControlTarget, const FName Set);
    bool CreateNamedBodyModifier(const FName Name, class UMeshComponent* MeshComponent, const FName BoneName, const FName Set, const FPhysicsControlModifierData BodyModifierData);
    TArray<FName> CreateControlsFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FName Set);
    TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfileBelow(class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const FName ConstraintProfile, const FName Set, const bool bEnabled);
    TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfile(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, const FName ConstraintProfile, const FName Set, const bool bEnabled);
    TArray<FName> CreateControlsFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FName Set);
    TMap<class FName, class FPhysicsControlNames> CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, const TMap<class FName, class FPhysicsControlLimbBones>& LimbBones, const FName ConstraintProfile, const bool bEnabled);
    TMap<class FName, class FPhysicsControlNames> CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, const TMap<class FName, class FPhysicsControlLimbBones>& LimbBones, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, class UMeshComponent* WorldComponent, FName WorldBoneName, FString NamePrefix);
    void CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap<class FName, class FPhysicsControlNames>& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap<class FName, class FPhysicsControlNames>& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap<class FName, class FPhysicsControlNames>& LimbBodyModifiers, class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FPhysicsControlLimbSetupData>& LimbSetupData, const FPhysicsControlData WorldSpaceControlData, const FPhysicsControlData ParentSpaceControlData, const FPhysicsControlModifierData BodyModifierData, class UMeshComponent* WorldComponent, FName WorldBoneName);
    void CreateControlsAndBodyModifiersFromControlProfileAsset(class USkeletalMeshComponent* SkeletalMeshComponent, class UMeshComponent* WorldComponent, FName WorldBoneName);
    FName CreateControl(class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, const FName ChildBoneName, const FPhysicsControlData ControlData, const FPhysicsControlTarget ControlTarget, FName Set, FString NamePrefix);
    TArray<FName> CreateBodyModifiersFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const FName Set, const FPhysicsControlModifierData BodyModifierData);
    TMap<class FName, class FPhysicsControlNames> CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, const TMap<class FName, class FPhysicsControlLimbBones>& LimbBones, const FPhysicsControlModifierData BodyModifierData);
    FName CreateBodyModifier(class UMeshComponent* MeshComponent, const FName BoneName, const FName Set, const FPhysicsControlModifierData BodyModifierData);
    void AddControlToSet(FPhysicsControlNames& NewSet, const FName Control, const FName Set);
    void AddControlsToSet(FPhysicsControlNames& NewSet, const TArray<FName>& Controls, const FName Set);
    void AddBodyModifierToSet(FPhysicsControlNames& NewSet, const FName BodyModifier, const FName Set);
    void AddBodyModifiersToSet(FPhysicsControlNames& NewSet, const TArray<FName>& BodyModifiers, const FName Set);
}; // Size: 0x490

class UPhysicsControlInitializerComponent : public USceneComponent
{
    FInitialCharacterControls InitialCharacterControls;                               // 0x0230 (size: 0xD0)
    TMap<class FName, class FInitialPhysicsControl> InitialControls;                  // 0x0300 (size: 0x50)
    TMap<class FName, class FInitialBodyModifier> InitialBodyModifiers;               // 0x0350 (size: 0x50)
    bool bCreateControlsAtBeginPlay;                                                  // 0x03A0 (size: 0x1)

    void CreateControls(class UPhysicsControlComponent* PhysicsControlComponent);
}; // Size: 0x3B0

class UPhysicsControlProfileAsset : public UObject
{
    FPhysicsControlCharacterSetupData CharacterSetupData;                             // 0x0030 (size: 0xC0)
    FPhysicsControlAndBodyModifierCreationDatas AdditionalControlsAndModifiers;       // 0x00F0 (size: 0xA0)
    FPhysicsControlSetUpdates AdditionalSets;                                         // 0x0190 (size: 0x20)
    TArray<FPhysicsControlControlAndModifierUpdates> InitialControlAndModifierUpdates; // 0x01B0 (size: 0x10)
    TMap<class FName, class FPhysicsControlControlAndModifierUpdates> Profiles;       // 0x01C0 (size: 0x50)

}; // Size: 0x210

#endif
