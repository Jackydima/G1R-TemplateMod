#ifndef UE4SS_SDK_A_Man_RiderIk_HPP
#define UE4SS_SDK_A_Man_RiderIk_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_34;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_35;                                                          // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_36;                                         // 0x0018 (size: 0x20)
    FName __NameProperty_37;                                                          // 0x0038 (size: 0x8)
    FName __NameProperty_38;                                                          // 0x0040 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0048 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root_1;                 // 0x00E0 (size: 0x30)
    FAnimNodeExposedValueHandler AnimGraphNode_LinkedInputPose;                       // 0x0110 (size: 0x8)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x0118 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0148 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_3;           // 0x0178 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LegIK_1;                // 0x01A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_2;           // 0x01D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ControlRig;             // 0x0208 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;           // 0x0238 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x0268 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LegIK;                  // 0x0298 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x02C8 (size: 0x30)

}; // Size: 0x2F8

class UA_Man_RiderIk_C : public URiderIKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0E90 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0E98 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0EA0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0EA8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0EC8 (size: 0xB8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0F80 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0FA0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0FC0 (size: 0x128)
    FAnimNode_LegIK AnimGraphNode_LegIK_1;                                            // 0x10E8 (size: 0x100)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x11E8 (size: 0x128)
    FAnimNode_ControlRig AnimGraphNode_ControlRig;                                    // 0x1310 (size: 0x4D0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x17E0 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x1908 (size: 0x128)
    FAnimNode_LegIK AnimGraphNode_LegIK;                                              // 0x1A30 (size: 0x100)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1B30 (size: 0x20)
    bool __CustomProperty_ThresholdOn_848FD92247BADF581F14ACB13C389664;               // 0x1B50 (size: 0x1)
    bool __CustomProperty_IsInDialog_848FD92247BADF581F14ACB13C389664;                // 0x1B51 (size: 0x1)
    bool __CustomProperty_HasWeapon_848FD92247BADF581F14ACB13C389664;                 // 0x1B52 (size: 0x1)
    double __CustomProperty_Enable_CR_848FD92247BADF581F14ACB13C389664;               // 0x1B58 (size: 0x8)
    FRotator __CustomProperty_RotationVector_848FD92247BADF581F14ACB13C389664;        // 0x1B60 (size: 0x18)
    FVector __CustomProperty_LookAtLocation_848FD92247BADF581F14ACB13C389664;         // 0x1B78 (size: 0x18)
    bool HasWeapon;                                                                   // 0x1B90 (size: 0x1)
    bool isInDialog;                                                                  // 0x1B91 (size: 0x1)
    bool isTargeting;                                                                 // 0x1B92 (size: 0x1)
    FVector HandLeftPosition;                                                         // 0x1B98 (size: 0x18)
    FVector HandRightPosition;                                                        // 0x1BB0 (size: 0x18)
    double FootIKL;                                                                   // 0x1BC8 (size: 0x8)
    double FootIKR;                                                                   // 0x1BD0 (size: 0x8)
    double HandsIK;                                                                   // 0x1BD8 (size: 0x8)

    void IK(FPoseLink InPose, bool isTargeting, bool ShouldMove, FGameplayTag WeaponTag, FName weaponSkill, FName ItemState, double AngleBwVectors, double CharacterSpeed, double SpineCorrAlpha, EMovementState MovementState, EStance DesiredStance, double AlphaArmR, double AlphaArmL, double ArmR_Corr, double ArmL_Corr, bool isInDialog, bool IsTurning, int32 LOD, bool HasWeapon, bool IsInSecondPhase, double SlopeAngle, bool IsOnSlope, bool IsStopping, bool isPlayer, bool IsAttacking, bool IsDrawingWeapon, FPoseLink& IK);
    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Man_RiderIk_AnimGraphNode_ControlRig_848FD92247BADF581F14ACB13C389664();
    void ExecuteUbergraph_A_Man_RiderIk(int32 EntryPoint);
}; // Size: 0x1BE0

#endif
