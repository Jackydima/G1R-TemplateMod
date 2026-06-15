#ifndef UE4SS_SDK_GeometryScriptingCore_HPP
#define UE4SS_SDK_GeometryScriptingCore_HPP

#include "GeometryScriptingCore_enums.hpp"

struct FComputeNegativeSpaceOptions
{
    ENegativeSpaceSampleMethod SampleMethod;                                          // 0x0000 (size: 0x1)
    bool bRequireSearchSampleCoverage;                                                // 0x0001 (size: 0x1)
    bool bOnlyConnectedToHull;                                                        // 0x0002 (size: 0x1)
    int32 MaxVoxelsPerDim;                                                            // 0x0004 (size: 0x4)
    int32 TargetNumSamples;                                                           // 0x0008 (size: 0x4)
    double MinSampleSpacing;                                                          // 0x0010 (size: 0x8)
    double NegativeSpaceTolerance;                                                    // 0x0018 (size: 0x8)
    double MinRadius;                                                                 // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FGeometryScript3DGridParameters
{
    EGeometryScriptGridSizingMethod SizeMethod;                                       // 0x0000 (size: 0x1)
    float GridCellSize;                                                               // 0x0004 (size: 0x4)
    int32 GridResolution;                                                             // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptAppendMeshOptions
{
    EGeometryScriptCombineAttributesMode CombineMode;                                 // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGeometryScriptBakeOutputType
{
    EGeometryScriptBakeOutputMode OutputMode;                                         // 0x0000 (size: 0x1)
    FGeometryScriptBakeTypeOptions RGBA;                                              // 0x0008 (size: 0x18)
    FGeometryScriptBakeTypeOptions R;                                                 // 0x0020 (size: 0x18)
    FGeometryScriptBakeTypeOptions G;                                                 // 0x0038 (size: 0x18)
    FGeometryScriptBakeTypeOptions B;                                                 // 0x0050 (size: 0x18)
    FGeometryScriptBakeTypeOptions A;                                                 // 0x0068 (size: 0x18)

}; // Size: 0x80

struct FGeometryScriptBakeRenderCaptureOptions
{
    TArray<FGeometryScriptRenderCaptureCamera> Cameras;                               // 0x0000 (size: 0x10)
    EGeometryScriptBakeResolution RenderCaptureResolution;                            // 0x0010 (size: 0x1)
    double FieldOfViewDegrees;                                                        // 0x0018 (size: 0x8)
    double NearPlaneDist;                                                             // 0x0020 (size: 0x8)
    EGeometryScriptBakeResolution Resolution;                                         // 0x0028 (size: 0x1)
    EGeometryScriptBakeSamplesPerPixel SamplesPerPixel;                               // 0x0029 (size: 0x1)
    bool bRenderCaptureAntiAliasing;                                                  // 0x002A (size: 0x1)
    float CleanupTolerance;                                                           // 0x002C (size: 0x4)
    bool bBaseColorMap;                                                               // 0x0030 (size: 0x1)
    bool bNormalMap;                                                                  // 0x0031 (size: 0x1)
    bool bPackedMRSMap;                                                               // 0x0032 (size: 0x1)
    bool bMetallicMap;                                                                // 0x0033 (size: 0x1)
    bool bRoughnessMap;                                                               // 0x0034 (size: 0x1)
    bool bSpecularMap;                                                                // 0x0035 (size: 0x1)
    bool bEmissiveMap;                                                                // 0x0036 (size: 0x1)
    bool bOpacityMap;                                                                 // 0x0037 (size: 0x1)
    bool bSubsurfaceColorMap;                                                         // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FGeometryScriptBakeSourceMeshOptions
{
    class UTexture2D* SourceNormalMap;                                                // 0x0000 (size: 0x8)
    int32 SourceNormalUVLayer;                                                        // 0x0008 (size: 0x4)
    EGeometryScriptBakeNormalSpace SourceNormalSpace;                                 // 0x000C (size: 0x1)

}; // Size: 0x10

struct FGeometryScriptBakeTargetMeshOptions
{
    int32 TargetUVLayer;                                                              // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FGeometryScriptBakeTextureOptions
{
    EGeometryScriptBakeResolution Resolution;                                         // 0x0000 (size: 0x1)
    EGeometryScriptBakeBitDepth BitDepth;                                             // 0x0001 (size: 0x1)
    EGeometryScriptBakeSamplesPerPixel SamplesPerPixel;                               // 0x0002 (size: 0x1)
    class UTexture2D* SampleFilterMask;                                               // 0x0008 (size: 0x8)
    EGeometryScriptBakeFilteringType FilteringType;                                   // 0x0010 (size: 0x1)
    float ProjectionDistance;                                                         // 0x0014 (size: 0x4)
    bool bProjectionInWorldSpace;                                                     // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FGeometryScriptBakeTypeOptions
{
    EGeometryScriptBakeTypes BakeType;                                                // 0x0000 (size: 0x1)

}; // Size: 0x18

struct FGeometryScriptBakeVertexOptions
{
    bool bSplitAtNormalSeams;                                                         // 0x0000 (size: 0x1)
    bool bSplitAtUVSeams;                                                             // 0x0001 (size: 0x1)
    float ProjectionDistance;                                                         // 0x0004 (size: 0x4)
    bool bProjectionInWorldSpace;                                                     // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FGeometryScriptBendWarpOptions
{
    bool bSymmetricExtents;                                                           // 0x0000 (size: 0x1)
    float LowerExtent;                                                                // 0x0004 (size: 0x4)
    bool bBidirectional;                                                              // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FGeometryScriptBlurMeshVertexColorsOptions
{
    bool Red;                                                                         // 0x0000 (size: 0x1)
    bool Green;                                                                       // 0x0001 (size: 0x1)
    bool Blue;                                                                        // 0x0002 (size: 0x1)
    bool Alpha;                                                                       // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FGeometryScriptBoneInfo
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    FName Name;                                                                       // 0x0004 (size: 0x8)
    int32 ParentIndex;                                                                // 0x000C (size: 0x4)
    FTransform LocalTransform;                                                        // 0x0010 (size: 0x60)
    FTransform WorldTransform;                                                        // 0x0070 (size: 0x60)
    FLinearColor Color;                                                               // 0x00D0 (size: 0x10)

}; // Size: 0xE0

struct FGeometryScriptBoneWeight
{
    int32 BoneIndex;                                                                  // 0x0000 (size: 0x4)
    float Weight;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGeometryScriptBoneWeightProfile
{
    FName ProfileName;                                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGeometryScriptCalculateNormalsOptions
{
    bool bAngleWeighted;                                                              // 0x0000 (size: 0x1)
    bool bAreaWeighted;                                                               // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FGeometryScriptCollisionFromMeshOptions
{
    bool bEmitTransaction;                                                            // 0x0000 (size: 0x1)
    EGeometryScriptCollisionGenerationMethod Method;                                  // 0x0001 (size: 0x1)
    bool bAutoDetectSpheres;                                                          // 0x0002 (size: 0x1)
    bool bAutoDetectBoxes;                                                            // 0x0003 (size: 0x1)
    bool bAutoDetectCapsules;                                                         // 0x0004 (size: 0x1)
    float MinThickness;                                                               // 0x0008 (size: 0x4)
    bool bSimplifyHulls;                                                              // 0x000C (size: 0x1)
    int32 ConvexHullTargetFaceCount;                                                  // 0x0010 (size: 0x4)
    int32 MaxConvexHullsPerMesh;                                                      // 0x0014 (size: 0x4)
    float ConvexDecompositionSearchFactor;                                            // 0x0018 (size: 0x4)
    float ConvexDecompositionErrorTolerance;                                          // 0x001C (size: 0x4)
    float ConvexDecompositionMinPartThickness;                                        // 0x0020 (size: 0x4)
    float SweptHullSimplifyTolerance;                                                 // 0x0024 (size: 0x4)
    EGeometryScriptSweptHullAxis SweptHullAxis;                                       // 0x0028 (size: 0x1)
    bool bRemoveFullyContainedShapes;                                                 // 0x0029 (size: 0x1)
    int32 MaxShapeCount;                                                              // 0x002C (size: 0x4)

}; // Size: 0x30

struct FGeometryScriptColorFlags
{
    bool bRed;                                                                        // 0x0000 (size: 0x1)
    bool bGreen;                                                                      // 0x0001 (size: 0x1)
    bool bBlue;                                                                       // 0x0002 (size: 0x1)
    bool bAlpha;                                                                      // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FGeometryScriptColorList
{
}; // Size: 0x10

struct FGeometryScriptConstrainedDelaunayTriangulationOptions
{
    EGeometryScriptPolygonFillMode ConstrainedEdgesFillMode;                          // 0x0000 (size: 0x1)
    bool bValidateEdgesInResult;                                                      // 0x0001 (size: 0x1)
    bool bRemoveDuplicateVertices;                                                    // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FGeometryScriptConvexDecompositionOptions
{
    int32 NumHulls;                                                                   // 0x0000 (size: 0x4)
    double SearchFactor;                                                              // 0x0008 (size: 0x8)
    double ErrorTolerance;                                                            // 0x0010 (size: 0x8)
    double MinPartThickness;                                                          // 0x0018 (size: 0x8)
    int32 SimplifyToFaceCount;                                                        // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FGeometryScriptConvexHullApproximationOptions
{
    bool bFitSpheres;                                                                 // 0x0000 (size: 0x1)
    bool bFitBoxes;                                                                   // 0x0001 (size: 0x1)
    float DistanceThreshold;                                                          // 0x0004 (size: 0x4)
    float VolumeDiffThreshold_Fraction;                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptConvexHullOptions
{
    bool bPrefilterVertices;                                                          // 0x0000 (size: 0x1)
    int32 PrefilterGridResolution;                                                    // 0x0004 (size: 0x4)
    int32 SimplifyToFaceCount;                                                        // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptConvexHullSimplificationOptions
{
    EGeometryScriptConvexHullSimplifyMethod SimplificationMethod;                     // 0x0000 (size: 0x1)
    float SimplificationDistanceThreshold;                                            // 0x0004 (size: 0x4)
    float SimplificationAngleThreshold;                                               // 0x0008 (size: 0x4)
    int32 MinTargetFaceCount;                                                         // 0x000C (size: 0x4)

}; // Size: 0x10

struct FGeometryScriptCopyMeshFromAssetOptions
{
    bool bApplyBuildSettings;                                                         // 0x0000 (size: 0x1)
    bool bRequestTangents;                                                            // 0x0001 (size: 0x1)
    bool bIgnoreRemoveDegenerates;                                                    // 0x0002 (size: 0x1)
    bool bUseBuildScale;                                                              // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FGeometryScriptCopyMeshFromComponentOptions
{
    bool bWantNormals;                                                                // 0x0000 (size: 0x1)
    bool bWantTangents;                                                               // 0x0001 (size: 0x1)
    bool bWantInstanceColors;                                                         // 0x0002 (size: 0x1)
    FGeometryScriptMeshReadLOD RequestedLOD;                                          // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FGeometryScriptCopyMeshToAssetOptions
{
    bool bEnableRecomputeNormals;                                                     // 0x0000 (size: 0x1)
    bool bEnableRecomputeTangents;                                                    // 0x0001 (size: 0x1)
    bool bEnableRemoveDegenerates;                                                    // 0x0002 (size: 0x1)
    bool bUseBuildScale;                                                              // 0x0003 (size: 0x1)
    bool bReplaceMaterials;                                                           // 0x0004 (size: 0x1)
    TArray<class UMaterialInterface*> NewMaterials;                                   // 0x0008 (size: 0x10)
    TArray<FName> NewMaterialSlotNames;                                               // 0x0018 (size: 0x10)
    bool bApplyNaniteSettings;                                                        // 0x0028 (size: 0x1)
    FGeometryScriptNaniteOptions NaniteSettings;                                      // 0x002C (size: 0xC)
    FMeshNaniteSettings NewNaniteSettings;                                            // 0x0038 (size: 0x40)
    bool bEmitTransaction;                                                            // 0x0078 (size: 0x1)
    bool bDeferMeshPostEditChange;                                                    // 0x0079 (size: 0x1)

}; // Size: 0x80

struct FGeometryScriptDebugMessage
{
    EGeometryScriptDebugMessageType MessageType;                                      // 0x0000 (size: 0x1)
    EGeometryScriptErrorType ErrorType;                                               // 0x0001 (size: 0x1)
    FText Message;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FGeometryScriptDegenerateTriangleOptions
{
    EGeometryScriptRepairMeshMode Mode;                                               // 0x0000 (size: 0x1)
    double MinTriangleArea;                                                           // 0x0008 (size: 0x8)
    double MinEdgeLength;                                                             // 0x0010 (size: 0x8)
    bool bCompactOnCompletion;                                                        // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FGeometryScriptDetermineMeshOcclusionOptions
{
    double SamplingDensity;                                                           // 0x0000 (size: 0x8)
    bool bDoubleSided;                                                                // 0x0008 (size: 0x1)
    int32 NumSearchDirections;                                                        // 0x000C (size: 0x4)

}; // Size: 0x10

struct FGeometryScriptDisplaceFromTextureOptions
{
    float Magnitude;                                                                  // 0x0000 (size: 0x4)
    FVector2D UVScale;                                                                // 0x0008 (size: 0x10)
    FVector2D UVOffset;                                                               // 0x0018 (size: 0x10)
    float Center;                                                                     // 0x0028 (size: 0x4)
    int32 ImageChannel;                                                               // 0x002C (size: 0x4)
    EGeometryScriptEmptySelectionBehavior EmptyBehavior;                              // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FGeometryScriptDynamicMeshBVH
{
}; // Size: 0x20

struct FGeometryScriptExpMapUVOptions
{
    int32 NormalSmoothingRounds;                                                      // 0x0000 (size: 0x4)
    float NormalSmoothingAlpha;                                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGeometryScriptFillHolesOptions
{
    EGeometryScriptFillHolesMethod FillMethod;                                        // 0x0000 (size: 0x1)
    bool bDeleteIsolatedTriangles;                                                    // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FGeometryScriptFlareWarpOptions
{
    bool bSymmetricExtents;                                                           // 0x0000 (size: 0x1)
    float LowerExtent;                                                                // 0x0004 (size: 0x4)
    EGeometryScriptFlareType FlareType;                                               // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FGeometryScriptGeneralPolygonList
{
}; // Size: 0x10

struct FGeometryScriptGroupLayer
{
    bool bDefaultLayer;                                                               // 0x0000 (size: 0x1)
    int32 ExtendedLayerIndex;                                                         // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGeometryScriptIndexList
{
    EGeometryScriptIndexType IndexType;                                               // 0x0000 (size: 0x1)

}; // Size: 0x18

struct FGeometryScriptIsSameMeshOptions
{
    bool bCheckConnectivity;                                                          // 0x0000 (size: 0x1)
    bool bCheckEdgeIDs;                                                               // 0x0001 (size: 0x1)
    bool bCheckNormals;                                                               // 0x0002 (size: 0x1)
    bool bCheckColors;                                                                // 0x0003 (size: 0x1)
    bool bCheckUVs;                                                                   // 0x0004 (size: 0x1)
    bool bCheckGroups;                                                                // 0x0005 (size: 0x1)
    bool bCheckAttributes;                                                            // 0x0006 (size: 0x1)
    float Epsilon;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptIterativeMeshSmoothingOptions
{
    int32 NumIterations;                                                              // 0x0000 (size: 0x4)
    float Alpha;                                                                      // 0x0004 (size: 0x4)
    EGeometryScriptEmptySelectionBehavior EmptyBehavior;                              // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FGeometryScriptMathWarpOptions
{
    float Magnitude;                                                                  // 0x0000 (size: 0x4)
    float Frequency;                                                                  // 0x0004 (size: 0x4)
    float FrequencyShift;                                                             // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptMeasureMeshDistanceOptions
{
    bool bSymmetric;                                                                  // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGeometryScriptMergeSimpleCollisionOptions
{
    int32 MaxShapeCount;                                                              // 0x0000 (size: 0x4)
    double ErrorTolerance;                                                            // 0x0008 (size: 0x8)
    double MinThicknessTolerance;                                                     // 0x0010 (size: 0x8)
    bool bConsiderAllPossibleMerges;                                                  // 0x0018 (size: 0x1)
    FGeometryScriptSphereCovering PrecomputedNegativeSpace;                           // 0x0020 (size: 0x10)
    bool bComputeNegativeSpace;                                                       // 0x0030 (size: 0x1)
    FComputeNegativeSpaceOptions ComputeNegativeSpaceOptions;                         // 0x0038 (size: 0x28)
    FGeometryScriptSimpleCollisionTriangulationOptions ShapeToHullTriangulation;      // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FGeometryScriptMeshBevelOptions
{
    float BevelDistance;                                                              // 0x0000 (size: 0x4)
    bool bInferMaterialID;                                                            // 0x0004 (size: 0x1)
    int32 SetMaterialID;                                                              // 0x0008 (size: 0x4)
    int32 Subdivisions;                                                               // 0x000C (size: 0x4)
    float RoundWeight;                                                                // 0x0010 (size: 0x4)
    bool bApplyFilterBox;                                                             // 0x0014 (size: 0x1)
    FBox FilterBox;                                                                   // 0x0018 (size: 0x38)
    FTransform FilterBoxTransform;                                                    // 0x0050 (size: 0x60)
    bool bFullyContained;                                                             // 0x00B0 (size: 0x1)

}; // Size: 0xC0

struct FGeometryScriptMeshBevelSelectionOptions
{
    float BevelDistance;                                                              // 0x0000 (size: 0x4)
    bool bInferMaterialID;                                                            // 0x0004 (size: 0x1)
    int32 SetMaterialID;                                                              // 0x0008 (size: 0x4)
    int32 Subdivisions;                                                               // 0x000C (size: 0x4)
    float RoundWeight;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FGeometryScriptMeshBooleanOptions
{
    bool bFillHoles;                                                                  // 0x0000 (size: 0x1)
    bool bSimplifyOutput;                                                             // 0x0001 (size: 0x1)
    float SimplifyPlanarTolerance;                                                    // 0x0004 (size: 0x4)
    bool bAllowEmptyResult;                                                           // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FGeometryScriptMeshEditPolygroupOptions
{
    EGeometryScriptMeshEditPolygroupMode GroupMode;                                   // 0x0000 (size: 0x1)
    int32 ConstantGroup;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGeometryScriptMeshExtrudeOptions
{
    float ExtrudeDistance;                                                            // 0x0000 (size: 0x4)
    FVector ExtrudeDirection;                                                         // 0x0008 (size: 0x18)
    float UVScale;                                                                    // 0x0020 (size: 0x4)
    bool bSolidsToShells;                                                             // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FGeometryScriptMeshInsetOutsetFacesOptions
{
    float Distance;                                                                   // 0x0000 (size: 0x4)
    bool bReproject;                                                                  // 0x0004 (size: 0x1)
    bool bBoundaryOnly;                                                               // 0x0005 (size: 0x1)
    float Softness;                                                                   // 0x0008 (size: 0x4)
    float AreaScale;                                                                  // 0x000C (size: 0x4)
    EGeometryScriptPolyOperationArea AreaMode;                                        // 0x0010 (size: 0x1)
    FGeometryScriptMeshEditPolygroupOptions GroupOptions;                             // 0x0014 (size: 0x8)
    float UVScale;                                                                    // 0x001C (size: 0x4)

}; // Size: 0x20

struct FGeometryScriptMeshLinearExtrudeOptions
{
    float Distance;                                                                   // 0x0000 (size: 0x4)
    EGeometryScriptLinearExtrudeDirection DirectionMode;                              // 0x0004 (size: 0x1)
    FVector Direction;                                                                // 0x0008 (size: 0x18)
    EGeometryScriptPolyOperationArea AreaMode;                                        // 0x0020 (size: 0x1)
    FGeometryScriptMeshEditPolygroupOptions GroupOptions;                             // 0x0024 (size: 0x8)
    float UVScale;                                                                    // 0x002C (size: 0x4)
    bool bSolidsToShells;                                                             // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FGeometryScriptMeshMirrorOptions
{
    bool bApplyPlaneCut;                                                              // 0x0000 (size: 0x1)
    bool bFlipCutSide;                                                                // 0x0001 (size: 0x1)
    bool bWeldAlongPlane;                                                             // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FGeometryScriptMeshOffsetFacesOptions
{
    float Distance;                                                                   // 0x0000 (size: 0x4)
    EGeometryScriptOffsetFacesType OffsetType;                                        // 0x0004 (size: 0x1)
    EGeometryScriptPolyOperationArea AreaMode;                                        // 0x0005 (size: 0x1)
    FGeometryScriptMeshEditPolygroupOptions GroupOptions;                             // 0x0008 (size: 0x8)
    float UVScale;                                                                    // 0x0010 (size: 0x4)
    bool bSolidsToShells;                                                             // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FGeometryScriptMeshOffsetOptions
{
    float OffsetDistance;                                                             // 0x0000 (size: 0x4)
    bool bFixedBoundary;                                                              // 0x0004 (size: 0x1)
    int32 SolveSteps;                                                                 // 0x0008 (size: 0x4)
    float SmoothAlpha;                                                                // 0x000C (size: 0x4)
    bool bReprojectDuringSmoothing;                                                   // 0x0010 (size: 0x1)
    float BoundaryAlpha;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FGeometryScriptMeshPlaneCutOptions
{
    bool bFillHoles;                                                                  // 0x0000 (size: 0x1)
    bool bFillSpans;                                                                  // 0x0001 (size: 0x1)
    bool bFlipCutSide;                                                                // 0x0002 (size: 0x1)
    float UVWorldDimension;                                                           // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGeometryScriptMeshPlaneSliceOptions
{
    bool bFillHoles;                                                                  // 0x0000 (size: 0x1)
    bool bFillSpans;                                                                  // 0x0001 (size: 0x1)
    float GapWidth;                                                                   // 0x0004 (size: 0x4)
    float UVWorldDimension;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptMeshPointSamplingOptions
{
    float SamplingRadius;                                                             // 0x0000 (size: 0x4)
    int32 MaxNumSamples;                                                              // 0x0004 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x0008 (size: 0x4)
    double SubSampleDensity;                                                          // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FGeometryScriptMeshReadLOD
{
    EGeometryScriptLODType LODType;                                                   // 0x0000 (size: 0x1)
    int32 LODIndex;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGeometryScriptMeshSelection
{
}; // Size: 0x10

struct FGeometryScriptMeshSelfUnionOptions
{
    bool bFillHoles;                                                                  // 0x0000 (size: 0x1)
    bool bTrimFlaps;                                                                  // 0x0001 (size: 0x1)
    bool bSimplifyOutput;                                                             // 0x0002 (size: 0x1)
    float SimplifyPlanarTolerance;                                                    // 0x0004 (size: 0x4)
    float WindingThreshold;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptMeshWriteLOD
{
    bool bWriteHiResSource;                                                           // 0x0000 (size: 0x1)
    int32 LODIndex;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGeometryScriptMorphologyOptions
{
    FGeometryScript3DGridParameters SDFGridParameters;                                // 0x0000 (size: 0xC)
    bool bUseSeparateMeshGrid;                                                        // 0x000C (size: 0x1)
    FGeometryScript3DGridParameters MeshGridParameters;                               // 0x0010 (size: 0xC)
    EGeometryScriptMorphologicalOpType Operation;                                     // 0x001C (size: 0x1)
    float Distance;                                                                   // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FGeometryScriptNaniteOptions
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float FallbackPercentTriangles;                                                   // 0x0004 (size: 0x4)
    float FallbackRelativeError;                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptNonUniformPointSamplingOptions
{
    float MaxSamplingRadius;                                                          // 0x0000 (size: 0x4)
    EGeometryScriptSamplingDistributionMode SizeDistribution;                         // 0x0004 (size: 0x1)
    double SizeDistributionPower;                                                     // 0x0008 (size: 0x8)
    EGeometryScriptSamplingWeightMode WeightMode;                                     // 0x0010 (size: 0x1)
    bool bInvertWeights;                                                              // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FGeometryScriptOpenPathOffsetOptions
{
    EGeometryScriptPolyOffsetJoinType JoinType;                                       // 0x0000 (size: 0x1)
    double MiterLimit;                                                                // 0x0008 (size: 0x8)
    EGeometryScriptPathOffsetEndType EndType;                                         // 0x0010 (size: 0x1)
    double StepsPerRadianScale;                                                       // 0x0018 (size: 0x8)
    double MaximumStepsPerRadian;                                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FGeometryScriptPNTessellateOptions
{
    bool bRecomputeNormals;                                                           // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGeometryScriptPatchBuilderOptions
{
    int32 InitialPatchCount;                                                          // 0x0000 (size: 0x4)
    int32 MinPatchSize;                                                               // 0x0004 (size: 0x4)
    float PatchCurvatureAlignmentWeight;                                              // 0x0008 (size: 0x4)
    float PatchMergingMetricThresh;                                                   // 0x000C (size: 0x4)
    float PatchMergingAngleThresh;                                                    // 0x0010 (size: 0x4)
    FGeometryScriptExpMapUVOptions ExpMapOptions;                                     // 0x0014 (size: 0x8)
    bool bRespectInputGroups;                                                         // 0x001C (size: 0x1)
    FGeometryScriptGroupLayer GroupLayer;                                             // 0x0020 (size: 0x8)
    bool bAutoPack;                                                                   // 0x0028 (size: 0x1)
    FGeometryScriptRepackUVsOptions PackingOptions;                                   // 0x002C (size: 0x8)

}; // Size: 0x34

struct FGeometryScriptPerlinNoiseLayerOptions
{
    float Magnitude;                                                                  // 0x0000 (size: 0x4)
    float Frequency;                                                                  // 0x0004 (size: 0x4)
    FVector FrequencyShift;                                                           // 0x0008 (size: 0x18)
    int32 RandomSeed;                                                                 // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FGeometryScriptPerlinNoiseOptions
{
    FGeometryScriptPerlinNoiseLayerOptions BaseLayer;                                 // 0x0000 (size: 0x28)
    bool bApplyAlongNormal;                                                           // 0x0028 (size: 0x1)
    EGeometryScriptEmptySelectionBehavior EmptyBehavior;                              // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FGeometryScriptPlanarSimplifyOptions
{
    float AngleThreshold;                                                             // 0x0000 (size: 0x4)
    bool bAutoCompact;                                                                // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FGeometryScriptPointClusteringOptions
{
    TArray<FVector> InitialClusterCenters;                                            // 0x0000 (size: 0x10)
    int32 TargetNumClusters;                                                          // 0x0010 (size: 0x4)
    EGeometryScriptInitKMeansMethod InitializeMethod;                                 // 0x0014 (size: 0x1)
    int32 RandomSeed;                                                                 // 0x0018 (size: 0x4)
    int32 MaxIterations;                                                              // 0x001C (size: 0x4)

}; // Size: 0x20

struct FGeometryScriptPointFlatteningOptions
{
    FTransform Frame;                                                                 // 0x0000 (size: 0x60)
    EGeometryScriptAxis DropAxis;                                                     // 0x0060 (size: 0x1)

}; // Size: 0x70

struct FGeometryScriptPointPriorityOptions
{
    TArray<float> OptionalPriorityWeights;                                            // 0x0000 (size: 0x10)
    bool bUniformSpacing;                                                             // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FGeometryScriptPolyPath
{
    bool bClosedLoop;                                                                 // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FGeometryScriptPolygonOffsetOptions
{
    EGeometryScriptPolyOffsetJoinType JoinType;                                       // 0x0000 (size: 0x1)
    double MiterLimit;                                                                // 0x0008 (size: 0x8)
    bool bOffsetBothSides;                                                            // 0x0010 (size: 0x1)
    double StepsPerRadianScale;                                                       // 0x0018 (size: 0x8)
    double MaximumStepsPerRadian;                                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FGeometryScriptPolygonsTriangulationOptions
{
    bool bStillAppendOnTriangulationError;                                            // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGeometryScriptPolygroupSimplifyOptions
{
    float AngleThreshold;                                                             // 0x0000 (size: 0x4)
    bool bAutoCompact;                                                                // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FGeometryScriptPrimitiveOptions
{
    EGeometryScriptPrimitivePolygroupMode PolygroupMode;                              // 0x0000 (size: 0x1)
    bool bFlipOrientation;                                                            // 0x0001 (size: 0x1)
    EGeometryScriptPrimitiveUVMode UVMode;                                            // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FGeometryScriptRayHitResult
{
    bool bHit;                                                                        // 0x0000 (size: 0x1)
    float RayParameter;                                                               // 0x0004 (size: 0x4)
    int32 HitTriangleID;                                                              // 0x0008 (size: 0x4)
    FVector HitPosition;                                                              // 0x0010 (size: 0x18)
    FVector HitBaryCoords;                                                            // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FGeometryScriptRecomputeUVsOptions
{
    EGeometryScriptUVFlattenMethod Method;                                            // 0x0000 (size: 0x1)
    EGeometryScriptUVIslandSource IslandSource;                                       // 0x0001 (size: 0x1)
    FGeometryScriptExpMapUVOptions ExpMapOptions;                                     // 0x0004 (size: 0x8)
    FGeometryScriptSpectralConformalUVOptions SpectralConformalOptions;               // 0x000C (size: 0x1)
    FGeometryScriptGroupLayer GroupLayer;                                             // 0x0010 (size: 0x8)
    bool bAutoAlignIslandsWithAxes;                                                   // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FGeometryScriptRemeshOptions
{
    bool bDiscardAttributes;                                                          // 0x0000 (size: 0x1)
    bool bReprojectToInputMesh;                                                       // 0x0001 (size: 0x1)
    EGeometryScriptRemeshSmoothingType SmoothingType;                                 // 0x0002 (size: 0x1)
    float SmoothingRate;                                                              // 0x0004 (size: 0x4)
    EGeometryScriptRemeshEdgeConstraintType MeshBoundaryConstraint;                   // 0x0008 (size: 0x1)
    EGeometryScriptRemeshEdgeConstraintType GroupBoundaryConstraint;                  // 0x0009 (size: 0x1)
    EGeometryScriptRemeshEdgeConstraintType MaterialBoundaryConstraint;               // 0x000A (size: 0x1)
    bool bAllowFlips;                                                                 // 0x000B (size: 0x1)
    bool bAllowSplits;                                                                // 0x000C (size: 0x1)
    bool bAllowCollapses;                                                             // 0x000D (size: 0x1)
    bool bPreventNormalFlips;                                                         // 0x000E (size: 0x1)
    bool bPreventTinyTriangles;                                                       // 0x000F (size: 0x1)
    bool bUseFullRemeshPasses;                                                        // 0x0010 (size: 0x1)
    int32 RemeshIterations;                                                           // 0x0014 (size: 0x4)
    bool bAutoCompact;                                                                // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FGeometryScriptRemoveHiddenTrianglesOptions
{
    EGeometryScriptRemoveHiddenTrianglesMethod Method;                                // 0x0000 (size: 0x1)
    int32 SamplesPerTriangle;                                                         // 0x0004 (size: 0x4)
    int32 ShrinkSelection;                                                            // 0x0008 (size: 0x4)
    float WindingIsoValue;                                                            // 0x000C (size: 0x4)
    int32 RaysPerSample;                                                              // 0x0010 (size: 0x4)
    float NormalOffset;                                                               // 0x0014 (size: 0x4)
    bool bCompactResult;                                                              // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FGeometryScriptRemoveSmallComponentOptions
{
    float MinVolume;                                                                  // 0x0000 (size: 0x4)
    float MinArea;                                                                    // 0x0004 (size: 0x4)
    int32 MinTriangleCount;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptRenderCaptureCamera
{
    int32 Resolution;                                                                 // 0x0000 (size: 0x4)
    double FieldOfViewDegrees;                                                        // 0x0008 (size: 0x8)
    FVector ViewPosition;                                                             // 0x0010 (size: 0x18)
    FVector ViewDirection;                                                            // 0x0028 (size: 0x18)
    double NearPlaneDist;                                                             // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FGeometryScriptRenderCaptureCamerasForBoxOptions
{
    int32 Resolution;                                                                 // 0x0000 (size: 0x4)
    double FieldOfViewDegrees;                                                        // 0x0008 (size: 0x8)
    bool bViewFromBoxFaces;                                                           // 0x0010 (size: 0x1)
    bool bViewFromUpperCorners;                                                       // 0x0011 (size: 0x1)
    bool bViewFromLowerCorners;                                                       // 0x0012 (size: 0x1)
    bool bViewFromUpperEdges;                                                         // 0x0013 (size: 0x1)
    bool bViewFromLowerEdges;                                                         // 0x0014 (size: 0x1)
    bool bViewFromSideEdges;                                                          // 0x0015 (size: 0x1)
    TArray<FVector> ExtraViewFromPositions;                                           // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FGeometryScriptRenderCaptureTextures
{
    class UTexture2D* BaseColorMap;                                                   // 0x0000 (size: 0x8)
    bool bHasBaseColorMap;                                                            // 0x0008 (size: 0x1)
    class UTexture2D* NormalMap;                                                      // 0x0010 (size: 0x8)
    bool bHasNormalMap;                                                               // 0x0018 (size: 0x1)
    class UTexture2D* PackedMRSMap;                                                   // 0x0020 (size: 0x8)
    bool bHasPackedMRSMap;                                                            // 0x0028 (size: 0x1)
    class UTexture2D* MetallicMap;                                                    // 0x0030 (size: 0x8)
    bool bHasMetallicMap;                                                             // 0x0038 (size: 0x1)
    class UTexture2D* RoughnessMap;                                                   // 0x0040 (size: 0x8)
    bool bHasRoughnessMap;                                                            // 0x0048 (size: 0x1)
    class UTexture2D* SpecularMap;                                                    // 0x0050 (size: 0x8)
    bool bHasSpecularMap;                                                             // 0x0058 (size: 0x1)
    class UTexture2D* EmissiveMap;                                                    // 0x0060 (size: 0x8)
    bool bHasEmissiveMap;                                                             // 0x0068 (size: 0x1)
    class UTexture2D* OpacityMap;                                                     // 0x0070 (size: 0x8)
    bool bHasOpacityMap;                                                              // 0x0078 (size: 0x1)
    class UTexture2D* SubsurfaceColorMap;                                             // 0x0080 (size: 0x8)
    bool bHasSubsurfaceColorMap;                                                      // 0x0088 (size: 0x1)

}; // Size: 0x90

struct FGeometryScriptRepackUVsOptions
{
    int32 TargetImageWidth;                                                           // 0x0000 (size: 0x4)
    bool bOptimizeIslandRotation;                                                     // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FGeometryScriptResolveTJunctionOptions
{
    float Tolerance;                                                                  // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FGeometryScriptRevolveOptions
{
    float RevolveDegrees;                                                             // 0x0000 (size: 0x4)
    float DegreeOffset;                                                               // 0x0004 (size: 0x4)
    bool bReverseDirection;                                                           // 0x0008 (size: 0x1)
    bool bHardNormals;                                                                // 0x0009 (size: 0x1)
    float HardNormalAngle;                                                            // 0x000C (size: 0x4)
    bool bProfileAtMidpoint;                                                          // 0x0010 (size: 0x1)
    bool bFillPartialRevolveEndcaps;                                                  // 0x0011 (size: 0x1)

}; // Size: 0x14

struct FGeometryScriptSampleTextureOptions
{
    EGeometryScriptPixelSamplingMethod SamplingMethod;                                // 0x0000 (size: 0x1)
    bool bWrap;                                                                       // 0x0001 (size: 0x1)
    FVector2D UVScale;                                                                // 0x0008 (size: 0x10)
    FVector2D UVOffset;                                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FGeometryScriptScalarList
{
}; // Size: 0x10

struct FGeometryScriptSelectiveTessellateOptions
{
    bool bEnableMultithreading;                                                       // 0x0000 (size: 0x1)
    EGeometryScriptEmptySelectionBehavior EmptyBehavior;                              // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FGeometryScriptSetSimpleCollisionOptions
{
    bool bEmitTransaction;                                                            // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGeometryScriptSetStaticMeshCollisionOptions
{
    bool bMarkAsCustomized;                                                           // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGeometryScriptSimpleCollision
{
    FKAggregateGeom AggGeom;                                                          // 0x0000 (size: 0x80)

}; // Size: 0x80

struct FGeometryScriptSimpleCollisionTriangulationOptions
{
    int32 SphereStepsPerSide;                                                         // 0x0000 (size: 0x4)
    int32 CapsuleHemisphereSteps;                                                     // 0x0004 (size: 0x4)
    int32 CapsuleCircleSteps;                                                         // 0x0008 (size: 0x4)
    bool bApproximateLevelSetsWithCubes;                                              // 0x000C (size: 0x1)

}; // Size: 0x10

struct FGeometryScriptSimpleMeshBuffers
{
    TArray<FVector> Vertices;                                                         // 0x0000 (size: 0x10)
    TArray<FVector> Normals;                                                          // 0x0010 (size: 0x10)
    TArray<FVector2D> UV0;                                                            // 0x0020 (size: 0x10)
    TArray<FVector2D> UV1;                                                            // 0x0030 (size: 0x10)
    TArray<FVector2D> UV2;                                                            // 0x0040 (size: 0x10)
    TArray<FVector2D> UV3;                                                            // 0x0050 (size: 0x10)
    TArray<FVector2D> UV4;                                                            // 0x0060 (size: 0x10)
    TArray<FVector2D> UV5;                                                            // 0x0070 (size: 0x10)
    TArray<FVector2D> UV6;                                                            // 0x0080 (size: 0x10)
    TArray<FVector2D> UV7;                                                            // 0x0090 (size: 0x10)
    TArray<FLinearColor> VertexColors;                                                // 0x00A0 (size: 0x10)
    TArray<FIntVector> Triangles;                                                     // 0x00B0 (size: 0x10)
    TArray<int32> TriGroupIDs;                                                        // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FGeometryScriptSimplePolygon
{
}; // Size: 0x10

struct FGeometryScriptSimplifyMeshOptions
{
    EGeometryScriptRemoveMeshSimplificationType Method;                               // 0x0000 (size: 0x1)
    bool bAllowSeamCollapse;                                                          // 0x0001 (size: 0x1)
    bool bAllowSeamSmoothing;                                                         // 0x0002 (size: 0x1)
    bool bAllowSeamSplits;                                                            // 0x0003 (size: 0x1)
    bool bPreserveVertexPositions;                                                    // 0x0004 (size: 0x1)
    bool bRetainQuadricMemory;                                                        // 0x0005 (size: 0x1)
    bool bAutoCompact;                                                                // 0x0006 (size: 0x1)

}; // Size: 0x7

struct FGeometryScriptSmoothBoneWeightsOptions
{
    EGeometryScriptSmoothBoneWeightsType DistanceWeighingType;                        // 0x0000 (size: 0x1)
    float Stiffness;                                                                  // 0x0004 (size: 0x4)
    int32 MaxInfluences;                                                              // 0x0008 (size: 0x4)
    int32 VoxelResolution;                                                            // 0x000C (size: 0x4)

}; // Size: 0x10

struct FGeometryScriptSolidifyOptions
{
    FGeometryScript3DGridParameters GridParameters;                                   // 0x0000 (size: 0xC)
    float WindingThreshold;                                                           // 0x000C (size: 0x4)
    bool bSolidAtBoundaries;                                                          // 0x0010 (size: 0x1)
    float ExtendBounds;                                                               // 0x0014 (size: 0x4)
    int32 SurfaceSearchSteps;                                                         // 0x0018 (size: 0x4)
    bool bThickenShells;                                                              // 0x001C (size: 0x1)
    double ShellThickness;                                                            // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FGeometryScriptSpatialQueryOptions
{
    float MaxDistance;                                                                // 0x0000 (size: 0x4)
    bool bAllowUnsafeModifiedQueries;                                                 // 0x0004 (size: 0x1)
    float WindingIsoThreshold;                                                        // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptSpectralConformalUVOptions
{
    bool bPreserveIrregularity;                                                       // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGeometryScriptSphereCovering
{
}; // Size: 0x10

struct FGeometryScriptSplineSamplingOptions
{
    int32 NumSamples;                                                                 // 0x0000 (size: 0x4)
    float ErrorTolerance;                                                             // 0x0004 (size: 0x4)
    EGeometryScriptSampleSpacing SampleSpacing;                                       // 0x0008 (size: 0x1)
    TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;                        // 0x0009 (size: 0x1)
    EGeometryScriptEvaluateSplineRange RangeMethod;                                   // 0x000A (size: 0x1)
    float RangeStart;                                                                 // 0x000C (size: 0x4)
    float RangeEnd;                                                                   // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FGeometryScriptSplitNormalsOptions
{
    bool bSplitByOpeningAngle;                                                        // 0x0000 (size: 0x1)
    float OpeningAngleDeg;                                                            // 0x0004 (size: 0x4)
    bool bSplitByFaceGroup;                                                           // 0x0008 (size: 0x1)
    FGeometryScriptGroupLayer GroupLayer;                                             // 0x000C (size: 0x8)

}; // Size: 0x14

struct FGeometryScriptSweptHullOptions
{
    bool bPrefilterVertices;                                                          // 0x0000 (size: 0x1)
    int32 PrefilterGridResolution;                                                    // 0x0004 (size: 0x4)
    float MinThickness;                                                               // 0x0008 (size: 0x4)
    bool bSimplify;                                                                   // 0x000C (size: 0x1)
    float MinEdgeLength;                                                              // 0x0010 (size: 0x4)
    float SimplifyTolerance;                                                          // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FGeometryScriptTangentsOptions
{
    EGeometryScriptTangentTypes Type;                                                 // 0x0000 (size: 0x1)
    int32 UVLayer;                                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGeometryScriptTransferBoneWeightsOptions
{
    ETransferBoneWeightsMethod TransferMethod;                                        // 0x0000 (size: 0x1)
    EOutputTargetMeshBones OutputTargetMeshBones;                                     // 0x0001 (size: 0x1)
    FGeometryScriptBoneWeightProfile SourceProfile;                                   // 0x0004 (size: 0x8)
    FGeometryScriptBoneWeightProfile TargetProfile;                                   // 0x000C (size: 0x8)
    double RadiusPercentage;                                                          // 0x0018 (size: 0x8)
    double NormalThreshold;                                                           // 0x0020 (size: 0x8)
    bool LayeredMeshSupport;                                                          // 0x0028 (size: 0x1)
    int32 NumSmoothingIterations;                                                     // 0x002C (size: 0x4)
    float SmoothingStrength;                                                          // 0x0030 (size: 0x4)
    FName InpaintMask;                                                                // 0x0034 (size: 0x8)

}; // Size: 0x40

struct FGeometryScriptTransformCollisionOptions
{
    bool bWarnOnInvalidTransforms;                                                    // 0x0000 (size: 0x1)
    bool bCenterTransformPivotPerShape;                                               // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FGeometryScriptTriangle
{
    FVector Vector0;                                                                  // 0x0000 (size: 0x18)
    FVector Vector1;                                                                  // 0x0018 (size: 0x18)
    FVector Vector2;                                                                  // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FGeometryScriptTriangleList
{
}; // Size: 0x10

struct FGeometryScriptTrianglePoint
{
    bool bValid;                                                                      // 0x0000 (size: 0x1)
    int32 TriangleID;                                                                 // 0x0004 (size: 0x4)
    FVector position;                                                                 // 0x0008 (size: 0x18)
    FVector BaryCoords;                                                               // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FGeometryScriptTwistWarpOptions
{
    bool bSymmetricExtents;                                                           // 0x0000 (size: 0x1)
    float LowerExtent;                                                                // 0x0004 (size: 0x4)
    bool bBidirectional;                                                              // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FGeometryScriptUVList
{
}; // Size: 0x10

struct FGeometryScriptUVTriangle
{
    FVector2D UV0;                                                                    // 0x0000 (size: 0x10)
    FVector2D UV1;                                                                    // 0x0010 (size: 0x10)
    FVector2D UV2;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGeometryScriptUniformRemeshOptions
{
    EGeometryScriptUniformRemeshTargetType TargetType;                                // 0x0000 (size: 0x1)
    int32 TargetTriangleCount;                                                        // 0x0004 (size: 0x4)
    float TargetEdgeLength;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryScriptVectorList
{
}; // Size: 0x10

struct FGeometryScriptVoronoiOptions
{
    float BoundsExpand;                                                               // 0x0000 (size: 0x4)
    FBox Bounds;                                                                      // 0x0008 (size: 0x38)
    TArray<int32> CreateCells;                                                        // 0x0040 (size: 0x10)
    bool bIncludeBoundary;                                                            // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FGeometryScriptWeldEdgesOptions
{
    float Tolerance;                                                                  // 0x0000 (size: 0x4)
    bool bOnlyUniquePairs;                                                            // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FGeometryScriptXAtlasOptions
{
    int32 MaxIterations;                                                              // 0x0000 (size: 0x4)

}; // Size: 0x4

class UGeometryScriptDebug : public UObject
{
    TArray<FGeometryScriptDebugMessage> Messages;                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{

    bool TestPointInsideBox(FBox Box, FVector Point, bool bConsiderOnBoxAsInside);
    bool TestBoxSphereIntersection(FBox Box, FVector SphereCenter, double SphereRadius);
    bool TestBoxBoxIntersection(FBox Box1, FBox Box2);
    FBox MakeBoxFromCenterSize(FVector Center, FVector Dimensions);
    FBox MakeBoxFromCenterExtents(FVector Center, FVector Extents);
    FBox GetTransformedBox(FBox Box, FTransform Transform);
    FBox GetExpandedBox(FBox Box, FVector ExpandBy);
    void GetBoxVolumeArea(FBox Box, double& Volume, double& SurfaceArea);
    double GetBoxPointDistance(FBox Box, FVector Point);
    FVector GetBoxFaceCenter(FBox Box, int32 FaceIndex, FVector& FaceNormal);
    FVector GetBoxCorner(FBox Box, int32 CornerIndex);
    void GetBoxCenterSize(FBox Box, FVector& Center, FVector& Dimensions);
    double GetBoxBoxDistance(FBox Box1, FBox Box2);
    FVector FindClosestPointOnBox(FBox Box, FVector Point, bool& bIsInside);
    FBox FindBoxBoxIntersection(FBox Box1, FBox Box2, bool& bIsIntersecting);
}; // Size: 0x28

class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary
{

    FGeometryScriptSimpleCollision TransformSimpleCollisionShapes(const FGeometryScriptSimpleCollision& SimpleCollision, FTransform Transform, const FGeometryScriptTransformCollisionOptions& TransformOptions, bool& bSuccess, class UGeometryScriptDebug* Debug);
    bool StaticMeshHasCustomizedCollision(class UStaticMesh* StaticMeshAsset);
    void SimplifyConvexHulls(FGeometryScriptSimpleCollision& SimpleCollision, const FGeometryScriptConvexHullSimplificationOptions& SimplifyOptions, bool& bHasSimplified, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, FGeometryScriptCollisionFromMeshOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, class UGeometryScriptDebug* Debug);
    void SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, class UGeometryScriptDebug* Debug);
    void SetSimpleCollisionOfStaticMesh(const FGeometryScriptSimpleCollision& SimpleCollision, class UStaticMesh* StaticMesh, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, class UGeometryScriptDebug* Debug);
    void SetSimpleCollisionOfDynamicMeshComponent(const FGeometryScriptSimpleCollision& SimpleCollision, class UDynamicMeshComponent* DynamicMeshComponent, FGeometryScriptSetSimpleCollisionOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, FGeometryScriptCollisionFromMeshOptions Options, class UGeometryScriptDebug* Debug);
    void ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug);
    FGeometryScriptSimpleCollision MergeSimpleCollisionShapes(const FGeometryScriptSimpleCollision& SimpleCollision, const FGeometryScriptMergeSimpleCollisionOptions& MergeOptions, bool& bHasMerged, class UGeometryScriptDebug* Debug);
    int32 GetSimpleCollisionShapeCount(const FGeometryScriptSimpleCollision& SimpleCollision);
    FGeometryScriptSimpleCollision GetSimpleCollisionFromStaticMesh(class UStaticMesh* StaticMesh, class UGeometryScriptDebug* Debug);
    FGeometryScriptSimpleCollision GetSimpleCollisionFromComponent(class UPrimitiveComponent* Component, class UGeometryScriptDebug* Debug);
    FGeometryScriptSphereCovering Conv_SphereArrayToGeometryScriptSphereCovering(const TArray<FSphere>& Spheres);
    TArray<FSphere> Conv_GeometryScriptSphereCoveringToSphereArray(const FGeometryScriptSphereCovering& SphereCovering);
    FGeometryScriptSphereCovering ComputeNegativeSpace(const FGeometryScriptDynamicMeshBVH& MeshBVH, const FComputeNegativeSpaceOptions& NegativeSpaceOptions, class UGeometryScriptDebug* Debug);
    void CombineSimpleCollision(FGeometryScriptSimpleCollision& CollisionToUpdate, const FGeometryScriptSimpleCollision& AppendCollision, class UGeometryScriptDebug* Debug);
    void ApproximateConvexHullsWithSimplerCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, const FGeometryScriptConvexHullApproximationOptions& ApproximateOptions, bool& bHasApproximated, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* ComputeMeshSweptHull(class UDynamicMesh* targetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, FTransform ProjectionFrame, FGeometryScriptSweptHullOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputeMeshConvexHull(class UDynamicMesh* targetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, FGeometryScriptMeshSelection Selection, FGeometryScriptConvexHullOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputeMeshConvexDecomposition(class UDynamicMesh* targetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, FGeometryScriptConvexDecompositionOptions Options, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{

    void SetVectorListItem(FGeometryScriptVectorList& VectorList, int32 Index, FVector NewValue, bool& bIsValidIndex);
    void SetUVListItem(FGeometryScriptUVList& UVList, int32 Index, FVector2D NewUV, bool& bIsValidIndex);
    void SetScalarListItem(FGeometryScriptScalarList& ScalarList, int32 Index, double NewValue, bool& bIsValidIndex);
    void SetIndexListItem(FGeometryScriptIndexList& IndexList, int32 Index, int32 NewValue, bool& bIsValidIndex);
    void SetColorListItem(FGeometryScriptColorList& ColorList, int32 Index, FLinearColor NewColor, bool& bIsValidIndex);
    int32 GetVectorListLength(FGeometryScriptVectorList VectorList);
    int32 GetVectorListLastIndex(FGeometryScriptVectorList VectorList);
    FVector GetVectorListItem(FGeometryScriptVectorList VectorList, int32 Index, bool& bIsValidIndex);
    int32 GetUVListLength(FGeometryScriptUVList UVList);
    int32 GetUVListLastIndex(FGeometryScriptUVList UVList);
    FVector2D GetUVListItem(FGeometryScriptUVList UVList, int32 Index, bool& bIsValidIndex);
    int32 GetTriangleListLength(FGeometryScriptTriangleList TriangleList);
    int32 GetTriangleListLastTriangle(FGeometryScriptTriangleList TriangleList);
    FIntVector GetTriangleListItem(FGeometryScriptTriangleList TriangleList, int32 Triangle, bool& bIsValidTriangle);
    int32 GetScalarListLength(FGeometryScriptScalarList ScalarList);
    int32 GetScalarListLastIndex(FGeometryScriptScalarList ScalarList);
    double GetScalarListItem(FGeometryScriptScalarList ScalarList, int32 Index, bool& bIsValidIndex);
    int32 GetIndexListLength(FGeometryScriptIndexList IndexList);
    int32 GetIndexListLastIndex(FGeometryScriptIndexList IndexList);
    int32 GetIndexListItem(FGeometryScriptIndexList IndexList, int32 Index, bool& bIsValidIndex);
    int32 GetColorListLength(FGeometryScriptColorList ColorList);
    int32 GetColorListLastIndex(FGeometryScriptColorList ColorList);
    FLinearColor GetColorListItem(FGeometryScriptColorList ColorList, int32 Index, bool& bIsValidIndex);
    void ExtractColorListChannels(FGeometryScriptColorList ColorList, FGeometryScriptVectorList& VectorList, int32 XChannelIndex, int32 YChannelIndex, int32 ZChannelIndex);
    void ExtractColorListChannel(FGeometryScriptColorList ColorList, FGeometryScriptScalarList& ScalarList, int32 ChannelIndex);
    void DuplicateVectorList(FGeometryScriptVectorList VectorList, FGeometryScriptVectorList& DuplicateList);
    void DuplicateUVList(FGeometryScriptUVList UVList, FGeometryScriptUVList& DuplicateList);
    void DuplicateScalarList(FGeometryScriptScalarList ScalarList, FGeometryScriptScalarList& DuplicateList);
    void DuplicateIndexList(FGeometryScriptIndexList IndexList, FGeometryScriptIndexList& DuplicateList);
    void DuplicateColorList(FGeometryScriptColorList ColorList, FGeometryScriptColorList& DuplicateList);
    void ConvertVectorListToArray(FGeometryScriptVectorList VectorList, TArray<FVector>& VectorArray);
    void ConvertUVListToArray(FGeometryScriptUVList UVList, TArray<FVector2D>& UVArray);
    void ConvertTriangleListToArray(FGeometryScriptTriangleList TriangleList, TArray<FIntVector>& TriangleArray);
    void ConvertScalarListToArray(FGeometryScriptScalarList ScalarList, TArray<double>& ScalarArray);
    void ConvertIndexListToArray(FGeometryScriptIndexList IndexList, TArray<int32>& IndexArray);
    void ConvertColorListToArray(FGeometryScriptColorList ColorList, TArray<FLinearColor>& ColorArray);
    void ConvertArrayToVectorList(const TArray<FVector>& VectorArray, FGeometryScriptVectorList& VectorList);
    void ConvertArrayToUVList(const TArray<FVector2D>& UVArray, FGeometryScriptUVList& UVList);
    void ConvertArrayToTriangleList(const TArray<FIntVector>& TriangleArray, FGeometryScriptTriangleList& TriangleList);
    void ConvertArrayToScalarList(const TArray<double>& VectorArray, FGeometryScriptScalarList& ScalarList);
    void ConvertArrayToIndexList(const TArray<int32>& IndexArray, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType IndexType);
    void ConvertArrayToColorList(const TArray<FLinearColor>& ColorArray, FGeometryScriptColorList& ColorList);
    void ClearVectorList(FGeometryScriptVectorList& VectorList, FVector ClearValue);
    void ClearUVList(FGeometryScriptUVList& UVList, FVector2D ClearUV);
    void ClearScalarList(FGeometryScriptScalarList& ScalarList, double ClearValue);
    void ClearIndexList(FGeometryScriptIndexList& IndexList, int32 ClearValue);
    void ClearColorList(FGeometryScriptColorList& ColorList, FLinearColor ClearColor);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{

    FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor();
    FGeometryScriptBakeTypeOptions MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32 SourceUVLayer);
    FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal();
    FGeometryScriptBakeTypeOptions MakeBakeTypePosition();
    FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal();
    FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(const TArray<class UTexture2D*>& MaterialIDSourceTextures, int32 SourceUVLayer);
    FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID();
    FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal();
    FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode CurvatureType, EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, EGeometryScriptBakeCurvatureClampMode Clamping);
    FGeometryScriptBakeTypeOptions MakeBakeTypeConstant(float Value);
    FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32 OcclusionRays, float MaxDistance, float SpreadAngle);
    FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32 OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle);
    int32 ConvertBakeResolutionToInt(EGeometryScriptBakeResolution BakeResolution);
    class UDynamicMesh* BakeVertex(class UDynamicMesh* targetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, class UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, FGeometryScriptBakeOutputType BakeTypes, FGeometryScriptBakeVertexOptions BakeOptions, class UGeometryScriptDebug* Debug);
    FGeometryScriptRenderCaptureTextures BakeTextureFromRenderCaptures(class UDynamicMesh* targetMesh, FTransform TargetLocalToWorld, FGeometryScriptBakeTargetMeshOptions TargetOptions, const TArray<class AActor*> SourceActors, FGeometryScriptBakeRenderCaptureOptions BakeOptions, class UGeometryScriptDebug* Debug);
    TArray<class UTexture2D*> BakeTexture(class UDynamicMesh* targetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, class UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, const TArray<FGeometryScriptBakeTypeOptions>& BakeTypes, FGeometryScriptBakeTextureOptions BakeOptions, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* SetVertexPosition(class UDynamicMesh* targetMesh, int32 VertexID, FVector NewPosition, bool& bIsValidVertex, bool bDeferChangeNotifications);
    class UDynamicMesh* SetAllMeshVertexPositions(class UDynamicMesh* targetMesh, FGeometryScriptVectorList PositionList, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* DiscardMeshAttributes(class UDynamicMesh* targetMesh, bool bDeferChangeNotifications);
    class UDynamicMesh* DeleteVerticesFromMesh(class UDynamicMesh* targetMesh, FGeometryScriptIndexList VertexList, int32& NumDeleted, bool bDeferChangeNotifications);
    class UDynamicMesh* DeleteVertexFromMesh(class UDynamicMesh* targetMesh, int32 VertexID, bool& bWasVertexDeleted, bool bDeferChangeNotifications);
    class UDynamicMesh* DeleteTrianglesFromMesh(class UDynamicMesh* targetMesh, FGeometryScriptIndexList TriangleList, int32& NumDeleted, bool bDeferChangeNotifications);
    class UDynamicMesh* DeleteTriangleFromMesh(class UDynamicMesh* targetMesh, int32 TriangleID, bool& bWasTriangleDeleted, bool bDeferChangeNotifications);
    class UDynamicMesh* DeleteSelectedTrianglesFromMesh(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, int32& NumDeleted, bool bDeferChangeNotifications);
    class UDynamicMesh* AppendMeshTransformed(class UDynamicMesh* targetMesh, class UDynamicMesh* AppendMesh, const TArray<FTransform>& AppendTransforms, FTransform ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendMeshRepeated(class UDynamicMesh* targetMesh, class UDynamicMesh* AppendMesh, FTransform AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendMesh(class UDynamicMesh* targetMesh, class UDynamicMesh* AppendMesh, FTransform AppendTransform, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendBuffersToMesh(class UDynamicMesh* targetMesh, const FGeometryScriptSimpleMeshBuffers& Buffers, FGeometryScriptIndexList& NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AddVerticesToMesh(class UDynamicMesh* targetMesh, FGeometryScriptVectorList NewPositionsList, FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications);
    class UDynamicMesh* AddVertexToMesh(class UDynamicMesh* targetMesh, FVector NewPosition, int32& NewVertexIndex, bool bDeferChangeNotifications);
    class UDynamicMesh* AddTriangleToMesh(class UDynamicMesh* targetMesh, FIntVector NewTriangle, int32& NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AddTrianglesToMesh(class UDynamicMesh* targetMesh, FGeometryScriptTriangleList NewTrianglesList, FGeometryScriptIndexList& NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* TransferBoneWeightsFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* targetMesh, FGeometryScriptTransferBoneWeightsOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetVertexBoneWeights(class UDynamicMesh* targetMesh, int32 VertexID, const TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bIsValidVertexID, FGeometryScriptBoneWeightProfile Profile);
    class UDynamicMesh* SetAllVertexBoneWeights(class UDynamicMesh* targetMesh, const TArray<FGeometryScriptBoneWeight>& BoneWeights, FGeometryScriptBoneWeightProfile Profile);
    class UDynamicMesh* MeshHasBoneWeights(class UDynamicMesh* targetMesh, bool& bHasBoneWeights, FGeometryScriptBoneWeightProfile Profile);
    class UDynamicMesh* MeshCreateBoneWeights(class UDynamicMesh* targetMesh, bool& bProfileExisted, bool bReplaceExistingProfile, FGeometryScriptBoneWeightProfile Profile);
    class UDynamicMesh* GetVertexBoneWeights(class UDynamicMesh* targetMesh, int32 VertexID, TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile);
    class UDynamicMesh* GetRootBoneName(class UDynamicMesh* targetMesh, FName& BoneName, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetMaxBoneWeightIndex(class UDynamicMesh* targetMesh, bool& bHasBoneWeights, int32& MaxBoneIndex, FGeometryScriptBoneWeightProfile Profile);
    class UDynamicMesh* GetLargestVertexBoneWeight(class UDynamicMesh* targetMesh, int32 VertexID, FGeometryScriptBoneWeight& BoneWeight, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile);
    class UDynamicMesh* GetBoneInfo(class UDynamicMesh* targetMesh, FName BoneName, bool& bIsValidBoneName, FGeometryScriptBoneInfo& BoneInfo, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetBoneIndex(class UDynamicMesh* targetMesh, FName BoneName, bool& bIsValidBoneName, int32& BoneIndex, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetBoneChildren(class UDynamicMesh* targetMesh, FName BoneName, bool bRecursive, bool& bIsValidBoneName, TArray<FGeometryScriptBoneInfo>& ChildrenInfo, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetAllBonesInfo(class UDynamicMesh* targetMesh, TArray<FGeometryScriptBoneInfo>& BonesInfo, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* DiscardBonesFromMesh(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyBonesFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputeSmoothBoneWeights(class UDynamicMesh* targetMesh, class USkeleton* Skeleton, FGeometryScriptSmoothBoneWeightsOptions Options, FGeometryScriptBoneWeightProfile Profile, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* ApplyMeshSelfUnion(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelfUnionOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshPlaneSlice(class UDynamicMesh* targetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneSliceOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshPlaneCut(class UDynamicMesh* targetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneCutOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshMirror(class UDynamicMesh* targetMesh, FTransform MirrorFrame, FGeometryScriptMeshMirrorOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshBoolean(class UDynamicMesh* targetMesh, FTransform TargetTransform, class UDynamicMesh* ToolMesh, FTransform ToolTransform, EGeometryScriptBooleanOperation Operation, FGeometryScriptMeshBooleanOptions Options, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* MeasureDistancesBetweenMeshes(class UDynamicMesh* targetMesh, class UDynamicMesh* OtherMesh, FGeometryScriptMeasureMeshDistanceOptions Options, double& MaxDistance, double& MinDistance, double& AverageDistance, double& RootMeanSqrDeviation, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* IsSameMeshAs(class UDynamicMesh* targetMesh, class UDynamicMesh* OtherMesh, FGeometryScriptIsSameMeshOptions Options, bool& bIsSameMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* IsIntersectingMesh(class UDynamicMesh* targetMesh, FTransform TargetTransform, class UDynamicMesh* OtherMesh, FTransform OtherTransform, bool& bIsIntersecting, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* SplitMeshByPolygroups(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, TArray<class UDynamicMesh*>& ComponentMeshes, TArray<int32>& ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SplitMeshByMaterialIDs(class UDynamicMesh* targetMesh, TArray<class UDynamicMesh*>& ComponentMeshes, TArray<int32>& ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SplitMeshByComponents(class UDynamicMesh* targetMesh, TArray<class UDynamicMesh*>& ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetSubMeshFromMesh(class UDynamicMesh* targetMesh, class UDynamicMesh*& StoreToSubmesh, FGeometryScriptIndexList TriangleList, class UDynamicMesh*& StoreToSubmeshOut, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyMeshSelectionToMesh(class UDynamicMesh* targetMesh, class UDynamicMesh*& StoreToSubmesh, FGeometryScriptMeshSelection Selection, class UDynamicMesh*& StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* ApplyTwistWarpToMesh(class UDynamicMesh* targetMesh, FGeometryScriptTwistWarpOptions Options, FTransform TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyPerlinNoiseToMesh(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptPerlinNoiseOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMathWarpToMesh(class UDynamicMesh* targetMesh, FTransform WarpOrientation, EGeometryScriptMathWarpType WarpType, FGeometryScriptMathWarpOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyIterativeSmoothingToMesh(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIterativeMeshSmoothingOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyFlareWarpToMesh(class UDynamicMesh* targetMesh, FGeometryScriptFlareWarpOptions Options, FTransform FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyDisplaceFromTextureMap(class UDynamicMesh* targetMesh, class UTexture2D* Texture, FGeometryScriptMeshSelection Selection, FGeometryScriptDisplaceFromTextureOptions Options, int32 UVLayer, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, const FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyBendWarpToMesh(class UDynamicMesh* targetMesh, FGeometryScriptBendWarpOptions Options, FTransform BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshGeodesicFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* GetShortestVertexPath(class UDynamicMesh* targetMesh, int32 StartVertexID, int32 EndVertexID, FGeometryScriptIndexList& VertexIDList, bool& bFoundErrors, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetShortestSurfacePath(class UDynamicMesh* targetMesh, int32 StartTriangleID, FVector StartBaryCoords, int32 EndTriangleID, FVector EndBaryCoords, FGeometryScriptPolyPath& ShortestPath, bool& bFoundErrors, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CreateSurfacePath(class UDynamicMesh* targetMesh, FVector Direction, int32 StartTriangleID, FVector StartBaryCoords, float MaxPathLength, FGeometryScriptPolyPath& SurfacePath, bool& bFoundErrors, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* SetTriangleMaterialID(class UDynamicMesh* targetMesh, int32 TriangleID, int32 MaterialID, bool& bIsValidTriangle, bool bDeferChangeNotifications);
    class UDynamicMesh* SetPolygroupMaterialID(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, int32 MaterialID, bool& bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMaterialIDOnTriangles(class UDynamicMesh* targetMesh, FGeometryScriptIndexList TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMaterialIDForMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetAllTriangleMaterialIDs(class UDynamicMesh* targetMesh, FGeometryScriptIndexList TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RemapToNewMaterialIDsByMaterial(class UDynamicMesh* targetMesh, const TArray<class UMaterialInterface*>& FromMaterialList, const TArray<class UMaterialInterface*>& ToMaterialList, int32 MissingMaterialID, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RemapMaterialIDs(class UDynamicMesh* targetMesh, int32 FromMaterialID, int32 ToMaterialID, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetTrianglesByMaterialID(class UDynamicMesh* targetMesh, int32 MaterialID, FGeometryScriptIndexList& TriangleIDList, class UGeometryScriptDebug* Debug);
    int32 GetTriangleMaterialID(class UDynamicMesh* targetMesh, int32 TriangleID, bool& bIsValidTriangle);
    int32 GetMaxMaterialID(class UDynamicMesh* targetMesh, bool& bHasMaterialIDs);
    class UDynamicMesh* GetMaterialIDsOfTriangles(class UDynamicMesh* targetMesh, FGeometryScriptIndexList TriangleIDList, FGeometryScriptIndexList& MaterialIDList, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetAllTriangleMaterialIDs(class UDynamicMesh* targetMesh, FGeometryScriptIndexList& MaterialIDList, bool& bHasMaterialIDs);
    class UDynamicMesh* EnableMaterialIDs(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* DeleteTrianglesByMaterialID(class UDynamicMesh* targetMesh, int32 MaterialID, int32& NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CompactMaterialIDs(class UDynamicMesh* targetMesh, TArray<class UMaterialInterface*> SourceMaterialList, TArray<class UMaterialInterface*>& CompactedMaterialList, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ClearMaterialIDs(class UDynamicMesh* targetMesh, int32 ClearValue, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* ApplyMeshShell(class UDynamicMesh* targetMesh, FGeometryScriptMeshOffsetOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshPolygroupBevel(class UDynamicMesh* targetMesh, FGeometryScriptMeshBevelOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshOffsetFaces(class UDynamicMesh* targetMesh, FGeometryScriptMeshOffsetFacesOptions Options, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshOffset(class UDynamicMesh* targetMesh, FGeometryScriptMeshOffsetOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshLinearExtrudeFaces(class UDynamicMesh* targetMesh, FGeometryScriptMeshLinearExtrudeOptions Options, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshInsetOutsetFaces(class UDynamicMesh* targetMesh, FGeometryScriptMeshInsetOutsetFacesOptions Options, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* targetMesh, FGeometryScriptMeshExtrudeOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshDuplicateFaces(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewTriangles, FGeometryScriptMeshEditPolygroupOptions GroupOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshDisconnectFaces(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshBevelSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, EGeometryScriptMeshBevelSelectionMode BevelMode, FGeometryScriptMeshBevelSelectionOptions BevelOptions, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* UpdateVertexNormal(class UDynamicMesh* targetMesh, int32 VertexID, bool bUpdateNormal, FVector NewNormal, bool bUpdateTangents, FVector NewTangentX, FVector NewTangentY, bool& bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications);
    class UDynamicMesh* SetPerVertexNormals(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetPerFaceNormals(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMeshTriangleNormals(class UDynamicMesh* targetMesh, int32 TriangleID, FGeometryScriptTriangle Normals, bool& bIsValidTriangle, bool bDeferChangeNotifications);
    class UDynamicMesh* SetMeshPerVertexTangents(class UDynamicMesh* targetMesh, FGeometryScriptVectorList TangentXList, FGeometryScriptVectorList TangentYList, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMeshPerVertexNormals(class UDynamicMesh* targetMesh, FGeometryScriptVectorList VertexNormalList, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RecomputeNormalsForMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RecomputeNormals(class UDynamicMesh* targetMesh, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetMeshPerVertexTangents(class UDynamicMesh* targetMesh, FGeometryScriptVectorList& TangentXList, FGeometryScriptVectorList& TangentYList, bool& bIsValidTangentSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues);
    class UDynamicMesh* GetMeshPerVertexNormals(class UDynamicMesh* targetMesh, FGeometryScriptVectorList& NormalList, bool& bIsValidNormalSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues);
    class UDynamicMesh* GetMeshHasTangents(class UDynamicMesh* targetMesh, bool& bHasTangents, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* FlipNormals(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* DiscardTangents(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputeTangents(class UDynamicMesh* targetMesh, FGeometryScriptTangentsOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputeSplitNormals(class UDynamicMesh* targetMesh, FGeometryScriptSplitNormalsOptions SplitOptions, FGeometryScriptCalculateNormalsOptions CalculateOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AutoRepairNormals(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* SetPolygroupForMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptMeshSelection Selection, int32& SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications);
    class UDynamicMesh* SetNumExtendedPolygroupLayers(class UDynamicMesh* targetMesh, int32 NumLayers, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetTrianglesInPolygroup(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, FGeometryScriptIndexList& TriangleIDsOut);
    int32 GetTrianglePolygroupID(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, int32 TriangleID, bool& bIsValidTriangle);
    class UDynamicMesh* GetPolygroupIDsInMesh(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut);
    class UDynamicMesh* GetAllTrianglePolygroupIDs(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut);
    class UDynamicMesh* EnablePolygroups(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* DeleteTrianglesInPolygroup(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, int32& NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyPolygroupsLayer(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer FromGroupLayer, FGeometryScriptGroupLayer ToGroupLayer, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ConvertUVIslandsToPolygroups(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, int32 UVLayer, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ConvertComponentsToPolygroups(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputePolygroupsFromPolygonDetection(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputePolygroupsFromAngleThreshold(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, float CreaseAngle, int32 MinGroupSize, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ClearPolygroups(class UDynamicMesh* targetMesh, FGeometryScriptGroupLayer GroupLayer, int32 ClearValue, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* AppendVoronoiDiagram2D(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& VoronoiSites, FGeometryScriptVoronoiOptions VoronoiOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendTriangulatedPolygon3D(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector>& PolygonVertices3D, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendTriangulatedPolygon(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendTorus(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptRevolveOptions RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendSweepPolyline(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolylineVertices, const TArray<FTransform>& SweepPath, const TArray<float>& PolylineTexParamU, const TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendSweepPolygon(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, const TArray<FTransform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendSpiralRevolvePolygon(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendSphereLatLong(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsPhi, int32 StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendSphereCovering(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const FGeometryScriptSphereCovering& SphereCovering, int32 StepsX, int32 StepsY, int32 StepsZ, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendSphereBox(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendSimpleSweptPolygon(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, const TArray<FVector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendSimpleExtrudePolygon(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, float Height, int32 HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendSimpleCollisionShapes(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptSimpleCollisionTriangulationOptions TriangulationOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendRoundRectangleXY(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendRevolvePolygon(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32 Steps, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendRevolvePath(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PathVertices, FGeometryScriptRevolveOptions RevolveOptions, int32 Steps, bool bCapped, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendRectangleXY(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendRectangle_Compatibility_5_0(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendPolygonListTriangulation(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonsTriangulationOptions TriangulationOptions, bool& bTriangulationError, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendLinearStairs(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float StepDepth, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendDisc(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 AngleSteps, int32 SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendDelaunayTriangulation2D(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& VertexPositions, const TArray<FIntPoint>& ConstrainedEdges, FGeometryScriptConstrainedDelaunayTriangulationOptions TriangulationOptions, TArray<int32>& PositionsToVertexIDs, bool& bHasDuplicateVertices, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendCylinder(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendCurvedStairs(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendCone(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float BaseRadius, float TopRadius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendCapsule(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendBox(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AppendBoundingBox(class UDynamicMesh* targetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FBox Box, int32 StepsX, int32 StepsY, int32 StepsZ, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{

    bool IsValidVertexID(class UDynamicMesh* targetMesh, int32 VertexID);
    bool IsValidTriangleID(class UDynamicMesh* targetMesh, int32 TriangleID);
    FVector GetVertexPosition(class UDynamicMesh* targetMesh, int32 VertexID, bool& bIsValidVertex);
    int32 GetVertexCount(class UDynamicMesh* targetMesh);
    class UDynamicMesh* GetVertexConnectedVertices(class UDynamicMesh* targetMesh, int32 VertexID, TArray<int32>& Vertices);
    class UDynamicMesh* GetVertexConnectedTriangles(class UDynamicMesh* targetMesh, int32 VertexID, TArray<int32>& Triangles);
    FBox2D GetUVSetBoundingBox(class UDynamicMesh* targetMesh, int32 UvSetIndex, bool& bIsValidUVSet, bool& bUVSetIsEmpty);
    class UDynamicMesh* GetTriangleVertexColors(class UDynamicMesh* targetMesh, int32 TriangleID, FLinearColor& Color1, FLinearColor& Color2, FLinearColor& Color3, bool& bTriHasValidVertexColors);
    void GetTriangleUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, int32 TriangleID, FVector2D& UV1, FVector2D& UV2, FVector2D& UV3, bool& bHaveValidUVs);
    void GetTrianglePositions(class UDynamicMesh* targetMesh, int32 TriangleID, bool& bIsValidTriangle, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3);
    class UDynamicMesh* GetTriangleNormalTangents(class UDynamicMesh* targetMesh, int32 TriangleID, bool& bTriHasValidElements, FGeometryScriptTriangle& Normals, FGeometryScriptTriangle& Tangents, FGeometryScriptTriangle& BiTangents);
    class UDynamicMesh* GetTriangleNormals(class UDynamicMesh* targetMesh, int32 TriangleID, FVector& Normal1, FVector& Normal2, FVector& Normal3, bool& bTriHasValidNormals);
    FIntVector GetTriangleIndices(class UDynamicMesh* targetMesh, int32 TriangleID, bool& bIsValidTriangle);
    FVector GetTriangleFaceNormal(class UDynamicMesh* targetMesh, int32 TriangleID, bool& bIsValidTriangle);
    int32 GetNumVertexIDs(class UDynamicMesh* targetMesh);
    int32 GetNumUVSets(class UDynamicMesh* targetMesh);
    int32 GetNumTriangleIDs(class UDynamicMesh* targetMesh);
    int32 GetNumOpenBorderLoops(class UDynamicMesh* targetMesh, bool& bAmbiguousTopologyFound);
    int32 GetNumOpenBorderEdges(class UDynamicMesh* targetMesh);
    int32 GetNumExtendedPolygroupLayers(class UDynamicMesh* targetMesh);
    int32 GetNumConnectedComponents(class UDynamicMesh* targetMesh);
    void GetMeshVolumeAreaCenter(class UDynamicMesh* targetMesh, float& SurfaceArea, float& Volume, FVector& CenterOfMass);
    void GetMeshVolumeArea(class UDynamicMesh* targetMesh, float& SurfaceArea, float& Volume);
    FString GetMeshInfoString(class UDynamicMesh* targetMesh);
    bool GetMeshHasAttributeSet(class UDynamicMesh* targetMesh);
    FBox GetMeshBoundingBox(class UDynamicMesh* targetMesh);
    bool GetIsDenseMesh(class UDynamicMesh* targetMesh);
    bool GetIsClosedMesh(class UDynamicMesh* targetMesh);
    class UDynamicMesh* GetInterpolatedTriangleVertexColor(class UDynamicMesh* targetMesh, int32 TriangleID, FVector BarycentricCoords, FLinearColor DefaultColor, bool& bTriHasValidVertexColors, FLinearColor& InterpolatedColor);
    class UDynamicMesh* GetInterpolatedTriangleUV(class UDynamicMesh* targetMesh, int32 UvSetIndex, int32 TriangleID, FVector BarycentricCoords, bool& bTriHasValidUVs, FVector2D& InterpolatedUV);
    class UDynamicMesh* GetInterpolatedTrianglePosition(class UDynamicMesh* targetMesh, int32 TriangleID, FVector BarycentricCoords, bool& bIsValidTriangle, FVector& InterpolatedPosition);
    class UDynamicMesh* GetInterpolatedTriangleNormalTangents(class UDynamicMesh* targetMesh, int32 TriangleID, FVector BarycentricCoords, bool& bTriHasValidElements, FVector& InterpolatedNormal, FVector& InterpolatedTangent, FVector& InterpolatedBiTangent);
    class UDynamicMesh* GetInterpolatedTriangleNormal(class UDynamicMesh* targetMesh, int32 TriangleID, FVector BarycentricCoords, bool& bTriHasValidNormals, FVector& InterpolatedNormal);
    bool GetHasVertexIDGaps(class UDynamicMesh* targetMesh);
    bool GetHasVertexColors(class UDynamicMesh* targetMesh);
    bool GetHasTriangleNormals(class UDynamicMesh* targetMesh);
    bool GetHasTriangleIDGaps(class UDynamicMesh* targetMesh);
    bool GetHasPolygroups(class UDynamicMesh* targetMesh);
    bool GetHasMaterialIDs(class UDynamicMesh* targetMesh);
    class UDynamicMesh* GetAllVertexPositions(class UDynamicMesh* targetMesh, FGeometryScriptVectorList& PositionList, bool bSkipGaps, bool& bHasVertexIDGaps);
    class UDynamicMesh* GetAllVertexIDs(class UDynamicMesh* targetMesh, FGeometryScriptIndexList& VertexIDList, bool& bHasVertexIDGaps);
    class UDynamicMesh* GetAllTriangleIndices(class UDynamicMesh* targetMesh, FGeometryScriptTriangleList& TriangleList, bool bSkipGaps, bool& bHasTriangleIDGaps);
    class UDynamicMesh* GetAllTriangleIDs(class UDynamicMesh* targetMesh, FGeometryScriptIndexList& TriangleIDList, bool& bHasTriangleIDGaps);
    class UDynamicMesh* GetAllSplitUVsAtVertex(class UDynamicMesh* targetMesh, int32 UvSetIndex, int32 VertexID, TArray<int32>& ElementIDs, TArray<FVector2D>& ElementUVs, bool& bHaveValidUVs);
    class UDynamicMesh* ComputeTriangleBarycentricCoords(class UDynamicMesh* targetMesh, int32 TriangleID, bool& bIsValidTriangle, FVector Point, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3, FVector& BarycentricCoords);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* WeldMeshEdges(class UDynamicMesh* targetMesh, FGeometryScriptWeldEdgesOptions WeldOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SplitMeshBowties(class UDynamicMesh* targetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ResolveMeshTJunctions(class UDynamicMesh* targetMesh, FGeometryScriptResolveTJunctionOptions ResolveOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RepairMeshDegenerateGeometry(class UDynamicMesh* targetMesh, FGeometryScriptDegenerateTriangleOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RemoveUnusedVertices(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RemoveSmallComponents(class UDynamicMesh* targetMesh, FGeometryScriptRemoveSmallComponentOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RemoveHiddenTriangles(class UDynamicMesh* targetMesh, FGeometryScriptRemoveHiddenTrianglesOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* FillAllMeshHoles(class UDynamicMesh* targetMesh, FGeometryScriptFillHolesOptions FillOptions, int32& NumFilledHoles, int32& NumFailedHoleFills, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CompactMesh(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* ComputeVertexWeightedPointSampling(class UDynamicMesh* targetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, FGeometryScriptScalarList VertexWeights, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug);
    void ComputeRenderCapturePointSampling(TArray<FTransform>& Samples, const TArray<class AActor*>& Actors, const TArray<FGeometryScriptRenderCaptureCamera>& Cameras, class UGeometryScriptDebug* Debug);
    void ComputeRenderCaptureCamerasForBox(TArray<FGeometryScriptRenderCaptureCamera>& Cameras, FBox Box, const FGeometryScriptRenderCaptureCamerasForBoxOptions& Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputePointSampling(class UDynamicMesh* targetMesh, FGeometryScriptMeshPointSamplingOptions Options, TArray<FTransform>& Samples, FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputeNonUniformPointSampling(class UDynamicMesh* targetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* SelectMeshElementsWithPlane(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection& Selection, FVector PlaneOrigin, FVector PlaneNormal, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
    class UDynamicMesh* SelectMeshElementsInSphere(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection& Selection, FVector SphereOrigin, double SphereRadius, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
    class UDynamicMesh* SelectMeshElementsInsideMesh(class UDynamicMesh* targetMesh, class UDynamicMesh* SelectionMesh, FGeometryScriptMeshSelection& Selection, FTransform SelectionMeshTransform, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32 MinNumTrianglePoints);
    class UDynamicMesh* SelectMeshElementsInBox(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection& Selection, FBox Box, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
    class UDynamicMesh* SelectMeshElementsByNormalAngle(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection& Selection, FVector Normal, double MaxAngleDeg, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
    class UDynamicMesh* InvertMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected);
    void GetMeshSelectionInfo(FGeometryScriptMeshSelection Selection, EGeometryScriptMeshSelectionType& SelectionType, int32& NumSelected);
    class UDynamicMesh* ExpandMeshSelectionToConnected(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, EGeometryScriptTopologyConnectionType ConnectionType);
    class UDynamicMesh* ExpandContractMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours);
    void DebugPrintMeshSelection(FGeometryScriptMeshSelection Selection, bool bDisable);
    class UDynamicMesh* CreateSelectAllMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType);
    class UDynamicMesh* ConvertMeshSelectionToIndexList(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType& ResultListType, EGeometryScriptIndexType ConvertToType);
    class UDynamicMesh* ConvertMeshSelectionToIndexArray(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, TArray<int32>& IndexArray, EGeometryScriptMeshSelectionType& SelectionType);
    class UDynamicMesh* ConvertMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection FromSelection, FGeometryScriptMeshSelection& ToSelection, EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion);
    class UDynamicMesh* ConvertIndexSetToMeshSelection(class UDynamicMesh* targetMesh, const TSet<int32>& IndexSet, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection);
    class UDynamicMesh* ConvertIndexListToMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptIndexList IndexList, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection);
    class UDynamicMesh* ConvertIndexArrayToMeshSelection(class UDynamicMesh* targetMesh, const TArray<int32>& IndexArray, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection);
    void CombineMeshSelections(FGeometryScriptMeshSelection SelectionA, FGeometryScriptMeshSelection SelectionB, FGeometryScriptMeshSelection& ResultSelection, EGeometryScriptCombineSelectionMode CombineMode);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* GetMeshSelectionBoundingBox(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FBox& SelectionBounds, bool& bIsEmpty, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetMeshSelectionBoundaryLoops(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, TArray<FGeometryScriptIndexList>& IndexLoops, TArray<FGeometryScriptPolyPath>& PathLoops, int32& NumLoops, bool& bFoundErrors, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* ApplySimplifyToVertexCount(class UDynamicMesh* targetMesh, int32 vertexcount, FGeometryScriptSimplifyMeshOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplySimplifyToTriangleCount(class UDynamicMesh* targetMesh, int32 TriangleCount, FGeometryScriptSimplifyMeshOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplySimplifyToTolerance(class UDynamicMesh* targetMesh, float Tolerance, FGeometryScriptSimplifyMeshOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplySimplifyToPolygroupTopology(class UDynamicMesh* targetMesh, FGeometryScriptPolygroupSimplifyOptions Options, FGeometryScriptGroupLayer GroupLayer, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplySimplifyToPlanar(class UDynamicMesh* targetMesh, FGeometryScriptPlanarSimplifyOptions Options, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* SelectMeshElementsInBoxWithBVH(class UDynamicMesh* targetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FBox QueryBox, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType, int32 MinNumTrianglePoints, class UGeometryScriptDebug* Debug);
    void ResetBVH(FGeometryScriptDynamicMeshBVH& ResetBVH);
    class UDynamicMesh* RebuildBVHForMesh(class UDynamicMesh* targetMesh, FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* IsPointInsideMesh(class UDynamicMesh* targetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, bool& bIsInside, EGeometryScriptContainmentOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* IsBVHValidForMesh(class UDynamicMesh* targetMesh, const FGeometryScriptDynamicMeshBVH& TestBVH, bool& bIsValid, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* FindNearestRayIntersectionWithMesh(class UDynamicMesh* targetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FVector RayOrigin, FVector RayDirection, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptRayHitResult& HitResult, EGeometryScriptSearchOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* FindNearestPointOnMesh(class UDynamicMesh* targetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptTrianglePoint& NearestResult, EGeometryScriptSearchOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* BuildBVHForMesh(class UDynamicMesh* targetMesh, FGeometryScriptDynamicMeshBVH& OutputBVH, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* ApplyUniformTessellation(class UDynamicMesh* targetMesh, int32 TessellationLevel, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplySelectiveTessellation(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptSelectiveTessellateOptions Options, int32 TessellationLevel, ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyPNTessellation(class UDynamicMesh* targetMesh, FGeometryScriptPNTessellateOptions Options, int32 TessellationLevel, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* TranslatePivotToLocation(class UDynamicMesh* targetMesh, FVector PivotLocation, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* TranslateMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FVector Translation, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* TranslateMesh(class UDynamicMesh* targetMesh, FVector Translation, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* TransformMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FTransform Transform, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* TransformMesh(class UDynamicMesh* targetMesh, FTransform Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ScaleMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FVector Scale, FVector ScaleOrigin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ScaleMesh(class UDynamicMesh* targetMesh, FVector Scale, FVector ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RotateMeshSelection(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FRotator Rotation, FVector RotationOrigin, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RotateMesh(class UDynamicMesh* targetMesh, FRotator Rotation, FVector RotationOrigin, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* TranslateMeshUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, FVector2D Translation, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetNumUVSets(class UDynamicMesh* targetMesh, int32 NumUVSets, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMeshUVsFromPlanarProjection(class UDynamicMesh* targetMesh, int32 UvSetIndex, FTransform PlaneTransform, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMeshUVsFromCylinderProjection(class UDynamicMesh* targetMesh, int32 UvSetIndex, FTransform CylinderTransform, FGeometryScriptMeshSelection Selection, float SplitAngle, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMeshUVsFromBoxProjection(class UDynamicMesh* targetMesh, int32 UvSetIndex, FTransform BoxTransform, FGeometryScriptMeshSelection Selection, int32 MinIslandTriCount, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMeshUVElementPosition(class UDynamicMesh* targetMesh, int32 UvSetIndex, int32 ElementID, FVector2D NewUVPosition, bool& bIsValidElementID, bool bDeferChangeNotifications);
    class UDynamicMesh* SetMeshTriangleUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, int32 TriangleID, FGeometryScriptUVTriangle UVs, bool& bIsValidTriangle, bool bDeferChangeNotifications);
    class UDynamicMesh* SetMeshTriangleUVElementIDs(class UDynamicMesh* targetMesh, int32 UvSetIndex, int32 TriangleID, FIntVector TriangleUVElements, bool& bIsValidTriangle, bool bDeferChangeNotifications);
    class UDynamicMesh* ScaleMeshUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, FVector2D Scale, FVector2D ScaleOrigin, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RotateMeshUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, float RotationAngle, FVector2D RotationOrigin, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RepackMeshUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, FGeometryScriptRepackUVsOptions RepackOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* RecomputeMeshUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, FGeometryScriptRecomputeUVsOptions Options, FGeometryScriptMeshSelection Selection, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetMeshUVSizeInfo(class UDynamicMesh* targetMesh, int32 UvSetIndex, FGeometryScriptMeshSelection Selection, double& MeshArea, double& UVArea, FBox& MeshBounds, FBox2D& UVBounds, bool& bIsValidUVSet, bool& bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetMeshUVElementPosition(class UDynamicMesh* targetMesh, int32 UvSetIndex, int32 ElementID, FVector2D& UVPosition, bool& bIsValidElementID);
    class UDynamicMesh* GetMeshTriangleUVElementIDs(class UDynamicMesh* targetMesh, int32 UvSetIndex, int32 TriangleID, FIntVector& TriangleUVElements, bool& bHaveValidUVs);
    class UDynamicMesh* GetMeshPerVertexUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, FGeometryScriptUVList& UVList, bool& bIsValidUVSet, bool& bHasVertexIDGaps, bool& bHasSplitUVs, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyUVSet(class UDynamicMesh* targetMesh, int32 FromUVSet, int32 ToUVSet, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32 UvSetIndex, class UDynamicMesh*& CopyToUVMesh, class UDynamicMesh*& CopyToUVMeshOut, bool& bInvalidTopology, bool& bIsValidUVSet, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32 ToUVSetIndex, class UDynamicMesh*& CopyToMesh, class UDynamicMesh*& CopyToMeshOut, bool& bFoundTopologyErrors, bool& bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ComputeMeshLocalUVParam(class UDynamicMesh* targetMesh, FVector CenterPoint, int32 CenterPointTriangleID, TArray<int32>& VertexIDs, TArray<FVector2D>& VertexUVs, double Radius, bool bUseInterpolatedNormal, FVector TangentYDirection, double UVRotationDeg, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AutoGenerateXAtlasMeshUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, FGeometryScriptXAtlasOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* targetMesh, int32 UvSetIndex, FGeometryScriptPatchBuilderOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* AddUVElementToMesh(class UDynamicMesh* targetMesh, int32 UvSetIndex, FVector2D NewUVPosition, int32& NewUVElementID, bool& bIsValidUVSet, bool bDeferChangeNotifications);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* SetMeshSelectionVertexColor(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMeshPerVertexColors(class UDynamicMesh* targetMesh, FGeometryScriptColorList VertexColorList, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* SetMeshConstantVertexColor(class UDynamicMesh* targetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* GetMeshPerVertexColors(class UDynamicMesh* targetMesh, FGeometryScriptColorList& ColorList, bool& bIsValidColorSet, bool& bHasVertexIDGaps, bool bBlendSplitVertexValues);
    class UDynamicMesh* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* targetMesh, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* BlurMeshVertexColors(class UDynamicMesh* targetMesh, FGeometryScriptMeshSelection Selection, int32 NumIterations, double Strength, EGeometryScriptBlurColorMode BlurMode, FGeometryScriptBlurMeshVertexColorsOptions Options, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* ApplyMeshSolidify(class UDynamicMesh* targetMesh, FGeometryScriptSolidifyOptions Options, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* ApplyMeshMorphology(class UDynamicMesh* targetMesh, FGeometryScriptMorphologyOptions Options, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_PointSetSamplingFunctions : public UBlueprintFunctionLibrary
{

    void UnflattenPoints(const TArray<FVector2D>& PointsIn2D, TArray<FVector>& PointsIn3D, const FGeometryScriptPointFlatteningOptions& Options, double Height);
    void TransformsToPoints(const TArray<FTransform>& Transforms, TArray<FVector>& Points);
    void OffsetTransforms(TArray<FTransform>& Transforms, double Offset, FVector Direction, EGeometryScriptCoordinateSpace Space);
    FBox MakeBoundingBoxFromPoints(const TArray<FVector>& Points, double ExpandBy);
    void KMeansClusterToIDs(const TArray<FVector>& Points, const FGeometryScriptPointClusteringOptions& Options, TArray<int32>& PointClusterIndices);
    void KMeansClusterToArrays(const TArray<FVector>& Points, const FGeometryScriptPointClusteringOptions& Options, TArray<FGeometryScriptIndexList>& ClusterIDToLists);
    void GetPointsFromIndexList(const TArray<FVector>& AllPoints, const FGeometryScriptIndexList& Indices, TArray<FVector>& SelectedPoints);
    void FlattenPoints(const TArray<FVector>& PointsIn3D, TArray<FVector2D>& PointsIn2D, const FGeometryScriptPointFlatteningOptions& Options);
    void DownsamplePoints(const TArray<FVector>& Points, const FGeometryScriptPointPriorityOptions& Options, FGeometryScriptIndexList& DownsampledIndices, int32 KeepNumPoints, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{

    bool SampleSplineToTransforms(const class USplineComponent* Spline, TArray<FTransform>& Frames, TArray<double>& FrameTimes, FGeometryScriptSplineSamplingOptions SamplingOptions, FTransform RelativeTransform, bool bIncludeScale);
    FVector GetPolyPathVertex(FGeometryScriptPolyPath PolyPath, int32 Index, bool& bIsValidIndex);
    FVector GetPolyPathTangent(FGeometryScriptPolyPath PolyPath, int32 Index, bool& bIsValidIndex);
    int32 GetPolyPathNumVertices(FGeometryScriptPolyPath PolyPath);
    int32 GetPolyPathLastIndex(FGeometryScriptPolyPath PolyPath);
    double GetPolyPathArcLength(FGeometryScriptPolyPath PolyPath);
    int32 GetNearestVertexIndex(FGeometryScriptPolyPath PolyPath, FVector Point);
    FGeometryScriptPolyPath FlattenTo2DOnAxis(FGeometryScriptPolyPath PolyPath, EGeometryScriptAxis DropAxis);
    FGeometryScriptPolyPath CreateCirclePath3D(FTransform Transform, float Radius, int32 NumPoints);
    FGeometryScriptPolyPath CreateCirclePath2D(FVector2D Center, float Radius, int32 NumPoints);
    FGeometryScriptPolyPath CreateArcPath3D(FTransform Transform, float Radius, int32 NumPoints, float StartAngle, float EndAngle);
    FGeometryScriptPolyPath CreateArcPath2D(FVector2D Center, float Radius, int32 NumPoints, float StartAngle, float EndAngle);
    void ConvertSplineToPolyPath(const class USplineComponent* Spline, FGeometryScriptPolyPath& PolyPath, FGeometryScriptSplineSamplingOptions SamplingOptions);
    void ConvertPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath, TArray<FVector2D>& VertexArray);
    void ConvertPolyPathToArray(FGeometryScriptPolyPath PolyPath, TArray<FVector>& VertexArray);
    void ConvertArrayToPolyPath(const TArray<FVector>& VertexArray, FGeometryScriptPolyPath& PolyPath);
    void ConvertArrayOfVector2DToPolyPath(const TArray<FVector2D>& VertexArray, FGeometryScriptPolyPath& PolyPath);
    TArray<FVector2D> Conv_GeometryScriptPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath);
    TArray<FVector> Conv_GeometryScriptPolyPathToArray(FGeometryScriptPolyPath PolyPath);
    FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(const TArray<FVector>& PathVertices);
    FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(const TArray<FVector2D>& PathVertices);
}; // Size: 0x28

class UGeometryScriptLibrary_PolygonListFunctions : public UBlueprintFunctionLibrary
{

    FGeometryScriptGeneralPolygonList PolygonsUnion(FGeometryScriptGeneralPolygonList PolygonList, bool bCopyInputOnFailure);
    FGeometryScriptGeneralPolygonList PolygonsOffsets(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double FirstOffset, double SecondOffset, bool& bOperationSuccess, bool bCopyInputOnFailure);
    FGeometryScriptGeneralPolygonList PolygonsOffset(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure);
    FGeometryScriptGeneralPolygonList PolygonsMorphologyOpen(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure);
    FGeometryScriptGeneralPolygonList PolygonsMorphologyClose(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure);
    FGeometryScriptGeneralPolygonList PolygonsIntersection(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToIntersect);
    FGeometryScriptGeneralPolygonList PolygonsExclusiveOr(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToExclusiveOr);
    FGeometryScriptGeneralPolygonList PolygonsDifference(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToSubtract);
    FGeometryScriptSimplePolygon GetSimplePolygon(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32 PolygonIndex, int32 HoleIndex);
    void GetPolygonVertices(FGeometryScriptGeneralPolygonList PolygonList, TArray<FVector2D>& OutVertices, bool& bValidIndices, int32 PolygonIndex, int32 HoleIndex);
    int32 GetPolygonVertexCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32 PolygonIndex, int32 HoleIndex);
    FVector2D GetPolygonVertex(FGeometryScriptGeneralPolygonList PolygonList, bool& bIsValidVertex, int32 VertexIndex, int32 PolygonIndex, int32 HoleIndex);
    FBox2D GetPolygonListBounds(FGeometryScriptGeneralPolygonList PolygonList);
    double GetPolygonListArea(FGeometryScriptGeneralPolygonList PolygonList);
    int32 GetPolygonHoleCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32 PolygonIndex);
    int32 GetPolygonCount(FGeometryScriptGeneralPolygonList PolygonList);
    FBox2D GetPolygonBounds(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32 PolygonIndex);
    double GetPolygonArea(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32 PolygonIndex);
    FGeometryScriptGeneralPolygonList CreatePolygonsFromPathOffset(TArray<FVector2D> Path, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure);
    FGeometryScriptGeneralPolygonList CreatePolygonsFromOpenPolyPathsOffset(TArray<FGeometryScriptPolyPath> PolyPaths, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure);
    FGeometryScriptGeneralPolygonList CreatePolygonListFromSinglePolygon(FGeometryScriptSimplePolygon OuterPolygon, const TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations);
    FGeometryScriptGeneralPolygonList CreatePolygonListFromSimplePolygons(const TArray<FGeometryScriptSimplePolygon>& OuterPolygons);
    void AppendPolygonList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptGeneralPolygonList PolygonsToAppend);
    int32 AddPolygonToList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptSimplePolygon OuterPolygon, const TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations);
}; // Size: 0x28

class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{

    FRay MakeRayFromPoints(FVector A, FVector B);
    FRay MakeRayFromPointDirection(FVector Origin, FVector Direction, bool bDirectionIsNormalized);
    FRay GetTransformedRay(FRay Ray, FTransform Transform, bool bInvert);
    void GetRayStartEnd(FRay Ray, double StartDistance, double EndDistance, FVector& StartPoint, FVector& EndPoint);
    bool GetRaySphereIntersection(FRay Ray, FVector SphereCenter, double SphereRadius, double& Distance1, double& Distance2);
    double GetRaySegmentClosestPoint(FRay Ray, FVector SegStartPoint, FVector SegEndPoint, double& RayParameter, FVector& RayPoint, FVector& SegPoint);
    double GetRayPointDistance(FRay Ray, FVector Point);
    FVector GetRayPoint(FRay Ray, double Distance);
    bool GetRayPlaneIntersection(FRay Ray, FPlane Plane, double& HitDistance);
    double GetRayParameter(FRay Ray, FVector Point);
    double GetRayLineClosestPoint(FRay Ray, FVector LineOrigin, FVector LineDirection, double& RayParameter, FVector& RayPoint, double& LineParameter, FVector& LinePoint);
    FVector GetRayClosestPoint(FRay Ray, FVector Point);
    bool GetRayBoxIntersection(FRay Ray, FBox Box, double& HitDistance);
}; // Size: 0x28

class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{

    class UDynamicMesh* ApplyUniformRemesh(class UDynamicMesh* targetMesh, FGeometryScriptRemeshOptions RemeshOptions, FGeometryScriptUniformRemeshOptions UniformOptions, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{

    void SetComponentMaterialList(class UPrimitiveComponent* Component, const TArray<class UMaterialInterface*>& MaterialList, class UGeometryScriptDebug* Debug);
    void DetermineMeshOcclusion(const TArray<class UDynamicMesh*>& SourceMeshes, const TArray<FTransform>& SourceMeshTransforms, TArray<bool>& OutMeshIsHidden, const TArray<class UDynamicMesh*>& TransparentMeshes, const TArray<FTransform>& TransparentMeshTransforms, TArray<bool>& OutTransparentMeshIsHidden, const TArray<class UDynamicMesh*>& OccludeMeshes, const TArray<FTransform>& OccludeMeshTransforms, const FGeometryScriptDetermineMeshOcclusionOptions& OcclusionOptions, class UGeometryScriptDebug* Debug);
    class UDynamicMeshPool* CreateDynamicMeshPool();
    class UDynamicMesh* CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromComponentOptions Options, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, bool bUseComplexCollision, int32 SphereResolution, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_SimplePolygonFunctions : public UBlueprintFunctionLibrary
{

    void SetPolygonVertex(FGeometryScriptSimplePolygon& Polygon, int32 VertexIndex, FVector2D position, bool& bPolygonIsEmpty);
    int32 GetPolygonVertexCount(FGeometryScriptSimplePolygon Polygon);
    FVector2D GetPolygonVertex(FGeometryScriptSimplePolygon Polygon, int32 VertexIndex, bool& bPolygonIsEmpty);
    FVector2D GetPolygonTangent(FGeometryScriptSimplePolygon Polygon, int32 VertexIndex, bool& bPolygonIsEmpty);
    FBox2D GetPolygonBounds(FGeometryScriptSimplePolygon Polygon);
    double GetPolygonArea(FGeometryScriptSimplePolygon Polygon);
    double GetPolygonArcLength(FGeometryScriptSimplePolygon Polygon);
    void ConvertSplineToPolygon(const class USplineComponent* Spline, FGeometryScriptSimplePolygon& Polygon, FGeometryScriptSplineSamplingOptions SamplingOptions, EGeometryScriptAxis DropAxis);
    TArray<FVector2D> Conv_GeometryScriptSimplePolygonToArrayOfVector2D(FGeometryScriptSimplePolygon Polygon);
    TArray<FVector> Conv_GeometryScriptSimplePolygonToArray(FGeometryScriptSimplePolygon Polygon);
    FGeometryScriptSimplePolygon Conv_ArrayToGeometryScriptSimplePolygon(const TArray<FVector>& PathVertices);
    FGeometryScriptSimplePolygon Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(const TArray<FVector2D>& PathVertices);
    int32 AddPolygonVertex(FGeometryScriptSimplePolygon& Polygon, FVector2D position);
}; // Size: 0x28

class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{

    void GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, TArray<class UMaterialInterface*>& MaterialList, TArray<int32>& MaterialIndex, TArray<FName>& MaterialSlotNames, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
    int32 GetNumStaticMeshLODsOfType(class UStaticMesh* StaticMeshAsset, EGeometryScriptLODType LODType);
    class UDynamicMesh* CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
    class UDynamicMesh* CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
    bool CheckStaticMeshHasAvailableLOD(class UStaticMesh* StaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptSearchOutcomePins& Outcome, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{

    void SampleTextureRenderTarget2DAtUVPositions(FGeometryScriptUVList UVList, class UTextureRenderTarget2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug);
    void SampleTexture2DAtUVPositions(FGeometryScriptUVList UVList, class UTexture2D* Texture, FGeometryScriptSampleTextureOptions SampleOptions, FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug);
}; // Size: 0x28

class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{

    FTransform MakeTransformFromZAxis(FVector Location, FVector ZAxis);
    FTransform MakeTransformFromAxes(FVector Location, FVector ZAxis, FVector TangentAxis, bool bTangentIsX);
    FVector GetTransformAxisVector(FTransform Transform, EGeometryScriptAxis Axis);
    FRay GetTransformAxisRay(FTransform Transform, EGeometryScriptAxis Axis);
    FPlane GetTransformAxisPlane(FTransform Transform, EGeometryScriptAxis Axis);
}; // Size: 0x28

class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{

    FGeometryScriptScalarList VectorToScalar(FGeometryScriptVectorList VectorList, double ConstantX, double ConstantY, double ConstantZ);
    void VectorNormalizeInPlace(FGeometryScriptVectorList& VectorList, FVector SetOnFailure);
    FGeometryScriptScalarList VectorLength(FGeometryScriptVectorList VectorList);
    FGeometryScriptScalarList VectorDot(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB);
    FGeometryScriptVectorList VectorCross(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB);
    void VectorBlendInPlace(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB);
    FGeometryScriptVectorList VectorBlend(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB, double ConstantA, double ConstantB);
    void ScalarVectorMultiplyInPlace(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList& VectorList, double ScalarMultiplier);
    FGeometryScriptVectorList ScalarVectorMultiply(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList VectorList, double ScalarMultiplier);
    void ScalarMultiplyInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier);
    FGeometryScriptScalarList ScalarMultiply(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantMultiplier);
    void ScalarInvertInPlace(FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);
    FGeometryScriptScalarList ScalarInvert(FGeometryScriptScalarList ScalarList, double Numerator, double SetOnFailure, double Epsilon);
    void ScalarBlendInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB);
    FGeometryScriptScalarList ScalarBlend(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantA, double ConstantB);
    void ConstantVectorMultiplyInPlace(double Constant, FGeometryScriptVectorList& VectorList);
    FGeometryScriptVectorList ConstantVectorMultiply(double Constant, FGeometryScriptVectorList VectorList);
    void ConstantScalarMultiplyInPlace(double Constant, FGeometryScriptScalarList& ScalarList);
    FGeometryScriptScalarList ConstantScalarMultiply(double Constant, FGeometryScriptScalarList ScalarList);
}; // Size: 0x28

#endif
