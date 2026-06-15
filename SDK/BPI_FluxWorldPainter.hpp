#ifndef UE4SS_SDK_BPI_FluxWorldPainter_HPP
#define UE4SS_SDK_BPI_FluxWorldPainter_HPP

class IBPI_FluxWorldPainter_C : public IInterface
{

    void OnRepaintBrushes();
    void ApplyMaterialParameters(const TArray<class UMaterialInstanceDynamic*>& Materials);
    void RenderScenePainter();
}; // Size: 0x28

#endif
