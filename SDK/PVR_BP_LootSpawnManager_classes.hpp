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

// BlueprintGeneratedClass BP_LootSpawnManager.BP_LootSpawnManager_C
// 0x0050 (0x0378 - 0x0328)
class ABP_LootSpawnManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              LootSpawners;                                             // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                MaxBatch;                                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FTimerHandle                                LootBatchingTimer;                                        // 0x0350(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_LootSpawner_C*>                   OnRoundSpawners;                                          // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                OnBatchRoundSpawners;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SpawningLootBatches;                                      // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              BatchDelay;                                               // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LootSpawnManager.BP_LootSpawnManager_C");
		return ptr;
	}


	void SpawnZActors();
	void SpawnAllVendingMachines();
	void GetBatches(TArray<class AActor*>* Spawners, TArray<class AActor*>* BatchOfSpawners);
	void LootSpawnersInit(TArray<class AActor*>* Spawners);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Spawn_Loot_Batches();
	void Get_And_Spawn_Batches();
	void Respawn_On_Round_Restart();
	void ExecuteUbergraph_BP_LootSpawnManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
