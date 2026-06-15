#ifndef UE4SS_SDK_W_TabSelector_Horizontal_HPP
#define UE4SS_SDK_W_TabSelector_Horizontal_HPP

class UW_TabSelector_Horizontal_C : public UTabSelectorWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UHorizontalBox* Panel_Tabs;                                                 // 0x0380 (size: 0x8)
    class USizeBox* SizeBox_NextTab;                                                  // 0x0388 (size: 0x8)
    class USizeBox* SizeBox_PrevTab;                                                  // 0x0390 (size: 0x8)
    double WidthOverride;                                                             // 0x0398 (size: 0x8)
    double InnerSpaceSize;                                                            // 0x03A0 (size: 0x8)
    double OuterSpaceSize;                                                            // 0x03A8 (size: 0x8)

    void Set Tab Unseen State(int32 Tab Index, bool Unseen State);
    void UpateHints(bool ShouldShow);
    void RefreshTabs();
    void OnInputTypeChanged(ECommonInputType _InputType);
    void PreConstruct(bool IsDesignTime);
    void OnTabChangedEvent(int32 OldTabIndex, int32 NewTabIndex);
    void ClearChildren();
    void RefreshWidget();
    void ShowHints(bool _ShouldShow);
    void ExecuteUbergraph_W_TabSelector_Horizontal(int32 EntryPoint);
}; // Size: 0x3B0

#endif
