#ifndef UE4SS_SDK_BPI_FluxTickableEditorCallback_HPP
#define UE4SS_SDK_BPI_FluxTickableEditorCallback_HPP

class IBPI_FluxTickableEditorCallback_C : public IInterface
{

    void UpdateModifierMaterials(const TArray<class UMaterialInstanceDynamic*>& Materials, bool UseVelocityMap);
    void ToggleUpdateSimulation();
    void TogleDebugGround();
    void OnEditorSelectionChanged(bool Selected);
    void OnEditorUpdateLoop();
    void OnEditorModifierChanged();
    void OnEditorIterateSimulation(int32 Iterations);
    void OnEditorRestartSimulation();
    void OnEditorStopSimulation();
    void OnEditorShowSimulation();
    void OnEditorPostLoad();
}; // Size: 0x28

#endif
