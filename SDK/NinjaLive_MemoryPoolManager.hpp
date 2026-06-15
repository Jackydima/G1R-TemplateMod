#ifndef UE4SS_SDK_NinjaLive_MemoryPoolManager_HPP
#define UE4SS_SDK_NinjaLive_MemoryPoolManager_HPP

class ANinjaLive_MemoryPoolManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UMaterialBillboardComponent* EditorIcon;                                    // 0x0298 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02A0 (size: 0x8)
    bool DisableMemoryManager;                                                        // 0x02A8 (size: 0x1)
    int32 AmountOfRenderTargetSetsToGenerate;                                         // 0x02AC (size: 0x4)
    TEnumAsByte<SimPrecision_Enum::Type> Precision;                                   // 0x02B0 (size: 0x1)
    int32 PrecisionIndex;                                                             // 0x02B4 (size: 0x4)
    int32 ResolutionX;                                                                // 0x02B8 (size: 0x4)
    int32 ResolutionY;                                                                // 0x02BC (size: 0x4)
    TArray<FRenderTargetListItem> R-RenderTargetsList;                                // 0x02C0 (size: 0x10)
    TArray<FRenderTargetListItem> RG-RenderTargetsList;                               // 0x02D0 (size: 0x10)
    TArray<FRenderTargetListItem> RGBA-RenderTargetsList;                             // 0x02E0 (size: 0x10)
    bool MMInitFinished;                                                              // 0x02F0 (size: 0x1)
    bool PrintInitDebugMessages;                                                      // 0x02F1 (size: 0x1)
    bool PrintRuntimeDebugMsg;                                                        // 0x02F2 (size: 0x1)
    bool PrintRuntimeDebugMsgVerbose;                                                 // 0x02F3 (size: 0x1)
    double DebugTextLifetime;                                                         // 0x02F8 (size: 0x8)
    int32 ExtraRenderTargetsForDensityInput;                                          // 0x0300 (size: 0x4)
    double MemConsumptionTotal;                                                       // 0x0308 (size: 0x8)
    bool SaveDebugTextToDefaultLog;                                                   // 0x0310 (size: 0x1)
    FString MemAvailableMax;                                                          // 0x0318 (size: 0x10)
    bool HalfResPressureAndDivergenceBuffers;                                         // 0x0328 (size: 0x1)
    bool SimAreaClamp;                                                                // 0x0329 (size: 0x1)

    void MemCount(int32 NumberOfChannels, int32 ResolutionX, int32 ResolutionY);
    void SetRenderTargetAttribs(class UTextureRenderTarget2D* InputPin, bool Clamping, class UTextureRenderTarget2D*& RT);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void PrintMemStatus(class UObject* Consumer, double MemConsumption, bool TakenOrReturned);
    void ExecuteUbergraph_NinjaLive_MemoryPoolManager(int32 EntryPoint);
}; // Size: 0x32A

#endif
