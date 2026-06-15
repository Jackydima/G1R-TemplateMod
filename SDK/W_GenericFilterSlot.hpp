#ifndef UE4SS_SDK_W_GenericFilterSlot_HPP
#define UE4SS_SDK_W_GenericFilterSlot_HPP

class UW_GenericFilterSlot_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anim_Select;                                              // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x0430 (size: 0x8)
    class UImage* Image_Background;                                                   // 0x0438 (size: 0x8)
    class UImage* Image_Background_ClickEffect;                                       // 0x0440 (size: 0x8)
    class UImage* Image_Background_Selected;                                          // 0x0448 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x0450 (size: 0x8)
    class UImage* Image_Frame_Selected;                                               // 0x0458 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0460 (size: 0x8)
    class UW_NewIcon_C* Image_NewIcon;                                                // 0x0468 (size: 0x8)

    void Update Unseen Marking(bool Is Unseen);
    void Update Enabled State(bool Is Enabled);
    void Initialize Slot(class UAlkFilterWidgetFilter* Filter);
    void Reset Slot();
    void OnLoaded_341096E7471CCB6B2CFABABC134679CE(class UObject* Loaded);
    void OnHovered();
    void OnUnhovered();
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnEntryReleased();
    void Event On Enabled State Changed(bool _IsEnabled);
    void Event On Unseen State Changed(bool _IsUnseen);
    void ExecuteUbergraph_W_GenericFilterSlot(int32 EntryPoint);
}; // Size: 0x470

#endif
