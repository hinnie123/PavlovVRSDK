// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ProcessRoundEndCondition
// (Public, BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::ProcessRoundEndCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ProcessRoundEndCondition");

	ASearchAndDestroyGameMode_C_ProcessRoundEndCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.KillEveryone
// (Public, BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::KillEveryone()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.KillEveryone");

	ASearchAndDestroyGameMode_C_KillEveryone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetTieredLosingCashAmmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LoseStreak                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::GetTieredLosingCashAmmount(int LoseStreak, int* CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetTieredLosingCashAmmount");

	ASearchAndDestroyGameMode_C_GetTieredLosingCashAmmount_Params params;
	params.LoseStreak = LoseStreak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CashAmmount != nullptr)
		*CashAmmount = params.CashAmmount;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveLosingCash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::GiveLosingCash(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveLosingCash");

	ASearchAndDestroyGameMode_C_GiveLosingCash_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.SwitchSides
// (Public, BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::SwitchSides()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.SwitchSides");

	ASearchAndDestroyGameMode_C_SwitchSides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveInitialCash
// (Public, BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::GiveInitialCash()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveInitialCash");

	ASearchAndDestroyGameMode_C_GiveInitialCash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.CleanUpBombing
// (Public, BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::CleanUpBombing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.CleanUpBombing");

	ASearchAndDestroyGameMode_C_CleanUpBombing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ReportRoundWin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EndRound                       (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::ReportRoundWin(int TeamID, bool EndRound)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ReportRoundWin");

	ASearchAndDestroyGameMode_C_ReportRoundWin_Params params;
	params.TeamID = TeamID;
	params.EndRound = EndRound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetBombCourierCandidate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::GetBombCourierCandidate(class AController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetBombCourierCandidate");

	ASearchAndDestroyGameMode_C_GetBombCourierCandidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveBombToTeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::GiveBombToTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveBombToTeam");

	ASearchAndDestroyGameMode_C_GiveBombToTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.SetPlantSpots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::SetPlantSpots(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.SetPlantSpots");

	ASearchAndDestroyGameMode_C_SetPlantSpots_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetWinningTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WinningTeam                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::GetWinningTeam(int* WinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetWinningTeam");

	ASearchAndDestroyGameMode_C_GetWinningTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WinningTeam != nullptr)
		*WinningTeam = params.WinningTeam;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.UserConstructionScript");

	ASearchAndDestroyGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnRoundStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EPavlovRoundState*             OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EPavlovRoundState*             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::OnRoundStateChanged(EPavlovRoundState* OldState, EPavlovRoundState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnRoundStateChanged");

	ASearchAndDestroyGameMode_C_OnRoundStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnWaitingToStart
// (BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::OnWaitingToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnWaitingToStart");

	ASearchAndDestroyGameMode_C_OnWaitingToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnPlayerKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState**     PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn**            Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::OnPlayerKilled(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnPlayerKilled");

	ASearchAndDestroyGameMode_C_OnPlayerKilled_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GoAheadWithNewRound
// (BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::GoAheadWithNewRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GoAheadWithNewRound");

	ASearchAndDestroyGameMode_C_GoAheadWithNewRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.EndOrRotateMap
// (BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::EndOrRotateMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.EndOrRotateMap");

	ASearchAndDestroyGameMode_C_EndOrRotateMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASearchAndDestroyGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ReceiveBeginPlay");

	ASearchAndDestroyGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombPlant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABombPlantSpot*          Spot                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::OnBombPlant(class ABombPlantSpot* Spot, class ABomb* Bomb)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombPlant");

	ASearchAndDestroyGameMode_C_OnBombPlant_Params params;
	params.Spot = Spot;
	params.Bomb = Bomb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombDetonation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::OnBombDetonation(class ABomb* Bomb)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombDetonation");

	ASearchAndDestroyGameMode_C_OnBombDetonation_Params params;
	params.Bomb = Bomb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombDefused_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Defuser                        (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::OnBombDefused_Event_1(class ABomb* Bomb, class AController* Defuser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombDefused_Event_1");

	ASearchAndDestroyGameMode_C_OnBombDefused_Event_1_Params params;
	params.Bomb = Bomb;
	params.Defuser = Defuser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::K2_PostLogin(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.K2_PostLogin");

	ASearchAndDestroyGameMode_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            ExitingController              (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::K2_OnLogout(class AController** ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.K2_OnLogout");

	ASearchAndDestroyGameMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.InitBombs
// (BlueprintCallable, BlueprintEvent)

void ASearchAndDestroyGameMode_C::InitBombs()
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.InitBombs");

	ASearchAndDestroyGameMode_C_InitBombs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnPlayerSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState**     PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn**            Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::OnPlayerSpawned(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnPlayerSpawned");

	ASearchAndDestroyGameMode_C_OnPlayerSpawned_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ExecuteUbergraph_SearchAndDestroyGameMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASearchAndDestroyGameMode_C::ExecuteUbergraph_SearchAndDestroyGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ExecuteUbergraph_SearchAndDestroyGameMode");

	ASearchAndDestroyGameMode_C_ExecuteUbergraph_SearchAndDestroyGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
