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

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.UserConstructionScript
struct ALobbyMiniGameMode_C_UserConstructionScript_Params
{
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.TargetHit
struct ALobbyMiniGameMode_C_TargetHit_Params
{
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Target_C*                                HitTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.MiniGameSettings
struct ALobbyMiniGameMode_C_MiniGameSettings_Params
{
	float                                              MoveTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.Reset Target
struct ALobbyMiniGameMode_C_Reset_Target_Params
{
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.OnPlayerSpawned
struct ALobbyMiniGameMode_C_OnPlayerSpawned_Params
{
	class APavlovPlayerState**                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn**                                Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.StartMiniGame
struct ALobbyMiniGameMode_C_StartMiniGame_Params
{
	bool                                               KillHouse_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.InitMiniGame
struct ALobbyMiniGameMode_C_InitMiniGame_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameRange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TargetWepType>                       TargetWeaponType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.EndMiniGame
struct ALobbyMiniGameMode_C_EndMiniGame_Params
{
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.SetPracticeMode
struct ALobbyMiniGameMode_C_SetPracticeMode_Params
{
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.OnRoundStateChanged
struct ALobbyMiniGameMode_C_OnRoundStateChanged_Params
{
	EPavlovRoundState*                                 OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState*                                 NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.Set Player Loadout
struct ALobbyMiniGameMode_C_Set_Player_Loadout_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Primary;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Secondary;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.MiniGameOver
struct ALobbyMiniGameMode_C_MiniGameOver_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.OnDestroyed_Event_1
struct ALobbyMiniGameMode_C_OnDestroyed_Event_1_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMiniGameMode.LobbyMiniGameMode_C.ExecuteUbergraph_LobbyMiniGameMode
struct ALobbyMiniGameMode_C_ExecuteUbergraph_LobbyMiniGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
