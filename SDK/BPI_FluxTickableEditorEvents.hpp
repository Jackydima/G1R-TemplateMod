#ifndef UE4SS_SDK_BPI_FluxTickableEditorEvents_HPP
#define UE4SS_SDK_BPI_FluxTickableEditorEvents_HPP

class IBPI_FluxTickableEditorEvents_C : public IInterface
{

    void SelectionLoop(double DeltaTime);
    void PostLoad(double Delay);
    void UpdateLoop(double DeltaTime);
    void StopSimulation();
    void StartSimulation(double Delay, int32 Iterations);
    void RestartSimulation();
}; // Size: 0x28

#endif
