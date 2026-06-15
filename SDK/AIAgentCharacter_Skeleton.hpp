#ifndef UE4SS_SDK_AIAgentCharacter_Skeleton_HPP
#define UE4SS_SDK_AIAgentCharacter_Skeleton_HPP

class AAIAgentCharacter_Skeleton_C : public ASkeletonHuman
{
    class UBP_FluxBuoyancyComponent_C* BP_FluxBuoyancyComponent;                      // 0x09F0 (size: 0x8)
    class UBP_GothicFluxDataComponent_C* BP_GothicFluxDataComponent;                  // 0x09F8 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* Body;                                  // 0x0A00 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* foot_r;                                // 0x0A08 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* foot_l;                                // 0x0A10 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* Head;                                  // 0x0A18 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_LowerBody;                     // 0x0A20 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_UpperBody;                     // 0x0A28 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_FootL;                           // 0x0A30 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_FootR;                           // 0x0A38 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_HandL;                           // 0x0A40 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_HandR;                           // 0x0A48 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_Head;                          // 0x0A50 (size: 0x8)

}; // Size: 0xA58

#endif
