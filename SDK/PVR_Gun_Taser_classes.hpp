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

// BlueprintGeneratedClass Gun_Taser.Gun_Taser_C
// 0x0018 (0x0B48 - 0x0B30)
class AGun_Taser_C : public AHandGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChamberComponent*                           Chamber2;                                                 // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           Chamber1;                                                 // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_Taser.Gun_Taser_C");
		return ptr;
	}


	void SetBarrelState(bool bOpen, bool* Successful_);
	void SetAnimTriggerdown(bool TriggerDown);
	void GetAnimInstance(bool* Successful_, class UABP_Taser_C** ABPTaser);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMagBoltRelease_Event_1();
	void OnChamberStateChanged_Event_1(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState);
	void Use();
	void Used(bool* bJustPicked);
	void OnPick(class AVRItemController** ByController);
	void ExecuteUbergraph_Gun_Taser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
