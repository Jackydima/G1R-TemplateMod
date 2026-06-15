#ifndef UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP
#define UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP

#include "MovieRenderPipelineRenderPasses_enums.hpp"

struct FMoviePipelinePostProcessPass
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    TSoftObjectPtr<UMaterialInterface> Material;                                      // 0x0008 (size: 0x28)

}; // Size: 0x30

class UMovieGraphDeferredRenderPassNode : public UMovieGraphImagePassBaseNode
{
    uint8 bOverride_SpatialSampleCount;                                               // 0x00B8 (size: 0x1)
    uint8 bOverride_AntiAliasingMethod;                                               // 0x00B8 (size: 0x1)
    uint8 bOverride_bDisableToneCurve;                                                // 0x00B8 (size: 0x1)
    uint8 bOverride_bAllowOCIO;                                                       // 0x00B8 (size: 0x1)
    uint8 bOverride_ViewModeIndex;                                                    // 0x00B8 (size: 0x1)
    uint8 bOverride_bWriteAllSamples;                                                 // 0x00B8 (size: 0x1)
    uint8 bOverride_AdditionalPostProcessMaterials;                                   // 0x00B8 (size: 0x1)
    int32 SpatialSampleCount;                                                         // 0x00BC (size: 0x4)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingMethod;                              // 0x00C0 (size: 0x1)
    bool bWriteAllSamples;                                                            // 0x00C1 (size: 0x1)
    bool bDisableToneCurve;                                                           // 0x00C2 (size: 0x1)
    bool bAllowOCIO;                                                                  // 0x00C3 (size: 0x1)
    TEnumAsByte<EViewModeIndex> ViewModeIndex;                                        // 0x00C4 (size: 0x1)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;             // 0x00C8 (size: 0x10)

}; // Size: 0xD8

class UMovieGraphImagePassBaseNode : public UMovieGraphRenderPassNode
{
    uint8 bOverride_ShowFlags;                                                        // 0x0098 (size: 0x1)
    class UMovieGraphShowFlags* ShowFlags;                                            // 0x00A0 (size: 0x8)

}; // Size: 0xB8

class UMovieGraphImageSequenceOutputNode : public UMovieGraphFileOutputNode
{
    uint8 bOverride_OCIOConfiguration;                                                // 0x00B0 (size: 0x1)
    uint8 bOverride_OCIOContext;                                                      // 0x00B0 (size: 0x1)
    FOpenColorIODisplayConfiguration OCIOConfiguration;                               // 0x00B8 (size: 0xA0)
    TMap<class FString, class FString> OCIOContext;                                   // 0x0158 (size: 0x50)

}; // Size: 0x1C8

class UMovieGraphImageSequenceOutputNode_BMP : public UMovieGraphImageSequenceOutputNode
{
}; // Size: 0x1C8

class UMovieGraphImageSequenceOutputNode_EXR : public UMovieGraphImageSequenceOutputNode
{
    uint8 bOverride_Compression;                                                      // 0x01C8 (size: 0x1)
    EEXRCompressionFormat Compression;                                                // 0x01C9 (size: 0x1)

}; // Size: 0x1D0

class UMovieGraphImageSequenceOutputNode_JPG : public UMovieGraphImageSequenceOutputNode
{
}; // Size: 0x1C8

class UMovieGraphImageSequenceOutputNode_MultiLayerEXR : public UMovieGraphImageSequenceOutputNode_EXR
{
}; // Size: 0x1D0

class UMovieGraphImageSequenceOutputNode_PNG : public UMovieGraphImageSequenceOutputNode
{
}; // Size: 0x1C8

class UMovieGraphPathTracerRenderPassNode : public UMovieGraphImagePassBaseNode
{
    uint8 bOverride_SpatialSampleCount;                                               // 0x00B8 (size: 0x1)
    uint8 bOverride_bDenoiser;                                                        // 0x00B8 (size: 0x1)
    uint8 bOverride_bDisableToneCurve;                                                // 0x00B8 (size: 0x1)
    uint8 bOverride_bAllowOCIO;                                                       // 0x00B8 (size: 0x1)
    uint8 bOverride_bWriteAllSamples;                                                 // 0x00B8 (size: 0x1)
    uint8 bOverride_AdditionalPostProcessMaterials;                                   // 0x00B8 (size: 0x1)
    int32 SpatialSampleCount;                                                         // 0x00BC (size: 0x4)
    bool bDenoiser;                                                                   // 0x00C0 (size: 0x1)
    bool bWriteAllSamples;                                                            // 0x00C1 (size: 0x1)
    bool bDisableToneCurve;                                                           // 0x00C2 (size: 0x1)
    bool bAllowOCIO;                                                                  // 0x00C3 (size: 0x1)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;             // 0x00C8 (size: 0x10)

}; // Size: 0xE0

class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
    bool bAccumulatorIncludesAlpha;                                                   // 0x0178 (size: 0x1)
    bool bDisableMultisampleEffects;                                                  // 0x0179 (size: 0x1)
    bool bUse32BitPostProcessMaterials;                                               // 0x017A (size: 0x1)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;             // 0x0180 (size: 0x10)
    bool bRenderMainPass;                                                             // 0x0190 (size: 0x1)
    bool bAddDefaultLayer;                                                            // 0x0191 (size: 0x1)
    TArray<FActorLayer> ActorLayers;                                                  // 0x0198 (size: 0x10)
    TArray<FSoftObjectPath> DataLayers;                                               // 0x01B8 (size: 0x10)
    TArray<class UMaterialInterface*> ActivePostProcessMaterials;                     // 0x01C8 (size: 0x10)
    class UMaterialInterface* StencilLayerMaterial;                                   // 0x01D8 (size: 0x8)

}; // Size: 0x238

class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x238

class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x238

class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
    bool bReferenceMotionBlur;                                                        // 0x0238 (size: 0x1)

}; // Size: 0x240

class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x238

class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x238

class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
}; // Size: 0x178

class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
    EEXRCompressionFormat Compression;                                                // 0x0068 (size: 0x1)
    bool bMultilayer;                                                                 // 0x0069 (size: 0x1)

}; // Size: 0x70

class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
    bool bWriteAlpha;                                                                 // 0x0068 (size: 0x1)

}; // Size: 0x70

class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
    FString FileNameFormatOverride;                                                   // 0x0048 (size: 0x10)

}; // Size: 0xB8

#endif
