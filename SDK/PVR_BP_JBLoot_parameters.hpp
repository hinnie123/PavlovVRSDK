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

// Function BP_JBLoot.BP_JBLoot_C.CanSpawnLoot
struct ABP_JBLoot_C_CanSpawnLoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_JBLoot.BP_JBLoot_C.ShouldRotate?
struct ABP_JBLoot_C_ShouldRotate__Params
{
	bool                                               Rotate;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JBLoot.BP_JBLoot_C.GetLootToSpawn
struct ABP_JBLoot_C_GetLootToSpawn_Params
{
	class ABP_PavlovPawn_C**                           PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Loot;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_JBLoot.BP_JBLoot_C.UserConstructionScript
struct ABP_JBLoot_C_UserConstructionScript_Params
{
};

// Function BP_JBLoot.BP_JBLoot_C.ReceiveBeginPlay
struct ABP_JBLoot_C_ReceiveBeginPlay_Params
{
};

// Function BP_JBLoot.BP_JBLoot_C.OnLootSpawned
struct ABP_JBLoot_C_OnLootSpawned_Params
{
};

// Function BP_JBLoot.BP_JBLoot_C.RespawnLoot
struct ABP_JBLoot_C_RespawnLoot_Params
{
};

// Function BP_JBLoot.BP_JBLoot_C.ExecuteUbergraph_BP_JBLoot
struct ABP_JBLoot_C_ExecuteUbergraph_BP_JBLoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
