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

// Function BP_Target.BP_Target_C.Play SoundFX
struct ABP_Target_C_Play_SoundFX_Params
{
	struct FHitResult                                  Hit_Result;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.PlayParticleFX
struct ABP_Target_C_PlayParticleFX_Params
{
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.PlayMovementSound
struct ABP_Target_C_PlayMovementSound_Params
{
};

// Function BP_Target.BP_Target_C.ScoreTarget
struct ABP_Target_C_ScoreTarget_Params
{
};

// Function BP_Target.BP_Target_C.OnRep_MiniGameState
struct ABP_Target_C_OnRep_MiniGameState_Params
{
};

// Function BP_Target.BP_Target_C.InitMeshes
struct ABP_Target_C_InitMeshes_Params
{
	class UStaticMeshComponent*                        MoveCMP;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HitCMP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.PlayFX
struct ABP_Target_C_PlayFX_Params
{
	struct FHitResult                                  Hit_Result;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.UserConstructionScript
struct ABP_Target_C_UserConstructionScript_Params
{
};

// Function BP_Target.BP_Target_C.MoveTarget__FinishedFunc
struct ABP_Target_C_MoveTarget__FinishedFunc_Params
{
};

// Function BP_Target.BP_Target_C.MoveTarget__UpdateFunc
struct ABP_Target_C_MoveTarget__UpdateFunc_Params
{
};

// Function BP_Target.BP_Target_C.RotateTarget__FinishedFunc
struct ABP_Target_C_RotateTarget__FinishedFunc_Params
{
};

// Function BP_Target.BP_Target_C.RotateTarget__UpdateFunc
struct ABP_Target_C_RotateTarget__UpdateFunc_Params
{
};

// Function BP_Target.BP_Target_C.MiniGameRot__FinishedFunc
struct ABP_Target_C_MiniGameRot__FinishedFunc_Params
{
};

// Function BP_Target.BP_Target_C.MiniGameRot__UpdateFunc
struct ABP_Target_C_MiniGameRot__UpdateFunc_Params
{
};

// Function BP_Target.BP_Target_C.TargetHit
struct ABP_Target_C_TargetHit_Params
{
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Target_C*                                HitTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.ReceiveBeginPlay
struct ABP_Target_C_ReceiveBeginPlay_Params
{
};

// Function BP_Target.BP_Target_C.Move
struct ABP_Target_C_Move_Params
{
};

// Function BP_Target.BP_Target_C.OnHitCMP_Event
struct ABP_Target_C_OnHitCMP_Event_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.Stop Move
struct ABP_Target_C_Stop_Move_Params
{
};

// Function BP_Target.BP_Target_C.HitRotate
struct ABP_Target_C_HitRotate_Params
{
};

// Function BP_Target.BP_Target_C.Reset Rotate
struct ABP_Target_C_Reset_Rotate_Params
{
};

// Function BP_Target.BP_Target_C.Random Move Start
struct ABP_Target_C_Random_Move_Start_Params
{
};

// Function BP_Target.BP_Target_C.Show Target
struct ABP_Target_C_Show_Target_Params
{
};

// Function BP_Target.BP_Target_C.Hide Target
struct ABP_Target_C_Hide_Target_Params
{
};

// Function BP_Target.BP_Target_C.StartMiniGame
struct ABP_Target_C_StartMiniGame_Params
{
	bool                                               KillHouse_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.EndMiniGame
struct ABP_Target_C_EndMiniGame_Params
{
};

// Function BP_Target.BP_Target_C.MGOverRotate
struct ABP_Target_C_MGOverRotate_Params
{
};

// Function BP_Target.BP_Target_C.MG Hit
struct ABP_Target_C_MG_Hit_Params
{
};

// Function BP_Target.BP_Target_C.InitMiniGame
struct ABP_Target_C_InitMiniGame_Params
{
	TEnumAsByte<E_MiniGameType>                        MiniGameRange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TargetWepType>                       TargetWeaponType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.SetPracticeMode
struct ABP_Target_C_SetPracticeMode_Params
{
};

// Function BP_Target.BP_Target_C.Reset Can Score
struct ABP_Target_C_Reset_Can_Score_Params
{
};

// Function BP_Target.BP_Target_C.MoveFinished
struct ABP_Target_C_MoveFinished_Params
{
	TEnumAsByte<ETimelineDirection>                    Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.MiniGameSettings
struct ABP_Target_C_MiniGameSettings_Params
{
	float                                              MoveTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.Reset Target
struct ABP_Target_C_Reset_Target_Params
{
};

// Function BP_Target.BP_Target_C.Play Hit FX Delayed
struct ABP_Target_C_Play_Hit_FX_Delayed_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit_Result;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.Reset Hit Rotate
struct ABP_Target_C_Reset_Hit_Rotate_Params
{
};

// Function BP_Target.BP_Target_C.ExecuteUbergraph_BP_Target
struct ABP_Target_C_ExecuteUbergraph_BP_Target_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Target.BP_Target_C.ResetMiniGameTarget__DelegateSignature
struct ABP_Target_C_ResetMiniGameTarget__DelegateSignature_Params
{
};

// Function BP_Target.BP_Target_C.ResetTarget__DelegateSignature
struct ABP_Target_C_ResetTarget__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
