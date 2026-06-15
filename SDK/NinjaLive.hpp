#ifndef UE4SS_SDK_NinjaLive_HPP
#define UE4SS_SDK_NinjaLive_HPP

class ANinjaLive_C : public ANativeNinjaLiveActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UFastActorOverlapBoxComponent* InteractionVolume;                           // 0x0298 (size: 0x8)
    class UFastActorOverlapBoxComponent* ActivationVolume;                            // 0x02A0 (size: 0x8)
    class UNinjaLiveComponent_C* NinjaLiveComponent;                                  // 0x02A8 (size: 0x8)
    class UMaterialBillboardComponent* EditorIcon;                                    // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* TraceMesh;                                            // 0x02B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02C0 (size: 0x8)
    class UTextureRenderTarget2D* RT_DensityPreview;                                  // 0x02C8 (size: 0x8)
    class UMaterialInstance* InactiveGrayMaterial;                                    // 0x02D0 (size: 0x8)
    bool DisableBlueprint;                                                            // 0x02D8 (size: 0x1)
    double TimeCounterForBrush;                                                       // 0x02E0 (size: 0x8)
    double DeltaSeconds;                                                              // 0x02E8 (size: 0x8)
    bool MousePressed;                                                                // 0x02F0 (size: 0x1)
    bool ShowTraceMeshInEditor;                                                       // 0x02F1 (size: 0x1)
    FVector TraceMeshSize;                                                            // 0x02F8 (size: 0x18)
    TEnumAsByte<UserInput_Enum::Type> UserInputBasedInteraction;                      // 0x0310 (size: 0x1)
    bool OverlapBasedInteraction;                                                     // 0x0311 (size: 0x1)
    TArray<class ANinjaLive_C*> NinjaLIVECollisionExclude;                            // 0x0318 (size: 0x10)
    double Time;                                                                      // 0x0328 (size: 0x8)
    bool SimActivatedByPawnProximity;                                                 // 0x0330 (size: 0x1)
    bool ShowActivationVolumeInEditor;                                                // 0x0331 (size: 0x1)
    FVector ActivationVolumeSize;                                                     // 0x0338 (size: 0x18)
    double ActivatorProximityCheckFrequency;                                          // 0x0350 (size: 0x8)
    TEnumAsByte<ECollisionChannel> ActivatorType;                                     // 0x0358 (size: 0x1)
    class AActor* Activator;                                                          // 0x0360 (size: 0x8)
    bool PawnInsideActivationBounds;                                                  // 0x0368 (size: 0x1)
    bool InitDone;                                                                    // 0x0369 (size: 0x1)
    bool BeginPlaySupressed;                                                          // 0x036A (size: 0x1)
    bool UseTraceMeshAsInteractionVolume;                                             // 0x036B (size: 0x1)
    bool ShowInteractionVolumeInEditor;                                               // 0x036C (size: 0x1)
    FVector InteractionVolumeSize;                                                    // 0x0370 (size: 0x18)
    TArray<bool> MultipleTouchLookup;                                                 // 0x0388 (size: 0x10)
    double TickRateCustom;                                                            // 0x0398 (size: 0x8)
    class UPrimitiveComponent* InteractionVolumeTemplate;                             // 0x03A0 (size: 0x8)
    FName TrackActorPrimitiveComponentsWithTag;                                       // 0x03A8 (size: 0x8)
    FName TrackActorSkeletalMeshComponentsWithTag;                                    // 0x03B0 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> OverlapFilterInclusiveObjType;              // 0x03B8 (size: 0x10)
    TArray<FName> OverlapFilterInclusiveBoneNameExact;                                // 0x03C8 (size: 0x10)
    TArray<FString> OverlapFilterInclusiveBoneNamePartial;                            // 0x03D8 (size: 0x10)
    TArray<class AActor*> ExcludeSpecificActorsFromOverlap;                           // 0x03E8 (size: 0x10)
    bool AutoExcludeLargeOverlappingObjects;                                          // 0x03F8 (size: 0x1)
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<EObjectTypeQuery>> OverlapFilterInclusiveCollisionType; // 0x0400 (size: 0x50)
    TEnumAsByte<InactiveBehaviour_Enum::Type> TraceMeshInactiveBehaviour;             // 0x0450 (size: 0x1)
    bool ActivationEventsDebugPrint;                                                  // 0x0451 (size: 0x1)
    bool SimContainerCapacityWarning;                                                 // 0x0452 (size: 0x1)
    bool SaveDebugTextToLog;                                                          // 0x0453 (size: 0x1)
    double DebugTextLifeTimeLength;                                                   // 0x0458 (size: 0x8)
    class UPrimitiveComponent* OverlappingSkeletalMesh;                               // 0x0460 (size: 0x8)
    double BrushStrengthTemp2;                                                        // 0x0468 (size: 0x8)
    double InputFeedbackTemp1;                                                        // 0x0470 (size: 0x8)
    bool DisableAndNotTickBlock;                                                      // 0x0478 (size: 0x1)
    TArray<class UPrimitiveComponent*> OverlappingComponents;                         // 0x0480 (size: 0x10)
    TArray<class AActor*> OverlappingActors;                                          // 0x0490 (size: 0x10)
    TMap<int32, UPrimitiveComponent*> SkeletalMesh-TempArray-Pairs;                   // 0x04A0 (size: 0x50)
    TArray<class AActor*> OverlappingActorsInitial;                                   // 0x04F0 (size: 0x10)
    FNinjaLive_COwnerRePlayEvent OwnerRePlayEvent;                                    // 0x0500 (size: 0x10)
    void OwnerRePlayEvent();
    bool OverrideComponentVariables;                                                  // 0x0510 (size: 0x1)
    bool AutoConnectToMemoryPool-IF-Found;                                            // 0x0511 (size: 0x1)
    int32 OutputFilterMaterialIndex;                                                  // 0x0514 (size: 0x4)
    bool ShowLODdebugMessagesOnScreen;                                                // 0x0518 (size: 0x1)
    double GlobalBrushScale;                                                          // 0x0520 (size: 0x8)
    bool LOD1-ReduceIterations;                                                       // 0x0528 (size: 0x1)
    bool LOD2-ReduceSamplingFPS;                                                      // 0x0529 (size: 0x1)
    bool LOD3-ReduceCollisionAmount;                                                  // 0x052A (size: 0x1)
    int32 MinSamplingFPS;                                                             // 0x052C (size: 0x4)
    double LOD-FarBound;                                                              // 0x0530 (size: 0x8)
    double LOD-NearBound;                                                             // 0x0538 (size: 0x8)
    int32 DownscaleCollisionPainterResolution;                                        // 0x0540 (size: 0x4)
    int32 DownscalePressureResolution;                                                // 0x0544 (size: 0x4)
    bool SingleTargetMode;                                                            // 0x0548 (size: 0x1)
    bool InitialActorsProcessed;                                                      // 0x0549 (size: 0x1)
    bool SKMeshTagged;                                                                // 0x054A (size: 0x1)
    bool ForceTrackObjectsWithNocollisionFlag;                                        // 0x054B (size: 0x1)
    bool ForceTrackBonesWithSimilarName;                                              // 0x054C (size: 0x1)
    TArray<FName> OverlapFilterInclusiveBoneNameExactTemp;                            // 0x0550 (size: 0x10)
    TArray<FName> OverlapFilterInclusiveBoneNameExactTemp2;                           // 0x0560 (size: 0x10)

    void ResetTempArrays();
    void UserConstructionScript();
    void Custom Tick(float DeltaTime);
    void HandleScalabilitySettingsChanged();
    void ReceiveBeginPlay();
    void LiveFluidParams(double BrushSize);
    void LiveActivation(FName ParamName, double FadeTimeOfBrush, double FadeTimeOfCanvas);
    void Replay();
    void BeginOverlapComponent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EndOverlapComponent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_NinjaLive(int32 EntryPoint);
    void OwnerRePlayEvent__DelegateSignature();
}; // Size: 0x570

#endif
