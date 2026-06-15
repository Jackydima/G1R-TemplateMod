#ifndef UE4SS_SDK_BP_FluxWorldPainter_HPP
#define UE4SS_SDK_BP_FluxWorldPainter_HPP

class ABP_FluxWorldPainter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Preview;                                              // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    class UBP_FluxWorldPainterComponent_C* FluxScenePainterComponent;                 // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    FIntPoint AreaResolution;                                                         // 0x02B8 (size: 0x8)
    double AreaPixelSize;                                                             // 0x02C0 (size: 0x8)
    class UTextureRenderTarget2D* PaintMap;                                           // 0x02C8 (size: 0x8)
    bool DrawDebug;                                                                   // 0x02D0 (size: 0x1)
    class UMaterialInstanceDynamic* BrushMaterialIntance;                             // 0x02D8 (size: 0x8)
    TSoftObjectPtr<UObject> DebugMesh;                                                // 0x02E0 (size: 0x28)
    class UMaterialInstanceDynamic* DebugPaintMap;                                    // 0x0308 (size: 0x8)

    void Repaint();
    void InitializeDebug();
    void UserConstructionScript();
    void RenderScenePainter();
    void ReceiveBeginPlay();
    void ApplyMaterialParameters(const TArray<class UMaterialInstanceDynamic*>& Materials);
    void OnRepaintBrushes();
    void ExecuteUbergraph_BP_FluxWorldPainter(int32 EntryPoint);
}; // Size: 0x310

#endif
