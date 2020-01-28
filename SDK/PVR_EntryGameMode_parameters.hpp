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

// Function EntryGameMode.EntryGameMode_C.UserConstructionScript
struct AEntryGameMode_C_UserConstructionScript_Params
{
};

// Function EntryGameMode.EntryGameMode_C.StartMiniGame
struct AEntryGameMode_C_StartMiniGame_Params
{
	bool                                               KillHouse_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntryGameMode.EntryGameMode_C.EndMiniGame
struct AEntryGameMode_C_EndMiniGame_Params
{
};

// Function EntryGameMode.EntryGameMode_C.TargetHit
struct AEntryGameMode_C_TargetHit_Params
{
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Target_C*                                HitTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntryGameMode.EntryGameMode_C.InitMiniGame
struct AEntryGameMode_C_InitMiniGame_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameRange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TargetWepType>                       TargetWeaponType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntryGameMode.EntryGameMode_C.SetPracticeMode
struct AEntryGameMode_C_SetPracticeMode_Params
{
};

// Function EntryGameMode.EntryGameMode_C.MiniGameSettings
struct AEntryGameMode_C_MiniGameSettings_Params
{
	float                                              MoveTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntryGameMode.EntryGameMode_C.Reset Target
struct AEntryGameMode_C_Reset_Target_Params
{
};

// Function EntryGameMode.EntryGameMode_C.ExecuteUbergraph_EntryGameMode
struct AEntryGameMode_C_ExecuteUbergraph_EntryGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
