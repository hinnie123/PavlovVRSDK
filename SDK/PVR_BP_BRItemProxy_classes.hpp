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

// BlueprintGeneratedClass BP_BRItemProxy.BP_BRItemProxy_C
// 0x0028 (0x0350 - 0x0328)
class ABP_BRItemProxy_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVRSelectionComponent*                       VRSelection;                                              // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ActiveLoot;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BRItemProxy.BP_BRItemProxy_C");
		return ptr;
	}


	bool UseSoftGrabConstraint();
	void UpdateMeshes(const struct FName& Loot);
	void GrabLoot_Server(class APavlovPawn* PavPawn, bool bDominant);
	void SelectionDisable_Client(class AActor* Object);
	void Haptic_SelectionEnable_Client(class AActor* Object);
	void UpdateLoot_Server(const struct FName& ActiveLoot);
	void OnRep_ActiveLoot();
	void UserConstructionScript();
	void UnGrabbed(class AVRController* Controller);
	void ReceiveBeginPlay();
	void LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_);
	void Grabbed(class AVRController* Controller);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SpawnLoot();
	void ExecuteUbergraph_BP_BRItemProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
