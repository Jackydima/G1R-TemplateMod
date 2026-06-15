#ifndef UE4SS_SDK_BP_LightSpellVisual_HPP
#define UE4SS_SDK_BP_LightSpellVisual_HPP

class ABP_LightSpellVisual_C : public ALightSpellVisual
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0390 (size: 0x8)
    class ULogicalLightsourceComponent* LogicalLightSource;                           // 0x0398 (size: 0x8)
    class UNiagaraComponent* P_Light_Ball;                                            // 0x03A0 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x03A8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* Null_Balls;                                           // 0x03B8 (size: 0x8)
    class UNiagaraComponent* P_Invocation;                                            // 0x03C0 (size: 0x8)
    float MoveToHand_Lerp_6FB4B9CD43F6B5AC5D8810978A348801;                           // 0x03C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveToHand__Direction_6FB4B9CD43F6B5AC5D8810978A348801; // 0x03CC (size: 0x1)
    class UTimelineComponent* MoveToHand;                                             // 0x03D0 (size: 0x8)
    FVector Timeline_15_NewLocation_4EB111104A515793A6D2E4B0FACC4FA1;                 // 0x03D8 (size: 0x18)
    TEnumAsByte<ETimelineDirection::Type> Timeline_15__Direction_4EB111104A515793A6D2E4B0FACC4FA1; // 0x03F0 (size: 0x1)
    class UTimelineComponent* Timeline_15;                                            // 0x03F8 (size: 0x8)
    float MovementTimeline_NewTrack_0_E1153667483559281064EFB4A30D83A1;               // 0x0400 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MovementTimeline__Direction_E1153667483559281064EFB4A30D83A1; // 0x0404 (size: 0x1)
    class UTimelineComponent* MovementTimeline;                                       // 0x0408 (size: 0x8)
    FVector Timeline_17_NewLocation_80189C7D4C7CF7A251C6EF9DED2C7E7F;                 // 0x0410 (size: 0x18)
    float Timeline_17_NewZOscilation_80189C7D4C7CF7A251C6EF9DED2C7E7F;                // 0x0428 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_17__Direction_80189C7D4C7CF7A251C6EF9DED2C7E7F; // 0x042C (size: 0x1)
    class UTimelineComponent* Timeline_17;                                            // 0x0430 (size: 0x8)
    FVector Timeline_16_NewLocation_F81AEE964609070341ADACA973DE7FA5;                 // 0x0438 (size: 0x18)
    float Timeline_16_NewZOscilation_F81AEE964609070341ADACA973DE7FA5;                // 0x0450 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_16__Direction_F81AEE964609070341ADACA973DE7FA5; // 0x0454 (size: 0x1)
    class UTimelineComponent* Timeline_16;                                            // 0x0458 (size: 0x8)
    FVector Timeline_2_NewLocation_843C31FE424032B0789223A7A47CF6A8;                  // 0x0460 (size: 0x18)
    float Timeline_2_NewZOscilation_843C31FE424032B0789223A7A47CF6A8;                 // 0x0478 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_843C31FE424032B0789223A7A47CF6A8; // 0x047C (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0480 (size: 0x8)
    float Timeline_14_NewLocationZ_F0CF824041B5EF0D62357DBB807C6B0C;                  // 0x0488 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_14__Direction_F0CF824041B5EF0D62357DBB807C6B0C; // 0x048C (size: 0x1)
    class UTimelineComponent* Timeline_14;                                            // 0x0490 (size: 0x8)
    float Timeline_10_NewLocationZ_4ACA4A914F0A1D8B02344DB800675830;                  // 0x0498 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_10__Direction_4ACA4A914F0A1D8B02344DB800675830; // 0x049C (size: 0x1)
    class UTimelineComponent* Timeline_10;                                            // 0x04A0 (size: 0x8)
    float Timeline_9_NewZRotation_911D816A4A4867D5FC4CFFAA4F29EE8F;                   // 0x04A8 (size: 0x4)
    float Timeline_9_RotationZ_911D816A4A4867D5FC4CFFAA4F29EE8F;                      // 0x04AC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_9__Direction_911D816A4A4867D5FC4CFFAA4F29EE8F; // 0x04B0 (size: 0x1)
    class UTimelineComponent* Timeline_9;                                             // 0x04B8 (size: 0x8)
    FVector Timeline_8_NewLocation_44F5028F4B8823F793AF78B4F80A97CB;                  // 0x04C0 (size: 0x18)
    TEnumAsByte<ETimelineDirection::Type> Timeline_8__Direction_44F5028F4B8823F793AF78B4F80A97CB; // 0x04D8 (size: 0x1)
    class UTimelineComponent* Timeline_8;                                             // 0x04E0 (size: 0x8)
    FVector Timeline_7_NewLocation_1E82181249FB4D2F9EB1EBB5DFEFBC2B;                  // 0x04E8 (size: 0x18)
    TEnumAsByte<ETimelineDirection::Type> Timeline_7__Direction_1E82181249FB4D2F9EB1EBB5DFEFBC2B; // 0x0500 (size: 0x1)
    class UTimelineComponent* Timeline_7;                                             // 0x0508 (size: 0x8)
    FVector Timeline_6_NewLocation_025607C1419B97D16198F2A77C2C5016;                  // 0x0510 (size: 0x18)
    TEnumAsByte<ETimelineDirection::Type> Timeline_6__Direction_025607C1419B97D16198F2A77C2C5016; // 0x0528 (size: 0x1)
    class UTimelineComponent* Timeline_6;                                             // 0x0530 (size: 0x8)
    FVector Timeline_5_NewLocation_0D5EC4744130F23C568E7BB0D6B7407C;                  // 0x0538 (size: 0x18)
    TEnumAsByte<ETimelineDirection::Type> Timeline_5__Direction_0D5EC4744130F23C568E7BB0D6B7407C; // 0x0550 (size: 0x1)
    class UTimelineComponent* Timeline_5;                                             // 0x0558 (size: 0x8)
    FVector Timeline_4_NewLocation_9B80369C4529D5BDE4645EA1492BDCD9;                  // 0x0560 (size: 0x18)
    TEnumAsByte<ETimelineDirection::Type> Timeline_4__Direction_9B80369C4529D5BDE4645EA1492BDCD9; // 0x0578 (size: 0x1)
    class UTimelineComponent* Timeline_4;                                             // 0x0580 (size: 0x8)
    FVector Timeline_3_NewLocation_976F903D429A2B882E6221B55B587D38;                  // 0x0588 (size: 0x18)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_976F903D429A2B882E6221B55B587D38; // 0x05A0 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x05A8 (size: 0x8)
    float Timeline_1_IntensityLight_56ECD59C40AE4CF216F78DB77E2A64E9;                 // 0x05B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_56ECD59C40AE4CF216F78DB77E2A64E9; // 0x05B4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x05B8 (size: 0x8)
    float Timeline_0_IntensityLight_8BC4AD06474DE3CC6884E0BDF4809EAB;                 // 0x05C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8BC4AD06474DE3CC6884E0BDF4809EAB; // 0x05C4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x05C8 (size: 0x8)
    TSubclassOf<class ULightSpellConfig> SpellConfig;                                 // 0x05D0 (size: 0x8)
    int32 Angle;                                                                      // 0x05D8 (size: 0x4)
    double LightHeight;                                                               // 0x05E0 (size: 0x8)
    class USkeletalMeshComponent* OwnerMesh;                                          // 0x05E8 (size: 0x8)
    FVector LastActorLocation;                                                        // 0x05F0 (size: 0x18)
    FVector StartLocationOfCancel;                                                    // 0x0608 (size: 0x18)
    bool IsDissolving?;                                                               // 0x0620 (size: 0x1)
    float SpotLightIntensity;                                                         // 0x0624 (size: 0x4)
    float SpotLight2Intensity;                                                        // 0x0628 (size: 0x4)
    float PointLightIntensity;                                                        // 0x062C (size: 0x4)

    void CalculateLightLocation(FVector& Location);
    void Timeline_14__FinishedFunc();
    void Timeline_14__UpdateFunc();
    void Timeline_10__FinishedFunc();
    void Timeline_10__UpdateFunc();
    void Timeline_15__FinishedFunc();
    void Timeline_15__UpdateFunc();
    void Timeline_9__FinishedFunc();
    void Timeline_9__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Timeline_4__FinishedFunc();
    void Timeline_4__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_16__FinishedFunc();
    void Timeline_16__UpdateFunc();
    void Timeline_17__FinishedFunc();
    void Timeline_17__UpdateFunc();
    void MovementTimeline__FinishedFunc();
    void MovementTimeline__UpdateFunc();
    void Timeline_8__FinishedFunc();
    void Timeline_8__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_7__FinishedFunc();
    void Timeline_7__UpdateFunc();
    void Timeline_6__FinishedFunc();
    void Timeline_6__UpdateFunc();
    void Timeline_5__FinishedFunc();
    void Timeline_5__UpdateFunc();
    void MoveToHand__FinishedFunc();
    void MoveToHand__UpdateFunc();
    void ActivateVisuals();
    void Multicast_ActivateVisuals();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void PlayCancelSpellVisual();
    void DoDissolveVFX();
    void UpdateCurrentActorMesh(class AGothicCharacter* NewTarget);
    void ExecuteUbergraph_BP_LightSpellVisual(int32 EntryPoint);
}; // Size: 0x630

#endif
