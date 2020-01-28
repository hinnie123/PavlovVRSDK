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

// Function BP_EscapeObjective.BP_EscapeObjective_C.ToggleDestructibleMesh
struct ABP_EscapeObjective_C_ToggleDestructibleMesh_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.ToggleEscapeMesh
struct ABP_EscapeObjective_C_ToggleEscapeMesh_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.PlayDestroySound
struct ABP_EscapeObjective_C_PlayDestroySound_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.SetRepairMeshVis
struct ABP_EscapeObjective_C_SetRepairMeshVis_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.PlayTouchSound
struct ABP_EscapeObjective_C_PlayTouchSound_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.CanRepairObjective
struct ABP_EscapeObjective_C_CanRepairObjective_Params
{
	bool                                               CanRepair;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.SetBoxCollisionResponse
struct ABP_EscapeObjective_C_SetBoxCollisionResponse_Params
{
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.TryDestroyObjective_Server
struct ABP_EscapeObjective_C_TryDestroyObjective_Server_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroyed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.CanDestroyObjective
struct ABP_EscapeObjective_C_CanDestroyObjective_Params
{
	class AVRItem*                                     VRItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDestroy;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.SetObjectiveState
struct ABP_EscapeObjective_C_SetObjectiveState_Params
{
	TEnumAsByte<E_EscapeObjectiveState>                EscapeState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.OnRep_EscapeState
struct ABP_EscapeObjective_C_OnRep_EscapeState_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.UserConstructionScript
struct ABP_EscapeObjective_C_UserConstructionScript_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.OnEscapeStateChanged_Event
struct ABP_EscapeObjective_C_OnEscapeStateChanged_Event_Params
{
	TEnumAsByte<E_EscapeObjectiveState>                EscapeState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.DestroyObjective_Server
struct ABP_EscapeObjective_C_DestroyObjective_Server_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.ResetObjective_Event
struct ABP_EscapeObjective_C_ResetObjective_Event_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.ReceiveBeginPlay
struct ABP_EscapeObjective_C_ReceiveBeginPlay_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.PlayRepairSound
struct ABP_EscapeObjective_C_PlayRepairSound_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.Init Client
struct ABP_EscapeObjective_C_Init_Client_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.ExecuteUbergraph_BP_EscapeObjective
struct ABP_EscapeObjective_C_ExecuteUbergraph_BP_EscapeObjective_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.ResetObjective__DelegateSignature
struct ABP_EscapeObjective_C_ResetObjective__DelegateSignature_Params
{
};

// Function BP_EscapeObjective.BP_EscapeObjective_C.OnEscapeStateChanged__DelegateSignature
struct ABP_EscapeObjective_C_OnEscapeStateChanged__DelegateSignature_Params
{
	TEnumAsByte<E_EscapeObjectiveState>                EscapeState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
