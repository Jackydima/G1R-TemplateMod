#ifndef UE4SS_SDK_AlkimiaLightweightActors_HPP
#define UE4SS_SDK_AlkimiaLightweightActors_HPP

#include "AlkimiaLightweightActors_enums.hpp"

struct FAlkimiaBodyInstance
{
    TEnumAsByte<ECollisionChannel> ObjectType;                                        // 0x0000 (size: 0x1)
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;                            // 0x0001 (size: 0x1)
    FName CollisionProfileName;                                                       // 0x0004 (size: 0x8)
    float WalkableSlopeAngle;                                                         // 0x000C (size: 0x4)
    TEnumAsByte<EWalkableSlopeBehavior> WalkableSlopeBehavior;                        // 0x0010 (size: 0x1)
    class UPhysicalMaterial* PhysMaterialOverride;                                    // 0x0018 (size: 0x8)
    TArray<FResponseChannel> CollisionResponses;                                      // 0x0020 (size: 0x10)
    class UPhysicalMaterial* SimplePhysicsMaterial;                                   // 0x0030 (size: 0x8)
    TArray<class UPhysicalMaterial*> ComplexPhysicsMaterials;                         // 0x0038 (size: 0x10)
    TArray<class UPhysicalMaterialMask*> ComplexPhysicsMaterialMasks;                 // 0x0048 (size: 0x10)
    TArray<class UMaterialInterface*> ComplexPhysicsMaterialMaps;                     // 0x0058 (size: 0x10)
    class UStaticMesh* BodySetupOf;                                                   // 0x0068 (size: 0x8)

}; // Size: 0x70

struct FAlkimiaLightweightPrimitiveProxyDesc
{
}; // Size: 0x38

struct FAlkimiaLightweightPrimitiveSceneDesc
{
}; // Size: 0xF0

struct FAlkimiaLightweightStaticMeshComponentProperties
{
    FAlkimiaLightweightStaticMeshProxyDesc StaticMeshProxyDesc;                       // 0x0000 (size: 0x90)
    FCustomPrimitiveData CustomPrimitiveData;                                         // 0x0090 (size: 0x10)
    uint8 bUseDefaultCollision;                                                       // 0x00A0 (size: 0x1)
    uint8 bIsNavigationRelevant;                                                      // 0x00A0 (size: 0x1)

}; // Size: 0xA8

struct FAlkimiaLightweightStaticMeshProxyDesc : public FAlkimiaLightweightPrimitiveProxyDesc
{
    class UStaticMesh* StaticMesh;                                                    // 0x0038 (size: 0x8)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0040 (size: 0x10)
    class UMaterialInterface* OverlayMaterial;                                        // 0x0050 (size: 0x8)
    TArray<class UMaterialInterface*> CachedUsedMaterials;                            // 0x0058 (size: 0x10)

}; // Size: 0x90

class AAlkimiaLightweightDecorationActor : public AActor
{
    class UAlkimiaLightweightDecorationComponent* LightweightDecorationComponent;     // 0x0290 (size: 0x8)

}; // Size: 0x298

class UAlkimiaLightweightDecorationComponent : public UPrimitiveComponent
{
    TArray<FAlkimiaLightweightStaticMeshComponentProperties> MeshProperties;          // 0x0740 (size: 0x10)
    TArray<FAlkimiaBodyInstance> MergedMinifiedBodyInstances;                         // 0x07B0 (size: 0x10)
    TArray<int32> NavObstacleStaticMeshes;                                            // 0x0898 (size: 0x10)
    TArray<class UMaterialInterface*> UsedMaterials;                                  // 0x08A8 (size: 0x10)
    TArray<class UAlkimiaLightweightDecorationComponent*> SplitSubComponents;         // 0x08E0 (size: 0x10)

}; // Size: 0x8F0

class UAlkimiaLightweightDecorationDeveloperSettings : public UDeveloperSettings
{
    bool bAllowLightweightReplacementsInEditor;                                       // 0x0038 (size: 0x1)
    bool bAllowLightweightReplacementsOnCook;                                         // 0x0039 (size: 0x1)
    int32 LightweightificationNumActorThreshold;                                      // 0x003C (size: 0x4)
    int32 LightweightificationSubcellSplitThreshold;                                  // 0x0040 (size: 0x4)
    int32 LightweightificationSubcellSize;                                            // 0x0044 (size: 0x4)
    TSet<TSoftClassPtr<AActor>> FullyConvertActorsOfClass;                            // 0x0048 (size: 0x50)
    TSet<TSoftClassPtr<AActor>> IgnoreActorsOfClass;                                  // 0x0098 (size: 0x50)
    TSet<TEnumAsByte<EMaterialShadingModel>> SupportedShadingModels;                  // 0x00E8 (size: 0x50)

}; // Size: 0x138

class UAlkimiaLightweightDecorationSubsystem : public UWorldSubsystem
{
}; // Size: 0x30

#endif
