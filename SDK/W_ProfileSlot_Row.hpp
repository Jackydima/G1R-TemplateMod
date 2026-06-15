#ifndef UE4SS_SDK_W_ProfileSlot_Row_HPP
#define UE4SS_SDK_W_ProfileSlot_Row_HPP

class UW_ProfileSlot_Row_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* CommonActivatableWidgetSwitcher_218;      // 0x02E8 (size: 0x8)
    class UImage* Image_63;                                                           // 0x02F0 (size: 0x8)
    class USizeBox* SizeBox_60;                                                       // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_Date;                                                 // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_Generic;                                              // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock_PlayTime;                                             // 0x0318 (size: 0x8)
    FText RowName;                                                                    // 0x0320 (size: 0x10)
    int32 RowType;                                                                    // 0x0330 (size: 0x4)
    FText SecondsText;                                                                // 0x0338 (size: 0x10)
    float In Width Override;                                                          // 0x0348 (size: 0x4)
    float Wrap Text At;                                                               // 0x034C (size: 0x4)

    void SetExtendedInfoVisibility(bool IsVisible);
    void SetTextGeneric(FText Text);
    void SetLastSavedDate(FDateTime LastSavedDate);
    void SetRowType(bool ShowColon);
    void SetTimePlayed(double TimePlayed);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_W_ProfileSlot_Row(int32 EntryPoint);
}; // Size: 0x350

#endif
