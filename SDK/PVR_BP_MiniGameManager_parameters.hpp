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

// Function BP_MiniGameManager.BP_MiniGameManager_C.SetPlayerLoadout
struct ABP_MiniGameManager_C_SetPlayerLoadout_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnRep_PlayerPresent
struct ABP_MiniGameManager_C_OnRep_PlayerPresent_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetAnimBP
struct ABP_MiniGameManager_C_GetAnimBP_Params
{
	class UABP_MiniGameController_New_C*               BP_Mini_Game_Controller;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ShotFired
struct ABP_MiniGameManager_C_ShotFired_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetAccuracy
struct ABP_MiniGameManager_C_GetAccuracy_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetTargetTotal
struct ABP_MiniGameManager_C_GetTargetTotal_Params
{
	TArray<class AActor*>                              Targets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.TimerToString
struct ABP_MiniGameManager_C_TimerToString_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.AddScore
struct ABP_MiniGameManager_C_AddScore_Params
{
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LastTargetHit;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UserConstructionScript
struct ABP_MiniGameManager_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.EndMiniGame
struct ABP_MiniGameManager_C_EndMiniGame_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.InitMiniGame
struct ABP_MiniGameManager_C_InitMiniGame_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameRange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TargetWepType>                       TargetWeaponType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.SetPracticeMode
struct ABP_MiniGameManager_C_SetPracticeMode_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.MiniGameSettings
struct ABP_MiniGameManager_C_MiniGameSettings_Params
{
	float                                              MoveTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.Reset Target
struct ABP_MiniGameManager_C_Reset_Target_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.TargetHit
struct ABP_MiniGameManager_C_TargetHit_Params
{
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Target_C*                                HitTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.StartMiniGame
struct ABP_MiniGameManager_C_StartMiniGame_Params
{
	bool                                               KillHouse_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.Timer_Event
struct ABP_MiniGameManager_C_Timer_Event_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.StartGame
struct ABP_MiniGameManager_C_StartGame_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.End Game
struct ABP_MiniGameManager_C_End_Game_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.Cancel MiniGame
struct ABP_MiniGameManager_C_Cancel_MiniGame_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGameManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveTick
struct ABP_MiniGameManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.Close Range
struct ABP_MiniGameManager_C_Close_Range_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.MidRange
struct ABP_MiniGameManager_C_MidRange_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.Long Range
struct ABP_MiniGameManager_C_Long_Range_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.All Targets
struct ABP_MiniGameManager_C_All_Targets_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGameManager_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGameManager_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OptionMenuHit
struct ABP_MiniGameManager_C_OptionMenuHit_Params
{
	int                                                Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.Play Click FX
struct ABP_MiniGameManager_C_Play_Click_FX_Params
{
	class APavlovItemController*                       ItemController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__EndMiniGameOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGameManager_C_BndEvt__EndMiniGameOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteUbergraph_BP_MiniGameManager
struct ABP_MiniGameManager_C_ExecuteUbergraph_BP_MiniGameManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
