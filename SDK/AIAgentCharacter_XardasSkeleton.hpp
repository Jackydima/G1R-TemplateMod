#ifndef UE4SS_SDK_AIAgentCharacter_XardasSkeleton_HPP
#define UE4SS_SDK_AIAgentCharacter_XardasSkeleton_HPP

class AAIAgentCharacter_XardasSkeleton_C : public ASkeleton_XardasSleeper
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A00 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* Body;                                  // 0x0A08 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* foot_r;                                // 0x0A10 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* foot_l;                                // 0x0A18 (size: 0x8)
    class UGothicCharacterSubCapsuleComponent* Head;                                  // 0x0A20 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_LowerBody;                     // 0x0A28 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_UpperBody;                     // 0x0A30 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_FootL;                           // 0x0A38 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_FootR;                           // 0x0A40 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_HandL;                           // 0x0A48 (size: 0x8)
    class UHitBoxCollisionComponent* HitBoxCollision_HandR;                           // 0x0A50 (size: 0x8)
    class UHurtBoxCollisionComponent* HurtBoxCollision_Head;                          // 0x0A58 (size: 0x8)
    bool IsChained;                                                                   // 0x0A60 (size: 0x1)

    void SetChained(bool Value);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_AIAgentCharacter_XardasSkeleton(int32 EntryPoint);
}; // Size: 0xA61

#endif
