#ifndef UE4SS_SDK_W_Setting_EnumDropDown_Item_HPP
#define UE4SS_SDK_W_Setting_EnumDropDown_Item_HPP

class UW_Setting_EnumDropDown_Item_C : public UAlkUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Content;                                // 0x0340 (size: 0x8)
    bool Is Selected;                                                                 // 0x0348 (size: 0x1)
    FText Text;                                                                       // 0x0350 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_Setting_EnumDropDown_Item(int32 EntryPoint);
}; // Size: 0x360

#endif
