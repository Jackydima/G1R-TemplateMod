#ifndef UE4SS_SDK_W_Inventory_Stats_Slot_HPP
#define UE4SS_SDK_W_Inventory_Stats_Slot_HPP

class UW_Inventory_Stats_Slot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_ArrowDown;                                                    // 0x02E8 (size: 0x8)
    class UImage* Image_ArrowUp;                                                      // 0x02F0 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x02F8 (size: 0x8)
    class UTextBlock* Text_StatValue;                                                 // 0x0300 (size: 0x8)
    class UTexture2D* StatIcon;                                                       // 0x0308 (size: 0x8)
    FGameplayAttribute Attribute;                                                     // 0x0310 (size: 0x38)
    bool Is Percent;                                                                  // 0x0348 (size: 0x1)
    FText PercentSymbol;                                                              // 0x0350 (size: 0x10)
    double InitialValue;                                                              // 0x0360 (size: 0x8)
    double ModifiedValue;                                                             // 0x0368 (size: 0x8)

    void ResetPreviewValue();
    void SetPreviewValue(double Modifier);
    void GetAttributeValue(double& AttributeValue);
    void Setup();
    void RememberInitialValue();
    void UpdateVisuals();
    void OnInitialized();
    void ExecuteUbergraph_W_Inventory_Stats_Slot(int32 EntryPoint);
}; // Size: 0x370

#endif
