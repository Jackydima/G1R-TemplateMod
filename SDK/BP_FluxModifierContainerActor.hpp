#ifndef UE4SS_SDK_BP_FluxModifierContainerActor_HPP
#define UE4SS_SDK_BP_FluxModifierContainerActor_HPP

class ABP_FluxModifierContainerActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0298 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02A0 (size: 0x8)
    TArray<class UBP_FluxModifierComponent_C*> ModifiderComponents;                   // 0x02A8 (size: 0x10)

    void IgnoreModifierOverlap(class UActorComponent* Copmponent, bool& Ignore);
    void AddModifiers(const TArray<class UBP_FluxModifierComponent_C*>& Modifiers, bool& Remove);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FluxModifierContainerActor(int32 EntryPoint);
}; // Size: 0x2B8

#endif
