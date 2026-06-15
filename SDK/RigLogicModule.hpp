#ifndef UE4SS_SDK_RigLogicModule_HPP
#define UE4SS_SDK_RigLogicModule_HPP

#include "RigLogicModule_enums.hpp"

struct FAnimNode_RigLogic : public FAnimNode_Base
{
    FPoseLink AnimSequence;                                                           // 0x0010 (size: 0x10)
    int32 LODThreshold;                                                               // 0x0020 (size: 0x4)

}; // Size: 0x60

struct FCoordinateSystem
{
    EDirection XAxis;                                                                 // 0x0000 (size: 0x1)
    EDirection YAxis;                                                                 // 0x0001 (size: 0x1)
    EDirection ZAxis;                                                                 // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FMeshBlendShapeChannelMapping
{
    int32 MeshIndex;                                                                  // 0x0000 (size: 0x4)
    int32 BlendShapeChannelIndex;                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRigUnit_RigLogic : public FRigUnitMutable
{
    FRigUnit_RigLogic_Data Data;                                                      // 0x01D0 (size: 0x98)
    bool bIsInitialized;                                                              // 0x0268 (size: 0x1)

}; // Size: 0x270

struct FRigUnit_RigLogic_Data
{
    TWeakObjectPtr<class USkeletalMeshComponent> SkelMeshComponent;                   // 0x0000 (size: 0x8)
    TArray<int32> InputCurveIndices;                                                  // 0x0020 (size: 0x10)
    TArray<int32> NeuralNetMaskCurveIndices;                                          // 0x0030 (size: 0x10)
    TArray<int32> HierarchyBoneIndices;                                               // 0x0040 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> MorphTargetCurveIndices;                       // 0x0050 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> BlendShapeIndices;                             // 0x0060 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> CurveElementIndicesForAnimMaps;                // 0x0070 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> RigLogicIndicesForAnimMaps;                    // 0x0080 (size: 0x10)
    uint32 CurrentLOD;                                                                // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FRigUnit_RigLogic_IntArray
{
    TArray<int32> Values;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTextureCoordinate
{
    float U;                                                                          // 0x0000 (size: 0x4)
    float V;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVertexLayout
{
    int32 position;                                                                   // 0x0000 (size: 0x4)
    int32 TextureCoordinate;                                                          // 0x0004 (size: 0x4)
    int32 Normal;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

class UDEPRECATED_DNAIndexMapping : public UAssetUserData
{
}; // Size: 0x28

class UDNAAsset : public UAssetUserData
{
    FString DnaFileName;                                                              // 0x0028 (size: 0x10)
    bool bKeepDNAAfterInitialization;                                                 // 0x0038 (size: 0x1)
    TMap<class FString, class FString> MetaData;                                      // 0x0040 (size: 0x50)

}; // Size: 0x128

class USkelMeshDNAUtils : public UObject
{
}; // Size: 0x28

#endif
