// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.SpawnZActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawnManager_C::SpawnZActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.SpawnZActors");

	ABP_LootSpawnManager_C_SpawnZActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawnManager.BP_LootSpawnManager_C.SpawnAllVendingMachines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawnManager_C::SpawnAllVendingMachines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.SpawnAllVendingMachines");

	ABP_LootSpawnManager_C_SpawnAllVendingMachines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawnManager.BP_LootSpawnManager_C.GetBatches
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Spawners                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          BatchOfSpawners                (Parm, OutParm, ZeroConstructor)

void ABP_LootSpawnManager_C::GetBatches(TArray<class AActor*>* Spawners, TArray<class AActor*>* BatchOfSpawners)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.GetBatches");

	ABP_LootSpawnManager_C_GetBatches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawners != nullptr)
		*Spawners = params.Spawners;
	if (BatchOfSpawners != nullptr)
		*BatchOfSpawners = params.BatchOfSpawners;
}


// Function BP_LootSpawnManager.BP_LootSpawnManager_C.LootSpawnersInit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Spawners                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_LootSpawnManager_C::LootSpawnersInit(TArray<class AActor*>* Spawners)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.LootSpawnersInit");

	ABP_LootSpawnManager_C_LootSpawnersInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawners != nullptr)
		*Spawners = params.Spawners;
}


// Function BP_LootSpawnManager.BP_LootSpawnManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawnManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.UserConstructionScript");

	ABP_LootSpawnManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawnManager.BP_LootSpawnManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LootSpawnManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.ReceiveBeginPlay");

	ABP_LootSpawnManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawnManager.BP_LootSpawnManager_C.Spawn Loot Batches
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawnManager_C::Spawn_Loot_Batches()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.Spawn Loot Batches");

	ABP_LootSpawnManager_C_Spawn_Loot_Batches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawnManager.BP_LootSpawnManager_C.Get And Spawn Batches
// (BlueprintCallable, BlueprintEvent)

void ABP_LootSpawnManager_C::Get_And_Spawn_Batches()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.Get And Spawn Batches");

	ABP_LootSpawnManager_C_Get_And_Spawn_Batches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawnManager.BP_LootSpawnManager_C.Respawn On Round Restart
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawnManager_C::Respawn_On_Round_Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.Respawn On Round Restart");

	ABP_LootSpawnManager_C_Respawn_On_Round_Restart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawnManager.BP_LootSpawnManager_C.ExecuteUbergraph_BP_LootSpawnManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawnManager_C::ExecuteUbergraph_BP_LootSpawnManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawnManager.BP_LootSpawnManager_C.ExecuteUbergraph_BP_LootSpawnManager");

	ABP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
