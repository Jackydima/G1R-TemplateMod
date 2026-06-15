#ifndef UE4SS_SDK_PC_Menus_HPP
#define UE4SS_SDK_PC_Menus_HPP

class APC_Menus_C : public APlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_PC_Menus(int32 EntryPoint);
}; // Size: 0x860

#endif
