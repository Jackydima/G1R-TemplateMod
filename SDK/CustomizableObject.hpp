#ifndef UE4SS_SDK_CustomizableObject_HPP
#define UE4SS_SDK_CustomizableObject_HPP

#include "CustomizableObject_enums.hpp"

struct FAnimBpGeneratedPhysicsAssets
{
    TArray<FAnimInstanceOverridePhysicsAsset> AnimInstancePropertyIndexAndPhysicsAssets; // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAnimBpOverridePhysicsAssetsInfo
{
    TSoftClassPtr<UAnimInstance> AnimInstanceClass;                                   // 0x0000 (size: 0x28)
    TSoftObjectPtr<UPhysicsAsset> SourceAsset;                                        // 0x0028 (size: 0x28)
    int32 PropertyIndex;                                                              // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FAnimInstanceOverridePhysicsAsset
{
    int32 PropertyIndex;                                                              // 0x0000 (size: 0x4)
    class UPhysicsAsset* PhysicsAsset;                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FBakedResourceData
{
    EPackageSaveResolutionType SaveType;                                              // 0x0000 (size: 0x1)
    FString AssetPath;                                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FBakingConfiguration
{
    FString OutputPath;                                                               // 0x0000 (size: 0x10)
    FString OutputFilesBaseName;                                                      // 0x0010 (size: 0x10)
    bool bExportAllResourcesOnBake;                                                   // 0x0020 (size: 0x1)
    bool bGenerateConstantMaterialInstancesOnBake;                                    // 0x0021 (size: 0x1)
    bool bAllowOverridingOfFiles;                                                     // 0x0022 (size: 0x1)
    FBakingConfigurationOnBakeOperationCompletedCallback OnBakeOperationCompletedCallback; // 0x0024 (size: 0x10)
    void BakeOperationCompletedDelegate(const FCustomizableObjectInstanceBakeOutput BakeOperationOutput);

}; // Size: 0x38

struct FClothingStreamable
{
    int32 ClothingAssetIndex;                                                         // 0x0000 (size: 0x4)
    int32 ClothingAssetLOD;                                                           // 0x0004 (size: 0x4)
    int32 PhysicsAssetIndex;                                                          // 0x0008 (size: 0x4)
    uint32 Size;                                                                      // 0x000C (size: 0x4)
    FMutableStreamableBlock bLock;                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCompilationOptions_DEPRECATED
{
    ECustomizableObjectTextureCompression TextureCompression;                         // 0x0000 (size: 0x1)
    int32 OptimizationLevel;                                                          // 0x0004 (size: 0x4)
    bool bUseDiskCompilation;                                                         // 0x0008 (size: 0x1)
    uint64 PackagedDataBytesLimit;                                                    // 0x0010 (size: 0x8)
    uint64 EmbeddedDataBytesLimit;                                                    // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FCustomizableInstanceComponentData
{
    TMap<class FName, class TSoftClassPtr<UAnimInstance>> AnimSlotToBP;               // 0x0000 (size: 0x50)
    TSet<UAssetUserData*> AssetUserDataArray;                                         // 0x0050 (size: 0x50)
    FReferencedSkeletons Skeletons;                                                   // 0x00B0 (size: 0x28)
    FReferencedPhysicsAssets PhysicsAssets;                                           // 0x00D8 (size: 0x40)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0138 (size: 0x10)

}; // Size: 0x148

struct FCustomizableObjectAnimationSlot
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TSoftClassPtr<UAnimInstance> AnimInstance;                                        // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FCustomizableObjectAssetUserData
{
    class UAssetUserData* AssetUserData;                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FCustomizableObjectBoolParameterValue
{
    FString ParameterName;                                                            // 0x0000 (size: 0x10)
    bool ParameterValue;                                                              // 0x0010 (size: 0x1)
    FGuid ID;                                                                         // 0x0014 (size: 0x10)

}; // Size: 0x28

struct FCustomizableObjectClothConfigData
{
    FString ClassPath;                                                                // 0x0000 (size: 0x10)
    FName ConfigName;                                                                 // 0x0010 (size: 0x8)
    TArray<uint8> ConfigBytes;                                                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FCustomizableObjectClothingAssetData
{
    TArray<FClothLODDataCommon> LodData;                                              // 0x0000 (size: 0x10)
    TArray<int32> LodMap;                                                             // 0x0010 (size: 0x10)
    TArray<FName> UsedBoneNames;                                                      // 0x0020 (size: 0x10)
    TArray<int32> UsedBoneIndices;                                                    // 0x0030 (size: 0x10)
    int32 ReferenceBoneIndex;                                                         // 0x0040 (size: 0x4)
    TArray<FCustomizableObjectClothConfigData> ConfigsData;                           // 0x0048 (size: 0x10)
    FName Name;                                                                       // 0x0058 (size: 0x8)
    FGuid OriginalAssetGuid;                                                          // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FCustomizableObjectFloatParameterValue
{
    FString ParameterName;                                                            // 0x0000 (size: 0x10)
    float ParameterValue;                                                             // 0x0010 (size: 0x4)
    FGuid ID;                                                                         // 0x0014 (size: 0x10)
    TArray<float> ParameterRangeValues;                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FCustomizableObjectIdPair
{
    FString CustomizableObjectGroupName;                                              // 0x0000 (size: 0x10)
    FString CustomizableObjectName;                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCustomizableObjectIdentifier
{
    FString CustomizableObjectGroupName;                                              // 0x0000 (size: 0x10)
    FString CustomizableObjectName;                                                   // 0x0010 (size: 0x10)
    FString Guid;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FCustomizableObjectInstanceBakeOutput
{
    bool bWasBakeSuccessful;                                                          // 0x0000 (size: 0x1)
    TArray<FBakedResourceData> SavedPackages;                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FCustomizableObjectInstanceDescriptor
{
    class UCustomizableObject* CustomizableObject;                                    // 0x0000 (size: 0x8)
    TArray<FCustomizableObjectBoolParameterValue> BoolParameters;                     // 0x0008 (size: 0x10)
    TArray<FCustomizableObjectIntParameterValue> IntParameters;                       // 0x0018 (size: 0x10)
    TArray<FCustomizableObjectFloatParameterValue> FloatParameters;                   // 0x0028 (size: 0x10)
    TArray<FCustomizableObjectTextureParameterValue> TextureParameters;               // 0x0038 (size: 0x10)
    TArray<FCustomizableObjectVectorParameterValue> VectorParameters;                 // 0x0048 (size: 0x10)
    TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;           // 0x0058 (size: 0x10)
    int32 State;                                                                      // 0x0068 (size: 0x4)
    TMap<class FName, class FMultilayerProjector> MultilayerProjectors;               // 0x0088 (size: 0x50)

}; // Size: 0xE0

struct FCustomizableObjectIntParameterValue
{
    FString ParameterName;                                                            // 0x0000 (size: 0x10)
    FString ParameterValueName;                                                       // 0x0010 (size: 0x10)
    FGuid ID;                                                                         // 0x0020 (size: 0x10)
    TArray<FString> ParameterRangeValueNames;                                         // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FCustomizableObjectMeshToMeshVertData
{
    float PositionBaryCoordsAndDist;                                                  // 0x0000 (size: 0x10)
    float NormalBaryCoordsAndDist;                                                    // 0x0010 (size: 0x10)
    float TangentBaryCoordsAndDist;                                                   // 0x0020 (size: 0x10)
    uint16 SourceMeshVertIndices;                                                     // 0x0030 (size: 0x8)
    float Weight;                                                                     // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FCustomizableObjectProjector
{
    FVector3f position;                                                               // 0x0000 (size: 0xC)
    FVector3f Direction;                                                              // 0x000C (size: 0xC)
    FVector3f Up;                                                                     // 0x0018 (size: 0xC)
    FVector3f Scale;                                                                  // 0x0024 (size: 0xC)
    ECustomizableObjectProjectorType ProjectionType;                                  // 0x0030 (size: 0x1)
    float Angle;                                                                      // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FCustomizableObjectProjectorParameterValue
{
    FString ParameterName;                                                            // 0x0000 (size: 0x10)
    FCustomizableObjectProjector Value;                                               // 0x0010 (size: 0x38)
    FGuid ID;                                                                         // 0x0048 (size: 0x10)
    TArray<FCustomizableObjectProjector> RangeValues;                                 // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FCustomizableObjectResourceData
{
    ECOResourceDataType Type;                                                         // 0x0000 (size: 0x2)
    FInstancedStruct Data;                                                            // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FCustomizableObjectStreamedResourceData
{
    TSoftObjectPtr<UCustomizableObjectResourceDataContainer> ContainerPath;           // 0x0000 (size: 0x28)
    class UCustomizableObjectResourceDataContainer* Container;                        // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FCustomizableObjectTextureParameterValue
{
    FString ParameterName;                                                            // 0x0000 (size: 0x10)
    FName ParameterValue;                                                             // 0x0010 (size: 0x8)
    FGuid ID;                                                                         // 0x0018 (size: 0x10)
    TArray<FName> ParameterRangeValues;                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FCustomizableObjectVectorParameterValue
{
    FString ParameterName;                                                            // 0x0000 (size: 0x10)
    FLinearColor ParameterValue;                                                      // 0x0010 (size: 0x10)
    FGuid ID;                                                                         // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FFParameterOptionsTags
{
    TArray<FString> Tags;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGeneratedMaterial
{
    class UMaterialInterface* MaterialInterface;                                      // 0x0000 (size: 0x8)
    TArray<FGeneratedTexture> Textures;                                               // 0x0008 (size: 0x10)

}; // Size: 0x20

struct FGeneratedTexture
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    class UTexture* Texture;                                                          // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FIntegerParameterUIData
{
    FMutableParamUIMetadata ParamUIMetadata;                                          // 0x0000 (size: 0xF8)

}; // Size: 0xF8

struct FModelResources
{
    TArray<FMutableRefSkeletalMeshData> ReferenceSkeletalMeshesData;                  // 0x0000 (size: 0x10)
    TArray<TSoftObjectPtr<USkeleton>> Skeletons;                                      // 0x0010 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;                             // 0x0020 (size: 0x10)
    TArray<TSoftObjectPtr<UTexture>> PassThroughTextures;                             // 0x0030 (size: 0x10)
    TArray<TSoftObjectPtr<USkeletalMesh>> PassThroughMeshes;                          // 0x0040 (size: 0x10)
    TArray<TSoftObjectPtr<UPhysicsAsset>> PhysicsAssets;                              // 0x0050 (size: 0x10)
    TArray<TSoftClassPtr<UAnimInstance>> AnimBPs;                                     // 0x0060 (size: 0x10)
    TArray<FAnimBpOverridePhysicsAssetsInfo> AnimBpOverridePhysiscAssetsInfo;         // 0x0070 (size: 0x10)
    TArray<FName> MaterialSlotNames;                                                  // 0x0080 (size: 0x10)
    TMap<FString, uint32> BoneNamesMap;                                               // 0x0090 (size: 0x50)
    TArray<FMutableRefSocket> SocketArray;                                            // 0x00E0 (size: 0x10)
    TArray<FMutableSkinWeightProfileInfo> SkinWeightProfilesInfo;                     // 0x00F0 (size: 0x10)
    TArray<FMutableModelImageProperties> ImageProperties;                             // 0x0100 (size: 0x10)
    TMap<class FString, class FMutableParameterData> ParameterUIDataMap;              // 0x0110 (size: 0x50)
    TMap<class FString, class FMutableStateData> StateUIDataMap;                      // 0x0160 (size: 0x50)
    TMap<uint32, FRealTimeMorphStreamable> RealTimeMorphStreamables;                  // 0x01B0 (size: 0x50)
    TArray<FCustomizableObjectClothConfigData> ClothSharedConfigsData;                // 0x0200 (size: 0x10)
    TArray<FCustomizableObjectClothingAssetData> ClothingAssetsData;                  // 0x0210 (size: 0x10)
    TMap<uint32, FClothingStreamable> ClothingStreamables;                            // 0x0220 (size: 0x50)
    bool bAllowClothingPhysicsEditsPropagation;                                       // 0x0270 (size: 0x1)
    TMap<uint32, FMutableStreamableBlock> HashToStreamableBlock;                      // 0x0278 (size: 0x50)
    uint8 NumComponents;                                                              // 0x02C8 (size: 0x1)
    uint8 NumLODs;                                                                    // 0x02C9 (size: 0x1)
    uint8 NumLODsToStream;                                                            // 0x02CA (size: 0x1)
    uint8 FirstLODAvailable;                                                          // 0x02CB (size: 0x1)

}; // Size: 0x2D0

struct FMorphTargetVertexData
{
    FVector3f PositionDelta;                                                          // 0x0000 (size: 0xC)
    FVector3f TangentZDelta;                                                          // 0x000C (size: 0xC)
    uint32 MorphNameIndex;                                                            // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FMultilayerProjector
{
    FName ParamName;                                                                  // 0x0000 (size: 0x8)
    TMap<FName, int32> VirtualLayersMapping;                                          // 0x0008 (size: 0x50)
    TMap<FName, int32> VirtualLayersOrder;                                            // 0x0058 (size: 0x50)
    TMap<class FName, class FMultilayerProjectorLayer> DisableVirtualLayers;          // 0x00A8 (size: 0x50)

}; // Size: 0xF8

struct FMultilayerProjectorLayer
{
}; // Size: 0x80

struct FMultilayerProjectorVirtualLayer : public FMultilayerProjectorLayer
{
}; // Size: 0x88

struct FMutableLODSettings
{
    FPerPlatformInt MinLOD;                                                           // 0x0000 (size: 0x4)
    FPerQualityLevelInt MinQualityLevelLOD;                                           // 0x0008 (size: 0x68)

}; // Size: 0x70

struct FMutableModelImageProperties
{
    FString TextureParameterName;                                                     // 0x0000 (size: 0x10)
    TEnumAsByte<TextureFilter> Filter;                                                // 0x0010 (size: 0x1)
    uint8 SRGB;                                                                       // 0x0014 (size: 0x1)
    uint8 FlipGreenChannel;                                                           // 0x0014 (size: 0x1)
    uint8 IsPassThrough;                                                              // 0x0014 (size: 0x1)
    int32 LODBias;                                                                    // 0x0018 (size: 0x4)
    TEnumAsByte<TextureMipGenSettings> MipGenSettings;                                // 0x001C (size: 0x1)
    TEnumAsByte<TextureGroup> LODGroup;                                               // 0x001D (size: 0x1)
    TEnumAsByte<TextureAddress> AddressX;                                             // 0x001E (size: 0x1)
    TEnumAsByte<TextureAddress> AddressY;                                             // 0x001F (size: 0x1)

}; // Size: 0x20

struct FMutableModelParameterProperties
{
    EMutableParameterType Type;                                                       // 0x0010 (size: 0x1)
    TArray<FMutableModelParameterValue> PossibleValues;                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMutableModelParameterValue
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    int32 Value;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FMutableParamUIMetadata : public FMutableUIMetadata
{
    float MinimumValue;                                                               // 0x00F0 (size: 0x4)
    float MaximumValue;                                                               // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FMutableParameterData
{
    FMutableParamUIMetadata ParamUIMetadata;                                          // 0x0000 (size: 0xF8)
    EMutableParameterType Type;                                                       // 0x00F8 (size: 0x1)
    TMap<class FString, class FIntegerParameterUIData> ArrayIntegerParameterOption;   // 0x0100 (size: 0x50)
    ECustomizableObjectGroupType IntegerParameterGroupType;                           // 0x0150 (size: 0x1)

}; // Size: 0x158

struct FMutableRefAssetUserData
{
    class UCustomizableObjectResourceDataContainer* AssetUserData;                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMutableRefLODData
{
    FMutableRefLODInfo LODInfo;                                                       // 0x0000 (size: 0xC)
    FMutableRefLODRenderData RenderData;                                              // 0x000C (size: 0x2)

}; // Size: 0x10

struct FMutableRefLODInfo
{
    float ScreenSize;                                                                 // 0x0000 (size: 0x4)
    float LODHysteresis;                                                              // 0x0004 (size: 0x4)
    bool bSupportUniformlyDistributedSampling;                                        // 0x0008 (size: 0x1)
    bool bAllowCPUAccess;                                                             // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FMutableRefLODRenderData
{
    bool bIsLODOptional;                                                              // 0x0000 (size: 0x1)
    bool bStreamedDataInlined;                                                        // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FMutableRefSkeletalMeshData
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x0000 (size: 0x8)
    TSoftObjectPtr<USkeletalMesh> SoftSkeletalMesh;                                   // 0x0008 (size: 0x28)
    class USkeletalMeshLODSettings* SkeletalMeshLODSettings;                          // 0x0030 (size: 0x8)
    TArray<FMutableRefLODData> LodData;                                               // 0x0038 (size: 0x10)
    TArray<FMutableRefSocket> Sockets;                                                // 0x0048 (size: 0x10)
    FBoxSphereBounds Bounds;                                                          // 0x0058 (size: 0x38)
    FMutableRefSkeletalMeshSettings Settings;                                         // 0x0090 (size: 0x8)
    class USkeleton* Skeleton;                                                        // 0x0098 (size: 0x8)
    class UPhysicsAsset* PhysicsAsset;                                                // 0x00A0 (size: 0x8)
    TSoftClassPtr<UAnimInstance> PostProcessAnimInst;                                 // 0x00A8 (size: 0x28)
    class UPhysicsAsset* ShadowPhysicsAsset;                                          // 0x00D0 (size: 0x8)
    TArray<FMutableRefAssetUserData> AssetUserData;                                   // 0x00D8 (size: 0x10)

}; // Size: 0xE8

struct FMutableRefSkeletalMeshSettings
{
    bool bEnablePerPolyCollision;                                                     // 0x0000 (size: 0x1)
    float DefaultUVChannelDensity;                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMutableRefSocket
{
    FName SocketName;                                                                 // 0x0000 (size: 0x8)
    FName BoneName;                                                                   // 0x0008 (size: 0x8)
    FVector RelativeLocation;                                                         // 0x0010 (size: 0x18)
    FRotator RelativeRotation;                                                        // 0x0028 (size: 0x18)
    FVector RelativeScale;                                                            // 0x0040 (size: 0x18)
    bool bForceAlwaysAnimated;                                                        // 0x0058 (size: 0x1)
    int32 Priority;                                                                   // 0x005C (size: 0x4)

}; // Size: 0x60

struct FMutableRemappedBone
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    uint32 Hash;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMutableSkinWeightProfileInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    uint32 NameId;                                                                    // 0x0008 (size: 0x4)
    bool DefaultProfile;                                                              // 0x000C (size: 0x1)
    int8 DefaultProfileFromLODIndex;                                                  // 0x000D (size: 0x1)

}; // Size: 0x10

struct FMutableStateData
{
    FMutableStateUIMetadata StateUIMetadata;                                          // 0x0000 (size: 0xF0)
    bool bLiveUpdateMode;                                                             // 0x00F0 (size: 0x1)
    bool bDisableTextureStreaming;                                                    // 0x00F1 (size: 0x1)
    bool bReuseInstanceTextures;                                                      // 0x00F2 (size: 0x1)
    TMap<class FString, class FString> ForcedParameterValues;                         // 0x00F8 (size: 0x50)

}; // Size: 0x148

struct FMutableStateUIMetadata : public FMutableUIMetadata
{
}; // Size: 0xF0

struct FMutableStreamableBlock
{
    uint32 FileId;                                                                    // 0x0000 (size: 0x4)
    uint64 Offset;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMutableUIMetadata
{
    FString ObjectFriendlyName;                                                       // 0x0000 (size: 0x10)
    FString UISectionName;                                                            // 0x0010 (size: 0x10)
    int32 UIOrder;                                                                    // 0x0020 (size: 0x4)
    TSoftObjectPtr<UTexture2D> UIThumbnail;                                           // 0x0028 (size: 0x28)
    TMap<class FString, class FString> ExtraInformation;                              // 0x0050 (size: 0x50)
    TMap<class FString, class TSoftObjectPtr<UObject>> ExtraAssets;                   // 0x00A0 (size: 0x50)

}; // Size: 0xF0

struct FParameterTags
{
    TArray<FString> Tags;                                                             // 0x0000 (size: 0x10)
    TMap<class FString, class FFParameterOptionsTags> ParameterOptions;               // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FPendingReleaseMaterialsInfo
{
    TArray<class UMaterialInterface*> Materials;                                      // 0x0000 (size: 0x10)
    int32 TicksUntilRelease;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FPendingReleaseSkeletalMeshInfo
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x0000 (size: 0x8)
    double Timestamp;                                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FProfileParameterDat
{
    FString ProfileName;                                                              // 0x0000 (size: 0x10)
    TArray<FCustomizableObjectBoolParameterValue> BoolParameters;                     // 0x0010 (size: 0x10)
    TArray<FCustomizableObjectIntParameterValue> IntParameters;                       // 0x0020 (size: 0x10)
    TArray<FCustomizableObjectFloatParameterValue> FloatParameters;                   // 0x0030 (size: 0x10)
    TArray<FCustomizableObjectTextureParameterValue> TextureParameters;               // 0x0040 (size: 0x10)
    TArray<FCustomizableObjectVectorParameterValue> VectorParameters;                 // 0x0050 (size: 0x10)
    TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;           // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FRealTimeMorphStreamable
{
    TArray<FName> NameResolutionMap;                                                  // 0x0000 (size: 0x10)
    FMutableStreamableBlock bLock;                                                    // 0x0010 (size: 0x10)
    uint32 Size;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FReferencedPhysicsAssets
{
    TArray<class UPhysicsAsset*> PhysicsAssetsToMerge;                                // 0x0010 (size: 0x10)
    TArray<class UPhysicsAsset*> AdditionalPhysicsAssets;                             // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FReferencedSkeletons
{
    class USkeleton* Skeleton;                                                        // 0x0000 (size: 0x8)
    TArray<uint16> SkeletonIds;                                                       // 0x0008 (size: 0x10)
    TArray<class USkeleton*> SkeletonsToMerge;                                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FUpdateContext
{
    EUpdateResult UpdateResult;                                                       // 0x0000 (size: 0x1)

}; // Size: 0x1

class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor
{
    TArray<class UCustomizableSkeletalComponent*> CustomizableSkeletalComponents;     // 0x0310 (size: 0x10)
    TArray<class USkeletalMeshComponent*> SkeletalMeshComponents;                     // 0x0320 (size: 0x10)
    class UCustomizableSkeletalComponent* CustomizableSkeletalComponent;              // 0x0330 (size: 0x8)

}; // Size: 0x338

class UCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{
}; // Size: 0x80

class UCustomizableInstanceLODManagementBase : public UObject
{
}; // Size: 0x28

class UCustomizableInstancePrivate : public UObject
{
    TArray<class USkeletalMesh*> SkeletalMeshes;                                      // 0x0028 (size: 0x10)
    TArray<FGeneratedMaterial> GeneratedMaterials;                                    // 0x0038 (size: 0x10)
    TArray<FGeneratedTexture> GeneratedTextures;                                      // 0x0048 (size: 0x10)
    TMap<class FString, class TWeakObjectPtr<UTexture2D>> TextureReuseCache;          // 0x0068 (size: 0x50)
    TArray<FCustomizableInstanceComponentData> ComponentsData;                        // 0x00E0 (size: 0x10)
    TArray<class UMaterialInterface*> ReferencedMaterials;                            // 0x00F0 (size: 0x10)
    TArray<class UPhysicsAsset*> ClothingPhysicsAssets;                               // 0x0160 (size: 0x10)
    TArray<class TSubclassOf<UAnimInstance>> GatheredAnimBPs;                         // 0x0170 (size: 0x10)
    FGameplayTagContainer AnimBPGameplayTags;                                         // 0x0180 (size: 0x20)
    TMap<class TSubclassOf<UAnimInstance>, class FAnimBpGeneratedPhysicsAssets> AnimBpPhysicsAssets; // 0x01A0 (size: 0x50)
    TArray<class UTexture*> LoadedPassThroughTexturesPendingSetMaterial;              // 0x0210 (size: 0x10)
    TArray<class UStreamableRenderAsset*> LoadedPassThroughMeshesPendingSetMaterial;  // 0x0220 (size: 0x10)
    FCustomizableObjectInstanceDescriptor CommittedDescriptor;                        // 0x0238 (size: 0xE0)

}; // Size: 0x3A0

class UCustomizableObject : public UObject
{
    FMutableLODSettings LODSettings;                                                  // 0x0028 (size: 0x70)
    TArray<FCustomizableObjectResourceData> AlwaysLoadedExtensionData;                // 0x0098 (size: 0x10)
    TArray<FCustomizableObjectStreamedResourceData> StreamedExtensionData;            // 0x00A8 (size: 0x10)
    TArray<FCustomizableObjectStreamedResourceData> StreamedResourceData;             // 0x00B8 (size: 0x10)
    bool bEnableUseRefSkeletalMeshAsPlaceholder;                                      // 0x00C8 (size: 0x1)
    bool bPreserveUserLODsOnFirstGeneration;                                          // 0x00C9 (size: 0x1)
    bool bEnableMeshCache;                                                            // 0x00CA (size: 0x1)
    bool bEnableMeshStreaming;                                                        // 0x00CB (size: 0x1)
    TArray<FName> LowPriorityTextures;                                                // 0x00D0 (size: 0x10)
    TArray<FString> CustomizableObjectClassTags;                                      // 0x00E0 (size: 0x10)
    TArray<FString> PopulationClassTags;                                              // 0x00F0 (size: 0x10)
    TMap<class FString, class FParameterTags> CustomizableObjectParametersTags;       // 0x0100 (size: 0x50)
    class UCustomizableObjectBulk* BulkData;                                          // 0x0150 (size: 0x8)
    class UCustomizableObjectPrivate* Private;                                        // 0x0158 (size: 0x8)
    class UPhysicsAsset* ReferencePhysicsAsset;                                       // 0x0160 (size: 0x8)

    bool IsParameterMultidimensional(FString InParameterName);
    bool IsCompiled();
    FMutableStateUIMetadata GetStateUIMetadata(FString StateName);
    FString GetStateParameterName(FString StateName, int32 ParameterIndex);
    int32 GetStateParameterCount(FString StateName);
    FString GetStateName(int32 StateIndex);
    int32 GetStateCount();
    void GetProjectorParameterDefaultValue(FString InParameterName, FVector3f& OutPos, FVector3f& OutDirection, FVector3f& OutUp, FVector3f& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType);
    FMutableParamUIMetadata GetParameterUIMetadata(FString ParamName);
    EMutableParameterType GetParameterTypeByName(FString Name);
    EMutableParameterType GetParameterType(int32 ParamIndex);
    FString GetParameterName(int32 ParamIndex);
    int32 GetParameterDescriptionCount(FString ParamName);
    int32 GetParameterCount();
    FMutableParamUIMetadata GetIntParameterOptionUIMetadata(FString ParamName, FString OptionName);
    int32 GetIntParameterNumOptions(int32 ParamIndex);
    ECustomizableObjectGroupType GetIntParameterGroupType(FString ParamName);
    int32 GetIntParameterDefaultValue(FString InParameterName);
    FString GetIntParameterAvailableOption(int32 ParamIndex, int32 K);
    float GetFloatParameterDefaultValue(FString InParameterName);
    int32 GetComponentCount();
    FLinearColor GetColorParameterDefaultValue(FString InParameterName);
    bool GetBoolParameterDefaultValue(FString InParameterName);
    int32 FindParameter(FString Name);
    class UCustomizableObjectInstance* CreateInstance();
}; // Size: 0x168

class UCustomizableObjectBulk : public UObject
{
}; // Size: 0x38

class UCustomizableObjectExtension : public UObject
{
}; // Size: 0x28

class UCustomizableObjectInstance : public UObject
{
    FCustomizableObjectInstanceUpdatedDelegate UpdatedDelegate;                       // 0x0028 (size: 0x10)
    void ObjectInstanceUpdatedDelegate(class UCustomizableObjectInstance* Instance);
    FCustomizableObjectInstanceDescriptor Descriptor;                                 // 0x0050 (size: 0xE0)
    class UCustomizableInstancePrivate* PrivateData;                                  // 0x0130 (size: 0x8)
    class UCustomizableObject* CustomizableObject;                                    // 0x0138 (size: 0x8)
    TArray<FCustomizableObjectBoolParameterValue> BoolParameters;                     // 0x0140 (size: 0x10)
    TArray<FCustomizableObjectIntParameterValue> IntParameters;                       // 0x0150 (size: 0x10)
    TArray<FCustomizableObjectFloatParameterValue> FloatParameters;                   // 0x0160 (size: 0x10)
    TArray<FCustomizableObjectTextureParameterValue> TextureParameters;               // 0x0170 (size: 0x10)
    TArray<FCustomizableObjectVectorParameterValue> VectorParameters;                 // 0x0180 (size: 0x10)
    TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;           // 0x0190 (size: 0x10)
    TMap<class FName, class FMultilayerProjector> MultilayerProjectors;               // 0x01A0 (size: 0x50)

    void UpdateSkeletalMeshAsyncResult(FUpdateSkeletalMeshAsyncResultCallback Callback, bool bIgnoreCloseDist, bool bForceHighPriority);
    void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);
    void SetVectorParameterSelectedOption(FString VectorParamName, const FLinearColor& VectorValue);
    void SetTextureParameterSelectedOption(FString TextureParamName, FString TextureValue, int32 RangeIndex);
    void SetReplacePhysicsAssets(bool bReplaceEnabled);
    void SetRandomValuesFromStream(const FRandomStream& InStream);
    void SetRandomValues();
    void SetProjectorValue(FString ProjectorParamName, const FVector& OutPos, const FVector& OutDirection, const FVector& OutUp, const FVector& OutScale, float OutAngle, int32 RangeIndex);
    void SetProjectorUp(FString ProjectorParamName, const FVector& Up, int32 RangeIndex);
    void SetProjectorScale(FString ProjectorParamName, const FVector& Scale, int32 RangeIndex);
    void SetProjectorPosition(FString ProjectorParamName, const FVector& Pos, int32 RangeIndex);
    void SetProjectorDirection(FString ProjectorParamName, const FVector& Direction, int32 RangeIndex);
    void SetProjectorAngle(FString ProjectorParamName, float Angle, int32 RangeIndex);
    void SetObject(class UCustomizableObject* InObject);
    void SetIntParameterSelectedOption(FString ParamName, FString SelectedOptionName, int32 RangeIndex);
    void SetFloatParameterSelectedOption(FString FloatParamName, float FloatValue, int32 RangeIndex);
    void SetDefaultValues();
    void SetDefaultValue(FString ParamName);
    void SetCurrentState(FString StateName);
    void SetColorParameterSelectedOption(FString ColorParamName, const FLinearColor& ColorValue);
    void SetBuildParameterRelevancy(bool Value);
    void SetBoolParameterSelectedOption(FString BoolParamName, bool BoolValue);
    int32 RemoveValueFromProjectorRange(FString ParamName, int32 RangeIndex);
    int32 RemoveValueFromIntRange(FString ParamName, int32 RangeIndex);
    int32 RemoveValueFromFloatRange(FString ParamName, int32 RangeIndex);
    void RemoveMultilayerProjector(const FName& ProjectorParamName);
    void MultilayerProjectorUpdateVirtualLayer(const FName& ProjectorParamName, const FName& ID, const FMultilayerProjectorVirtualLayer& Layer);
    void MultilayerProjectorUpdateLayer(const FName& ProjectorParamName, int32 Index, const FMultilayerProjectorLayer& Layer);
    void MultilayerProjectorRemoveVirtualLayer(const FName& ProjectorParamName, const FName& ID);
    void MultilayerProjectorRemoveLayerAt(const FName& ProjectorParamName, int32 Index);
    int32 MultilayerProjectorNumLayers(const FName& ProjectorParamName);
    TArray<FName> MultilayerProjectorGetVirtualLayers(const FName& ProjectorParamName);
    FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(const FName& ProjectorParamName, const FName& ID);
    FMultilayerProjectorLayer MultilayerProjectorGetLayer(const FName& ProjectorParamName, int32 Index);
    FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(const FName& ProjectorParamName, const FName& ID);
    void MultilayerProjectorCreateVirtualLayer(const FName& ProjectorParamName, const FName& ID);
    void MultilayerProjectorCreateLayer(const FName& ProjectorParamName, int32 Index);
    bool IsParameterRelevant(FString ParamName);
    bool IsParameterDirty(FString ParamName, int32 RangeIndex);
    bool HasAnySkeletalMesh();
    bool HasAnyParameters();
    int32 GetTextureValueRange(FString ParamName);
    FName GetTextureParameterSelectedOption(FString TextureParamName, int32 RangeIndex);
    class USkeletalMesh* GetSkeletalMesh(int32 ComponentIndex);
    int32 GetProjectorValueRange(FString ParamName);
    void GetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType, int32 RangeIndex);
    FVector GetProjectorUp(FString ParamName, int32 RangeIndex);
    FVector GetProjectorScale(FString ParamName, int32 RangeIndex);
    FVector GetProjectorPosition(FString ParamName, int32 RangeIndex);
    ECustomizableObjectProjectorType GetProjectorParameterType(FString ParamName, int32 RangeIndex);
    FVector GetProjectorDirection(FString ParamName, int32 RangeIndex);
    float GetProjectorAngle(FString ParamName, int32 RangeIndex);
    int32 GetNumComponents();
    TSet<UAssetUserData*> GetMergedAssetUserData(int32 ComponentIndex);
    int32 GetIntValueRange(FString ParamName);
    FString GetIntParameterSelectedOption(FString ParamName, int32 RangeIndex);
    int32 GetFloatValueRange(FString ParamName);
    float GetFloatParameterSelectedOption(FString FloatParamName, int32 RangeIndex);
    class UCustomizableObject* GetCustomizableObject();
    FString GetCurrentState();
    FLinearColor GetColorParameterSelectedOption(FString ColorParamName);
    bool GetBuildParameterRelevancy();
    bool GetBoolParameterSelectedOption(FString BoolParamName);
    TSubclassOf<class UAnimInstance> GetAnimBP(int32 ComponentIndex, const FName& Slot);
    FGameplayTagContainer GetAnimationGameplayTags();
    void ForEachAnimInstance(int32 ComponentIndex, FForEachAnimInstanceDelegate Delegate);
    int32 FindVectorParameterNameIndex(FString ParamName);
    int32 FindProjectorParameterNameIndex(FString ParamName);
    int32 FindIntParameterNameIndex(FString ParamName);
    int32 FindFloatParameterNameIndex(FString ParamName);
    int32 FindBoolParameterNameIndex(FString ParamName);
    bool CreateMultiLayerProjector(const FName& ProjectorParamName);
    class UCustomizableObjectInstance* CloneStatic(class UObject* Outer);
    class UCustomizableObjectInstance* Clone();
    int32 AddValueToProjectorRange(FString ParamName);
    int32 AddValueToIntRange(FString ParamName);
    int32 AddValueToFloatRange(FString ParamName);
}; // Size: 0x1F8

class UCustomizableObjectInstanceUsage : public UObject
{
    float SkippedLastRenderTime;                                                      // 0x0030 (size: 0x4)
    class UCustomizableSkeletalComponent* CustomizableSkeletalComponent;              // 0x0048 (size: 0x8)
    TWeakObjectPtr<class USkeletalMeshComponent> UsedSkeletalMeshComponent;           // 0x0050 (size: 0x8)
    class UCustomizableObjectInstance* UsedCustomizableObjectInstance;                // 0x0058 (size: 0x8)
    int32 UsedComponentIndex;                                                         // 0x0060 (size: 0x4)

    void UpdateSkeletalMeshAsyncResult(FUpdateSkeletalMeshAsyncResultCallback Callback, bool bIgnoreCloseDist, bool bForceHighPriority);
    void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);
}; // Size: 0x68

class UCustomizableObjectInstanceUserData : public UAssetUserData
{
    FGameplayTagContainer AnimationGameplayTag;                                       // 0x0028 (size: 0x20)
    TArray<FCustomizableObjectAnimationSlot> AnimationSlots;                          // 0x0048 (size: 0x10)

    void SetAnimationGameplayTags(const FGameplayTagContainer& InstanceTags);
    FGameplayTagContainer GetAnimationGameplayTags();
}; // Size: 0x58

class UCustomizableObjectPrivate : public UObject
{
    FModelResources ModelResources;                                                   // 0x0038 (size: 0x2D0)
    TArray<FMutableModelParameterProperties> ParameterProperties;                     // 0x03D0 (size: 0x10)

}; // Size: 0x430

class UCustomizableObjectResourceDataContainer : public UObject
{
    FCustomizableObjectResourceData Data;                                             // 0x0028 (size: 0x18)

}; // Size: 0x40

class UCustomizableObjectSettings : public UObject
{
    bool bEnableStreamingManager;                                                     // 0x0028 (size: 0x1)

}; // Size: 0x30

class UCustomizableObjectSkeletalMesh : public USkeletalMesh
{
}; // Size: 0x530

class UCustomizableObjectSystem : public UObject
{
    class UCustomizableObjectSystemPrivate* Private;                                  // 0x0028 (size: 0x8)

    void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);
    bool IsUpdating(const class UCustomizableObjectInstance* Instance);
    bool IsUpdateResultValid(const EUpdateResult UpdateResult);
    int32 GetTotalInstances();
    int64 GetTextureMemoryUsed();
    FString GetPluginVersion();
    int32 GetNumPendingInstances();
    int32 GetNumInstances();
    class UCustomizableObjectSystem* GetInstanceChecked();
    class UCustomizableObjectSystem* GetInstance();
    int32 GetAverageBuildTime();
}; // Size: 0x30

class UCustomizableObjectSystemPrivate : public UObject
{
    class UCustomizableObjectInstance* CurrentInstanceBeingUpdated;                   // 0x01F8 (size: 0x8)
    TArray<FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh;               // 0x04A0 (size: 0x10)
    class UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement;       // 0x04B0 (size: 0x8)
    class UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement;       // 0x04B8 (size: 0x8)
    TArray<class UTexture2D*> ProtectedCachedTextures;                                // 0x04C0 (size: 0x10)

}; // Size: 0x5C0

class UCustomizableSkeletalComponent : public USceneComponent
{
    class UCustomizableObjectInstance* CustomizableObjectInstance;                    // 0x0230 (size: 0x8)
    int32 ComponentIndex;                                                             // 0x0238 (size: 0x4)
    class UCustomizableObjectInstanceUsage* CustomizableObjectInstanceUsage;          // 0x0250 (size: 0x8)

    void UpdateSkeletalMeshAsyncResult(FUpdateSkeletalMeshAsyncResultCallback Callback, bool bIgnoreCloseDist, bool bForceHighPriority);
    void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);
}; // Size: 0x260

class UCustomizableSystemImageProvider : public UObject
{
}; // Size: 0x28

class UDGGUI : public UUserWidget
{

    void SetCustomizableObjectInstanceUsage(class UCustomizableObjectInstanceUsage* CustomizableObjectInstanceUsage);
    class UCustomizableObjectInstanceUsage* GetCustomizableObjectInstanceUsage();
}; // Size: 0x2E0

class UDefaultImageProvider : public UCustomizableSystemImageProvider
{
    TMap<class FName, class UTexture2D*> Textures;                                    // 0x0028 (size: 0x50)

}; // Size: 0x78

class UEditorImageProvider : public UCustomizableSystemImageProvider
{
}; // Size: 0x28

class UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory
{
    class UCustomizableObjectInstance* CustomizableObjectInstance;                    // 0x0028 (size: 0x8)

}; // Size: 0x50

#endif
