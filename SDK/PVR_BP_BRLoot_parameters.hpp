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

// Function BP_BRLoot.BP_BRLoot_C.GetLootToSpawn
struct ABP_BRLoot_C_GetLootToSpawn_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Loot;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BRLoot.BP_BRLoot_C.SpawnLoot
struct ABP_BRLoot_C_SpawnLoot_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               successful;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRLoot.BP_BRLoot_C.CanSpawnLoot
struct ABP_BRLoot_C_CanSpawnLoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BRLoot.BP_BRLoot_C.UserConstructionScript
struct ABP_BRLoot_C_UserConstructionScript_Params
{
};

// Function BP_BRLoot.BP_BRLoot_C.OnDoorStateChanged_Event
struct ABP_BRLoot_C_OnDoorStateChanged_Event_Params
{
	TEnumAsByte<E_DoorState>*                          DoorState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRLoot.BP_BRLoot_C.LootGrabbed
struct ABP_BRLoot_C_LootGrabbed_Params
{
	class ABP_PavlovPawn_C**                           PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Dominant_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRLoot.BP_BRLoot_C.OnLootSpawned
struct ABP_BRLoot_C_OnLootSpawned_Params
{
};

// Function BP_BRLoot.BP_BRLoot_C.ExecuteUbergraph_BP_BRLoot
struct ABP_BRLoot_C_ExecuteUbergraph_BP_BRLoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
