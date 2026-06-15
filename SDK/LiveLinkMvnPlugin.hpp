#ifndef UE4SS_SDK_LiveLinkMvnPlugin_HPP
#define UE4SS_SDK_LiveLinkMvnPlugin_HPP

#include "LiveLinkMvnPlugin_enums.hpp"

struct FRemappingRowHandle
{
    EXsensMapping XsensRemapId;                                                       // 0x0000 (size: 0x1)
    FName RemapId;                                                                    // 0x0004 (size: 0x8)

}; // Size: 0xC

class ULiveLinkGameInstance : public UGameInstance
{
    uint16 PortNumber;                                                                // 0x01C0 (size: 0x2)

}; // Size: 0x1D8

class ULiveLinkMvnRetargetAsset : public ULiveLinkRetargetAsset
{
    EXsensRetargetNamingConvention m_remapping_convention;                            // 0x0038 (size: 0x1)
    TMap<class EXsensMapping, class FRemappingRowHandle> m_remapping_rows;            // 0x0040 (size: 0x50)
    class USkeletalMesh* m_skeletal_mesh;                                             // 0x0090 (size: 0x8)
    class USkeleton* m_skeleton;                                                      // 0x0098 (size: 0x8)
    class UAnimSequence* TPoseAnimation;                                              // 0x0168 (size: 0x8)
    bool IsForwardY;                                                                  // 0x0170 (size: 0x1)

    FName GetRemappedBoneNameByConvention(EXsensMapping bone, EXsensRetargetNamingConvention Convention);
    FName GetCustomRemappedBoneName(EXsensMapping bone);
}; // Size: 0x180

class ULiveLinkMvnSourceSettings : public ULiveLinkSourceSettings
{
    int32 PortNumber;                                                                 // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class ULiveLinkMvnTransformController : public ULiveLinkControllerBase
{
    int32 SegmentIndex;                                                               // 0x0068 (size: 0x4)

}; // Size: 0x70

class UMvnRemoteControlManager : public UObject
{

    void StopRecording(float _fTimeOffsetInSeconds);
    void StartRecording(float _fTimeOffsetInSeconds);
}; // Size: 0x28

#endif
