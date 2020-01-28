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

// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.Reset Target
struct UBPI_TargetMiniGame_C_Reset_Target_Params
{
};

// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.MiniGameSettings
struct UBPI_TargetMiniGame_C_MiniGameSettings_Params
{
	float                                              MoveTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.SetPracticeMode
struct UBPI_TargetMiniGame_C_SetPracticeMode_Params
{
};

// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.InitMiniGame
struct UBPI_TargetMiniGame_C_InitMiniGame_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameRange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TargetWepType>                       TargetWeaponType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.TargetHit
struct UBPI_TargetMiniGame_C_TargetHit_Params
{
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Target_C*                                HitTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.EndMiniGame
struct UBPI_TargetMiniGame_C_EndMiniGame_Params
{
};

// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.StartMiniGame
struct UBPI_TargetMiniGame_C_StartMiniGame_Params
{
	bool                                               KillHouse_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
