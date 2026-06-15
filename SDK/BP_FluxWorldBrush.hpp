#ifndef UE4SS_SDK_BP_FluxWorldBrush_HPP
#define UE4SS_SDK_BP_FluxWorldBrush_HPP

class ABP_FluxWorldBrush_C : public AActor
{
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Preview;                                              // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    double TargetValue;                                                               // 0x02A8 (size: 0x8)
    double BlendAdditive;                                                             // 0x02B0 (size: 0x8)
    double ShapeHardness;                                                             // 0x02B8 (size: 0x8)
    double ShapeRoundness;                                                            // 0x02C0 (size: 0x8)
    TEnumAsByte<BE_WorldBrushType::Type> Canvas;                                      // 0x02C8 (size: 0x1)

    void Draw(class UMaterialInstanceDynamic*& Material, class UBP_FluxWorldPainterComponent_C*& Painter);
    void UserConstructionScript();
}; // Size: 0x2C9

#endif
