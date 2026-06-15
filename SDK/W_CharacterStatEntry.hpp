#ifndef UE4SS_SDK_W_CharacterStatEntry_HPP
#define UE4SS_SDK_W_CharacterStatEntry_HPP

class UW_CharacterStatEntry_C : public UStatEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0500 (size: 0x8)
    class UHorizontalBox* HorizontalBox_MaxValue;                                     // 0x0508 (size: 0x8)
    class UImage* Image_Hover;                                                        // 0x0510 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0518 (size: 0x8)
    class UImage* Image_StatLevel;                                                    // 0x0520 (size: 0x8)
    class UW_NewIcon_C* NewIcon;                                                      // 0x0528 (size: 0x8)
    class UOverlay* Overlay_Icon;                                                     // 0x0530 (size: 0x8)
    class USizeBox* SizeBox_Content;                                                  // 0x0538 (size: 0x8)
    class UTextBlock* TextBlock_StatMaxValue;                                         // 0x0540 (size: 0x8)
    class UTextBlock* TextBlock_StatName;                                             // 0x0548 (size: 0x8)
    class UTextBlock* TextBlock_StatValue;                                            // 0x0550 (size: 0x8)
    class UTextBlock* TextBlock_StatValueSeparator;                                   // 0x0558 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Value;                                      // 0x0560 (size: 0x8)
    FLinearColor Text Color;                                                          // 0x0568 (size: 0x10)
    FLinearColor Value Color;                                                         // 0x0578 (size: 0x10)
    FLinearColor Max Value Color;                                                     // 0x0588 (size: 0x10)

    void Update Unseen Marker();
    FVector2D GetUMGSize();
    void Update Attribute Value();
    void Update Skill Value();
    void Update Value();
    void Update Static Visuals();
    void PreConstruct(bool IsDesignTime);
    void UpdateValue();
    void OnSelected();
    void OnDeselected();
    void ExecuteUbergraph_W_CharacterStatEntry(int32 EntryPoint);
}; // Size: 0x598

#endif
