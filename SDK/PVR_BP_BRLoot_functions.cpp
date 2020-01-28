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

// Function BP_BRLoot.BP_BRLoot_C.GetLootToSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Loot                           (Parm, OutParm, ZeroConstructor)

void ABP_BRLoot_C::GetLootToSpawn(class ABP_PavlovPawn_C* PavPawn, TArray<struct FName>* Loot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRLoot.BP_BRLoot_C.GetLootToSpawn");

	ABP_BRLoot_C_GetLootToSpawn_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;
}


// Function BP_BRLoot.BP_BRLoot_C.SpawnLoot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           successful                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BRLoot_C::SpawnLoot(class ABP_PavlovPawn_C* PavPawn, bool* successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRLoot.BP_BRLoot_C.SpawnLoot");

	ABP_BRLoot_C_SpawnLoot_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (successful != nullptr)
		*successful = params.successful;
}


// Function BP_BRLoot.BP_BRLoot_C.CanSpawnLoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BRLoot_C::CanSpawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRLoot.BP_BRLoot_C.CanSpawnLoot");

	ABP_BRLoot_C_CanSpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BRLoot.BP_BRLoot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BRLoot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRLoot.BP_BRLoot_C.UserConstructionScript");

	ABP_BRLoot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRLoot.BP_BRLoot_C.OnDoorStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DoorState>*      DoorState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRLoot_C::OnDoorStateChanged_Event(TEnumAsByte<E_DoorState>* DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRLoot.BP_BRLoot_C.OnDoorStateChanged_Event");

	ABP_BRLoot_C_OnDoorStateChanged_Event_Params params;
	params.DoorState = DoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRLoot.BP_BRLoot_C.LootGrabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C**       PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Dominant_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRLoot_C::LootGrabbed(class ABP_PavlovPawn_C** PavPawn, bool* Dominant_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRLoot.BP_BRLoot_C.LootGrabbed");

	ABP_BRLoot_C_LootGrabbed_Params params;
	params.PavPawn = PavPawn;
	params.Dominant_ = Dominant_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRLoot.BP_BRLoot_C.OnLootSpawned
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_BRLoot_C::OnLootSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRLoot.BP_BRLoot_C.OnLootSpawned");

	ABP_BRLoot_C_OnLootSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRLoot.BP_BRLoot_C.ExecuteUbergraph_BP_BRLoot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRLoot_C::ExecuteUbergraph_BP_BRLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRLoot.BP_BRLoot_C.ExecuteUbergraph_BP_BRLoot");

	ABP_BRLoot_C_ExecuteUbergraph_BP_BRLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
