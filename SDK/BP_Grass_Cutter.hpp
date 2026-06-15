#ifndef UE4SS_SDK_BP_Grass_Cutter_HPP
#define UE4SS_SDK_BP_Grass_Cutter_HPP

class ABP_Grass_Cutter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneCaptureComponent2D* Scene Capture No Foliage;                         // 0x0298 (size: 0x8)
    class UNiagaraComponent* P_Grass_Cut;                                             // 0x02A0 (size: 0x8)
    class USceneCaptureComponent2D* Scene Capture;                                    // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    double Last Update Time;                                                          // 0x02B8 (size: 0x8)
    double Time to Update Actors;                                                     // 0x02C0 (size: 0x8)

    void Capture Height No Foliage();
    void Register Foliage Actors(bool Check Time);
    void Capture Color();
    void Capture Height();
    void Capture Grass(FVector Direction, bool Is Left);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Grass_Cutter(int32 EntryPoint);
}; // Size: 0x2C8

#endif
