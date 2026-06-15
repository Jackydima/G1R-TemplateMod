#ifndef UE4SS_SDK_W_Glossary_Slot_HPP
#define UE4SS_SDK_W_Glossary_Slot_HPP

class UW_Glossary_Slot_C : public UGlossarySlotWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anim_Click;                                               // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x0430 (size: 0x8)
    class UAlkListView* AlkListView_Badges;                                           // 0x0438 (size: 0x8)
    class UImage* Image_Thumbnail;                                                    // 0x0440 (size: 0x8)
    class UW_NewIcon_C* NewIcon;                                                      // 0x0448 (size: 0x8)
    class UScaleBox* ScaleBox_Thumbnail;                                              // 0x0450 (size: 0x8)
    class UTextBlock* TextBlock_EntryName;                                            // 0x0458 (size: 0x8)
    FW_Glossary_Slot_COnItemClicked OnItemClicked;                                    // 0x0460 (size: 0x10)
    void OnItemClicked();
    class UGlossaryDocument* Current Document;                                        // 0x0470 (size: 0x8)

    void Update Badges(class UGlossaryDocument* Document);
    void HandleUnseenState(bool Unseen);
    void Handle Document Cleared();
    void Handle Document Set(class UGlossaryDocument* Document);
    void Play Hover Animation(TEnumAsByte<EUMGSequencePlayMode::Type> Play Mode, double Play Speed);
    void Play Clicked Animation(double Playback Speed);
    void OnLoaded_BDC306EB44B4F55FAB66AD9FAB67271F(class UObject* Loaded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnEntryReleased();
    void OnClicked(EAlkMouseButton _MouseButton);
    void m_OnUnseenStateChanged_Event(bool UnseenState);
    void ExecuteUbergraph_W_Glossary_Slot(int32 EntryPoint);
    void OnItemClicked__DelegateSignature();
}; // Size: 0x478

#endif
