#ifndef UE4SS_SDK_BP_FluxOceanWave_HPP
#define UE4SS_SDK_BP_FluxOceanWave_HPP

class ABP_FluxOceanWave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* DebugPlane;                                           // 0x0298 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x02A0 (size: 0x8)
    class UBoxComponent* SurfaceMesh;                                                 // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    bool UseRenderTarget;                                                             // 0x02B8 (size: 0x1)
    class UMaterialInterface* GeneratorMaterial;                                      // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* GeneratorInstance;                                // 0x02C8 (size: 0x8)
    class UTextureRenderTarget2D* WaveTexture;                                        // 0x02D0 (size: 0x8)
    bool HighPrecision;                                                               // 0x02D8 (size: 0x1)
    int32 TextureResolution;                                                          // 0x02DC (size: 0x4)
    bool PreviewAnimation;                                                            // 0x02E0 (size: 0x1)
    class UMaterialInterface* PreviewMaterial;                                        // 0x02E8 (size: 0x8)
    class UVolumeTexture* OceanWaveAnimation;                                         // 0x02F0 (size: 0x8)
    double OceanWaveLength;                                                           // 0x02F8 (size: 0x8)
    class UMaterialInstanceDynamic* PreviewInstance;                                  // 0x0300 (size: 0x8)
    double OceanWaveChoppiness;                                                       // 0x0308 (size: 0x8)
    double OceanWaveHeight;                                                           // 0x0310 (size: 0x8)
    double OceanWaveOffset;                                                           // 0x0318 (size: 0x8)
    double UpdateFramerate;                                                           // 0x0320 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> DebugMesh;                                            // 0x0328 (size: 0x28)
    class UChildActorComponent* Editor;                                               // 0x0350 (size: 0x8)
    class UPDA_FluxWaveProfile_C* WaveProfile;                                        // 0x0358 (size: 0x8)
    double WaveProfileSize;                                                           // 0x0360 (size: 0x8)
    double WaveMovementSpeed;                                                         // 0x0368 (size: 0x8)
    double WaveAnimationSpeed;                                                        // 0x0370 (size: 0x8)
    double WaveProfileAreaWidth;                                                      // 0x0378 (size: 0x8)
    double WaveProfileAreaBlend;                                                      // 0x0380 (size: 0x8)
    double WaveAnimationDistance;                                                     // 0x0388 (size: 0x8)
    double ShoreGroundPrediction;                                                     // 0x0390 (size: 0x8)
    double ShoreColorDistance;                                                        // 0x0398 (size: 0x8)
    double ShoreColorHeight;                                                          // 0x03A0 (size: 0x8)
    double OceanWaveRange;                                                            // 0x03A8 (size: 0x8)
    double OceanWaveFalloff;                                                          // 0x03B0 (size: 0x8)
    FVector2D OceanWaveWindDirection;                                                 // 0x03B8 (size: 0x10)
    double OceanWaveWindPush;                                                         // 0x03C8 (size: 0x8)
    FLinearColor TextureTransform;                                                    // 0x03D0 (size: 0x10)
    double OceanWaveAnimationSpeed;                                                   // 0x03E0 (size: 0x8)
    double OWLength_Min;                                                              // 0x03E8 (size: 0x8)
    double OWLength_Max;                                                              // 0x03F0 (size: 0x8)
    double OWHeight_Min;                                                              // 0x03F8 (size: 0x8)
    double OWHeight_Max;                                                              // 0x0400 (size: 0x8)
    double OWChoppiness_Min;                                                          // 0x0408 (size: 0x8)
    double OWChoppiness_Max;                                                          // 0x0410 (size: 0x8)
    double OWRange_Min;                                                               // 0x0418 (size: 0x8)
    double OWRange_Max;                                                               // 0x0420 (size: 0x8)
    double OWOffset_Min;                                                              // 0x0428 (size: 0x8)
    double OWOffset_Max;                                                              // 0x0430 (size: 0x8)
    double OWFalloff_Min;                                                             // 0x0438 (size: 0x8)
    double OWFalloff_Max;                                                             // 0x0440 (size: 0x8)
    double OWWindPush_Min;                                                            // 0x0448 (size: 0x8)
    double OWWindPush_Max;                                                            // 0x0450 (size: 0x8)
    double OWAnimationSpeed_Min;                                                      // 0x0458 (size: 0x8)
    double OWAnimationSpeed_Max;                                                      // 0x0460 (size: 0x8)
    TArray<class UMaterial*> OWMaterialArray;                                         // 0x0468 (size: 0x10)
    double Sh_WprofileSize_Min;                                                       // 0x0478 (size: 0x8)
    double Sh_WprofileSize_Max;                                                       // 0x0480 (size: 0x8)
    double Sh_WMovementSpeed_Min;                                                     // 0x0488 (size: 0x8)
    double Sh_WMovementSpeed_Max;                                                     // 0x0490 (size: 0x8)
    double Sh_WAnimationSpeed_Min;                                                    // 0x0498 (size: 0x8)
    double Sh_WAnimationSpeed_Max;                                                    // 0x04A0 (size: 0x8)
    double Sh_WProfileAreaWidth_Min;                                                  // 0x04A8 (size: 0x8)
    double Sh_WProfileAreaWidth_Max;                                                  // 0x04B0 (size: 0x8)
    double Sh_WProfileAreaBlend_Min;                                                  // 0x04B8 (size: 0x8)
    double Sh_WProfileAreaBlend_Max;                                                  // 0x04C0 (size: 0x8)
    double Sh_WnimationDistance_Min;                                                  // 0x04C8 (size: 0x8)
    double Sh_WnimationDistance_Max;                                                  // 0x04D0 (size: 0x8)
    double Sh_GroundPrediction_Min;                                                   // 0x04D8 (size: 0x8)
    double Sh_GroundPrediction_Max;                                                   // 0x04E0 (size: 0x8)
    double Sh_ColorDistance_Min;                                                      // 0x04E8 (size: 0x8)
    double Sh_ColorDistance_Max;                                                      // 0x04F0 (size: 0x8)
    double Sh_ColorHeight_Min;                                                        // 0x04F8 (size: 0x8)
    double Sh_ColorHeight_Max;                                                        // 0x0500 (size: 0x8)
    double EditorWeatherIntensity;                                                    // 0x0508 (size: 0x8)
    FVector2D OW_WindDirection_Min;                                                   // 0x0510 (size: 0x10)
    FVector2D OW_WindDirection_Max;                                                   // 0x0520 (size: 0x10)
    double WaveTextureFoamOffset;                                                     // 0x0530 (size: 0x8)
    double MI_WaveTextureFoamOffset_Min;                                              // 0x0538 (size: 0x8)
    double MI_WaveTextureFoamOffset_Max;                                              // 0x0540 (size: 0x8)
    double PreviousLerp;                                                              // 0x0548 (size: 0x8)
    TArray<class AActor*> Wave Interfaces Actors;                                     // 0x0550 (size: 0x10)
    double ProgressiveWaveTime;                                                       // 0x0560 (size: 0x8)
    int32 CurrentInterfaceActorIndex;                                                 // 0x0568 (size: 0x4)
    int32 MaxActorsPerFrame;                                                          // 0x056C (size: 0x4)
    bool Requires Update;                                                             // 0x0570 (size: 0x1)
    bool IsWorkingwithWeather;                                                        // 0x0571 (size: 0x1)
    double OldmineAlpha;                                                              // 0x0578 (size: 0x8)
    double OWHeight_MaxSuper;                                                         // 0x0580 (size: 0x8)
    double OldmineAlpha_super;                                                        // 0x0588 (size: 0x8)

    void CanRenderWave(bool& CanRender);
    void GetWaveTextureMaterials(TArray<class UMaterialInstanceDynamic*>& MaterialInstances);
    void UpdateProgressiveWaveSpeed(double Rain, double DeltaTime, bool Update Materials);
    void InitializeEditor();
    double GetSurfaceHeight();
    void Weather Function(double Lerp);
    void ApplyToSurfaces();
    void SetZLocation(double New Location Z, bool ApplyToSurface);
    void UpdateTexture(double Delta);
    void ExportWaveTexture();
    void InitializeGenerator();
    void SetNiagaraData(class UNiagaraComponent* System, bool RequreWave);
    void SetMaterialData(TArray<class UMaterialInstanceDynamic*>& Materials, bool Update Textures);
    void InitializeMaterials(bool ApplyToSurface);
    void UserConstructionScript();
    void UpdateSpeed(double Extra Time);
    void SetWaveProfile(class UPDA_FluxWaveProfile_C* Profile);
    void SetWaveTexture(bool Update Waves Only);
    void SetWaveTextureAndArea(class UTextureRenderTarget2D* Texture, FLinearColor Area);
    void UpdateModifierMaterials(const TArray<class UMaterialInstanceDynamic*>& Materials, bool UseVelocityMap);
    void ToggleUpdateSimulation();
    void TogleDebugGround();
    void OnEditorSelectionChanged(bool Selected);
    void OnEditorUpdateLoop();
    void OnEditorModifierChanged();
    void OnEditorIterateSimulation(int32 Iterations);
    void OnEditorRestartSimulation();
    void ReceiveBeginPlay();
    void OnEditorStopSimulation();
    void OnEditorShowSimulation();
    void OnEditorPostLoad();
    void ReceiveTick(float DeltaSeconds);
    void RequestOceanUpdate();
    void ExecuteUbergraph_BP_FluxOceanWave(int32 EntryPoint);
}; // Size: 0x590

#endif
