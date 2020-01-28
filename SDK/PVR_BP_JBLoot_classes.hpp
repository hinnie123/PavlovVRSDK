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

// BlueprintGeneratedClass BP_JBLoot.BP_JBLoot_C
// 0x002A (0x0442 - 0x0418)
class ABP_JBLoot_C : public ABP_BRLoot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                LootSpawn_Handle;                                         // 0x0420(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               LootArray;                                                // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinRespawnTime;                                           // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRespawnTime;                                           // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsJB_;                                                    // 0x0440(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsQuest_;                                                 // 0x0441(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_JBLoot.BP_JBLoot_C");
		return ptr;
	}


	bool CanSpawnLoot();
	void ShouldRotate_(bool* Rotate);
	void GetLootToSpawn(class ABP_PavlovPawn_C** PavPawn, TArray<struct FName>* Loot);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLootSpawned();
	void RespawnLoot();
	void ExecuteUbergraph_BP_JBLoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
