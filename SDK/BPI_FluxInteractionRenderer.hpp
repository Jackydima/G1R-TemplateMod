#ifndef UE4SS_SDK_BPI_FluxInteractionRenderer_HPP
#define UE4SS_SDK_BPI_FluxInteractionRenderer_HPP

class IBPI_FluxInteractionRenderer_C : public IInterface
{

    void GetCoastlineState(class UPDA_FluxCoastlineState_C*& State);
    void GetSimulationState(class UPDA_FluxSimulationState_C*& State);
    void SetInteractionsTexture(class UTextureRenderTarget2D* Texture);
    void SetInteractionsArea(FLinearColor Area);
    void CanRenderInteractions(bool& CanRender);
}; // Size: 0x28

#endif
