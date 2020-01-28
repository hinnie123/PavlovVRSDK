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

// Function BP_MGSRTarget.BP_MGSRTarget_C.UserConstructionScript
struct ABP_MGSRTarget_C_UserConstructionScript_Params
{
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.Timeline_0__FinishedFunc
struct ABP_MGSRTarget_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.Timeline_0__UpdateFunc
struct ABP_MGSRTarget_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.ReceiveBeginPlay
struct ABP_MGSRTarget_C_ReceiveBeginPlay_Params
{
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.MG Hit
struct ABP_MGSRTarget_C_MG_Hit_Params
{
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.MGOverRotate
struct ABP_MGSRTarget_C_MGOverRotate_Params
{
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.OnHitCMP_Event
struct ABP_MGSRTarget_C_OnHitCMP_Event_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.Reset Can Score
struct ABP_MGSRTarget_C_Reset_Can_Score_Params
{
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.ResetMiniGameTarget_Event
struct ABP_MGSRTarget_C_ResetMiniGameTarget_Event_Params
{
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.Reset Hit Rotate
struct ABP_MGSRTarget_C_Reset_Hit_Rotate_Params
{
};

// Function BP_MGSRTarget.BP_MGSRTarget_C.ExecuteUbergraph_BP_MGSRTarget
struct ABP_MGSRTarget_C_ExecuteUbergraph_BP_MGSRTarget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
