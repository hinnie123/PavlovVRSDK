#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gun_Shotgun.Gun_Shotgun_C
// 0x0024 (0x09D4 - 0x09B0)
class AGun_Shotgun_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B0(0x0008) (Transient, DuplicateTransient)
	class UHapticFeedbackEffect_Base*                  PumpReleasedHaptic;                                       // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  PumpPullHaptic;                                           // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PumpVector;                                               // 0x09C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_Shotgun.Gun_Shotgun_C");
		return ptr;
	}


	void UnlockPump();
	void LockPump(float LockRatio);
	void ShouldPumpByTrigger(bool* Enabled);
	void ToggleReloadHandle(bool Enabled);
	void PlayPumpHaptic(class UHapticFeedbackEffect_Base* HapticEffect);
	void UserConstructionScript();
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnPumpDelta(float Delta);
	void OnTwoHandGripChanged(bool* bEnabled);
	void OnActionChanged_Event_1();
	void OnOpenAction_Event_1();
	void CustomEvent_1();
	void ExecuteUbergraph_Gun_Shotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
