#ifndef UE4SS_SDK_BP_AnimNotify_SwapPendingPage_Right_HPP
#define UE4SS_SDK_BP_AnimNotify_SwapPendingPage_Right_HPP

class UBP_AnimNotify_SwapPendingPage_Right_C : public UAnimNotify
{
    EBookCapturePage PageToSwap;                                                      // 0x0038 (size: 0x1)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x39

#endif
