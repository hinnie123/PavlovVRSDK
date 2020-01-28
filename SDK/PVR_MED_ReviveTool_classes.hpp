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

// BlueprintGeneratedClass MED_ReviveTool.MED_ReviveTool_C
// 0x0038 (0x0508 - 0x04D0)
class AMED_ReviveTool_C : public AVRItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               TriggerDown_;                                             // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FTimerHandle                                Use_Timer;                                                // 0x04E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                UseTicks;                                                 // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	class USoundBase*                                  ReviveSound;                                              // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxUses;                                                  // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentUses;                                              // 0x0504(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MED_ReviveTool.MED_ReviveTool_C");
		return ptr;
	}


	bool CanUse_Client();
	void CheckUseCount();
	void ClearUseTimer();
	void GetAnimBP(class UABP_Syringe_C** ABP_Syringe);
	void TryRevive_Server(class ABP_PavlovPawn_C* PavPawn, bool* Successful_);
	void TryRevive_Client();
	void UserConstructionScript();
	void Use();
	void Physicalize(bool* bEnabled);
	void Revive_Server(class ABP_PavlovPawn_C* PavPawn);
	void Used(bool* bJustPicked);
	void OnPick(class AVRItemController** ByController);
	void OnDrop();
	void TryUseReviveTool();
	void CheckReviveUse();
	void PlayReviveSound_Multi();
	void ExecuteUbergraph_MED_ReviveTool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
