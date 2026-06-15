#ifndef UE4SS_SDK_MovieRenderPipelineSettings_HPP
#define UE4SS_SDK_MovieRenderPipelineSettings_HPP

struct FMoviePipelineConsoleVariableEntry
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    float Value;                                                                      // 0x0010 (size: 0x4)
    bool bIsEnabled;                                                                  // 0x0014 (size: 0x1)

}; // Size: 0x18

class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{
    FSoftClassPath BurnInClass;                                                       // 0x0048 (size: 0x20)
    bool bCompositeOntoFinalImage;                                                    // 0x0068 (size: 0x1)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0098 (size: 0x8)
    TArray<class UMoviePipelineBurnInWidget*> BurnInWidgetInstances;                  // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMoviePipelineBurnInWidget : public UUserWidget
{

    void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
}; // Size: 0x2E0

class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
    TArray<TScriptInterface<IMovieSceneConsoleVariableTrackInterface>> ConsoleVariablePresets; // 0x0048 (size: 0x10)
    TMap<FString, float> ConsoleVariables;                                            // 0x0058 (size: 0x50)
    TArray<FString> StartConsoleCommands;                                             // 0x00A8 (size: 0x10)
    TArray<FString> EndConsoleCommands;                                               // 0x00B8 (size: 0x10)
    TArray<FMoviePipelineConsoleVariableEntry> CVars;                                 // 0x00C8 (size: 0x10)

    bool UpdateConsoleVariableEnableState(FString Name, const bool bIsEnabled);
    bool RemoveConsoleVariable(FString Name, const bool bRemoveAllInstances);
    TArray<FMoviePipelineConsoleVariableEntry> GetConsoleVariables();
    bool AddOrUpdateConsoleVariable(FString Name, const float Value);
    bool AddConsoleVariable(FString Name, const float Value);
}; // Size: 0xF8

class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
    bool bCompositeOntoFinalImage;                                                    // 0x0048 (size: 0x1)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0060 (size: 0x8)

}; // Size: 0x68

#endif
