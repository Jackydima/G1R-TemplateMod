#ifndef UE4SS_SDK_Weather_Mask_Projection_Box_HPP
#define UE4SS_SDK_Weather_Mask_Projection_Box_HPP

class AWeather_Mask_Projection_Box_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    FVector Box Extent;                                                               // 0x02B0 (size: 0x18)
    class UTextureRenderTarget2D* Depth Render Target;                                // 0x02C8 (size: 0x8)
    double Mask Snow / Dust;                                                          // 0x02D0 (size: 0x8)
    double Mask Wetness;                                                              // 0x02D8 (size: 0x8)
    double Blur Radius;                                                               // 0x02E0 (size: 0x8)
    class UMaterialInstanceDynamic* Brush_MID;                                        // 0x02E8 (size: 0x8)
    FVector2D Brush Location;                                                         // 0x02F0 (size: 0x10)
    FVector2D Brush Scale;                                                            // 0x0300 (size: 0x10)
    FVector2D Center Location;                                                        // 0x0310 (size: 0x10)
    TArray<FVector2D> Corners;                                                        // 0x0320 (size: 0x10)
    double Max Distance;                                                              // 0x0330 (size: 0x8)
    double Yaw;                                                                       // 0x0338 (size: 0x8)
    double Blur Slope (Snow/Dust);                                                    // 0x0340 (size: 0x8)
    double Blur Slope (Wetness);                                                      // 0x0348 (size: 0x8)
    int32 Capture Pixel Size;                                                         // 0x0350 (size: 0x4)
    TArray<class AActor*> Exclude Actors from Occlusion;                              // 0x0358 (size: 0x10)
    double Top Height;                                                                // 0x0368 (size: 0x8)
    bool Capture Ready;                                                               // 0x0370 (size: 0x1)
    class AUltra_Dynamic_Weather_C* UDW;                                              // 0x0378 (size: 0x8)

    void Force Update();
    void Recycle Render Target();
    void Test Point Occlusion(FVector Location, TEnumAsByte<UDS_DLWE_Mode::Type> Mode, bool& In Volume, double& Occlusion);
    void Update Capture();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Weather_Mask_Projection_Box(int32 EntryPoint);
}; // Size: 0x380

#endif
