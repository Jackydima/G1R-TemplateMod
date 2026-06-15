#ifndef UE4SS_SDK_BP_LavaExtractor_HPP
#define UE4SS_SDK_BP_LavaExtractor_HPP

class ABP_LavaExtractor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UGothicFXComponent* GothicFX;                                               // 0x0298 (size: 0x8)
    class UNiagaraComponent* P_LavaExplosion_Extractor_Right;                         // 0x02A0 (size: 0x8)
    class UNiagaraComponent* P_LavaExplosion_Extractor_Center;                        // 0x02A8 (size: 0x8)
    class UNiagaraComponent* P_LavaExplosion_Extractor_Left;                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_FinalDuct_Light;                 // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_01a_Right_Light;                 // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_01a_Left_Light;                  // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_Center_Light;                    // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* ST_LavaLight_Right;                                   // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* ST_LavaLight_Left;                                    // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* ST_LavaLight_Center;                                  // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* ST_LavaLight;                                         // 0x02F0 (size: 0x8)
    class UEnvironmentLavaInteractionComponent* EnvironmentLavaInteractionComponent;  // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_01a_Center_Floor;                // 0x0300 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_01a_Right_Floor;                 // 0x0308 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_01a_Left_Floor;                  // 0x0310 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanals_Final_02;                             // 0x0318 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanals_Final_01;                             // 0x0320 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_FinalDuct;                       // 0x0328 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanals_Center_Start;                         // 0x0330 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanals_Right_Start;                          // 0x0338 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanals_Left_Start;                           // 0x0340 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_Box_Center;                                 // 0x0348 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_01a_Center_Damage;               // 0x0350 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_Box_Left;                                   // 0x0358 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_01a_Left_Damage;                 // 0x0360 (size: 0x8)
    class UNiagaraComponent* P_LavaSplash_Box_Right;                                  // 0x0368 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_01a_Right_Damage;                // 0x0370 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanals_Center;                               // 0x0378 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanals_Left;                                 // 0x0380 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanals_Right;                                // 0x0388 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_Right;                           // 0x0390 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_Left;                            // 0x0398 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_Center;                          // 0x03A0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_Center_Left;                      // 0x03A8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_Center_Right;                     // 0x03B0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_End;                              // 0x03B8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_Right;                            // 0x03C0 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_Center;                           // 0x03C8 (size: 0x8)
    class UNiagaraComponent* P_LavaSplashCanalsWave_Left;                             // 0x03D0 (size: 0x8)
    class UNiagaraComponent* P_LavaSmoke_LavaExtractor;                               // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* ST_LavaExtractorLava_Base;                            // 0x03E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E8 (size: 0x8)
    float TL_Fill_Lava_Pools_Flicker_Transition_Pools_55F5F44A4EE2B98CBCDCDDB225F7297C; // 0x03F0 (size: 0x4)
    float TL_Fill_Lava_Pools_Flicker_Transition_55F5F44A4EE2B98CBCDCDDB225F7297C;     // 0x03F4 (size: 0x4)
    float TL_Fill_Lava_Pools_Gradient_Fill_55F5F44A4EE2B98CBCDCDDB225F7297C;          // 0x03F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_Lava_Pools__Direction_55F5F44A4EE2B98CBCDCDDB225F7297C; // 0x03FC (size: 0x1)
    class UTimelineComponent* TL Fill Lava Pools;                                     // 0x0400 (size: 0x8)
    float TL_Fill_Final_Duct_Gradient_Fill_FDE914094A70572E0B1070A45F6B1DBA;          // 0x0408 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_Final_Duct__Direction_FDE914094A70572E0B1070A45F6B1DBA; // 0x040C (size: 0x1)
    class UTimelineComponent* TL Fill Final Duct;                                     // 0x0410 (size: 0x8)
    float TL_Fill_Center_Gradient_Fill_26FE9B894A5BD79A35A12A8175D35F38;              // 0x0418 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_Center__Direction_26FE9B894A5BD79A35A12A8175D35F38; // 0x041C (size: 0x1)
    class UTimelineComponent* TL Fill Center;                                         // 0x0420 (size: 0x8)
    float TL_Fill_Ducts_Gradient_Fill_1D7B582044EB579F11AC82B0EA1A7616;               // 0x0428 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Fill_Ducts__Direction_1D7B582044EB579F11AC82B0EA1A7616; // 0x042C (size: 0x1)
    class UTimelineComponent* TL Fill Ducts;                                          // 0x0430 (size: 0x8)
    bool Lava Pools Filling;                                                          // 0x0438 (size: 0x1)
    bool Lava Pools Filled;                                                           // 0x0439 (size: 0x1)
    double Time to Fill Lava Pools;                                                   // 0x0440 (size: 0x8)
    class UMaterialInstanceDynamic* MID Ducts;                                        // 0x0448 (size: 0x8)
    bool Ducts Filling;                                                               // 0x0450 (size: 0x1)
    bool Ducts Filled;                                                                // 0x0451 (size: 0x1)
    double Time to Fill Ducts;                                                        // 0x0458 (size: 0x8)
    bool Center Filling;                                                              // 0x0460 (size: 0x1)
    bool Center Filled;                                                               // 0x0461 (size: 0x1)
    class UMaterialInstanceDynamic* MID Center;                                       // 0x0468 (size: 0x8)
    double Time to Fill Center;                                                       // 0x0470 (size: 0x8)
    class UMaterialInstanceDynamic* MID Final Duct;                                   // 0x0478 (size: 0x8)
    bool Final Duct Filling;                                                          // 0x0480 (size: 0x1)
    bool Final Duct Filled;                                                           // 0x0481 (size: 0x1)
    double Time to Fill Final Duct;                                                   // 0x0488 (size: 0x8)
    class UDA_LavaParameters_C* Lava Parameters;                                      // 0x0490 (size: 0x8)
    int32 Current Lava Pool Iteration;                                                // 0x0498 (size: 0x4)
    int32 Current Lava Pool Buffered Iterations;                                      // 0x049C (size: 0x4)
    FName DoorName;                                                                   // 0x04A0 (size: 0x8)
    FName SaveData;                                                                   // 0x04A8 (size: 0x8)
    class ABP_LavaStream_C* LavaStream;                                               // 0x04B0 (size: 0x8)
    class AInteractiveObjectActor* InteractiveObjectActor;                            // 0x04B8 (size: 0x8)
    double Initial Lava Height;                                                       // 0x04C0 (size: 0x8)
    double Final Lava Height;                                                         // 0x04C8 (size: 0x8)
    class AActor* Lava Actor;                                                         // 0x04D0 (size: 0x8)
    class ABP_ForgeLava_C* ForgeLava;                                                 // 0x04D8 (size: 0x8)
    class UMaterialInstanceDynamic* Lava MID;                                         // 0x04E0 (size: 0x8)
    TArray<class ALight*> Light Actors;                                               // 0x04E8 (size: 0x10)
    class UMaterialInstanceDynamic* MID Lava Pools;                                   // 0x04F8 (size: 0x8)
    class UMaterialInstanceDynamic* Center Light MID;                                 // 0x0500 (size: 0x8)
    class UMaterialInstanceDynamic* Duct Light MID;                                   // 0x0508 (size: 0x8)
    class UMaterialInstanceDynamic* Pool Light MID;                                   // 0x0510 (size: 0x8)
    class UMaterialInstanceDynamic* Final Duct Light MID;                             // 0x0518 (size: 0x8)
    TArray<class ANiagaraActor*> Lava Pool Splahes;                                   // 0x0520 (size: 0x10)
    FGothicFXInstanceHandle FXFloorLoopHandle;                                        // 0x0530 (size: 0x8)

    void Set Pool Splashes Parameter(FName Parameter Name, float Parameter Value);
    void Set Lights Intensity(double Intensity);
    void Get Lava MID(class UMaterialInstanceDynamic*& Lava MID);
    void UserConstructionScript();
    void TL Fill Ducts__FinishedFunc();
    void TL Fill Ducts__UpdateFunc();
    void TL Fill Center__FinishedFunc();
    void TL Fill Center__UpdateFunc();
    void TL Fill Final Duct__FinishedFunc();
    void TL Fill Final Duct__UpdateFunc();
    void TL Fill Lava Pools__FinishedFunc();
    void TL Fill Lava Pools__UpdateFunc();
    void OnMessageReceived_13BA728B4DA6FE433F1C4D8BC084349D(class UAsyncAction_ListenForGameplayMessage* ProxyObject, FGameplayTag ActualChannel);
    void ReceiveBeginPlay();
    void Fill Ducts();
    void Fill Center();
    void Fill Final Duct();
    void Fill Lava Pools();
    void Set State(bool IsFilled, int32 Lava Pool Iterations);
    void ExecuteUbergraph_BP_LavaExtractor(int32 EntryPoint);
}; // Size: 0x538

#endif
