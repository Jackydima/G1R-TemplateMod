#ifndef UE4SS_SDK_BP_FluxModifierComponent_HPP
#define UE4SS_SDK_BP_FluxModifierComponent_HPP

class UBP_FluxModifierComponent_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    double Duration;                                                                  // 0x0238 (size: 0x8)
    int32 Sort Priority;                                                              // 0x0240 (size: 0x4)
    double ActiveTime;                                                                // 0x0248 (size: 0x8)
    bool Initialized;                                                                 // 0x0250 (size: 0x1)
    class AActor* SimulationActor;                                                    // 0x0258 (size: 0x8)
    bool RemoveAfterUpdate;                                                           // 0x0260 (size: 0x1)
    bool DrawDebug;                                                                   // 0x0261 (size: 0x1)
    double MaxSupportedPixelSize;                                                     // 0x0268 (size: 0x8)
    bool CanRender;                                                                   // 0x0270 (size: 0x1)

    void GetActiveMaterials(TArray<class UMaterialInstanceDynamic*>& MaterialInstance);
    void MoveOwnerToComponent();
    void UpdateModififer(class AActor* SimulationWorld, double DeltaTime, double PixelSize);
    void InsertSorted(TArray<class UBP_FluxModifierComponent_C*>& Array);
    void SetSimulation(class AActor* Simulation);
    void AddModifier(TArray<class UBP_FluxModifierComponent_C*>& Modifiers, bool& Finalized);
    void RestartSimulation();
    void MakeDirty();
    void ConstructComponent(bool RestartSimulation);
    void ChangeWorld(class AActor* World);
    void RenderModifier(class UCanvas* Canvas, class AActor* Simulation);
    void InitializeModifier();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FluxModifierComponent(int32 EntryPoint);
}; // Size: 0x271

#endif
