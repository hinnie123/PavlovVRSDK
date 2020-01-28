#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Escape_BoltCutters.Item_Escape_BoltCutters_C
// 0x002C (0x0528 - 0x04FC)
class AItem_Escape_BoltCutters_C : public AItem_Escape_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVRHandleComponent*                          VRHandle;                                                 // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SnipSound;                                                // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SoundSoundCMP;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  FenceSnippedSound;                                        // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Escape_BoltCutters.Item_Escape_BoltCutters_C");
		return ptr;
	}


	void MainHandHaptics();
	void PlayCloseAnim(bool Close);
	void SetOpenAlpha(float OpenAlpha);
	void CheckFenceTouch(class UObject* Object);
	void PlaySnipSound();
	void TryUseItem(class UObject** Object, bool* PlayError);
	void UserConstructionScript();
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature();
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_VRHandleOnInputReceivedSignature__DelegateSignature(float InputValue);
	void Use();
	void Used(bool* bJustPicked);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DestroyObjective_Server(class ABP_EscapeObjective_C** EscapeObjective);
	void PlaySnipFX_Multi();
	void OnPick(class AVRItemController** ByController);
	void OnDrop();
	void ExecuteUbergraph_Item_Escape_BoltCutters(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
