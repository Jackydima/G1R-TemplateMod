#ifndef UE4SS_SDK_SkeletalMerging_HPP
#define UE4SS_SDK_SkeletalMerging_HPP

struct FSkeletalMeshMergeParams
{
    TArray<FSkelMeshMergeSectionMapping> MeshSectionMappings;                         // 0x0000 (size: 0x10)
    TArray<FSkelMeshMergeMeshUVTransforms> UVTransformsPerMesh;                       // 0x0010 (size: 0x10)
    TArray<class USkeletalMesh*> MeshesToMerge;                                       // 0x0020 (size: 0x10)
    int32 StripTopLODS;                                                               // 0x0030 (size: 0x4)
    uint8 bNeedsCpuAccess;                                                            // 0x0034 (size: 0x1)
    uint8 bSkeletonBefore;                                                            // 0x0034 (size: 0x1)
    class USkeleton* Skeleton;                                                        // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FSkeletonMergeParams
{
    TArray<class USkeleton*> SkeletonsToMerge;                                        // 0x0000 (size: 0x10)
    bool bMergeSockets;                                                               // 0x0010 (size: 0x1)
    bool bMergeVirtualBones;                                                          // 0x0011 (size: 0x1)
    bool bMergeCurveNames;                                                            // 0x0012 (size: 0x1)
    bool bMergeBlendProfiles;                                                         // 0x0013 (size: 0x1)
    bool bMergeAnimSlotGroups;                                                        // 0x0014 (size: 0x1)
    bool bCheckSkeletonsCompatibility;                                                // 0x0015 (size: 0x1)

}; // Size: 0x18

class USkeletalMergingLibrary : public UBlueprintFunctionLibrary
{

    class USkeleton* MergeSkeletons(const FSkeletonMergeParams& Params);
    class USkeletalMesh* MergeMeshes(const FSkeletalMeshMergeParams& Params);
}; // Size: 0x28

#endif
