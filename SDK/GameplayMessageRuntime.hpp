#ifndef UE4SS_SDK_GameplayMessageRuntime_HPP
#define UE4SS_SDK_GameplayMessageRuntime_HPP

#include "GameplayMessageRuntime_enums.hpp"

struct FGameplayMessageListenerData
{
}; // Size: 0x60

struct FGameplayMessageListenerHandle
{
    TWeakObjectPtr<class UGameplayMessageSubsystem> Subsystem;                        // 0x0000 (size: 0x8)
    FGameplayTag Channel;                                                             // 0x0008 (size: 0x8)
    int32 ID;                                                                         // 0x0010 (size: 0x4)

}; // Size: 0x20

class UAsyncAction_ListenForGameplayMessage : public UCancellableAsyncAction
{
    FAsyncAction_ListenForGameplayMessageOnMessageReceived OnMessageReceived;         // 0x0030 (size: 0x10)
    void AsyncGameplayMessageDelegate(class UAsyncAction_ListenForGameplayMessage* ProxyObject, FGameplayTag ActualChannel);

    class UAsyncAction_ListenForGameplayMessage* ListenForGameplayMessages(class UObject* WorldContextObject, FGameplayTag Channel, class UScriptStruct* PayloadType, EGameplayMessageMatch MatchType);
    bool GetPayload(int32& OutPayload);
}; // Size: 0x88

class UGameplayMessageSubsystem : public UGameInstanceSubsystem
{

    void K2_BroadcastMessage(FGameplayTag Channel, const int32& Message);
}; // Size: 0x80

#endif
