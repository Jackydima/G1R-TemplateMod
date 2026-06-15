#ifndef UE4SS_SDK_BP_CharacterMinWetnessTrigger_HPP
#define UE4SS_SDK_BP_CharacterMinWetnessTrigger_HPP

class ABP_CharacterMinWetnessTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    double MinWetness;                                                                // 0x02A8 (size: 0x8)

    void BndEvt__BP_CharacterWetnessTrigger_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_CharacterWetnessTrigger_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_CharacterMinWetnessTrigger(int32 EntryPoint);
}; // Size: 0x2B0

#endif
