#ifndef UE4SS_SDK_CR_Skeleton_IK_HPP
#define UE4SS_SDK_CR_Skeleton_IK_HPP

class UCR_Skeleton_IK_C : public UControlRig
{
    double FloorSearchDistance;                                                       // 0x0AA8 (size: 0x8)
    double AdditionalFeetOffset;                                                      // 0x0AB0 (size: 0x8)
    double Foot_L_TargetOffsetZ;                                                      // 0x0AB8 (size: 0x8)
    bool Foot_L_FloorFound;                                                           // 0x0AC0 (size: 0x1)
    double Foot_R_TargetOffsetZ;                                                      // 0x0AC8 (size: 0x8)
    bool Foot_R_FloorFound;                                                           // 0x0AD0 (size: 0x1)
    double Pelvis_TargetOffsetZ;                                                      // 0x0AD8 (size: 0x8)
    double Foot_L_CurrentOffset;                                                      // 0x0AE0 (size: 0x8)
    double Foot_R_CurrentOffset;                                                      // 0x0AE8 (size: 0x8)
    FVector Foot_L_TargetOffsetNormal;                                                // 0x0AF0 (size: 0x18)
    FVector Foot_R_TargetOffsetNormal;                                                // 0x0B08 (size: 0x18)
    FRigElementKey Item;                                                              // 0x0B20 (size: 0xC)
    bool FootL_FloorHit;                                                              // 0x0B2C (size: 0x1)
    bool FootR_FloorHit;                                                              // 0x0B2D (size: 0x1)
    FRotator FootL_NormalAngle;                                                       // 0x0B30 (size: 0x18)
    FRotator FootR_NormalAngle;                                                       // 0x0B48 (size: 0x18)
    double Ch_Speed;                                                                  // 0x0B60 (size: 0x8)
    FVector L_LegHitNormal;                                                           // 0x0B68 (size: 0x18)
    FVector R_LegHitNormal;                                                           // 0x0B80 (size: 0x18)
    FRotator R_FootRotation;                                                          // 0x0B98 (size: 0x18)
    FRotator R_AimMath_Result;                                                        // 0x0BB0 (size: 0x18)
    FRotator R_LegFinalRot;                                                           // 0x0BC8 (size: 0x18)
    FRotator L_FootRotation;                                                          // 0x0BE0 (size: 0x18)
    FRotator L_AimMath_Result;                                                        // 0x0BF8 (size: 0x18)
    FRotator L_LegFinalRot;                                                           // 0x0C10 (size: 0x18)
    FRotator BallRotation;                                                            // 0x0C28 (size: 0x18)
    double RootOffsetZ;                                                               // 0x0C40 (size: 0x8)
    FTransform InterpRootTransformGlobalSpace;                                        // 0x0C50 (size: 0x60)
    bool isGrounded;                                                                  // 0x0CB0 (size: 0x1)
    FGameplayTag Weapon Tag;                                                          // 0x0CB4 (size: 0x8)
    bool isTargeting;                                                                 // 0x0CBC (size: 0x1)
    bool IsMoving;                                                                    // 0x0CBD (size: 0x1)
    double CurrentAddPelvisOffset_Combat;                                             // 0x0CC0 (size: 0x8)
    FRotator FinalBallRot;                                                            // 0x0CC8 (size: 0x18)
    double FloorSearchDistanceDown;                                                   // 0x0CE0 (size: 0x8)

}; // Size: 0xCE8

#endif
