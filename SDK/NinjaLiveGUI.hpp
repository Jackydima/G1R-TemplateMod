#ifndef UE4SS_SDK_NinjaLiveGUI_HPP
#define UE4SS_SDK_NinjaLiveGUI_HPP

class UNinjaLiveGUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* BlinkingText1;                                            // 0x02E8 (size: 0x8)
    class USpinBox* 001_SpinBox_BrushSize;                                            // 0x02F0 (size: 0x8)
    class USpinBox* 002_SpinBox_BrushDensity;                                         // 0x02F8 (size: 0x8)
    class USpinBox* 003_SpinBox_BrushHardness;                                        // 0x0300 (size: 0x8)
    class USpinBox* 004_SpinBox_BrushNoise;                                           // 0x0308 (size: 0x8)
    class USpinBox* 005_SpinBox_BrushRnd;                                             // 0x0310 (size: 0x8)
    class USpinBox* 006_SpinBox_BrushPersist;                                         // 0x0318 (size: 0x8)
    class UCheckBox* 007_Checkbox_BrushInvert;                                        // 0x0320 (size: 0x8)
    class USpinBox* 008_SpinBox_BrushDrag;                                            // 0x0328 (size: 0x8)
    class USpinBox* 009_SpinBox_BrushPuncture;                                        // 0x0330 (size: 0x8)
    class USpinBox* 010_SpinBox_SimFeedback;                                          // 0x0338 (size: 0x8)
    class UButton* 011_Button_SimClear;                                               // 0x0340 (size: 0x8)
    class USpinBox* 012_SpinBox_SimSpeed;                                             // 0x0348 (size: 0x8)
    class USpinBox* 013_SpinBox_SimTurbulence;                                        // 0x0350 (size: 0x8)
    class USpinBox* 014_SpinBox_VeloAmp;                                              // 0x0358 (size: 0x8)
    class USpinBox* 015_SpinBox_VeloOffsetX;                                          // 0x0360 (size: 0x8)
    class USpinBox* 016_SpinBox_VeloOffsetY;                                          // 0x0368 (size: 0x8)
    class USpinBox* 017_SpinBox_VeloAmpNoise;                                         // 0x0370 (size: 0x8)
    class USpinBox* 018_SpinBox_VeloDirNoise;                                         // 0x0378 (size: 0x8)
    class USpinBox* 019_SpinBox_VeloDirNoiseSize;                                     // 0x0380 (size: 0x8)
    class USpinBox* 020_SpinBox_VeloDirNoiseOffs;                                     // 0x0388 (size: 0x8)
    class UComboBoxString* 021_ComboBox_VeloFromBitmap;                               // 0x0390 (size: 0x8)
    class USpinBox* 022_SpinBox_VeloRotate;                                           // 0x0398 (size: 0x8)
    class USpinBox* 023_SpinBox_VeloOffset;                                           // 0x03A0 (size: 0x8)
    class USpinBox* 024_SpinBox_VeloTile;                                             // 0x03A8 (size: 0x8)
    class UBorder* 024b_Border_Warning_VelocityFromBitmap;                            // 0x03B0 (size: 0x8)
    class USpinBox* 025_SimareaMoFx;                                                  // 0x03B8 (size: 0x8)
    class USpinBox* 025_SimareaMoOffset;                                              // 0x03C0 (size: 0x8)
    class UComboBoxString* 026_ComboBox_DensFromBitmap;                               // 0x03C8 (size: 0x8)
    class UBorder* 026b_Border_Warning_DensityFromBitmap;                             // 0x03D0 (size: 0x8)
    class USpinBox* 027_SpinBox_DensityOffsetX;                                       // 0x03D8 (size: 0x8)
    class USpinBox* 028_SpinBox_DensityOffsetY;                                       // 0x03E0 (size: 0x8)
    class USpinBox* 029_SpinBox_DensityTile;                                          // 0x03E8 (size: 0x8)
    class UComboBoxString* 030_ComboBox_DensFromMaterial;                             // 0x03F0 (size: 0x8)
    class USpinBox* 031_SpinBox_DensityFieldAmp;                                      // 0x03F8 (size: 0x8)
    class USpinBox* 032_SpinBox_DensityFieldAmpNois;                                  // 0x0400 (size: 0x8)
    class USpinBox* 033_SpinBox_DensityFieldAmpNoisOfs;                               // 0x0408 (size: 0x8)
    class USpinBox* 034_SpinBox_DensityFieldAmpNoisTile;                              // 0x0410 (size: 0x8)
    class USpinBox* 035_SpinBox_BouncyEdges;                                          // 0x0418 (size: 0x8)
    class USpinBox* 036_SpinBox_SimEdgeFadePow;                                       // 0x0420 (size: 0x8)
    class USpinBox* 037_SpinBox_SimEdgeFadeWidth;                                     // 0x0428 (size: 0x8)
    class UComboBoxString* 038_ComboBox_OutputMaterial;                               // 0x0430 (size: 0x8)
    class UButton* 039_Button_SavePaintBuffer;                                        // 0x0438 (size: 0x8)
    class UButton* 040_Button_SaveSimBuffer;                                          // 0x0440 (size: 0x8)
    class UTextBlock* 041_TextBlock_MetaInfo;                                         // 0x0448 (size: 0x8)
    class UBorder* Border;                                                            // 0x0450 (size: 0x8)
    class UBorder* Main0_StatusBorder;                                                // 0x0458 (size: 0x8)
    class UButton* Main1_Button_Minimize;                                             // 0x0460 (size: 0x8)
    class UCheckBox* Main2_TooltipCheckBox;                                           // 0x0468 (size: 0x8)
    class UButton* Main3_Button_CloseProgram;                                         // 0x0470 (size: 0x8)
    class UComboBoxString* Main4_ComboBox_MainMenu;                                   // 0x0478 (size: 0x8)
    class UComboBoxString* Main5_ComboBox_Presets;                                    // 0x0480 (size: 0x8)
    class UButton* Main6_Button_OverWritePreset;                                      // 0x0488 (size: 0x8)
    class UButton* Main7_Button_DuplicatePreset;                                      // 0x0490 (size: 0x8)
    class UImage* MenuFrame1;                                                         // 0x0498 (size: 0x8)
    class UImage* MenuFrame2;                                                         // 0x04A0 (size: 0x8)
    class UImage* MenuFrame3;                                                         // 0x04A8 (size: 0x8)
    class UMultiLineEditableText* MultiLineEditableText_MetaData;                     // 0x04B0 (size: 0x8)
    class UNamedSlot* NamedSlot_empty;                                                // 0x04B8 (size: 0x8)
    class UNamedSlot* NamedSlot_FluidNinja;                                           // 0x04C0 (size: 0x8)
    class UTextBlock* TextBlock_BRUSH;                                                // 0x04C8 (size: 0x8)
    class UTextBlock* TextBlock_FIELDS;                                               // 0x04D0 (size: 0x8)
    class UTextBlock* TextBlock_SIM;                                                  // 0x04D8 (size: 0x8)
    class UButton* UE5SaveWarningImageButton;                                         // 0x04E0 (size: 0x8)
    FString SelectedProjectItem;                                                      // 0x04E8 (size: 0x10)
    FString SelectedPresetItem;                                                       // 0x04F8 (size: 0x10)
    FString SelectedPresetItemTemp;                                                   // 0x0508 (size: 0x10)
    FString NullString;                                                               // 0x0518 (size: 0x10)
    FString DefaultSelection;                                                         // 0x0528 (size: 0x10)
    TArray<class UNamedSlot*> ArrayOfWidgets;                                         // 0x0538 (size: 0x10)
    int32 counter;                                                                    // 0x0548 (size: 0x4)
    int32 SelectedActorIndex;                                                         // 0x054C (size: 0x4)
    bool PresetsDetected;                                                             // 0x0550 (size: 0x1)
    FNinjaLiveGUI_COnSelectionChanged OnSelectionChanged;                             // 0x0558 (size: 0x10)
    void OnSelectionChanged(FString SelectedMenuItem, FString SelectedActorName);
    FNinjaLiveGUI_COnPresetSelectionChanged OnPresetSelectionChanged;                 // 0x0568 (size: 0x10)
    void OnPresetSelectionChanged(FString SelectedPreset, bool ForceAutoLoadPreset);
    FNinjaLiveGUI_COnPresetSave OnPresetSave;                                         // 0x0578 (size: 0x10)
    void OnPresetSave(FString SelectedProject, FString SelectedPreset, bool OverWriteOrNot);
    double Timer;                                                                     // 0x0588 (size: 0x8)
    double TimerTemp;                                                                 // 0x0590 (size: 0x8)
    bool NinjaBaseArraysConstructed;                                                  // 0x0598 (size: 0x1)
    bool PresetSaveOverWriteFlag;                                                     // 0x0599 (size: 0x1)
    TArray<FName> TempVarOfParticleTemplatePackages;                                  // 0x05A0 (size: 0x10)
    TArray<FName> TempVarOfDensityTemplatePackages;                                   // 0x05B0 (size: 0x10)
    TArray<FName> TempVarOfVelocityTemplatePackages;                                  // 0x05C0 (size: 0x10)
    TArray<FName> TempVarOfOutputMaterials;                                           // 0x05D0 (size: 0x10)
    TArray<FString> ArrayOfPresetNamesUnsorted;                                       // 0x05E0 (size: 0x10)
    TArray<FString> ArrayOfPresetNamesSorted;                                         // 0x05F0 (size: 0x10)
    bool SaveBasicAtlasPlayer;                                                        // 0x0600 (size: 0x1)
    bool SaveBasicFlowPlayer;                                                         // 0x0601 (size: 0x1)
    bool NinjaViewPortToolsVisibilityFlag;                                            // 0x0602 (size: 0x1)
    FNinjaLiveGUI_COnDensityMapSave OnDensityMapSave;                                 // 0x0608 (size: 0x10)
    void OnDensityMapSave(bool SavePaintBuffer);
    bool SystemOn;                                                                    // 0x0618 (size: 0x1)
    bool RecordingStarted;                                                            // 0x0619 (size: 0x1)
    int32 TempVecfieldIndex;                                                          // 0x061C (size: 0x4)
    FNinjaLiveGUI_COnPresetDuplicated OnPresetDuplicated;                             // 0x0620 (size: 0x10)
    void OnPresetDuplicated(class UDataTable* DuplicatedPreset);
    bool ForcePreferredPreset;                                                        // 0x0630 (size: 0x1)
    class AActor* SelectedActor;                                                      // 0x0638 (size: 0x8)
    class UNinjaLiveComponent_C* SelectedActorComponent;                              // 0x0640 (size: 0x8)

    void GetSelectedActor(int32 SelectedActorIndex, class ANinjaLive_C*& NinjaLiveActor);
    void BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature();
    void BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__Button_SavePreset_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_DuplicatePreset_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature();
    void OnPresetDuplicationFinished(class UDataTable* DuplicatedPreset);
    void BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__Main3_Button_Minimize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__BP_NinjaGUI_UE5SaveWarningImageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_152_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Button_ClearBuffers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_224_OnOpeningEvent__DelegateSignature();
    void BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_222_OnOpeningEvent__DelegateSignature();
    void BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Button_14_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_NinjaLiveGUI(int32 EntryPoint);
    void OnPresetDuplicated__DelegateSignature(class UDataTable* DuplicatedPreset);
    void OnDensityMapSave__DelegateSignature(bool SavePaintBuffer);
    void OnPresetSave__DelegateSignature(FString SelectedProject, FString SelectedPreset, bool OverWriteOrNot);
    void OnPresetSelectionChanged__DelegateSignature(FString SelectedPreset, bool ForceAutoLoadPreset);
    void OnSelectionChanged__DelegateSignature(FString SelectedMenuItem, FString SelectedActorName);
}; // Size: 0x648

#endif
