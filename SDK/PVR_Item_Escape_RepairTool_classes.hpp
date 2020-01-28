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

// BlueprintGeneratedClass Item_Escape_RepairTool.Item_Escape_RepairTool_C
// 0x007C (0x0578 - 0x04FC)
class AItem_Escape_RepairTool_C : public AItem_Escape_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVRHandleComponent*                          VRHandle;                                                 // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HandleRotation;                                           // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	class USoundBase*                                  FlintStrikeSound;                                         // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FlintStrikeSoundCmp;                                      // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  TorchSound;                                               // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             TorchSoundCmp;                                            // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             GasSoundCmp;                                              // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  GasSound;                                                 // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  RepairSound;                                              // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                RepairTimer;                                              // 0x0550(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                RepairTicks;                                              // 0x0558(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	class UAudioComponent*                             RepairSoundCMP;                                           // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             TorchFX;                                                  // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TorchFXCMP;                                               // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Escape_RepairTool.Item_Escape_RepairTool_C");
		return ptr;
	}


	void SetHandleRotation(float HandleRotation, bool TurnOff, float* Alpha);
	void SetTriggerDown(bool TriggerDown);
	void StopTorchFX();
	void PlayTorchFX();
	void PlayRepairingSound();
	void TryUseItem(class UObject** Object, bool* PlayError);
	void TryRepair_Client();
	void OnRep_RepairTicks();
	void TickRepair();
	void StopGasSound();
	void StopTorchSound();
	void PlayGasSound();
	void SetGasVolume(float VolumeMultiplier);
	void PlayTorchSound();
	void PlayFlintStrikeSound();
	bool CanGetPickedBy(class AVRItemController** ByController);
	void UserConstructionScript();
	void Repair_Objective(class ABP_EscapeObjective_C* EscapeObjective);
	void Use();
	void RepairLock(class ABP_Escape_Lock_C* Escape_Lock);
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature(float InputValueDegrees);
	void Used(bool* bJustPicked);
	void OnPick(class AVRItemController** ByController);
	void OnDrop();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature();
	void RepairObjective();
	void Start_RepairingObjective();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Item_Escape_RepairTool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
