#ifndef UE4SS_SDK_BP_FluxSurface_HPP
#define UE4SS_SDK_BP_FluxSurface_HPP

class ABP_FluxSurface_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UGothicNavModifierComponent* GothicNavModifier;                             // 0x0298 (size: 0x8)
    class UStaticMeshComponent* SurfaceRainCollider;                                  // 0x02A0 (size: 0x8)
    class UCustomNavCollisionStaticMeshComponent* CustomNavCollisionStaticMesh;       // 0x02A8 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* VolumeScattering;                                     // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* VolumeAbsorbtion;                                     // 0x02C0 (size: 0x8)
    class UProceduralMeshComponent* SurfaceProceduralMesh;                            // 0x02C8 (size: 0x8)
    class UDecalComponent* DecalCausticsWet;                                          // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* SurfaceSectionMesh;                                   // 0x02D8 (size: 0x8)
    class UBP_FluxDataAudioComponent_C* BP_FluxAudioComponent;                        // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* SurfaceOverMesh;                                      // 0x02E8 (size: 0x8)
    class UBP_FluxDataComponent_C* BP_FluxDataComponent;                              // 0x02F0 (size: 0x8)
    class UAudioComponent* VolumeAudio;                                               // 0x02F8 (size: 0x8)
    class UPostProcessComponent* VolumePostProcess;                                   // 0x0300 (size: 0x8)
    class UBoxComponent* VolumeCollision;                                             // 0x0308 (size: 0x8)
    class UBP_FluxMeshGenerator_C* BP_FluxMeshGenerator;                              // 0x0310 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0318 (size: 0x8)
    class UTexture2D* DebugTexture;                                                   // 0x0320 (size: 0x8)
    FVector DomainSize;                                                               // 0x0328 (size: 0x18)
    class UPDA_FluxSimulationState_C* SimulationState;                                // 0x0340 (size: 0x8)
    class UPDA_FluxCoastlineState_C* CoastlineState;                                  // 0x0348 (size: 0x8)
    TSoftObjectPtr<ABP_FluxSurfaceCutMask_C> CutMaskActor;                            // 0x0350 (size: 0x28)
    class ABP_FluxOceanWave_C* OceanWaveActor;                                        // 0x0378 (size: 0x8)
    TSoftObjectPtr<AActor> ScenePainterActor;                                         // 0x0380 (size: 0x28)
    TEnumAsByte<BE_SurfaceMesh::Type> SurfaceMeshMode;                                // 0x03A8 (size: 0x1)
    class AActor* ExternalMeshActor;                                                  // 0x03B0 (size: 0x8)
    FTransform SurfaceMeshTransform;                                                  // 0x03C0 (size: 0x60)
    class UMaterialInterface* SurfaceOverMaterial;                                    // 0x0420 (size: 0x8)
    class UMaterialInstanceDynamic* SurfaceSectionInstance;                           // 0x0428 (size: 0x8)
    class UMaterialInterface* SurfaceUnderMaterial;                                   // 0x0430 (size: 0x8)
    class UMaterialInterface* SurfaceSectionMaterial;                                 // 0x0438 (size: 0x8)
    class UMaterialInterface* SurfaceDistantMaterial;                                 // 0x0440 (size: 0x8)
    class UMaterialInterface* CausticsWetMaterial;                                    // 0x0448 (size: 0x8)
    class UMaterialInterface* PostprocessMaterial;                                    // 0x0450 (size: 0x8)
    class UMaterialInterface* VolumeAbsorptionMaterial;                               // 0x0458 (size: 0x8)
    class UMaterialInterface* VolumeScatteringMaterial;                               // 0x0460 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> MaterialInstances;                        // 0x0468 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> InteractionInstances;                     // 0x0478 (size: 0x10)
    class UMaterialInstanceDynamic* SurfaceOverInstance;                              // 0x0488 (size: 0x8)
    class UMaterialInstanceDynamic* SurfaceUnderInstance;                             // 0x0490 (size: 0x8)
    class UMaterialInstanceDynamic* CausticsInstance;                                 // 0x0498 (size: 0x8)
    class UMaterialInstanceDynamic* PostprocessInstance;                              // 0x04A0 (size: 0x8)
    class UMaterialInstanceDynamic* VolumeAbsorptionInstance;                         // 0x04A8 (size: 0x8)
    bool GenerateProceduralMeshView;                                                  // 0x04B0 (size: 0x1)
    class UMaterialInterface* GeneratedSurfaceOverMaterial;                           // 0x04B8 (size: 0x8)
    uint8 GenerateEdgePadding;                                                        // 0x04C0 (size: 0x1)
    int32 GenerateLOD;                                                                // 0x04C4 (size: 0x4)
    double AudioFalloffDistance;                                                      // 0x04C8 (size: 0x8)
    FVector AudioExtendDistance;                                                      // 0x04D0 (size: 0x18)
    class USoundBase* AudioAmbient;                                                   // 0x04E8 (size: 0x8)
    class UMaterialInstanceDynamic* VolumeScatteringInstance;                         // 0x04F0 (size: 0x8)
    TArray<class USceneComponent*> UnderSurfaceComponents;                            // 0x04F8 (size: 0x10)
    class UMaterialInstanceDynamic* SurfaceDistantInstance;                           // 0x0508 (size: 0x8)
    TArray<class USceneComponent*> UnderVolumeComponents;                             // 0x0510 (size: 0x10)
    double CurrentCameraBlur;                                                         // 0x0520 (size: 0x8)
    bool IsCameraUnderSurface;                                                        // 0x0528 (size: 0x1)
    TArray<class AStaticMeshActor*> DistantMeshes;                                    // 0x0530 (size: 0x10)
    TMap<int32, FBS_FluxSplashData> InteractionSplashes;                              // 0x0540 (size: 0x50)
    class USceneComponent* CameraComponent;                                           // 0x0590 (size: 0x8)
    TMap<TEnumAsByte<BE_SurfaceMesh::Type>, TSoftObjectPtr<UStaticMesh>> SurfaceMeshes; // 0x0598 (size: 0x50)
    FString GeneratedMeshStats;                                                       // 0x05E8 (size: 0x10)
    TMap<TEnumAsByte<BE_SurfaceMesh::Type>, TSoftObjectPtr<UStaticMesh>> SectionMeshes; // 0x05F8 (size: 0x50)
    FIntVector WorldOriginLocation;                                                   // 0x0648 (size: 0xC)
    class UNiagaraComponent* InfiniteOverPlane;                                       // 0x0658 (size: 0x8)
    class UNiagaraComponent* InfiniteUnderPlane;                                      // 0x0660 (size: 0x8)
    FVector ExtendVolumeSize;                                                         // 0x0668 (size: 0x18)
    class UPDA_FluxSurfacePreset_C* BaseColorPreset;                                  // 0x0680 (size: 0x8)
    class AUltra_Dynamic_Sky_C* SkyLight;                                             // 0x0688 (size: 0x8)
    int32 InfiniteGridLevelsOver;                                                     // 0x0690 (size: 0x4)
    int32 InfiniteGridLevelsUnder;                                                    // 0x0694 (size: 0x4)
    double InfiniteGridMeshScale;                                                     // 0x0698 (size: 0x8)
    class UPDA_FluxSurfacePreset_C* ShoreColorPreset;                                 // 0x06A0 (size: 0x8)
    class UPDA_FluxSurfacePreset_C* PainterColorPreset;                               // 0x06A8 (size: 0x8)
    TEnumAsByte<BE_UnderwaterVisibility::Type> UnderwaterVisibility;                  // 0x06B0 (size: 0x1)
    double InfiniteGridBoundsScale;                                                   // 0x06B8 (size: 0x8)
    class ALandscape* Landscape;                                                      // 0x06C0 (size: 0x8)
    TArray<class AActor*> GlassMeshes;                                                // 0x06C8 (size: 0x10)
    double WeatherMat_WaveTexFoamOffset_Min;                                          // 0x06D8 (size: 0x8)
    double WeatherMat_WaveTexFoamOffset_Max;                                          // 0x06E0 (size: 0x8)
    double WeatherMat_WaveTexDivergenceOffset_Min;                                    // 0x06E8 (size: 0x8)
    double WeatherMat_WaveTexDivergenceOffset_Max;                                    // 0x06F0 (size: 0x8)
    double Weather_WaveTexDivergenceFoam_Min;                                         // 0x06F8 (size: 0x8)
    double Weather_WaveTexDivergenceFoam_Max;                                         // 0x0700 (size: 0x8)
    double EditorWeatherIntensity;                                                    // 0x0708 (size: 0x8)
    double WeatherScattering_Min;                                                     // 0x0710 (size: 0x8)
    double WeatherScattering_Max;                                                     // 0x0718 (size: 0x8)
    TArray<class AActor*> NiagaraOverlapActors;                                       // 0x0720 (size: 0x10)
    bool SurfaceWorkingwithWeather;                                                   // 0x0730 (size: 0x1)
    double SurfAlphaOldmine;                                                          // 0x0738 (size: 0x8)
    class ATriggerVolume* Trigger;                                                    // 0x0740 (size: 0x8)
    bool ForceCameraUpdate;                                                           // 0x0748 (size: 0x1)
    bool Prev_PostProcessVolume;                                                      // 0x0749 (size: 0x1)
    bool Prev_BottomSurface;                                                          // 0x074A (size: 0x1)
    double LastLerpValue;                                                             // 0x0750 (size: 0x8)
    class AUltra_Dynamic_Weather_C* Weather;                                          // 0x0758 (size: 0x8)
    bool IsPlayerInVolume;                                                            // 0x0760 (size: 0x1)
    bool DoesControllerAllowUpdate;                                                   // 0x0761 (size: 0x1)
    class ABP_Gothic_Ninja_Controller_C* Ninja Controller;                            // 0x0768 (size: 0x8)
    class APawn* PlayerPawn;                                                          // 0x0770 (size: 0x8)
    TArray<class APawn*> PawnsInSurface;                                              // 0x0778 (size: 0x10)
    bool IsActive;                                                                    // 0x0788 (size: 0x1)
    bool PatchMinWaterHeight;                                                         // 0x0789 (size: 0x1)
    double MinWaterHeight;                                                            // 0x0790 (size: 0x8)

    int32 GetPriority();
    void GetColorPreset(int32 Index, class UPDA_FluxSurfacePreset_C*& Preset);
    void GetVolumeCollision(class UPrimitiveComponent*& Volume);
    void GetWaveTextureMaterials(TArray<class UMaterialInstanceDynamic*>& MaterialInstances);
    void CanRenderWave(bool& CanRender);
    void GetCoastlineState(class UPDA_FluxCoastlineState_C*& State);
    void GetSimulationState(class UPDA_FluxSimulationState_C*& State);
    void CanRenderInteractions(bool& CanRender);
    void EvaluatePostProcess();
    void StopVolumePostProcess();
    void StartVolumePostProcess();
    void IsCameraInsidePPVolume2D(bool& IsInside);
    void HandleEndOverlap(class UObject* Overlapping Actor);
    void HandleBeginOverlap(class UObject* Overlapping Actor);
    void Weather Behaviour(double Lerp);
    void ConstructSurfaceMesh();
    void Apply Material Data(TArray<class UMaterialInstanceDynamic*>& Materials, bool Update Only Waves);
    void Get Cut Mask(FVector4& Mask);
    void ApplyColor();
    void GenerateMesh(class UPDA_FluxSimulationState_C* State);
    void GenerateProceduralMeshFromSimulationState();
    void OffsetWorld();
    void LoadMesh();
    void DetectCurrentCamera();
    void CreateDynamicWaterBodyMaterial(class AActor* WaterBodyActor, class UMaterialInstanceDynamic*& Material);
    void ApplySurfaceBoundsZ();
    void AddToUnderSurfaceList(const class USceneComponent*& Item);
    void CreateMaterialsForGlass();
    void SetCameraUnderVisibility(bool PostProcessVolume, bool BottomSurface);
    void SetNiagaraData(class UNiagaraComponent* NiagaraSystem, bool& RequiredGround, bool& RequiredWave, bool Update Only Waves);
    void SpawnSplash(FVector Location, const FBS_FluxSplashData& BS_FluxSplashData);
    void UpdateCamera(double DeltaTime);
    void CreateMaterialsForMesh();
    void RemovePostprocess();
    void UpdateHeightMap(class UTexture* Value);
    void CreateMaterials();
    void InitializeOverlaping();
    void InitializeVolumes(FVector AreaSize);
    void InitializeSurfaces(FVector AreaSize);
    void InitializeStates(bool Update Only Waves);
    void UserConstructionScript();
    void SetWaveTextureAndArea(class UTextureRenderTarget2D* Texture, FLinearColor Area);
    void SetWaveProfile(class UPDA_FluxWaveProfile_C* Profile);
    void Generate();
    void SetInteractionsTexture(class UTextureRenderTarget2D* Texture);
    void SetInteractionsArea(FLinearColor Area);
    void ReceiveBeginPlay();
    void BndEvt__BP_FluxSurface_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void InitializeOvelapingEvent();
    void ReceiveTick(float DeltaSeconds);
    void ApplySurfaceNiagaraData(class UNiagaraComponent* ParticleSystem, bool RequiredGround, bool RequiredWave, bool Update Waves Only);
    void SetStateHeightWetMap(class UTexture* Texture);
    void SpawnSplashAtLocation(FVector Location, int32 Type);
    void SetWaveTexture(bool Update Waves Only);
    void SetSimulationState(class UPDA_FluxSimulationState_C* State);
    void ApplyMask();
    void ApplyColorProfiles();
    void ApplyPainter();
    void ApplySurfaceMaterialData(const TArray<class UMaterialInstanceDynamic*>& Materials, bool Update Waves Only);
    void SetCoastlineState(class UPDA_FluxCoastlineState_C* State);
    void InitializeAllStates();
    void OnGlassMeshChanged();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void SetColorPreset(int32 Index, class UPDA_FluxSurfacePreset_C* Preset);
    void UpdateSpeed(double Extra Time);
    void RequestOceanUpdate();
    void OnActorBeginOverlap_Event(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnActorEndOverlap_Event(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnForceCameraUpdate();
    void BndEvt__BP_FluxSurface_VolumeCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BP_Disable();
    void BP_Activate();
    void OnPlayerPawnChanged_Event(class APawn* Pawn);
    void ExecuteUbergraph_BP_FluxSurface(int32 EntryPoint);
}; // Size: 0x798

#endif
