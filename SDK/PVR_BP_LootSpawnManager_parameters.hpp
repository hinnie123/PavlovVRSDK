#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.SpawnZActors
struct ABP_LootSpawnManager_C_SpawnZActors_Params
{
};

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.SpawnAllVendingMachines
struct ABP_LootSpawnManager_C_SpawnAllVendingMachines_Params
{
};

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.GetBatches
struct ABP_LootSpawnManager_C_GetBatches_Params
{
	TArray<class AActor*>                              Spawners;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              BatchOfSpawners;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.LootSpawnersInit
struct ABP_LootSpawnManager_C_LootSpawnersInit_Params
{
	TArray<class AActor*>                              Spawners;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.UserConstructionScript
struct ABP_LootSpawnManager_C_UserConstructionScript_Params
{
};

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.ReceiveBeginPlay
struct ABP_LootSpawnManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.Spawn Loot Batches
struct ABP_LootSpawnManager_C_Spawn_Loot_Batches_Params
{
};

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.Get And Spawn Batches
struct ABP_LootSpawnManager_C_Get_And_Spawn_Batches_Params
{
};

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.Respawn On Round Restart
struct ABP_LootSpawnManager_C_Respawn_On_Round_Restart_Params
{
};

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.ExecuteUbergraph_BP_LootSpawnManager
struct ABP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
