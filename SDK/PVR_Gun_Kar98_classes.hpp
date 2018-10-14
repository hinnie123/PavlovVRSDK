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

// BlueprintGeneratedClass Gun_Kar98.Gun_Kar98_C
// 0x001E (0x09CE - 0x09B0)
class AGun_Kar98_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Bullet;                                                   // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoltAction;                                               // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoltPulled;                                               // 0x09C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09C5(0x0003) MISSED OFFSET
	float                                              RotationRatio;                                            // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoltRotated;                                              // 0x09CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoltRotatedSub;                                           // 0x09CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_Kar98.Gun_Kar98_C");
		return ptr;
	}


	void UpdateChamber(bool Index);
	void UserConstructionScript();
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta);
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature();
	void ReceiveBeginPlay();
	void OnChamberStateChanged_Event_1(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState);
	void ExecuteUbergraph_Gun_Kar98(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
