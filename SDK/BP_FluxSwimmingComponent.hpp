#ifndef UE4SS_SDK_BP_FluxSwimmingComponent_HPP
#define UE4SS_SDK_BP_FluxSwimmingComponent_HPP

class UBP_FluxSwimmingComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class UCharacterMovementComponent* Movement;                                      // 0x00A8 (size: 0x8)
    double ActorSurfacDistanceZOffset;                                                // 0x00B0 (size: 0x8)
    bool InterpolateRotation;                                                         // 0x00B8 (size: 0x1)
    double SwimmingRotationSpeed;                                                     // 0x00C0 (size: 0x8)
    class UPrimitiveComponent* Mesh;                                                  // 0x00C8 (size: 0x8)
    class UBP_FluxDataComponent_C* FluxData;                                          // 0x00D0 (size: 0x8)
    int32 DecativationCount;                                                          // 0x00D8 (size: 0x4)
    bool SwimmingState;                                                               // 0x00DC (size: 0x1)
    FBP_FluxSwimmingComponent_COnSwimmingStateChanged OnSwimmingStateChanged;         // 0x00E0 (size: 0x10)
    void OnSwimmingStateChanged(bool IsSwimming);
    double InputSwimUp;                                                               // 0x00F0 (size: 0x8)
    FVector OldLocation;                                                              // 0x00F8 (size: 0x18)
    FVector NewLocation;                                                              // 0x0110 (size: 0x18)
    double FloatingForce;                                                             // 0x0128 (size: 0x8)
    double FloatingDamping;                                                           // 0x0130 (size: 0x8)
    double DistanceToFluidActivation;                                                 // 0x0138 (size: 0x8)
    double FluidHeightToActivation;                                                   // 0x0140 (size: 0x8)
    double FluidHeightToDeactivation;                                                 // 0x0148 (size: 0x8)
    bool AccelerationAsDirection;                                                     // 0x0150 (size: 0x1)
    double MinDirectionLength;                                                        // 0x0158 (size: 0x8)

    void AddSwimInput(double Direction);
    void UpdateZDifference(double DeltaTime);
    void UpdateCharacterRotation(double DeltaTime);
    void UpdateMovementMode();
    void UpdateSwimmingState();
    void FindSwimmingState(bool& Swimming);
    void SetDeactivationStack(bool Deactivate);
    void FindOwnerComponents();
    void GetSurfaceDistance(double& Distance);
    void GetInputDirection(FVector cameraDirection, FVector& Direction);
    void SwimmingStateChanged(bool NewState);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FluxSwimmingComponent(int32 EntryPoint);
    void OnSwimmingStateChanged__DelegateSignature(bool IsSwimming);
}; // Size: 0x160

#endif
