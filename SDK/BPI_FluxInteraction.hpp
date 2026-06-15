#ifndef UE4SS_SDK_BPI_FluxInteraction_HPP
#define UE4SS_SDK_BPI_FluxInteraction_HPP

class IBPI_FluxInteraction_C : public IInterface
{

    void GetInteractions(double Ratio, int32 Iteration, TArray<FBS_FluxInteractionData>& Interactions);
}; // Size: 0x28

#endif
