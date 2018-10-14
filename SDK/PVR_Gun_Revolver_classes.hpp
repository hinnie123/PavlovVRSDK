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

// BlueprintGeneratedClass Gun_Revolver.Gun_Revolver_C
// 0x0052 (0x0A02 - 0x09B0)
class AGun_Revolver_C : public AHandGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B0(0x0008) (Transient, DuplicateTransient)
	class UGestureComponent*                           Gesture;                                                  // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChamberComponent*                           chamber5;                                                 // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChamberComponent*                           Chamber4;                                                 // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChamberComponent*                           chamber3;                                                 // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChamberComponent*                           Chamber2;                                                 // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChamberComponent*                           Chamber1;                                                 // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseGestureName;                                         // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x09F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       RemoveGestureName;                                        // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_2;                                                 // 0x0A01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_Revolver.Gun_Revolver_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMagBoltRelease_Event_1();
	void ReceiveBeginPlay();
	void OnRevolverCylinderChanged_Event_1(bool bOpen);
	void OnGesturePerformedDelegate(const struct FName& Name);
	void SetupRemoval();
	void OnDrop();
	void OnSnapTriggerReset();
	void OnSpawnUnloaded();
	void SetupClose();
	void ExecuteUbergraph_Gun_Revolver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
