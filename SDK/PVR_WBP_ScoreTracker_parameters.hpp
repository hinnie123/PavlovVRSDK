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

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.Timer5ColorBind
struct UWBP_ScoreTracker_C_Timer5ColorBind_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.SelectedTargetTypeText
struct UWBP_ScoreTracker_C_SelectedTargetTypeText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.Timer4ColorBind
struct UWBP_ScoreTracker_C_Timer4ColorBind_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.Timer3ColorBind
struct UWBP_ScoreTracker_C_Timer3ColorBind_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.Timer2ColorBind
struct UWBP_ScoreTracker_C_Timer2ColorBind_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.Timer1ColorBind
struct UWBP_ScoreTracker_C_Timer1ColorBind_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.AllTargetsBind
struct UWBP_ScoreTracker_C_AllTargetsBind_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.LongRangeBind
struct UWBP_ScoreTracker_C_LongRangeBind_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.MidRangeBind
struct UWBP_ScoreTracker_C_MidRangeBind_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.CloseRangeBind
struct UWBP_ScoreTracker_C_CloseRangeBind_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.AccuracyBind
struct UWBP_ScoreTracker_C_AccuracyBind_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.TargetsHitBind
struct UWBP_ScoreTracker_C_TargetsHitBind_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.TimerBind
struct UWBP_ScoreTracker_C_TimerBind_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.StartMiniGame
struct UWBP_ScoreTracker_C_StartMiniGame_Params
{
	bool                                               KillHouse_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.EndMiniGame
struct UWBP_ScoreTracker_C_EndMiniGame_Params
{
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.TargetHit
struct UWBP_ScoreTracker_C_TargetHit_Params
{
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Target_C*                                HitTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.InitMiniGame
struct UWBP_ScoreTracker_C_InitMiniGame_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameRange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TargetWepType>                       TargetWeaponType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.SetPracticeMode
struct UWBP_ScoreTracker_C_SetPracticeMode_Params
{
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.MiniGameSettings
struct UWBP_ScoreTracker_C_MiniGameSettings_Params
{
	float                                              MoveTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.Reset Target
struct UWBP_ScoreTracker_C_Reset_Target_Params
{
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.UpdateTime_Event
struct UWBP_ScoreTracker_C_UpdateTime_Event_Params
{
	struct FText                                       Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.UpdateScore_Event
struct UWBP_ScoreTracker_C_UpdateScore_Event_Params
{
	struct FText                                       Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MaxTargets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Stage_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.UpdateAccuracy_Event
struct UWBP_ScoreTracker_C_UpdateAccuracy_Event_Params
{
	struct FText                                       Accuracy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.Construct
struct UWBP_ScoreTracker_C_Construct_Params
{
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.SetRoundState_Event
struct UWBP_ScoreTracker_C_SetRoundState_Event_Params
{
	TEnumAsByte<E_MiniGameState>                       MiniGameState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Accuracy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MaxTargets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Stage_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.Index_Event
struct UWBP_ScoreTracker_C_Index_Event_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.MiniGameSelected_Event
struct UWBP_ScoreTracker_C_MiniGameSelected_Event_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ScoreTrackerState>                   TrackerState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.ExecuteUbergraph_WBP_ScoreTracker
struct UWBP_ScoreTracker_C_ExecuteUbergraph_WBP_ScoreTracker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.SwitchIndex__DelegateSignature
struct UWBP_ScoreTracker_C_SwitchIndex__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.MiniGameSelected__DelegateSignature
struct UWBP_ScoreTracker_C_MiniGameSelected__DelegateSignature_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ScoreTrackerState>                   TrackerState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.SetRoundState__DelegateSignature
struct UWBP_ScoreTracker_C_SetRoundState__DelegateSignature_Params
{
	TEnumAsByte<E_MiniGameState>                       MiniGameState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Accuracy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MaxTargets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Stage_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.UpdateAccuracy__DelegateSignature
struct UWBP_ScoreTracker_C_UpdateAccuracy__DelegateSignature_Params
{
	struct FText                                       Accuracy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.UpdateScore__DelegateSignature
struct UWBP_ScoreTracker_C_UpdateScore__DelegateSignature_Params
{
	struct FText                                       Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MaxTargets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Stage_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ScoreTracker.WBP_ScoreTracker_C.UpdateTime__DelegateSignature
struct UWBP_ScoreTracker_C_UpdateTime__DelegateSignature_Params
{
	struct FText                                       Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
