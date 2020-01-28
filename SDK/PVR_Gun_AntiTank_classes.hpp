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

// BlueprintGeneratedClass Gun_AntiTank.Gun_AntiTank_C
// 0x0016 (0x0B46 - 0x0B30)
class AGun_AntiTank_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              BoltAction;                                               // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoltPulled;                                               // 0x0B3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B3D(0x0003) MISSED OFFSET
	float                                              RotationRatio;                                            // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoltRotated;                                              // 0x0B44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoltRotatedSub;                                           // 0x0B45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_AntiTank.Gun_AntiTank_C");
		return ptr;
	}


	void SpawnBoltSound(class USoundCue* Sound);
	void UserConstructionScript();
	void OnNotifyEnd_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName);
	void OnNotifyBegin_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName);
	void OnInterrupted_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName);
	void OnBlendOut_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName);
	void OnCompleted_0915690B41EC6BE8139B168874F8B9C3(const struct FName& NotifyName);
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta);
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature();
	void Fired();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Gun_AntiTank(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
