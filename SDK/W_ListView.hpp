#ifndef UE4SS_SDK_W_ListView_HPP
#define UE4SS_SDK_W_ListView_HPP

class UW_ListView_C : public UAlkSimpleListViewWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)
    class UAlkListView* AlkListView_ContentHorizontal;                                // 0x0400 (size: 0x8)
    class UAlkListView* AlkListView_ContentVertical;                                  // 0x0408 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Left;                                         // 0x0410 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Right;                                        // 0x0418 (size: 0x8)
    class UImage* Image_BottomArrow;                                                  // 0x0420 (size: 0x8)
    class UImage* Image_LeftArrow;                                                    // 0x0428 (size: 0x8)
    class UImage* Image_RightArrow;                                                   // 0x0430 (size: 0x8)
    class UImage* Image_TopArrow;                                                     // 0x0438 (size: 0x8)
    class USizeBox* SizeBox_BottomArrow;                                              // 0x0440 (size: 0x8)
    class USizeBox* SizeBox_LeftArrow;                                                // 0x0448 (size: 0x8)
    class USizeBox* SizeBox_RightArrow;                                               // 0x0450 (size: 0x8)
    class USizeBox* SizeBox_TopArrow;                                                 // 0x0458 (size: 0x8)
    class UVerticalBox* VerticalBox_bottom;                                           // 0x0460 (size: 0x8)
    class UVerticalBox* VerticalBox_Top;                                              // 0x0468 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Content;                                    // 0x0470 (size: 0x8)
    bool Show Arrows;                                                                 // 0x0478 (size: 0x1)
    double Arrow Width;                                                               // 0x0480 (size: 0x8)
    class UWidget* Back Arrow Widget;                                                 // 0x0488 (size: 0x8)
    class UWidget* Forth Arrow Widget;                                                // 0x0490 (size: 0x8)
    class UAlkListView* AlkListView_Content;                                          // 0x0498 (size: 0x8)
    bool Hide When Empty;                                                             // 0x04A0 (size: 0x1)
    bool Is Dark;                                                                     // 0x04A1 (size: 0x1)

    void SetDarkArrows(bool IsDark);
    void Initialize Layout();
    void Clear List Items();
    void Add List Item(class UObject* Item);
    void Set List Items(TArray<class UObject*>& Items);
    void Update Visibilities(double Scroll Offset, double Scroll Offset from End);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnScrolled(float _Offset, float _OffsetFromEnd);
    void ExecuteUbergraph_W_ListView(int32 EntryPoint);
}; // Size: 0x4A2

#endif
