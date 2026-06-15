#ifndef UE4SS_SDK_GameStateSubsystem_HPP
#define UE4SS_SDK_GameStateSubsystem_HPP

class UExampleGameStateSubsystem : public UTickableGameStateSubsystem
{
    int32 RepVar1;                                                                    // 0x0040 (size: 0x4)
    int32 RepVar2;                                                                    // 0x0044 (size: 0x4)

    void ServerDoSomething();
    void OnRep_RepVar2(int32 NewVar2);
    void ClientDoSomething();
    void BlueprintDoAThing();
}; // Size: 0x50

class UGameStateSubsystem : public USubsystem
{
}; // Size: 0x30

class UGameStateSubsystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

    class UGameStateSubsystem* GetGameStateSubsystemFromGameState(class AGameStateBase* GameState, TSubclassOf<class UGameStateSubsystem> Class);
    class UGameStateSubsystem* GetGameStateSubsystem(class UObject* ContextObject, TSubclassOf<class UGameStateSubsystem> Class);
}; // Size: 0x28

class UGameStateSubsystemComponent : public UActorComponent
{
}; // Size: 0x160

class UTickableGameStateSubsystem : public UGameStateSubsystem
{
}; // Size: 0x40

#endif
