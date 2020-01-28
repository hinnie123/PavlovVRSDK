#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ProcessKillRewardAmmount
struct ASearchAndDestroyGameMode_C_ProcessKillRewardAmmount_Params
{
	class APavlovPlayerState*                          Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FixedCash;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetWinningTeamPure
struct ASearchAndDestroyGameMode_C_GetWinningTeamPure_Params
{
	int                                                WinningTeam;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetGunKillReward
struct ASearchAndDestroyGameMode_C_GetGunKillReward_Params
{
	class AGun*                                        Gun;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reward;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GetKillReward
struct ASearchAndDestroyGameMode_C_GetKillReward_Params
{
	class APavlovPlayerState**                         Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState**                         Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTrackInfo*                           LastHitInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

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
	int                                                LoseStreak;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.GiveLosingCash
struct ASearchAndDestroyGameMode_C_GiveLosingCash_Params
{
	int                                                TeamId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
	int                                                TeamId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EndRound;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
	EPavlovRoundState*                                 OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState*                                 NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnWaitingToStart
struct ASearchAndDestroyGameMode_C_OnWaitingToStart_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnPlayerKilled
struct ASearchAndDestroyGameMode_C_OnPlayerKilled_Params
{
	class APavlovPlayerState**                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn**                                Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
	class ABombPlantSpot*                              Spot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABomb*                                       Bomb;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombDetonation
struct ASearchAndDestroyGameMode_C_OnBombDetonation_Params
{
	class ABomb*                                       Bomb;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnBombDefused_Event_1
struct ASearchAndDestroyGameMode_C_OnBombDefused_Event_1_Params
{
	class ABomb*                                       Bomb;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Defuser;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.K2_PostLogin
struct ASearchAndDestroyGameMode_C_K2_PostLogin_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.K2_OnLogout
struct ASearchAndDestroyGameMode_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.InitBombs
struct ASearchAndDestroyGameMode_C_InitBombs_Params
{
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.OnPlayerSpawned
struct ASearchAndDestroyGameMode_C_OnPlayerSpawned_Params
{
	class APavlovPlayerState**                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn**                                Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.AssignPlayerSkin
struct ASearchAndDestroyGameMode_C_AssignPlayerSkin_Params
{
	class APavlovPlayerState**                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn**                                Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SearchAndDestroyGameMode.SearchAndDestroyGameMode_C.ExecuteUbergraph_SearchAndDestroyGameMode
struct ASearchAndDestroyGameMode_C_ExecuteUbergraph_SearchAndDestroyGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
