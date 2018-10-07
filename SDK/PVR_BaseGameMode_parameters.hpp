#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseGameMode.BaseGameMode_C.EndRound
struct ABaseGameMode_C_EndRound_Params
{
};

// Function BaseGameMode.BaseGameMode_C.SpawnDefaultPawnFor
struct ABaseGameMode_C_SpawnDefaultPawnFor_Params
{
	class AController**                                NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     StartSpot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BaseGameMode.BaseGameMode_C.UserConstructionScript
struct ABaseGameMode_C_UserConstructionScript_Params
{
};

// Function BaseGameMode.BaseGameMode_C.OnRoundStateChanged
struct ABaseGameMode_C_OnRoundStateChanged_Params
{
	EPavlovRoundState*                                 OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState*                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseGameMode.BaseGameMode_C.K2_OnSetMatchState
struct ABaseGameMode_C_K2_OnSetMatchState_Params
{
	struct FName*                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseGameMode.BaseGameMode_C.OnPlayerSpawned
struct ABaseGameMode_C_OnPlayerSpawned_Params
{
	class APavlovPlayerState**                         PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn**                                Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseGameMode.BaseGameMode_C.OnWaitingToStart
struct ABaseGameMode_C_OnWaitingToStart_Params
{
};

// Function BaseGameMode.BaseGameMode_C.ReceiveBeginPlay
struct ABaseGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BaseGameMode.BaseGameMode_C.CheckForPlayers
struct ABaseGameMode_C_CheckForPlayers_Params
{
};

// Function BaseGameMode.BaseGameMode_C.K2_OnLogout
struct ABaseGameMode_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseGameMode.BaseGameMode_C.ExecuteUbergraph_BaseGameMode
struct ABaseGameMode_C_ExecuteUbergraph_BaseGameMode_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
