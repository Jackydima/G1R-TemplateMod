#ifndef UE4SS_SDK_NinjaLive_PresetManager_HPP
#define UE4SS_SDK_NinjaLive_PresetManager_HPP

class ANinjaLive_PresetManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UChildActorComponent* WriteDataTableUtility;                                // 0x0298 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02A0 (size: 0x8)
    class UMaterialBillboardComponent* EditorIcon;                                    // 0x02A8 (size: 0x8)
    FName AssetTrimmedName_Global;                                                    // 0x02B0 (size: 0x8)
    FName AssetPath_Global;                                                           // 0x02B8 (size: 0x8)
    class UNinjaLiveGUI_C* BP_Widget_GUI1_Var;                                        // 0x02C0 (size: 0x8)
    class AActor* DefaultActor;                                                       // 0x02C8 (size: 0x8)
    int32 DefaultLiveActorIndex;                                                      // 0x02D0 (size: 0x4)
    TArray<class AActor*> ArrayOfLevelActors;                                         // 0x02D8 (size: 0x10)
    FString NinjaLiveAssetTrimmedName;                                                // 0x02E8 (size: 0x10)
    FName NinjaLivePath;                                                              // 0x02F8 (size: 0x8)
    TArray<class UNamedSlot*> ArrayOfLevelActorNamedSlots;                            // 0x0300 (size: 0x10)
    int32 RT_counter;                                                                 // 0x0310 (size: 0x4)
    FString RT_RenderPathDynamic;                                                     // 0x0318 (size: 0x10)
    FString RT_RenderPathStatic;                                                      // 0x0328 (size: 0x10)
    bool GUIWidgetInitDone;                                                           // 0x0338 (size: 0x1)
    TArray<class UNamedSlot*> NamedSlots;                                             // 0x0340 (size: 0x10)
    class UDataTable* LoadedDataTable;                                                // 0x0350 (size: 0x8)
    FString LoadedDataTablePath;                                                      // 0x0358 (size: 0x10)
    uint8 TextureCompression;                                                         // 0x0368 (size: 0x1)
    double PNGExportGamma;                                                            // 0x0370 (size: 0x8)
    bool SaveTexturesWithsRGB;                                                        // 0x0378 (size: 0x1)
    double VelocityMapDownscaleFactor;                                                // 0x0380 (size: 0x8)
    bool CompensateUEGammaCorrection;                                                 // 0x0388 (size: 0x1)
    int32 DensityMapTextureCompressionIndex;                                          // 0x038C (size: 0x4)
    int32 VelocityMapTextureCompressionIndex;                                         // 0x0390 (size: 0x4)
    bool CustomTickRate;                                                              // 0x0394 (size: 0x1)
    bool UsePluginForFGAExport;                                                       // 0x0395 (size: 0x1)
    bool DisablePresetManager;                                                        // 0x0396 (size: 0x1)
    class AActor* DefaultLiveStageActor;                                              // 0x0398 (size: 0x8)
    bool HighlightSelectedActors;                                                     // 0x03A0 (size: 0x1)
    FString InternalSavePath;                                                         // 0x03A8 (size: 0x10)
    FString ExternalSavePath;                                                         // 0x03B8 (size: 0x10)
    FString DefaultPreset;                                                            // 0x03C8 (size: 0x10)
    FString NinjaRootFolder;                                                          // 0x03D8 (size: 0x10)
    FString DefaultLiveActor;                                                         // 0x03E8 (size: 0x10)
    bool FirstStart;                                                                  // 0x03F8 (size: 0x1)
    TArray<FAssetData> AvailableImagesData;                                           // 0x0400 (size: 0x10)
    TArray<FName> AvailableImagesNames;                                               // 0x0410 (size: 0x10)
    TArray<FAssetData> AvailableParticlesData;                                        // 0x0420 (size: 0x10)
    TArray<FName> AvailableParticleNames;                                             // 0x0430 (size: 0x10)
    bool ArraysConstructed;                                                           // 0x0440 (size: 0x1)
    bool PMInitFinished;                                                              // 0x0441 (size: 0x1)
    bool DebugPerformance;                                                            // 0x0442 (size: 0x1)
    bool PoolManagerDetected;                                                         // 0x0443 (size: 0x1)
    bool AutoConnectToMemoryPool-IF-Found;                                            // 0x0444 (size: 0x1)
    bool PresetManagerDebugPrint;                                                     // 0x0445 (size: 0x1)
    bool SaveDebugTextToDefaultLog;                                                   // 0x0446 (size: 0x1)
    double DebugTextLifetime;                                                         // 0x0448 (size: 0x8)
    FColor HighlightColor;                                                            // 0x0450 (size: 0x4)
    double HighlightThickness;                                                        // 0x0458 (size: 0x8)
    double HighlightDuration;                                                         // 0x0460 (size: 0x8)
    double HighlightRefreshRate;                                                      // 0x0468 (size: 0x8)
    bool ShowMouseCursor;                                                             // 0x0470 (size: 0x1)
    class UMaterialInstanceDynamic* RenderBufferSaver;                                // 0x0478 (size: 0x8)
    TArray<FString> PresetSavingBugWorkaroundUEversions;                              // 0x0480 (size: 0x10)
    bool DisableGUIWarningOnPresetSaving;                                             // 0x0490 (size: 0x1)

    void MarkForSave_UE426_BugWorkaround(class UObject* CurrentAsset);
    void ConvertToPowerOfTwo(int32 In, int32& Out);
    void MarkNewFilesAsUnsaved(TArray<FAssetData>& ArrayOfUnsaveAssetData);
    void DataTable_SingleKeyPicker_DT(class UDataTable* DataTableIn, FString KeyToPick, FString& PickedKeyValue, bool& NotFound);
    void AssetDataFromObject(class UObject* InputObject, FAssetData& ComboAssetData, FName& Object Path, FName& Package Name, FName& Package Path, FName& Asset Name, FName& Asset Class);
    void Preset_to_InternalCSV_to_DT_Saver(bool OverWriteFlag, FString VarAsString, FString SelectedItem, TArray<FName>& AssetPaths, FName AssetName);
    void RenderTargetExportSingleV2(class UTextureRenderTarget2D* TextureRenderTarget, bool InternalSave, bool SRGB, bool NoAlpha, bool SaveWithDialog, FName InternalFilePath, FName ExternalFilePath, FString Filename, FString Extension);
    void RenderTargetExportSingleV1(class UTextureRenderTarget2D* TextureRenderTarget, bool InternalSave, bool SRGB, bool NoAlpha, bool SaveWithDialog, FName InternalFilePath, FName ExternalFilePath, FString Filename, FString Extension, FName& SavedAssetPath, FAssetData& SavedAssetData);
    void SetAssetNameAndPath(const class UObject* Object, FName& AssetTrimmedName, FName& AssetPath);
    void UserConstructionScript();
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void WriteDataTableFunction(class UDataTable* InputTable, FString InputData);
    void OnDensityMapSave(bool SavePaintBuffer);
    void ExecuteUbergraph_NinjaLive_PresetManager(int32 EntryPoint);
}; // Size: 0x491

#endif
