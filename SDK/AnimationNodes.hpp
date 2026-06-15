#ifndef UE4SS_SDK_AnimationNodes_HPP
#define UE4SS_SDK_AnimationNodes_HPP

struct FAnimNode_Mutilate : public FAnimNode_SkeletalControlBase
{
    FName m_BoneToCut;                                                                // 0x00C8 (size: 0x8)
    FName m_RootBone;                                                                 // 0x00D0 (size: 0x8)
    bool m_InvertCut;                                                                 // 0x00D8 (size: 0x1)

}; // Size: 0xE0

#endif
