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

// BlueprintGeneratedClass BP_Escape_Lock.BP_Escape_Lock_C
// 0x0111 (0x0439 - 0x0328)
class ABP_Escape_Lock_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Frame;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRHandleComponent*                          VRHandle1;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRHandleComponent*                          VRHandle;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Lock1;                                                    // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Lock;                                                     // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Door;                                                     // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MoveDoor_Alpha_6A2711D94FA6859F42D8C9BF7C548B45;          // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MoveDoor__Direction_6A2711D94FA6859F42D8C9BF7C548B45;     // 0x037C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MoveDoor;                                                 // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_EscapeObjectiveState>                EscapeState;                                              // 0x0388(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FTransform                                  CloseTrans;                                               // 0x0390(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  OpenTrans;                                                // 0x03C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FScriptMulticastDelegate                    ResetObjective;                                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  OpenSound;                                                // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  CloseSound;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  RepairSound;                                              // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  UnlockSound;                                              // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LockpickSound;                                            // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandleRotation;                                           // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	class UAudioComponent*                             LockpickSoundCMP;                                         // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               OpenInNonJB;                                              // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Escape_Lock.BP_Escape_Lock_C");
		return ptr;
	}


	void LockpickOverlap(class UObject* Object);
	void PlayLockpickSound(bool Lock1_);
	void CanGrab_(bool* CanGrab);
	void EvaluateUnlockDegrees(float Degrees, bool Handle1_);
	void Unlock_Client(bool Handle1_);
	void ShowLocks(bool Hidden_);
	void EscapeStateChanged();
	void CanRepair(bool* CanRepair_);
	void CanLockpick_(class AVRItem* VRItem, bool* CanLockpick);
	void MovingDoor(float Alpha);
	void SetObjectiveState(TEnumAsByte<E_EscapeObjectiveState> EscapeState);
	void OnRep_EscapeState();
	void UserConstructionScript();
	void MoveDoor__FinishedFunc();
	void MoveDoor__UpdateFunc();
	void ReceiveBeginPlay();
	void ResetObjective_Event();
	void LockpickEscape_Server();
	void OpenDoor();
	void CloseDoor();
	void PlayRepairSound();
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature(float InputValueDegrees);
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature();
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_5_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__VRHandle1_K2Node_ComponentBoundEvent_6_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__VRHandle1_K2Node_ComponentBoundEvent_7_VRHandleOnUngrabSignature__DelegateSignature();
	void BndEvt__VRHandle1_K2Node_ComponentBoundEvent_8_VRHandleOnRotationInputReceivedSignature__DelegateSignature(float InputValueDegrees);
	void BndEvt__VRHandle1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_Escape_Lock(int EntryPoint);
	void ResetObjective__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
