#ifndef UE4SS_SDK_BFGUITools_HPP
#define UE4SS_SDK_BFGUITools_HPP

struct FBFGDebugPanel
{
    FWidgetPool m_WidgetPool;                                                         // 0x0008 (size: 0x70)
    class UWorld* m_pWorld;                                                           // 0x0078 (size: 0x8)
    class APlayerController* m_pPlayerController;                                     // 0x0080 (size: 0x8)
    class UCanvasPanel* m_pCanvasPanel;                                               // 0x0088 (size: 0x8)
    TArray<FWidgetPair> m_aAutoCleanWidgets;                                          // 0x0090 (size: 0x10)
    TArray<FWidgetPair> m_aManualWidgets;                                             // 0x00A0 (size: 0x10)
    TArray<FBFGProjectedDebugWidget> m_aProjectedWidgets;                             // 0x0148 (size: 0x10)

}; // Size: 0x160

struct FBFGDebugPanel_AlwaysOnTop : public FBFGDebugPanel
{
}; // Size: 0x160

struct FBFGProjectedDebugWidget
{
    class UCanvasPanelSlot* m_pSlot;                                                  // 0x0000 (size: 0x8)
    class AActor* m_pActor;                                                           // 0x0020 (size: 0x8)

}; // Size: 0x48

struct FWidgetPair
{
    class UWidget* m_pWidget;                                                         // 0x0000 (size: 0x8)
    class UCanvasPanelSlot* m_pSlot;                                                  // 0x0008 (size: 0x8)

}; // Size: 0x18

struct FWidgetPool
{
    TArray<class UWidget*> m_apUnattachedPool;                                        // 0x0000 (size: 0x10)
    TArray<FWidgetPair> m_apAttachedPool;                                             // 0x0010 (size: 0x10)

}; // Size: 0x70

#endif
