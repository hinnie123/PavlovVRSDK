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

// BlueprintGeneratedClass BP_BRDoor.BP_BRDoor_C
// 0x00D0 (0x03F8 - 0x0328)
class ABP_BRDoor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Handle;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Door;                                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MoveDoor_Timeline_Alpha_95F2D42F4E053C4B7570EAA0220E7196; // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MoveDoor_Timeline__Direction_95F2D42F4E053C4B7570EAA0220E7196;// 0x034C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MoveDoor_Timeline;                                        // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_DoorState>                           DoorState;                                                // 0x0358(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDoorStateChanged;                                       // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTransform                                  OpenTransform;                                            // 0x0370(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  CloseTransform;                                           // 0x03A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DoorTransitionRate;                                       // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Rotate_;                                                  // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	class USoundBase*                                  CloseDoorSound;                                           // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             CloseDoorAudioCmp;                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  OpenDoorSound;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             OpenDoorAudioCmp;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BRDoor.BP_BRDoor_C");
		return ptr;
	}


	bool UseSoftGrabConstraint();
	void PlayCloseSound();
	void PlayOpenSound();
	void CanMoveDoor(bool* CanMove);
	void OnRep_DoorState();
	void SetDoorState_Server(TEnumAsByte<E_DoorState> DoorState);
	void UserConstructionScript();
	void MoveDoor_Timeline__FinishedFunc();
	void MoveDoor_Timeline__UpdateFunc();
	void UnGrabbed(class AVRController* Controller);
	void ReceiveBeginPlay();
	void OnDoorStateChanged_Event(TEnumAsByte<E_DoorState> DoorState);
	void MoveDoor();
	void Grabbed(class AVRController* Controller);
	void LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_);
	void BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_BRDoor(int EntryPoint);
	void OnDoorStateChanged__DelegateSignature(TEnumAsByte<E_DoorState> DoorState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
