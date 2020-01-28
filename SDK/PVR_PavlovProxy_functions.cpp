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

// Function PavlovProxy.Pavlov_GameLogic.SpawnItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPavlovItemSpawnParams  Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::SpawnItem(const struct FPavlovItemSpawnParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnItem");

	APavlov_GameLogic_SpawnItem_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SpawnAndPosessPawns
// (Final, Native, Public, BlueprintCallable)

void APavlov_GameLogic::SpawnAndPosessPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnAndPosessPawns");

	APavlov_GameLogic_SpawnAndPosessPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.Spawn
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// bool                           bAsGhost                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::Spawn(class AController* Controller, const struct FTransform& Transform, bool bAsGhost, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.Spawn");

	APavlov_GameLogic_Spawn_Params params;
	params.Controller = Controller;
	params.Transform = Transform;
	params.bAsGhost = bAsGhost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function PavlovProxy.Pavlov_GameLogic.SetTeamCash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetTeamCash(int TeamId, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetTeamCash");

	APavlov_GameLogic_SetTeamCash_Params params;
	params.TeamId = TeamId;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetRoundState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPavlovRoundState              State                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetRoundState(EPavlovRoundState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetRoundState");

	APavlov_GameLogic_SetRoundState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerVitality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Health                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Armour                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Helmet                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerVitality(class APlayerState* PlayerState, int Health, int Armour, int Helmet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerVitality");

	APavlov_GameLogic_SetPlayerVitality_Params params;
	params.PlayerState = PlayerState;
	params.Health = Health;
	params.Armour = Armour;
	params.Helmet = Helmet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerTeam(class APlayerState* PlayerState, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerTeam");

	APavlov_GameLogic_SetPlayerTeam_Params params;
	params.PlayerState = PlayerState;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerSkin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SkinName                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerSkin(class APlayerState* PlayerState, const struct FName& SkinName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerSkin");

	APavlov_GameLogic_SetPlayerSkin_Params params;
	params.PlayerState = PlayerState;
	params.SkinName = SkinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerGag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerGag(class APlayerState* PlayerState, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerGag");

	APavlov_GameLogic_SetPlayerGag_Params params;
	params.PlayerState = PlayerState;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerCash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerCash(class APlayerState* PlayerState, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerCash");

	APavlov_GameLogic_SetPlayerCash_Params params;
	params.PlayerState = PlayerState;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerBuyingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BuyZoneMaxDistance             (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerBuyingEnabled(class APlayerState* PlayerState, float Duration, float BuyZoneMaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerBuyingEnabled");

	APavlov_GameLogic_SetPlayerBuyingEnabled_Params params;
	params.PlayerState = PlayerState;
	params.Duration = Duration;
	params.BuyZoneMaxDistance = BuyZoneMaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetMovementDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetMovementDisabled(bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetMovementDisabled");

	APavlov_GameLogic_SetMovementDisabled_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetGameModeProperties
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPavlovGameModeProperties Properties                     (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::SetGameModeProperties(const struct FPavlovGameModeProperties& Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetGameModeProperties");

	APavlov_GameLogic_SetGameModeProperties_Params params;
	params.Properties = Properties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetFallDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetFallDamage(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetFallDamage");

	APavlov_GameLogic_SetFallDamage_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetEveryoneCash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetEveryoneCash(int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetEveryoneCash");

	APavlov_GameLogic_SetEveryoneCash_Params params;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.PostRoundCleanUp
// (Final, Native, Public, BlueprintCallable)

void APavlov_GameLogic::PostRoundCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.PostRoundCleanUp");

	APavlov_GameLogic_PostRoundCleanUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnRoundStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EPavlovRoundState              OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EPavlovRoundState              NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::OnRoundStateChanged(EPavlovRoundState OldState, EPavlovRoundState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnRoundStateChanged");

	APavlov_GameLogic_OnRoundStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd
// (Event, Public, BlueprintEvent)

void APavlov_GameLogic::OnRoundEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd");

	APavlov_GameLogic_OnRoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin
// (Event, Public, BlueprintEvent)

void APavlov_GameLogic::OnRoundBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin");

	APavlov_GameLogic_OnRoundBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnPlayerSpawned
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     PlayerStatus                   (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::OnPlayerSpawned(const struct FPavlovPlayerStatus& PlayerStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerSpawned");

	APavlov_GameLogic_OnPlayerSpawned_Params params;
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnPlayerLeftServer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     PlayerStatus                   (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::OnPlayerLeftServer(const struct FPavlovPlayerStatus& PlayerStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerLeftServer");

	APavlov_GameLogic_OnPlayerLeftServer_Params params;
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnPlayerKilled
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     PlayerStatus                   (ConstParm, Parm, OutParm, ReferenceParm)
// class APlayerState*            Killer                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::OnPlayerKilled(const struct FPavlovPlayerStatus& PlayerStatus, class APlayerState* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerKilled");

	APavlov_GameLogic_OnPlayerKilled_Params params;
	params.PlayerStatus = PlayerStatus;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnPlayerJoinedServer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     PlayerStatus                   (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::OnPlayerJoinedServer(const struct FPavlovPlayerStatus& PlayerStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerJoinedServer");

	APavlov_GameLogic_OnPlayerJoinedServer_Params params;
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnCustomGameModeInit
// (Event, Public, BlueprintEvent)

void APavlov_GameLogic::OnCustomGameModeInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnCustomGameModeInit");

	APavlov_GameLogic_OnCustomGameModeInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnAssignTeam
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     Status                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            TeamId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::OnAssignTeam(const struct FPavlovPlayerStatus& Status, int* TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnAssignTeam");

	APavlov_GameLogic_OnAssignTeam_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamId != nullptr)
		*TeamId = params.TeamId;
}


// Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bStarting                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::MulticastOnRoundStateChanged(bool bStarting)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged");

	APavlov_GameLogic_MulticastOnRoundStateChanged_Params params;
	params.bStarting = bStarting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.KickPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// bool                           bBan                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::KickPlayer(class APlayerState* PlayerState, const struct FString& Reason, bool bBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.KickPlayer");

	APavlov_GameLogic_KickPlayer_Params params;
	params.PlayerState = PlayerState;
	params.Reason = Reason;
	params.bBan = bBan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.IncrementTeamScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::IncrementTeamScore(int TeamId, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.IncrementTeamScore");

	APavlov_GameLogic_IncrementTeamScore_Params params;
	params.TeamId = TeamId;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.IncrementPlayerScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::IncrementPlayerScore(class APlayerState* PlayerState, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.IncrementPlayerScore");

	APavlov_GameLogic_IncrementPlayerScore_Params params;
	params.PlayerState = PlayerState;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.GiveTeamCash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::GiveTeamCash(int TeamId, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GiveTeamCash");

	APavlov_GameLogic_GiveTeamCash_Params params;
	params.TeamId = TeamId;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.GivePlayerCash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::GivePlayerCash(class APlayerState* PlayerState, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GivePlayerCash");

	APavlov_GameLogic_GivePlayerCash_Params params;
	params.PlayerState = PlayerState;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.GiveEveryoneCash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::GiveEveryoneCash(int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GiveEveryoneCash");

	APavlov_GameLogic_GiveEveryoneCash_Params params;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.GetSpawnTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void APavlov_GameLogic::GetSpawnTransform(class AController* Controller, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetSpawnTransform");

	APavlov_GameLogic_GetSpawnTransform_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function PavlovProxy.Pavlov_GameLogic.GetRoundState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPavlovRoundState              State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::GetRoundState(EPavlovRoundState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetRoundState");

	APavlov_GameLogic_GetRoundState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function PavlovProxy.Pavlov_GameLogic.GetPlayerHand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDominant                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* APavlov_GameLogic::STATIC_GetPlayerHand(class APlayerState* PlayerState, bool bDominant)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetPlayerHand");

	APavlov_GameLogic_GetPlayerHand_Params params;
	params.PlayerState = PlayerState;
	params.bDominant = bDominant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// EPavlovGameModeType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPavlovGameModeType APavlov_GameLogic::STATIC_GetPavlovGameModeType(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType");

	APavlov_GameLogic_GetPavlovGameModeType_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_GameLogic.GetGameModeProperties
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPavlovGameModeProperties Properties                     (Parm, OutParm)

void APavlov_GameLogic::GetGameModeProperties(struct FPavlovGameModeProperties* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetGameModeProperties");

	APavlov_GameLogic_GetGameModeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Properties != nullptr)
		*Properties = params.Properties;
}


// Function PavlovProxy.PavlovProxyStatics.GetTeamScore
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPavlovProxyStatics::STATIC_GetTeamScore(class UObject* WorldContextObject, int TeamId, int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.PavlovProxyStatics.GetTeamScore");

	UPavlovProxyStatics_GetTeamScore_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatusByPawn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FPavlovPlayerStatus     PlayerStatus                   (Parm, OutParm)
// bool                           bSucceeded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPavlovProxyStatics::STATIC_GetPavlovPlayerStatusByPawn(class APawn* Pawn, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatusByPawn");

	UPavlovProxyStatics_GetPavlovPlayerStatusByPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerStatus != nullptr)
		*PlayerStatus = params.PlayerStatus;
	if (bSucceeded != nullptr)
		*bSucceeded = params.bSucceeded;
}


// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FPavlovPlayerStatus     PlayerStatus                   (Parm, OutParm)
// bool                           bSucceeded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPavlovProxyStatics::STATIC_GetPavlovPlayerStatus(class APlayerState* PlayerState, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatus");

	UPavlovProxyStatics_GetPavlovPlayerStatus_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerStatus != nullptr)
		*PlayerStatus = params.PlayerStatus;
	if (bSucceeded != nullptr)
		*bSucceeded = params.bSucceeded;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
