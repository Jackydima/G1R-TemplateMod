#ifndef UE4SS_SDK_W_Quests_Slot_HPP
#define UE4SS_SDK_W_Quests_Slot_HPP

class UW_Quests_Slot_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anim_Select;                                              // 0x0428 (size: 0x8)
    class UImage* Image_FailedIcon;                                                   // 0x0430 (size: 0x8)
    class UImage* Image_SucceededIcon;                                                // 0x0438 (size: 0x8)
    class UTextBlock* TextBlock_QuestGiverName;                                       // 0x0440 (size: 0x8)
    class UTextBlock* TextBlock_QuestName;                                            // 0x0448 (size: 0x8)
    class UW_NewIcon_C* W_NewIcon;                                                    // 0x0450 (size: 0x8)
    bool Clicked;                                                                     // 0x0458 (size: 0x1)
    FName Thumbnail image material parameter name;                                    // 0x045C (size: 0x8)
    class UQuest* Current Quest;                                                      // 0x0468 (size: 0x8)

    void Play Selection Animation(bool Forward);
    void On Quest Cleared();
    void Handle View State Change(bool Is New);
    void On Quest Set(class UQuest* Quest);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void On View State Changed(bool IsNewForUI);
    void BP_OnEntryReleased();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnHovered();
    void OnUnhovered();
    void ExecuteUbergraph_W_Quests_Slot(int32 EntryPoint);
}; // Size: 0x470

#endif
