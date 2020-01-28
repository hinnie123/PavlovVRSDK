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

// BlueprintGeneratedClass Item_Handcuffs.Item_Handcuffs_C
// 0x0030 (0x0500 - 0x04D0)
class AItem_Handcuffs_C : public AVRItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SK_Handcuffs;                                             // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               TriggerDown;                                              // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	class USoundBase*                                  HandcuffSound;                                            // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HandcuffOpenSound;                                        // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             HandcuffOpenSoundCMP;                                     // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Handcuffs.Item_Handcuffs_C");
		return ptr;
	}


	void PlayArrestAnim(bool Arrested);
	void SetTriggerDown(bool TriggerDown);
	void PlayHandcuffOpenSound();
	void Handcuff(class ABP_PavlovPawn_C* PavlovPawn, bool* Successful_);
	void TryHandcuff_Client(class UObject* Object, bool* Successful_);
	void FindPawnToHandcuff(bool* FoundPawn, class ABP_PavlovPawn_C** PavPawn);
	void UserConstructionScript();
	void Physicalize(bool* bEnabled);
	void Used(bool* bJustPicked);
	void Use();
	void OnDrop();
	void HandcuffPlayer_Server(class ABP_PavlovPawn_C* PavPawn);
	void PlayHandcuffSound();
	void BndEvt__SK_Handcuffs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnPick(class AVRItemController** ByController);
	void ExecuteUbergraph_Item_Handcuffs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
