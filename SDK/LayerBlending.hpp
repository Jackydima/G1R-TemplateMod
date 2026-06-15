#ifndef UE4SS_SDK_LayerBlending_HPP
#define UE4SS_SDK_LayerBlending_HPP

class ILayerBlending_C : public IAnimLayerInterface
{

    void LayerBlending(FPoseLink Base Layer, FPoseLink Overlay Layer, FPoseLink Additive Base Pose, FPoseLink& LayerBlending);
}; // Size: 0x28

#endif
