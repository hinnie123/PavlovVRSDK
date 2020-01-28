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

// Function JailbreakGameMode.JailbreakGameMode_C.RespawnPlayers
// (Public, BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::RespawnPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.RespawnPlayers");

	AJailbreakGameMode_C_RespawnPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.KillPlayersInRandomOrder
// (Public, BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::KillPlayersInRandomOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.KillPlayersInRandomOrder");

	AJailbreakGameMode_C_KillPlayersInRandomOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.RemoveTags+Kill
// (Public, BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::RemoveTags_Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.RemoveTags+Kill");

	AJailbreakGameMode_C_RemoveTags_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.ResetTeamScores
// (Public, BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::ResetTeamScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.ResetTeamScores");

	AJailbreakGameMode_C_ResetTeamScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.GetEscapedCounts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EscapedCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::GetEscapedCounts(int* EscapedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.GetEscapedCounts");

	AJailbreakGameMode_C_GetEscapedCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EscapedCount != nullptr)
		*EscapedCount = params.EscapedCount;
}


// Function JailbreakGameMode.JailbreakGameMode_C.IsEscapedPlayerKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::IsEscapedPlayerKilled(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.IsEscapedPlayerKilled");

	AJailbreakGameMode_C_IsEscapedPlayerKilled_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.DidEnoughInmatesEscape
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnoughEscaped_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::DidEnoughInmatesEscape(bool* EnoughEscaped_)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.DidEnoughInmatesEscape");

	AJailbreakGameMode_C_DidEnoughInmatesEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnoughEscaped_ != nullptr)
		*EnoughEscaped_ = params.EnoughEscaped_;
}


// Function JailbreakGameMode.JailbreakGameMode_C.GetRandomSpawn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABP_JailbreakSpawn_C*> JBSpawns                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTransform              JBSpawn                        (Parm, OutParm, IsPlainOldData)

void AJailbreakGameMode_C::GetRandomSpawn(TArray<class ABP_JailbreakSpawn_C*>* JBSpawns, struct FTransform* JBSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.GetRandomSpawn");

	AJailbreakGameMode_C_GetRandomSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JBSpawns != nullptr)
		*JBSpawns = params.JBSpawns;
	if (JBSpawn != nullptr)
		*JBSpawn = params.JBSpawn;
}


// Function JailbreakGameMode.JailbreakGameMode_C.JailbreakPlayerSpawned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::JailbreakPlayerSpawned(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* PavPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.JailbreakPlayerSpawned");

	AJailbreakGameMode_C_JailbreakPlayerSpawned_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.AssignTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Team                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::AssignTeam(class APlayerState* PlayerState, int* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.AssignTeam");

	AJailbreakGameMode_C_AssignTeam_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team != nullptr)
		*Team = params.Team;
}


// Function JailbreakGameMode.JailbreakGameMode_C.RemoveTeamTags
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::RemoveTeamTags(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.RemoveTeamTags");

	AJailbreakGameMode_C_RemoveTeamTags_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.GetPlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class APlayerState*>    PlayerArray                    (Parm, OutParm, ZeroConstructor)

void AJailbreakGameMode_C::GetPlayers(TArray<class APlayerState*>* PlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.GetPlayers");

	AJailbreakGameMode_C_GetPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerArray != nullptr)
		*PlayerArray = params.PlayerArray;
}


// Function JailbreakGameMode.JailbreakGameMode_C.EquipGear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Gaurd                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::EquipGear(class APavlovPawn* PavPawn, bool Gaurd)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.EquipGear");

	AJailbreakGameMode_C_EquipGear_Params params;
	params.PavPawn = PavPawn;
	params.Gaurd = Gaurd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.GetTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Team                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::GetTeam(class APlayerState* PlayerState, int* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.GetTeam");

	AJailbreakGameMode_C_GetTeam_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team != nullptr)
		*Team = params.Team;
}


// Function JailbreakGameMode.JailbreakGameMode_C.GetPlayerCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Gaurds                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Inmates                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Escaped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::GetPlayerCount(int* Gaurds, int* Inmates, int* Escaped)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.GetPlayerCount");

	AJailbreakGameMode_C_GetPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gaurds != nullptr)
		*Gaurds = params.Gaurds;
	if (Inmates != nullptr)
		*Inmates = params.Inmates;
	if (Escaped != nullptr)
		*Escaped = params.Escaped;
}


// Function JailbreakGameMode.JailbreakGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.UserConstructionScript");

	AJailbreakGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AJailbreakGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.ReceiveBeginPlay");

	AJailbreakGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.OnPlayerSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState**     PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn**            Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::OnPlayerSpawned(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.OnPlayerSpawned");

	AJailbreakGameMode_C_OnPlayerSpawned_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.OnRoundStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EPavlovRoundState*             OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPavlovRoundState*             NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::OnRoundStateChanged(EPavlovRoundState* OldState, EPavlovRoundState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.OnRoundStateChanged");

	AJailbreakGameMode_C_OnRoundStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.CanStartMatch?
// (BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::CanStartMatch_()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.CanStartMatch?");

	AJailbreakGameMode_C_CanStartMatch__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.Can Start MatchTimer
// (BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::Can_Start_MatchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.Can Start MatchTimer");

	AJailbreakGameMode_C_Can_Start_MatchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.EndGameTimer
// (BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::EndGameTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.EndGameTimer");

	AJailbreakGameMode_C_EndGameTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.ForceEndGame
// (BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::ForceEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.ForceEndGame");

	AJailbreakGameMode_C_ForceEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.InmateEscaped
// (BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::InmateEscaped()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.InmateEscaped");

	AJailbreakGameMode_C_InmateEscaped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.OnPlayerKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState**     PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn**            Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::OnPlayerKilled(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.OnPlayerKilled");

	AJailbreakGameMode_C_OnPlayerKilled_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::K2_OnLogout(class AController** ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.K2_OnLogout");

	AJailbreakGameMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.RespawnTimer
// (BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::RespawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.RespawnTimer");

	AJailbreakGameMode_C_RespawnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.RespawnPawns
// (BlueprintCallable, BlueprintEvent)

void AJailbreakGameMode_C::RespawnPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.RespawnPawns");

	AJailbreakGameMode_C_RespawnPawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JailbreakGameMode.JailbreakGameMode_C.ExecuteUbergraph_JailbreakGameMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJailbreakGameMode_C::ExecuteUbergraph_JailbreakGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JailbreakGameMode.JailbreakGameMode_C.ExecuteUbergraph_JailbreakGameMode");

	AJailbreakGameMode_C_ExecuteUbergraph_JailbreakGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
