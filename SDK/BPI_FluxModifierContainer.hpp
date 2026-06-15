#ifndef UE4SS_SDK_BPI_FluxModifierContainer_HPP
#define UE4SS_SDK_BPI_FluxModifierContainer_HPP

class IBPI_FluxModifierContainer_C : public IInterface
{

    void IgnoreModifierOverlap(class UActorComponent* Copmponent, bool& Ignore);
    void AddModifiers(const TArray<class UBP_FluxModifierComponent_C*>& Modifiers, bool& Remove);
}; // Size: 0x28

#endif
