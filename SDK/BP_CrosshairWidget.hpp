#ifndef UE4SS_SDK_BP_CrosshairWidget_HPP
#define UE4SS_SDK_BP_CrosshairWidget_HPP

class UBP_CrosshairWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anim_TargetMagicCrosshair;                                // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Anim_RotateTargetMagicCrosshair;                          // 0x02F0 (size: 0x8)
    class UWidgetAnimation* Anim_ShowTargetMagicCrosshair;                            // 0x02F8 (size: 0x8)
    class UWidgetAnimation* Anim_RangedHit;                                           // 0x0300 (size: 0x8)
    class UWidgetAnimation* Anim_RangedAim;                                           // 0x0308 (size: 0x8)
    class UWidgetAnimation* Anim_RotateMagicCrosshair;                                // 0x0310 (size: 0x8)
    class UWidgetAnimation* Anim_ShowMagicCrosshair;                                  // 0x0318 (size: 0x8)
    class UWidgetAnimation* Anim_RangedPull;                                          // 0x0320 (size: 0x8)
    class UCanvasPanel* CanvasPanel;                                                  // 0x0328 (size: 0x8)
    class UImage* Image;                                                              // 0x0330 (size: 0x8)
    class UImage* Image_FakeScale;                                                    // 0x0338 (size: 0x8)
    class UImage* Image_Inner;                                                        // 0x0340 (size: 0x8)
    class UImage* Image_Inner_1;                                                      // 0x0348 (size: 0x8)
    class UImage* Image_Inner_2;                                                      // 0x0350 (size: 0x8)
    class UImage* Image_LeftLine;                                                     // 0x0358 (size: 0x8)
    class UImage* Image_ManaCost;                                                     // 0x0360 (size: 0x8)
    class UImage* Image_Outer_1;                                                      // 0x0368 (size: 0x8)
    class UImage* Image_Outer_2;                                                      // 0x0370 (size: 0x8)
    class UImage* Image_RightLine;                                                    // 0x0378 (size: 0x8)
    class UImage* Image_TargetDown;                                                   // 0x0380 (size: 0x8)
    class UImage* Image_TargetLeft;                                                   // 0x0388 (size: 0x8)
    class UImage* Image_TargetRight;                                                  // 0x0390 (size: 0x8)
    class UImage* Image_TargetUp;                                                     // 0x0398 (size: 0x8)
    class UOverlay* Overlay_Magic;                                                    // 0x03A0 (size: 0x8)
    class UOverlay* Overlay_Magic_Targeting;                                          // 0x03A8 (size: 0x8)
    class UOverlay* Overlay_Ranged;                                                   // 0x03B0 (size: 0x8)
    class UScaleBox* ScaleBox_FakeScale;                                              // 0x03B8 (size: 0x8)
    class UTextBlock* Text_ManaCost;                                                  // 0x03C0 (size: 0x8)
    class UUniformGridPanel* UniformGridPanel_Levels;                                 // 0x03C8 (size: 0x8)
    class UTextBlock* UnreachableLocation;                                            // 0x03D0 (size: 0x8)
    class UVerticalBox* VerticalBox_Magic_Targeting;                                  // 0x03D8 (size: 0x8)
    class UW_LevelSpell_Slot_C* W_LevelSpell_Slot_00;                                 // 0x03E0 (size: 0x8)
    class UW_LevelSpell_Slot_C* W_LevelSpell_Slot_01;                                 // 0x03E8 (size: 0x8)
    class UW_LevelSpell_Slot_C* W_LevelSpell_Slot_02;                                 // 0x03F0 (size: 0x8)
    class UW_LevelSpell_Slot_C* W_LevelSpell_Slot_03;                                 // 0x03F8 (size: 0x8)
    FColor CurrentWarningColor;                                                       // 0x0400 (size: 0x4)
    FColor WarningColor;                                                              // 0x0404 (size: 0x4)
    FColor NormalColor;                                                               // 0x0408 (size: 0x4)
    bool IsAlreadyAiming;                                                             // 0x040C (size: 0x1)
    bool TargetSet;                                                                   // 0x040D (size: 0x1)
    int32 LastSpellLevel;                                                             // 0x0410 (size: 0x4)
    class AActor* TargetInFocus;                                                      // 0x0418 (size: 0x8)
    bool HasTargetInFocus;                                                            // 0x0420 (size: 0x1)
    FName TargetMeshSocketName;                                                       // 0x0424 (size: 0x8)
    TArray<FName> SocketsNames;                                                       // 0x0430 (size: 0x10)

    void FindActorProperSocket(class AActor* Actor, FName& Socket Name);
    void Find Character Proper Socket(class AGothicCharacter* Character, FName& SocketName);
    void EnableMagicReticle(class USpellContainer* Spell);
    void ShowManaCost();
    void HideManaCost();
    void HideSpellLevels();
    void EnableSpellLevels(int32 totalLevels);
    void SetCrosshairColor(class UImage* LeftLine, class UImage* outerImage, class UImage* RightLine, FColor Color);
    void HideAll();
    void Construct();
    void OnCastBegin(int32 spellLevel, int32 totalLevels, float manaCost, float castDuration);
    void OnRefreshWarning(bool Enable);
    void OnSetRangedWeaponCrosshairVisibility(bool Visible, bool IsAiming);
    void OnSetMagicCrosshairVisibility(bool Visible, bool isTargeting);
    void OnRefreshWeaponAccuracy(float accuracy);
    void OnShowUnreachableLocation(const FVector& Location);
    void OnHideUnreachableLocation();
    void OnDamageCaused(bool isCritical);
    void OnRefreshTarget(bool hasTarget);
    void OnCastEnd();
    void OnTargetInFocus(const class AActor* Target);
    void OnTargetOutOfFocus();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_CrosshairWidget(int32 EntryPoint);
}; // Size: 0x440

#endif
