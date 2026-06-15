#ifndef UE4SS_SDK_AnimNotify_FMODPlayEvent_HPP
#define UE4SS_SDK_AnimNotify_FMODPlayEvent_HPP

class UAnimNotify_FMODPlayEvent_C : public UAnimNotify
{
    bool bFollow;                                                                     // 0x0038 (size: 0x1)
    FString AttachName;                                                               // 0x0040 (size: 0x10)
    class UFMODEvent* Event;                                                          // 0x0050 (size: 0x8)

    FString GetNotifyName();
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x58

#endif
