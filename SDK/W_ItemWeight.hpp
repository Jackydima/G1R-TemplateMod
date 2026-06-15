#ifndef UE4SS_SDK_W_ItemWeight_HPP
#define UE4SS_SDK_W_ItemWeight_HPP

class UW_ItemWeight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_54;                                                           // 0x02E8 (size: 0x8)
    class UTextBlock* Text_CharCarryWeight;                                           // 0x02F0 (size: 0x8)
    class UTextBlock* Text_ItemWeight;                                                // 0x02F8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_WeightNumber;                               // 0x0300 (size: 0x8)
    int32 ValueType;                                                                  // 0x0308 (size: 0x4)

    void SetTextValues(int32 CurentWeight, int32 MaxCapacity, int32 ItemWeight);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_ItemWeight(int32 EntryPoint);
}; // Size: 0x30C

#endif
