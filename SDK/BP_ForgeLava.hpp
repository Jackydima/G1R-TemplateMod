#ifndef UE4SS_SDK_BP_ForgeLava_HPP
#define UE4SS_SDK_BP_ForgeLava_HPP

class ABP_ForgeLava_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UEnvironmentLavaInteractionComponent* EnvironmentLavaInteractionComponent;  // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Light_Plane_Start_02;                                 // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Light_Plane_Start_01;                                 // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* SM_LavaWaterfall_Center;                              // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Plane_Center;                                         // 0x02B8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_End_Left;                                   // 0x02C0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_End_Right;                                  // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Light_Plane_02;                                       // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Light_Plane_01;                                       // 0x02D8 (size: 0x8)
    class UNiagaraComponent* P_LavaCenter_End_04;                                     // 0x02E0 (size: 0x8)
    class UNiagaraComponent* P_LavaCenter_End_03;                                     // 0x02E8 (size: 0x8)
    class UNiagaraComponent* P_LavaCenter_End_02;                                     // 0x02F0 (size: 0x8)
    class UNiagaraComponent* P_LavaCenter_End_01;                                     // 0x02F8 (size: 0x8)
    class UNiagaraComponent* P_LavaCenter_Start_04;                                   // 0x0300 (size: 0x8)
    class UNiagaraComponent* P_LavaCenter_Start_03;                                   // 0x0308 (size: 0x8)
    class UNiagaraComponent* P_LavaCenter_Start_02;                                   // 0x0310 (size: 0x8)
    class UNiagaraComponent* P_LavaCenter_Start_01;                                   // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_LavaCenter;                                        // 0x0320 (size: 0x8)
    class UNiagaraComponent* P_LavaEmbers;                                            // 0x0328 (size: 0x8)
    class UStaticMeshComponent* SM_PreviousLava;                                      // 0x0330 (size: 0x8)
    class UStaticMeshComponent* SM_LavaWaterfall1;                                    // 0x0338 (size: 0x8)
    class UNiagaraComponent* P_LavaBucketDrops_03;                                    // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Plane_Left;                                           // 0x0348 (size: 0x8)
    class UStaticMeshComponent* SM_LavaWaterfall;                                     // 0x0350 (size: 0x8)
    class UNiagaraComponent* P_LavaBucketDrops_02;                                    // 0x0358 (size: 0x8)
    class UStaticMeshComponent* Plane_Right;                                          // 0x0360 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0368 (size: 0x8)
    float TL_Fill_Center_Lava_Gradient_Fill_E7C86CC049863A3F472585BB7AD2B55F;         // 0x0370 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_Center_Lava__Direction_E7C86CC049863A3F472585BB7AD2B55F; // 0x0374 (size: 0x1)
    class UTimelineComponent* TL Fill Center Lava;                                    // 0x0378 (size: 0x8)
    float TL_Fill_First_Lava_Gradient_Fill_403277BB4934D96683D25CB8D13CBE85;          // 0x0380 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_First_Lava__Direction_403277BB4934D96683D25CB8D13CBE85; // 0x0384 (size: 0x1)
    class UTimelineComponent* TL Fill First Lava;                                     // 0x0388 (size: 0x8)
    float TL_Fill_Forge_Lava_Gradient_Fill_B7F09EA643DD30925702C09EC7D1F704;          // 0x0390 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_Forge_Lava__Direction_B7F09EA643DD30925702C09EC7D1F704; // 0x0394 (size: 0x1)
    class UTimelineComponent* TL Fill Forge Lava;                                     // 0x0398 (size: 0x8)
    class UMaterialInstanceDynamic* MID Forge Lava;                                   // 0x03A0 (size: 0x8)
    class UMaterialInstanceDynamic* MID Forge Lava Fall;                              // 0x03A8 (size: 0x8)
    bool Filling Forge Lava;                                                          // 0x03B0 (size: 0x1)
    bool Filled Forge Lava;                                                           // 0x03B1 (size: 0x1)
    double Time to Fill Forge Lava;                                                   // 0x03B8 (size: 0x8)
    class UMaterialInstanceDynamic* MID First Lava;                                   // 0x03C0 (size: 0x8)
    bool Filling First Lava;                                                          // 0x03C8 (size: 0x1)
    bool Filled First Lava;                                                           // 0x03C9 (size: 0x1)
    double Time to Fill First Lava;                                                   // 0x03D0 (size: 0x8)
    class UMaterialInstanceDynamic* MID Center Lava;                                  // 0x03D8 (size: 0x8)
    bool Filling Center Lava;                                                         // 0x03E0 (size: 0x1)
    bool Filled Center Lava;                                                          // 0x03E1 (size: 0x1)
    double Time to Fill Center Lava;                                                  // 0x03E8 (size: 0x8)
    class ABP_AncientForge_C* AncientForge;                                           // 0x03F0 (size: 0x8)

    void UserConstructionScript();
    void TL Fill Forge Lava__FinishedFunc();
    void TL Fill Forge Lava__UpdateFunc();
    void TL Fill First Lava__FinishedFunc();
    void TL Fill First Lava__UpdateFunc();
    void TL Fill Center Lava__FinishedFunc();
    void TL Fill Center Lava__UpdateFunc();
    void ReceiveBeginPlay();
    void Fill Forge Lava();
    void Fill First Lava();
    void Fill Center Lava();
    void Set State(bool IsFilled);
    void ExecuteUbergraph_BP_ForgeLava(int32 EntryPoint);
}; // Size: 0x3F8

#endif
