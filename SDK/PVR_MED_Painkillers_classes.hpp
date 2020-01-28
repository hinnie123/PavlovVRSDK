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

// BlueprintGeneratedClass MED_Painkillers.MED_Painkillers_C
// 0x0058 (0x0528 - 0x04D0)
class AMED_Painkillers_C : public AVRItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                      // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ConsumePillSound;                                         // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingRot;                                              // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumPills;                                                 // 0x04FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               JustUsed;                                                 // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	float                                              PainkillerHealAmount;                                     // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                UseTimer;                                                 // 0x0508(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               TriggerDown;                                              // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_BottleState>                         BottleState;                                              // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0512(0x0006) MISSED OFFSET
	TArray<struct FTransform>                          PillTransforms;                                           // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MED_Painkillers.MED_Painkillers_C");
		return ptr;
	}


	void ResetPainkillers();
	void UsePainkiller();
	void ClearUnusedPills();
	struct FVector GetPillSpawnLoc();
	void TryEatPill(bool* Successful_);
	void OnRep__ofPills();
	float GetZRot();
	void UserConstructionScript();
	void Spawn_Pill(const struct FVector& Location);
	void Play_Sound_FX(class USoundBase* Sound);
	void Consume_Pill();
	void Use();
	void UsePainkillerLoop();
	void TryUseTimer();
	void Used(bool* bJustPicked);
	void CloseLid(bool Open_);
	void OnDrop();
	void Physicalize(bool* bEnabled);
	void ReceiveBeginPlay();
	void OnPick(class AVRItemController** ByController);
	void ExecuteUbergraph_MED_Painkillers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
