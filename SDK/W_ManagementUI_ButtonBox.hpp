#ifndef UE4SS_SDK_W_ManagementUI_ButtonBox_HPP
#define UE4SS_SDK_W_ManagementUI_ButtonBox_HPP

class UW_ManagementUI_ButtonBox_C : public UAlkButtonBoxWidget
{
    class UW_GenericButton_C* Button_Back;                                            // 0x0390 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0398 (size: 0x8)
    class UW_GenericButton_C* Button_Close;                                           // 0x03A0 (size: 0x8)
    class UW_GenericButton_C* Button_Open;                                            // 0x03A8 (size: 0x8)
    class UW_GenericButton_C* Button_Section;                                         // 0x03B0 (size: 0x8)
    class UW_GenericButton_C* Button_ShowJournal;                                     // 0x03B8 (size: 0x8)
    class UW_GenericButton_C* Button_ShowObjectives;                                  // 0x03C0 (size: 0x8)

    void DisableItems();
    void EnableItems();
}; // Size: 0x3C8

#endif
