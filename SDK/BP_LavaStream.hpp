#ifndef UE4SS_SDK_BP_LavaStream_HPP
#define UE4SS_SDK_BP_LavaStream_HPP

class ABP_LavaStream_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_08;                                         // 0x0298 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_07;                                         // 0x02A0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_06;                                         // 0x02A8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_05;                                         // 0x02B0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_04;                                         // 0x02B8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_03;                                         // 0x02C0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_02;                                         // 0x02C8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_01;                                         // 0x02D0 (size: 0x8)
    class UGothicFXComponent* GothicFX;                                               // 0x02D8 (size: 0x8)
    class URectLightComponent* RectLight_09;                                          // 0x02E0 (size: 0x8)
    class URectLightComponent* RectLight_08;                                          // 0x02E8 (size: 0x8)
    class URectLightComponent* RectLight_07;                                          // 0x02F0 (size: 0x8)
    class URectLightComponent* RectLight_06;                                          // 0x02F8 (size: 0x8)
    class URectLightComponent* RectLight_05;                                          // 0x0300 (size: 0x8)
    class URectLightComponent* RectLight_04;                                          // 0x0308 (size: 0x8)
    class URectLightComponent* RectLight_03;                                          // 0x0310 (size: 0x8)
    class URectLightComponent* RectLight_02;                                          // 0x0318 (size: 0x8)
    class URectLightComponent* RectLight_01;                                          // 0x0320 (size: 0x8)
    class UStaticMeshComponent* SM_Waterfall1_Boulder05a;                             // 0x0328 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashBucket_02_Stream_08;                         // 0x0330 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashBucket_02_Stream_07;                         // 0x0338 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashBucket_02_Stream_06;                         // 0x0340 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashBucket_02_Stream_05;                         // 0x0348 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashBucket_02_Stream_04;                         // 0x0350 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashBucket_02_Stream_03;                         // 0x0358 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashBucket_02_Stream_02;                         // 0x0360 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashBucket_02_Stream_01;                         // 0x0368 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashBucket_01_Stream;                            // 0x0370 (size: 0x8)
    class UNiagaraComponent* P_LavaFallWave_Start_02;                                 // 0x0378 (size: 0x8)
    class UNiagaraComponent* P_LavaFallWave_Start_01;                                 // 0x0380 (size: 0x8)
    class UNiagaraComponent* P_LavaFallWave_02;                                       // 0x0388 (size: 0x8)
    class UNiagaraComponent* P_LavaFallWave_01;                                       // 0x0390 (size: 0x8)
    class UStaticMeshComponent* SM_LavaWaterfall;                                     // 0x0398 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_00;                               // 0x03A0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_06;                               // 0x03A8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_Forge_04;                         // 0x03B0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_Forge_03;                         // 0x03B8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_Forge_02;                         // 0x03C0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_Forge_01;                         // 0x03C8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_05;                               // 0x03D0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_04;                               // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* SM_LavaChannel_Lava_s02;                              // 0x03E0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_03;                               // 0x03E8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_02;                               // 0x03F0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_01;                               // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* SM_LavaChannel_Lava_s01;                              // 0x0400 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0408 (size: 0x8)
    float TL_EnableLights_Intensity_B154CFE84725853F77217C85E2F79C5C;                 // 0x0410 (size: 0x4)
    float TL_EnableLights_Enable_Light_B154CFE84725853F77217C85E2F79C5C;              // 0x0414 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_EnableLights__Direction_B154CFE84725853F77217C85E2F79C5C; // 0x0418 (size: 0x1)
    class UTimelineComponent* TL_EnableLights;                                        // 0x0420 (size: 0x8)
    float TL_FillLastFall_Gradient_Fill_0A32B3C74E312C1921B18DBD3DC457C7;             // 0x0428 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_FillLastFall__Direction_0A32B3C74E312C1921B18DBD3DC457C7; // 0x042C (size: 0x1)
    class UTimelineComponent* TL_FillLastFall;                                        // 0x0430 (size: 0x8)
    float TL_Fill_Fall_Gradient_Fill_9B890BA446B37B5B5081E6804A68451D;                // 0x0438 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_Fall__Direction_9B890BA446B37B5B5081E6804A68451D; // 0x043C (size: 0x1)
    class UTimelineComponent* TL Fill Fall;                                           // 0x0440 (size: 0x8)
    float TL_Fill_Stream_02_Gradient_Fill_18D2B2DA476399E9D39B52835DAF9204;           // 0x0448 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_Stream_02__Direction_18D2B2DA476399E9D39B52835DAF9204; // 0x044C (size: 0x1)
    class UTimelineComponent* TL Fill Stream 02;                                      // 0x0450 (size: 0x8)
    float TL_Fill_Stream_01_Gradient_Fill_436BE53142AB2E9418CE20AA6EC2B3DA;           // 0x0458 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_Stream_01__Direction_436BE53142AB2E9418CE20AA6EC2B3DA; // 0x045C (size: 0x1)
    class UTimelineComponent* TL Fill Stream 01;                                      // 0x0460 (size: 0x8)
    class UMaterialInstanceDynamic* MID Stream 01;                                    // 0x0468 (size: 0x8)
    bool Filling Stream 01;                                                           // 0x0470 (size: 0x1)
    bool Filled Stream 01;                                                            // 0x0471 (size: 0x1)
    double Time to Fill Stream 01;                                                    // 0x0478 (size: 0x8)
    class UMaterialInstanceDynamic* MID Stream 02;                                    // 0x0480 (size: 0x8)
    bool Filling Stream 02;                                                           // 0x0488 (size: 0x1)
    bool Filled Stream 02;                                                            // 0x0489 (size: 0x1)
    double Time to Fill Stream 02;                                                    // 0x0490 (size: 0x8)
    class UMaterialInstanceDynamic* MID Fall;                                         // 0x0498 (size: 0x8)
    bool Filling Fall;                                                                // 0x04A0 (size: 0x1)
    bool Filled Fall;                                                                 // 0x04A1 (size: 0x1)
    double Time to Fill Fall;                                                         // 0x04A8 (size: 0x8)
    bool Forge Ready;                                                                 // 0x04B0 (size: 0x1)
    class ABP_ForgeLava_C* ForgeLava;                                                 // 0x04B8 (size: 0x8)
    class UMaterialInstanceDynamic* MID Last Fall;                                    // 0x04C0 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> MIDs Light Function;                      // 0x04C8 (size: 0x10)
    TArray<class ULightComponent*> Light Components;                                  // 0x04D8 (size: 0x10)
    int32 Current Light;                                                              // 0x04E8 (size: 0x4)
    float Current Light Intensity;                                                    // 0x04EC (size: 0x4)

    void Set Lights Active(bool Active);
    void Set Light MIDs Parameter(FName ParameterName, float Value);
    void Prepare Light MIDs(TArray<class ULightComponent*>& Light Components);
    void TL Fill Stream 01__FinishedFunc();
    void TL Fill Stream 01__UpdateFunc();
    void TL Fill Stream 02__FinishedFunc();
    void TL Fill Stream 02__UpdateFunc();
    void TL Fill Fall__FinishedFunc();
    void TL Fill Fall__UpdateFunc();
    void TL Fill Fall__Enable Lava VFX 0__EventFunc();
    void TL Fill Fall__Enable Lava VFX 3__EventFunc();
    void TL Fill Fall__Enable Lava VFX 2__EventFunc();
    void TL Fill Fall__Enable Lava VFX 1__EventFunc();
    void TL_FillLastFall__FinishedFunc();
    void TL_FillLastFall__UpdateFunc();
    void TL_EnableLights__FinishedFunc();
    void TL_EnableLights__UpdateFunc();
    void ReceiveBeginPlay();
    void Fill Stream();
    void Fill Stream 02();
    void Enable Fall();
    void Set State(bool IsFilled);
    void Enable Last Fall();
    void Enable Lights();
    void ExecuteUbergraph_BP_LavaStream(int32 EntryPoint);
}; // Size: 0x4F0

#endif
