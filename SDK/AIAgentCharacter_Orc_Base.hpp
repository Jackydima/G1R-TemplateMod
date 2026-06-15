#ifndef UE4SS_SDK_AIAgentCharacter_Orc_Base_HPP
#define UE4SS_SDK_AIAgentCharacter_Orc_Base_HPP

class AAIAgentCharacter_Orc_Base_C : public AOrc
{
    class UHitCapsuleCollisionComponent* HitBoxCollision_HandR;                       // 0x09F0 (size: 0x8)
    class UHitCapsuleCollisionComponent* HitBoxCollision_HandL;                       // 0x09F8 (size: 0x8)
    class UInteractiveObjectAnchorComponent* InteractiveHUDAnchor;                    // 0x0A00 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_UpperLegL;                     // 0x0A08 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_LowerLegL;                     // 0x0A10 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_LowerLegR;                     // 0x0A18 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_UpperLegR;                     // 0x0A20 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_Special_Fists;                   // 0x0A28 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_UpperarmL;                       // 0x0A30 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_UpperarmR;                       // 0x0A38 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_UpperBody;                     // 0x0A40 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_FootL;                           // 0x0A48 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_FootR;                           // 0x0A50 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_Head;                          // 0x0A58 (size: 0x8)

}; // Size: 0xA60

#endif
