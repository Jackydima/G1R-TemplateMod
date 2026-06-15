#ifndef UE4SS_SDK_BP_Candles_04_HPP
#define UE4SS_SDK_BP_Candles_04_HPP

class ABP_Candles_04_C : public ABP_BaseCandle_C
{
    class UStaticMeshComponent* CandlePlane4;                                         // 0x1028 (size: 0x8)
    class UStaticMeshComponent* CandlePlane2;                                         // 0x1030 (size: 0x8)
    class UStaticMeshComponent* CandlePlane1;                                         // 0x1038 (size: 0x8)
    class UStaticMeshComponent* CandlePlane_0;                                        // 0x1040 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent04;                                // 0x1048 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent02;                                // 0x1050 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent01;                                // 0x1058 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent0;                                 // 0x1060 (size: 0x8)
    class USceneComponent* SharedRoot_0;                                              // 0x1068 (size: 0x8)

    void BP_Switchoff(bool PlaySound, bool PlayParticles);
    void BP_Switchon(bool PlaySound, bool PlayParticles);
    void GatherFireSources(TArray<class UPrimitiveComponent*>& Fire Planes);
    void GatherInteractables(TArray<class USceneComponent*>& Interactables);
}; // Size: 0x1070

#endif
