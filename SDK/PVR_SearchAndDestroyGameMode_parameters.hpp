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

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ProcessRoundEndCondition
struct ASearchAndDestroyGameMode_C_ProcessRoundEndCondition_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.KillEveryone
struct ASearchAndDestroyGameMode_C_KillEveryone_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetTieredLosingCashAmmount
struct ASearchAndDestroyGameMode_C_GetTieredLosingCashAmmount_Params
{
	int                                                LoseStreak;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveLosingCash
struct ASearchAndDestroyGameMode_C_GiveLosingCash_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.SwitchSides
struct ASearchAndDestroyGameMode_C_SwitchSides_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveInitialCash
struct ASearchAndDestroyGameMode_C_GiveInitialCash_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.CleanUpBombing
struct ASearchAndDestroyGameMode_C_CleanUpBombing_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ReportRoundWin
struct ASearchAndDestroyGameMode_C_ReportRoundWin_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EndRound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetBombCourierCandidate
struct ASearchAndDestroyGameMode_C_GetBombCourierCandidate_Params
{
	class AController*                                 Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveBombToTeam
struct ASearchAndDestroyGameMode_C_GiveBombToTeam_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.SetPlantSpots
struct ASearchAndDestroyGameMode_C_SetPlantSpots_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetWinningTeam
struct ASearchAndDestroyGameMode_C_GetWinningTeam_Params
{
	int                                                WinningTeam;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.UserConstructionScript
struct ASearchAndDestroyGameMode_C_UserConstructionScript_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnRoundStateChanged
struct ASearchAndDestroyGameMode_C_OnRoundStateChanged_Params
{
	EPavlovRoundState*                                 OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState*                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnWaitingToStart
struct ASearchAndDestroyGameMode_C_OnWaitingToStart_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnPlayerKilled
struct ASearchAndDestroyGameMode_C_OnPlayerKilled_Params
{
	class APavlovPlayerState**                         PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn**                                Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GoAheadWithNewRound
struct ASearchAndDestroyGameMode_C_GoAheadWithNewRound_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.EndOrRotateMap
struct ASearchAndDestroyGameMode_C_EndOrRotateMap_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ReceiveBeginPlay
struct ASearchAndDestroyGameMode_C_ReceiveBeginPlay_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombPlant
struct ASearchAndDestroyGameMode_C_OnBombPlant_Params
{
	class ABombPlantSpot*                              Spot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombDetonation
struct ASearchAndDestroyGameMode_C_OnBombDetonation_Params
{
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombDefused_Event_1
struct ASearchAndDestroyGameMode_C_OnBombDefused_Event_1_Params
{
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Defuser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.K2_PostLogin
struct ASearchAndDestroyGameMode_C_K2_PostLogin_Params
{
	class APlayerController**                          NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.K2_OnLogout
struct ASearchAndDestroyGameMode_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.InitBombs
struct ASearchAndDestroyGameMode_C_InitBombs_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnPlayerSpawned
struct ASearchAndDestroyGameMode_C_OnPlayerSpawned_Params
{
	class APavlovPlayerState**                         PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn**                                Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ExecuteUbergraph_SearchAndDestroyGameMode
struct ASearchAndDestroyGameMode_C_ExecuteUbergraph_SearchAndDestroyGameMode_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
