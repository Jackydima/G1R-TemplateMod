#ifndef UE4SS_SDK_W_SavedSlot_Details_HPP
#define UE4SS_SDK_W_SavedSlot_Details_HPP

class UW_SavedSlot_Details_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_50;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image_206;                                                          // 0x02F0 (size: 0x8)
    class UW_ProfileSlot_Row_C* Info_Chapter;                                         // 0x02F8 (size: 0x8)
    class UW_ProfileSlot_Row_C* Info_SaveTime;                                        // 0x0300 (size: 0x8)
    class UW_ProfileSlot_Row_C* Info_TimePlayed;                                      // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_Savename;                                             // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock_SaveType;                                             // 0x0318 (size: 0x8)
    class USavedSlotInfo* DefaultValues;                                              // 0x0320 (size: 0x8)
    bool DemoMode;                                                                    // 0x0328 (size: 0x1)
    FSlateBrush DefaultBrush;                                                         // 0x0330 (size: 0xD0)

    void DefaultInfo();
    void UpdateInfo(class USavedSlotInfo* NewSaveInfo);
    void Construct();
    void ExecuteUbergraph_W_SavedSlot_Details(int32 EntryPoint);
}; // Size: 0x400

#endif
