#ifndef UE4SS_SDK_W_Hotkey_HPP
#define UE4SS_SDK_W_Hotkey_HPP

class UW_Hotkey_C : public UAlkUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UImage* Image_Equipped;                                                     // 0x0340 (size: 0x8)
    class UImage* Image_HotkeyIcon;                                                   // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_ActionName;                                           // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_Index;                                                // 0x0358 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_EquipmentType;                              // 0x0360 (size: 0x8)
    FText ActionText;                                                                 // 0x0368 (size: 0x10)
    FSlateColor TextColor;                                                            // 0x0378 (size: 0x14)
    FText EquippedText;                                                               // 0x0390 (size: 0x10)
    TMap<int32, UInputAction*> Input Actions MKB;                                     // 0x03A0 (size: 0x50)
    TMap<int32, UInputAction*> Input Actions Controller;                              // 0x03F0 (size: 0x50)
    int32 Hotkey Number;                                                              // 0x0440 (size: 0x4)
    FText New Hotkey;                                                                 // 0x0448 (size: 0x10)
    bool AutoRefreshesInputType;                                                      // 0x0458 (size: 0x1)

    void Set Force Hot Key Visibility(bool IsVisible);
    void ForceHideNumber();
    void SetHotkey(FText NewHotkey, int32 HotkeyNumber);
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void OnControlMappingsRebuilt();
    void OnInputTypeChanged(ECommonInputType _InputType);
    void ExecuteUbergraph_W_Hotkey(int32 EntryPoint);
}; // Size: 0x459

#endif
