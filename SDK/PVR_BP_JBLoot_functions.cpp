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

// Function BP_JBLoot.BP_JBLoot_C.CanSpawnLoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_JBLoot_C::CanSpawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JBLoot.BP_JBLoot_C.CanSpawnLoot");

	ABP_JBLoot_C_CanSpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_JBLoot.BP_JBLoot_C.ShouldRotate?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Rotate                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JBLoot_C::ShouldRotate_(bool* Rotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JBLoot.BP_JBLoot_C.ShouldRotate?");

	ABP_JBLoot_C_ShouldRotate__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotate != nullptr)
		*Rotate = params.Rotate;
}


// Function BP_JBLoot.BP_JBLoot_C.GetLootToSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C**       PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Loot                           (Parm, OutParm, ZeroConstructor)

void ABP_JBLoot_C::GetLootToSpawn(class ABP_PavlovPawn_C** PavPawn, TArray<struct FName>* Loot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JBLoot.BP_JBLoot_C.GetLootToSpawn");

	ABP_JBLoot_C_GetLootToSpawn_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;
}


// Function BP_JBLoot.BP_JBLoot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_JBLoot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JBLoot.BP_JBLoot_C.UserConstructionScript");

	ABP_JBLoot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JBLoot.BP_JBLoot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_JBLoot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JBLoot.BP_JBLoot_C.ReceiveBeginPlay");

	ABP_JBLoot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JBLoot.BP_JBLoot_C.OnLootSpawned
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_JBLoot_C::OnLootSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JBLoot.BP_JBLoot_C.OnLootSpawned");

	ABP_JBLoot_C_OnLootSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JBLoot.BP_JBLoot_C.RespawnLoot
// (BlueprintCallable, BlueprintEvent)

void ABP_JBLoot_C::RespawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JBLoot.BP_JBLoot_C.RespawnLoot");

	ABP_JBLoot_C_RespawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JBLoot.BP_JBLoot_C.ExecuteUbergraph_BP_JBLoot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JBLoot_C::ExecuteUbergraph_BP_JBLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JBLoot.BP_JBLoot_C.ExecuteUbergraph_BP_JBLoot");

	ABP_JBLoot_C_ExecuteUbergraph_BP_JBLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
