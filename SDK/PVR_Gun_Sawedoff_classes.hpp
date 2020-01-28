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

// BlueprintGeneratedClass Gun_Sawedoff.Gun_Sawedoff_C
// 0x0038 (0x0B68 - 0x0B30)
class AGun_Sawedoff_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGestureComponent*                           Gesture;                                                  // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           Chamber2;                                                 // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           Chamber1;                                                 // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  BarrelClosedHaptic;                                       // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GestureCloseName;                                         // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GestureRemoveName;                                        // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_Sawedoff.Gun_Sawedoff_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMagBoltRelease_Event_1();
	void OnBarrelChanged_Event_1(bool bOpen);
	void CustomEvent_2(const struct FName& Name);
	void SetupRemoval();
	void SetupClose();
	void ExecuteUbergraph_Gun_Sawedoff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
