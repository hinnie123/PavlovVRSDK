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

// Function BaseGameMode.BaseGameMode_C.EndRound
// (Public, BlueprintCallable, BlueprintEvent)

void ABaseGameMode_C::EndRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.EndRound");

	ABaseGameMode_C_EndRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.SpawnDefaultPawnFor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 StartSpot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ABaseGameMode_C::SpawnDefaultPawnFor(class AController** NewPlayer, class AActor** StartSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.SpawnDefaultPawnFor");

	ABaseGameMode_C_SpawnDefaultPawnFor_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseGameMode.BaseGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABaseGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.UserConstructionScript");

	ABaseGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.K2_OnSetMatchState
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABaseGameMode_C::K2_OnSetMatchState(struct FName* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.K2_OnSetMatchState");

	ABaseGameMode_C_K2_OnSetMatchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.OnPlayerSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState**     PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn**            Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABaseGameMode_C::OnPlayerSpawned(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.OnPlayerSpawned");

	ABaseGameMode_C_OnPlayerSpawned_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.OnWaitingToStart
// (BlueprintCallable, BlueprintEvent)

void ABaseGameMode_C::OnWaitingToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.OnWaitingToStart");

	ABaseGameMode_C_OnWaitingToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABaseGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.ReceiveBeginPlay");

	ABaseGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.CheckForPlayers
// (BlueprintCallable, BlueprintEvent)

void ABaseGameMode_C::CheckForPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.CheckForPlayers");

	ABaseGameMode_C_CheckForPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABaseGameMode_C::K2_OnLogout(class AController** ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.K2_OnLogout");

	ABaseGameMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.SpawnLootProxies
// (BlueprintCallable, BlueprintEvent)

void ABaseGameMode_C::SpawnLootProxies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.SpawnLootProxies");

	ABaseGameMode_C_SpawnLootProxies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.OnRoundStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EPavlovRoundState*             OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPavlovRoundState*             NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABaseGameMode_C::OnRoundStateChanged(EPavlovRoundState* OldState, EPavlovRoundState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.OnRoundStateChanged");

	ABaseGameMode_C_OnRoundStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseGameMode.BaseGameMode_C.ExecuteUbergraph_BaseGameMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABaseGameMode_C::ExecuteUbergraph_BaseGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseGameMode.BaseGameMode_C.ExecuteUbergraph_BaseGameMode");

	ABaseGameMode_C_ExecuteUbergraph_BaseGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
