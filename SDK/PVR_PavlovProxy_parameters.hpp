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

// Function PavlovProxy.Pavlov_GameLogic.SpawnItem
struct APavlov_GameLogic_SpawnItem_Params
{
	struct FPavlovItemSpawnParams                      Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnAndPosessPawns
struct APavlov_GameLogic_SpawnAndPosessPawns_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.Spawn
struct APavlov_GameLogic_Spawn_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	bool                                               bAsGhost;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetTeamCash
struct APavlov_GameLogic_SetTeamCash_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetRoundState
struct APavlov_GameLogic_SetRoundState_Params
{
	EPavlovRoundState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerVitality
struct APavlov_GameLogic_SetPlayerVitality_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Armour;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Helmet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerTeam
struct APavlov_GameLogic_SetPlayerTeam_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerSkin
struct APavlov_GameLogic_SetPlayerSkin_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SkinName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerGag
struct APavlov_GameLogic_SetPlayerGag_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerCash
struct APavlov_GameLogic_SetPlayerCash_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerBuyingEnabled
struct APavlov_GameLogic_SetPlayerBuyingEnabled_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BuyZoneMaxDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetMovementDisabled
struct APavlov_GameLogic_SetMovementDisabled_Params
{
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetGameModeProperties
struct APavlov_GameLogic_SetGameModeProperties_Params
{
	struct FPavlovGameModeProperties                   Properties;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.SetFallDamage
struct APavlov_GameLogic_SetFallDamage_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetEveryoneCash
struct APavlov_GameLogic_SetEveryoneCash_Params
{
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.PostRoundCleanUp
struct APavlov_GameLogic_PostRoundCleanUp_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundStateChanged
struct APavlov_GameLogic_OnRoundStateChanged_Params
{
	EPavlovRoundState                                  OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState                                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd
struct APavlov_GameLogic_OnRoundEnd_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin
struct APavlov_GameLogic_OnRoundBegin_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerSpawned
struct APavlov_GameLogic_OnPlayerSpawned_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerLeftServer
struct APavlov_GameLogic_OnPlayerLeftServer_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerKilled
struct APavlov_GameLogic_OnPlayerKilled_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class APlayerState*                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerJoinedServer
struct APavlov_GameLogic_OnPlayerJoinedServer_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.OnCustomGameModeInit
struct APavlov_GameLogic_OnCustomGameModeInit_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnAssignTeam
struct APavlov_GameLogic_OnAssignTeam_Params
{
	struct FPavlovPlayerStatus                         Status;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                TeamId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged
struct APavlov_GameLogic_MulticastOnRoundStateChanged_Params
{
	bool                                               bStarting;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.KickPlayer
struct APavlov_GameLogic_KickPlayer_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	bool                                               bBan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.IncrementTeamScore
struct APavlov_GameLogic_IncrementTeamScore_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.IncrementPlayerScore
struct APavlov_GameLogic_IncrementPlayerScore_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GiveTeamCash
struct APavlov_GameLogic_GiveTeamCash_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GivePlayerCash
struct APavlov_GameLogic_GivePlayerCash_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GiveEveryoneCash
struct APavlov_GameLogic_GiveEveryoneCash_Params
{
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetSpawnTransform
struct APavlov_GameLogic_GetSpawnTransform_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetRoundState
struct APavlov_GameLogic_GetRoundState_Params
{
	EPavlovRoundState                                  State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetPlayerHand
struct APavlov_GameLogic_GetPlayerHand_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDominant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType
struct APavlov_GameLogic_GetPavlovGameModeType_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EPavlovGameModeType                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetGameModeProperties
struct APavlov_GameLogic_GetGameModeProperties_Params
{
	struct FPavlovGameModeProperties                   Properties;                                               // (Parm, OutParm)
};

// Function PavlovProxy.PavlovProxyStatics.GetTeamScore
struct UPavlovProxyStatics_GetTeamScore_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatusByPawn
struct UPavlovProxyStatics_GetPavlovPlayerStatusByPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (Parm, OutParm)
	bool                                               bSucceeded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatus
struct UPavlovProxyStatics_GetPavlovPlayerStatus_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (Parm, OutParm)
	bool                                               bSucceeded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
