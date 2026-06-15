#ifndef UE4SS_SDK_SkeletonIK_AnimBP_HPP
#define UE4SS_SDK_SkeletonIK_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_29;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_30;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_31;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_32;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedInputPose;        // 0x00D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0108 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ControlRig;             // 0x0138 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root_1;                 // 0x0168 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AGN_PA_LookAt;                        // 0x0198 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x01C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_2;           // 0x01F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;           // 0x0228 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x0258 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0288 (size: 0x30)

}; // Size: 0x2B8

class USkeletonIK_AnimBP_C : public UBipedIKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D30 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0D38 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0D40 (size: 0x8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0D48 (size: 0xB8)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0E00 (size: 0x20)
    FAnimNode_ControlRig AnimGraphNode_ControlRig;                                    // 0x0E20 (size: 0x4D0)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x12F0 (size: 0x20)
    FAN_PA_LookAt AGN_PA_LookAt;                                                      // 0x1310 (size: 0x198)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x14A8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x14C8 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x15F0 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x1718 (size: 0x128)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1840 (size: 0x20)
    bool __CustomProperty_HasWeapon_AC5EA5A44F43CE14B83CB3A7A15AFDA2;                 // 0x1860 (size: 0x1)
    double __CustomProperty_Enable_CR_AC5EA5A44F43CE14B83CB3A7A15AFDA2;               // 0x1868 (size: 0x8)
    bool __CustomProperty_IsTargeting_AC5EA5A44F43CE14B83CB3A7A15AFDA2;               // 0x1870 (size: 0x1)
    FRotator __CustomProperty_RotationVector_AC5EA5A44F43CE14B83CB3A7A15AFDA2;        // 0x1878 (size: 0x18)
    FVector __CustomProperty_LookAtLocation_AC5EA5A44F43CE14B83CB3A7A15AFDA2;         // 0x1890 (size: 0x18)
    bool __CustomProperty_isMoving_C6456B67487B6F780E683B840786F3C4;                  // 0x18A8 (size: 0x1)
    bool __CustomProperty_isTargeting_C6456B67487B6F780E683B840786F3C4;               // 0x18A9 (size: 0x1)
    bool __CustomProperty_isGrounded_C6456B67487B6F780E683B840786F3C4;                // 0x18AA (size: 0x1)
    double __CustomProperty_Ch_Speed_C6456B67487B6F780E683B840786F3C4;                // 0x18B0 (size: 0x8)
    bool HasWeapon;                                                                   // 0x18B8 (size: 0x1)
    double ArmL_Corr;                                                                 // 0x18C0 (size: 0x8)
    double ArmR_Corr;                                                                 // 0x18C8 (size: 0x8)
    double AlphaArmL;                                                                 // 0x18D0 (size: 0x8)
    double AlphaArmR;                                                                 // 0x18D8 (size: 0x8)
    EMovementState MovementState;                                                     // 0x18E0 (size: 0x1)
    double SpineCorrAlpha;                                                            // 0x18E8 (size: 0x8)
    double CharacterSpeed;                                                            // 0x18F0 (size: 0x8)
    double AngleBwVectors;                                                            // 0x18F8 (size: 0x8)
    bool ShouldMove;                                                                  // 0x1900 (size: 0x1)
    bool isTargeting;                                                                 // 0x1901 (size: 0x1)
    double Enable Iks;                                                                // 0x1908 (size: 0x8)
    FLookAtConfig Look At Config;                                                     // 0x1910 (size: 0x30)

    void IK(FPoseLink InPose, bool isTargeting, bool ShouldMove, FGameplayTag WeaponTag, FName weaponSkill, FName ItemState, double AngleBwVectors, double CharacterSpeed, double SpineCorrAlpha, EMovementState MovementState, EStance DesiredStance, double AlphaArmR, double AlphaArmL, double ArmR_Corr, double ArmL_Corr, bool isInDialog, bool IsTurning, int32 LOD, bool HasWeapon, bool IsInSecondPhase, double SlopeAngle, bool IsOnSlope, bool IsStopping, bool isPlayer, bool IsAttacking, bool IsDrawingWeapon, FPoseLink& IK);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SkeletonIK_AnimBP_AnimGraphNode_ControlRig_C6456B67487B6F780E683B840786F3C4();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_SkeletonIK_AnimBP(int32 EntryPoint);
}; // Size: 0x1940

#endif
