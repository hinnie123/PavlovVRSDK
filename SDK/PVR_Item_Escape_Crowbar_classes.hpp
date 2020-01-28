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

// BlueprintGeneratedClass Item_Escape_Crowbar.Item_Escape_Crowbar_C
// 0x001C (0x0518 - 0x04FC)
class AItem_Escape_Crowbar_C : public AItem_Escape_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                                  SwingSound;                                               // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SwingSoundCMP;                                            // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Escape_Crowbar.Item_Escape_Crowbar_C");
		return ptr;
	}


	void CheckCrowbarHit(class UObject* Object);
	void TryUseItem(class UObject** Object, bool* PlayError);
	void PlaySwingSound();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Use();
	void PlayInteractFX_Multi();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void ExecuteUbergraph_Item_Escape_Crowbar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
