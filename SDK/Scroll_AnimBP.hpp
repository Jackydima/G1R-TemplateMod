#ifndef UE4SS_SDK_Scroll_AnimBP_HPP
#define UE4SS_SDK_Scroll_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_10;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_11;                                                          // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_12;                                         // 0x0018 (size: 0x20)
    float __FloatProperty_13;                                                         // 0x0038 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_14;                                // 0x003C (size: 0x2C)
    float __FloatProperty_15;                                                         // 0x0068 (size: 0x4)
    bool __BoolProperty_16;                                                           // 0x006C (size: 0x1)
    EAnimSyncMethod __EnumProperty_17;                                                // 0x006D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_18;                              // 0x006E (size: 0x1)
    FName __NameProperty_19;                                                          // 0x0070 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0078 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0110 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0140 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0170 (size: 0x30)

}; // Size: 0x1A0

class UScroll_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03A8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03F0 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Scroll_AnimBP(int32 EntryPoint);
}; // Size: 0x438

#endif
