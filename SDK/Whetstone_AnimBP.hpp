#ifndef UE4SS_SDK_Whetstone_AnimBP_HPP
#define UE4SS_SDK_Whetstone_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_11;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_12;                                         // 0x0010 (size: 0x20)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_13;                         // 0x0030 (size: 0x1)
    bool __BoolProperty_14;                                                           // 0x0031 (size: 0x1)
    int32 __IntProperty_15;                                                           // 0x0034 (size: 0x4)
    float __FloatProperty_16;                                                         // 0x0038 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_17;                                   // 0x0040 (size: 0x8)
    bool __BoolProperty_18;                                                           // 0x0048 (size: 0x1)
    EAnimSyncMethod __EnumProperty_19;                                                // 0x0049 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_20;                              // 0x004A (size: 0x1)
    FName __NameProperty_21;                                                          // 0x004C (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0058 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00D8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x00F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0120 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator;      // 0x0150 (size: 0x30)

}; // Size: 0x180

class UWhetstone_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03A8 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x03F0 (size: 0x40)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Whetstone_AnimBP(int32 EntryPoint);
}; // Size: 0x430

#endif
