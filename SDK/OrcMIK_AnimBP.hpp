#ifndef UE4SS_SDK_OrcMIK_AnimBP_HPP
#define UE4SS_SDK_OrcMIK_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_47;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_48;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_49;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_50;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedInputPose;        // 0x00D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ControlRig;             // 0x0108 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root_1;                 // 0x0138 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_2;           // 0x0168 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;           // 0x0198 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;             // 0x01C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_1; // 0x01F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_1;       // 0x0228 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_1; // 0x0258 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AGN_PA_LookAt;                        // 0x0288 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;         // 0x02B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;        // 0x02E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;          // 0x0318 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x0348 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0378 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x03A8 (size: 0x30)

}; // Size: 0x3D8

class UOrcMIK_AnimBP_C : public UBipedIKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D30 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0D38 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0D40 (size: 0x8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0D48 (size: 0xB8)
    FAnimNode_ControlRig AnimGraphNode_ControlRig;                                    // 0x0E00 (size: 0x4D0)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x12D0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x12F0 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x1418 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x1540 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x1668 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x1688 (size: 0x80)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x1708 (size: 0x20)
    FAN_PA_LookAt AGN_PA_LookAt;                                                      // 0x1728 (size: 0x198)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x18C0 (size: 0x80)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x1940 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1968 (size: 0x28)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1990 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x19B0 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x19D0 (size: 0x20)
    bool K2Node_PropertyAccess;                                                       // 0x19F0 (size: 0x1)
    bool __CustomProperty_HasWeapon_F76094D34E3E30BD55F1C4ACEB8D2917;                 // 0x19F1 (size: 0x1)
    double __CustomProperty_Enable_CR_F76094D34E3E30BD55F1C4ACEB8D2917;               // 0x19F8 (size: 0x8)
    bool __CustomProperty_IsTargeting_F76094D34E3E30BD55F1C4ACEB8D2917;               // 0x1A00 (size: 0x1)
    FGameplayTag __CustomProperty_WeaponTag_F76094D34E3E30BD55F1C4ACEB8D2917;         // 0x1A04 (size: 0x8)
    FRotator __CustomProperty_RotationVector_F76094D34E3E30BD55F1C4ACEB8D2917;        // 0x1A10 (size: 0x18)
    FVector __CustomProperty_LookAtLocation_F76094D34E3E30BD55F1C4ACEB8D2917;         // 0x1A28 (size: 0x18)
    bool __CustomProperty_IsDrawingWeapon_A20050EF4E30E65A0267B6AB24F048E4;           // 0x1A40 (size: 0x1)
    bool __CustomProperty_IsAttacking_A20050EF4E30E65A0267B6AB24F048E4;               // 0x1A41 (size: 0x1)
    bool __CustomProperty_IsTurning_A20050EF4E30E65A0267B6AB24F048E4;                 // 0x1A42 (size: 0x1)
    bool __CustomProperty_IsGameplayReady_A20050EF4E30E65A0267B6AB24F048E4;           // 0x1A43 (size: 0x1)
    bool __CustomProperty_IsStopping_A20050EF4E30E65A0267B6AB24F048E4;                // 0x1A44 (size: 0x1)
    bool __CustomProperty_IsInDialog_A20050EF4E30E65A0267B6AB24F048E4;                // 0x1A45 (size: 0x1)
    bool __CustomProperty_isMoving_A20050EF4E30E65A0267B6AB24F048E4;                  // 0x1A46 (size: 0x1)
    bool __CustomProperty_isTargeting_A20050EF4E30E65A0267B6AB24F048E4;               // 0x1A47 (size: 0x1)
    bool __CustomProperty_isGrounded_A20050EF4E30E65A0267B6AB24F048E4;                // 0x1A48 (size: 0x1)
    double __CustomProperty_Ch_Speed_A20050EF4E30E65A0267B6AB24F048E4;                // 0x1A50 (size: 0x8)
    bool IsDrawingWeapon;                                                             // 0x1A58 (size: 0x1)
    bool IsAttacking;                                                                 // 0x1A59 (size: 0x1)
    bool IsStopping;                                                                  // 0x1A5A (size: 0x1)
    bool HasWeapon;                                                                   // 0x1A5B (size: 0x1)
    bool IsTurning;                                                                   // 0x1A5C (size: 0x1)
    bool isInDialog;                                                                  // 0x1A5D (size: 0x1)
    double ArmL_Corr;                                                                 // 0x1A60 (size: 0x8)
    double ArmR_Corr;                                                                 // 0x1A68 (size: 0x8)
    double AlphaArmL;                                                                 // 0x1A70 (size: 0x8)
    double AlphaArmR;                                                                 // 0x1A78 (size: 0x8)
    EMovementState MovementState;                                                     // 0x1A80 (size: 0x1)
    double SpineCorrAlpha;                                                            // 0x1A88 (size: 0x8)
    double CharacterSpeed;                                                            // 0x1A90 (size: 0x8)
    double AngleBwVectors;                                                            // 0x1A98 (size: 0x8)
    FGameplayTag WeaponTag;                                                           // 0x1AA0 (size: 0x8)
    bool ShouldMove;                                                                  // 0x1AA8 (size: 0x1)
    bool isTargeting;                                                                 // 0x1AA9 (size: 0x1)
    double Enable Iks;                                                                // 0x1AB0 (size: 0x8)

    void IK(FPoseLink InPose, bool isTargeting, bool ShouldMove, FGameplayTag WeaponTag, FName weaponSkill, FName ItemState, double AngleBwVectors, double CharacterSpeed, double SpineCorrAlpha, EMovementState MovementState, EStance DesiredStance, double AlphaArmR, double AlphaArmL, double ArmR_Corr, double ArmL_Corr, bool isInDialog, bool IsTurning, int32 LOD, bool HasWeapon, bool IsInSecondPhase, double SlopeAngle, bool IsOnSlope, bool IsStopping, bool isPlayer, bool IsAttacking, bool IsDrawingWeapon, FPoseLink& IK);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcMIK_AnimBP_AnimGraphNode_ControlRig_A20050EF4E30E65A0267B6AB24F048E4();
    void ExecuteUbergraph_OrcMIK_AnimBP(int32 EntryPoint);
}; // Size: 0x1AB8

#endif
