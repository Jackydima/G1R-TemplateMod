#ifndef UE4SS_SDK_W_NotificationArea_HPP
#define UE4SS_SDK_W_NotificationArea_HPP

class UW_NotificationArea_C : public UHUDNotificationAreaWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UAlkVerticalBox* AlkVerticalBox_Content;                                    // 0x0398 (size: 0x8)
    TEnumAsByte<EHorizontalAlignment> Notification Alignment;                         // 0x03A0 (size: 0x1)

    void AddNotificationWidget(const class UHUDNotificationWidgetBase* _NotificationWidget);
    void RemoveNotificationWidget(const class UHUDNotificationWidgetBase* _NotificationWidget);
    void ExecuteUbergraph_W_NotificationArea(int32 EntryPoint);
}; // Size: 0x3A1

#endif
