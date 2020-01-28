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

// BlueprintGeneratedClass Gun_Revolver.Gun_Revolver_C
// 0x0052 (0x0B82 - 0x0B30)
class AGun_Revolver_C : public AHandGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGestureComponent*                           Gesture;                                                  // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           Chamber5;                                                 // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           chamber4;                                                 // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           Chamber3;                                                 // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           Chamber2;                                                 // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           Chamber1;                                                 // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       CloseGestureName;                                         // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0B70(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       RemoveGestureName;                                        // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_2;                                                 // 0x0B81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
