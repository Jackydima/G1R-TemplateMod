#ifndef UE4SS_SDK_BP_FluxInteractionComponent_HPP
#define UE4SS_SDK_BP_FluxInteractionComponent_HPP

class UBP_FluxInteractionComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class UBP_FluxDataComponent_C* FluxData;                                          // 0x00A8 (size: 0x8)
    FName OwnerComponentTag;                                                          // 0x00B0 (size: 0x8)
    TArray<FBS_InteractionSource> Sources;                                            // 0x00B8 (size: 0x10)
    double OwnerScale;                                                                // 0x00C8 (size: 0x8)
    double OwnerMinSpeed;                                                             // 0x00D0 (size: 0x8)
    double SourceSpeedLimit;                                                          // 0x00D8 (size: 0x8)
    TArray<FVector> CurrentLocation;                                                  // 0x00E0 (size: 0x10)
    TArray<FVector> PreviousLocations;                                                // 0x00F0 (size: 0x10)
    TArray<bool> SplashState;                                                         // 0x0100 (size: 0x10)
    bool CanInteract;                                                                 // 0x0110 (size: 0x1)
    double SplashDetection;                                                           // 0x0118 (size: 0x8)
    bool DrawDebug;                                                                   // 0x0120 (size: 0x1)
    class USceneComponent* OwnerComponent;                                            // 0x0128 (size: 0x8)
    bool CanSpawnSplashes;                                                            // 0x0130 (size: 0x1)

    bool IsOwnerTouchingFluid();
    void ResizeArrays(int32 Size);
    void Set Sources(TArray<FBS_InteractionSource>& Sources);
    void GetOwnerComponent(class USceneComponent*& SceneComponent);
    void DrawDebugInteractions();
    void UpdateAttachmentsAndSplashes();
    void GetLocation(FBS_InteractionSource& Source, FVector& Location);
    void CalculateInteractionData(double TimeRatio, int32 Iteration, TArray<FBS_FluxInteractionData>& Interactions);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnComponentActivatedEvent(class UActorComponent* Component, bool bReset);
    void OnComponentDeactivatedEvent(class UActorComponent* Component);
    void ExecuteUbergraph_BP_FluxInteractionComponent(int32 EntryPoint);
}; // Size: 0x131

#endif
