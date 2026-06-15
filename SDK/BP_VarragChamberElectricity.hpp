#ifndef UE4SS_SDK_BP_VarragChamberElectricity_HPP
#define UE4SS_SDK_BP_VarragChamberElectricity_HPP

class ABP_VarragChamberElectricity_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Sphere_W02;                                           // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Sphere_W01;                                           // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Sphere_G03;                                           // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Sphere_G02;                                           // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Sphere_G01;                                           // 0x02B8 (size: 0x8)
    class UNiagaraComponent* P_TestLocation;                                          // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_VarragChamberElectricity(int32 EntryPoint);
}; // Size: 0x2D0

#endif
