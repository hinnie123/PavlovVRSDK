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

// Function JailbreakGameMode.JailbreakGameMode_C.RespawnPlayers
struct AJailbreakGameMode_C_RespawnPlayers_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.KillPlayersInRandomOrder
struct AJailbreakGameMode_C_KillPlayersInRandomOrder_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.RemoveTags+Kill
struct AJailbreakGameMode_C_RemoveTags_Kill_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.ResetTeamScores
struct AJailbreakGameMode_C_ResetTeamScores_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.GetEscapedCounts
struct AJailbreakGameMode_C_GetEscapedCounts_Params
{
	int                                                EscapedCount;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.IsEscapedPlayerKilled
struct AJailbreakGameMode_C_IsEscapedPlayerKilled_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.DidEnoughInmatesEscape
struct AJailbreakGameMode_C_DidEnoughInmatesEscape_Params
{
	bool                                               EnoughEscaped_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.GetRandomSpawn
struct AJailbreakGameMode_C_GetRandomSpawn_Params
{
	TArray<class ABP_JailbreakSpawn_C*>                JBSpawns;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTransform                                  JBSpawn;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.JailbreakPlayerSpawned
struct AJailbreakGameMode_C_JailbreakPlayerSpawned_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.AssignTeam
struct AJailbreakGameMode_C_AssignTeam_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.RemoveTeamTags
struct AJailbreakGameMode_C_RemoveTeamTags_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.GetPlayers
struct AJailbreakGameMode_C_GetPlayers_Params
{
	TArray<class APlayerState*>                        PlayerArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function JailbreakGameMode.JailbreakGameMode_C.EquipGear
struct AJailbreakGameMode_C_EquipGear_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Gaurd;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.GetTeam
struct AJailbreakGameMode_C_GetTeam_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.GetPlayerCount
struct AJailbreakGameMode_C_GetPlayerCount_Params
{
	int                                                Gaurds;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Inmates;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Escaped;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.UserConstructionScript
struct AJailbreakGameMode_C_UserConstructionScript_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.ReceiveBeginPlay
struct AJailbreakGameMode_C_ReceiveBeginPlay_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.OnPlayerSpawned
struct AJailbreakGameMode_C_OnPlayerSpawned_Params
{
	class APavlovPlayerState**                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn**                                Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.OnRoundStateChanged
struct AJailbreakGameMode_C_OnRoundStateChanged_Params
{
	EPavlovRoundState*                                 OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState*                                 NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.CanStartMatch?
struct AJailbreakGameMode_C_CanStartMatch__Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.Can Start MatchTimer
struct AJailbreakGameMode_C_Can_Start_MatchTimer_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.EndGameTimer
struct AJailbreakGameMode_C_EndGameTimer_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.ForceEndGame
struct AJailbreakGameMode_C_ForceEndGame_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.InmateEscaped
struct AJailbreakGameMode_C_InmateEscaped_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.OnPlayerKilled
struct AJailbreakGameMode_C_OnPlayerKilled_Params
{
	class APavlovPlayerState**                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn**                                Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.K2_OnLogout
struct AJailbreakGameMode_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JailbreakGameMode.JailbreakGameMode_C.RespawnTimer
struct AJailbreakGameMode_C_RespawnTimer_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.RespawnPawns
struct AJailbreakGameMode_C_RespawnPawns_Params
{
};

// Function JailbreakGameMode.JailbreakGameMode_C.ExecuteUbergraph_JailbreakGameMode
struct AJailbreakGameMode_C_ExecuteUbergraph_JailbreakGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
