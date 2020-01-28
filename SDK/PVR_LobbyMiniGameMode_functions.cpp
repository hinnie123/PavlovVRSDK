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

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyMiniGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.UserConstructionScript");

	ALobbyMiniGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.TargetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Target_C*            HitTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.TargetHit");

	ALobbyMiniGameMode_C_TargetHit_Params params;
	params.Points = Points;
	params.HitTarget = HitTarget;
	params.HitType = HitType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.MiniGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MoveTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::MiniGameSettings(float MoveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.MiniGameSettings");

	ALobbyMiniGameMode_C_MiniGameSettings_Params params;
	params.MoveTime = MoveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.Reset Target
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyMiniGameMode_C::Reset_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.Reset Target");

	ALobbyMiniGameMode_C_Reset_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.OnPlayerSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState**     PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn**            Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::OnPlayerSpawned(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.OnPlayerSpawned");

	ALobbyMiniGameMode_C_OnPlayerSpawned_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillHouse_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::StartMiniGame(bool KillHouse_)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.StartMiniGame");

	ALobbyMiniGameMode_C_StartMiniGame_Params params;
	params.KillHouse_ = KillHouse_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.InitMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameType>    MiniGameRange                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_TargetWepType>   TargetWeaponType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.InitMiniGame");

	ALobbyMiniGameMode_C_InitMiniGame_Params params;
	params.MiniGameRange = MiniGameRange;
	params.TargetWeaponType = TargetWeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyMiniGameMode_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.EndMiniGame");

	ALobbyMiniGameMode_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.SetPracticeMode
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyMiniGameMode_C::SetPracticeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.SetPracticeMode");

	ALobbyMiniGameMode_C_SetPracticeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.OnRoundStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EPavlovRoundState*             OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPavlovRoundState*             NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::OnRoundStateChanged(EPavlovRoundState* OldState, EPavlovRoundState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.OnRoundStateChanged");

	ALobbyMiniGameMode_C_OnRoundStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.Set Player Loadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Primary                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Secondary                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::Set_Player_Loadout(class APavlovPawn* Pawn, class UClass* Primary, class UClass* Secondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.Set Player Loadout");

	ALobbyMiniGameMode_C_Set_Player_Loadout_Params params;
	params.Pawn = Pawn;
	params.Primary = Primary;
	params.Secondary = Secondary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.MiniGameOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::MiniGameOver(class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.MiniGameOver");

	ALobbyMiniGameMode_C_MiniGameOver_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.OnDestroyed_Event_1");

	ALobbyMiniGameMode_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMiniGameMode.LobbyMiniGameMode_C.ExecuteUbergraph_LobbyMiniGameMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMiniGameMode_C::ExecuteUbergraph_LobbyMiniGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMiniGameMode.LobbyMiniGameMode_C.ExecuteUbergraph_LobbyMiniGameMode");

	ALobbyMiniGameMode_C_ExecuteUbergraph_LobbyMiniGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
