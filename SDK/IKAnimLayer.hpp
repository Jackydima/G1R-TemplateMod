#ifndef UE4SS_SDK_IKAnimLayer_HPP
#define UE4SS_SDK_IKAnimLayer_HPP

class IIKAnimLayer_C : public IAnimLayerInterface
{

    void IK(FPoseLink InPose, bool isTargeting, bool ShouldMove, FGameplayTag WeaponTag, FName weaponSkill, FName ItemState, double AngleBwVectors, double CharacterSpeed, double SpineCorrAlpha, EMovementState MovementState, EStance DesiredStance, double AlphaArmR, double AlphaArmL, double ArmR_Corr, double ArmL_Corr, bool isInDialog, bool IsTurning, int32 LOD, bool HasWeapon, bool IsInSecondPhase, double SlopeAngle, bool IsOnSlope, bool IsStopping, bool isPlayer, bool IsAttacking, bool IsDrawingWeapon, FPoseLink& IK);
}; // Size: 0x28

#endif
