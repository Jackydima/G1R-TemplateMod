#ifndef UE4SS_SDK_WB_HUDBorderWarning_HPP
#define UE4SS_SDK_WB_HUDBorderWarning_HPP

class UWB_HUDBorderWarning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02E8 (size: 0x8)
    class UBorder* BorderDistanceText;                                                // 0x02F0 (size: 0x8)
    class UTextBlock* DistanceText;                                                   // 0x02F8 (size: 0x8)
    class UImage* FadeImage;                                                          // 0x0300 (size: 0x8)
    class UImage* ImageBorder;                                                        // 0x0308 (size: 0x8)
    class UMaterialInstanceDynamic* ControlSpell_MI;                                  // 0x0310 (size: 0x8)
    double Duration;                                                                  // 0x0318 (size: 0x8)
    bool HasCameraTravellingStarted;                                                  // 0x0320 (size: 0x1)
    double AccumulatedTime;                                                           // 0x0328 (size: 0x8)
    double AnimationValue;                                                            // 0x0330 (size: 0x8)
    double AnimationElapsedTime;                                                      // 0x0338 (size: 0x8)
    double AnimationDuration;                                                         // 0x0340 (size: 0x8)
    bool HasGrantedControl?;                                                          // 0x0348 (size: 0x1)
    FVector2D RadiusMinMax;                                                           // 0x0350 (size: 0x10)

    void Construct();
    void OnRefresh(float warningLevel);
    void OnSetVisibility(bool Visible);
    void OnStartCameraTravel(float cameraTravelInitialDelay, float cameraTravelDuration, float warningLevel);
    void OnStopCameraTravel(float cameraTravelInitialDelay, float cameraTravelDuration, float warningLevel);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnRefreshOnlyShowingDistance(float Distance, float Range);
    void ExecuteUbergraph_WB_HUDBorderWarning(int32 EntryPoint);
}; // Size: 0x360

#endif
