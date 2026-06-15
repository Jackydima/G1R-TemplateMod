#ifndef UE4SS_SDK_BipedCombatLayerInterface_HPP
#define UE4SS_SDK_BipedCombatLayerInterface_HPP

class IBipedCombatLayerInterface_C : public IAnimLayerInterface
{

    void Landing Combat(FPoseLink Default Land, FPoseLink& Landing Combat);
    void Flying Cycle Combat(FPoseLink InPose_0, FPoseLink& Flying Cycle Combat);
    void STL BaseBody Combat(FPoseLink InPose, FPoseLink STL Loco Pose, FPoseLink STL STR Pose, FPoseLink& STL BaseBody Combat);
    void PostLayering Combat(FPoseLink PostLayering In, FPoseLink& PostLayering Combat);
    void UpperBody Combat(FPoseLink UpperBody, FPoseLink& UpperBody Combat);
    void BaseBody Combat(FPoseLink BaseBody, FPoseLink N Pose, FPoseLink STR Pose, FPoseLink& BaseBody Combat);
}; // Size: 0x28

#endif
