#ifndef UE4SS_SDK_W_Map_FilterList_HPP
#define UE4SS_SDK_W_Map_FilterList_HPP

class UW_Map_FilterList_C : public UMapFilterListWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UW_CheckBox_Map_C* W_CheckBox_Map;                                          // 0x0320 (size: 0x8)
    class UW_CheckBox_Map_C* W_CheckBox_Map_1;                                        // 0x0328 (size: 0x8)
    class UW_CheckBox_Map_C* W_CheckBox_Map_2;                                        // 0x0330 (size: 0x8)

    void IsEmpty(bool& IsEmpty);
    void OnInitializeFiltersListBP();
    void ExecuteUbergraph_W_Map_FilterList(int32 EntryPoint);
}; // Size: 0x338

#endif
