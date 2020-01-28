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

// Function BP_Mining.BP_Mining_C.ToggleRockMesh
struct ABP_Mining_C_ToggleRockMesh_Params
{
	bool                                               Vis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mining.BP_Mining_C.ToggleDM
struct ABP_Mining_C_ToggleDM_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mining.BP_Mining_C.TryMine_Server
struct ABP_Mining_C_TryMine_Server_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               successful;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mining.BP_Mining_C.SetState
struct ABP_Mining_C_SetState_Params
{
	TEnumAsByte<E_EscapeObjectiveState>                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mining.BP_Mining_C.OnRep_State
struct ABP_Mining_C_OnRep_State_Params
{
};

// Function BP_Mining.BP_Mining_C.UserConstructionScript
struct ABP_Mining_C_UserConstructionScript_Params
{
};

// Function BP_Mining.BP_Mining_C.ReceiveBeginPlay
struct ABP_Mining_C_ReceiveBeginPlay_Params
{
};

// Function BP_Mining.BP_Mining_C.OnStateChange_Event
struct ABP_Mining_C_OnStateChange_Event_Params
{
	TEnumAsByte<E_EscapeObjectiveState>                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mining.BP_Mining_C.Mine
struct ABP_Mining_C_Mine_Params
{
};

// Function BP_Mining.BP_Mining_C.Timer_Respawn
struct ABP_Mining_C_Timer_Respawn_Params
{
};

// Function BP_Mining.BP_Mining_C.Respawn_Event
struct ABP_Mining_C_Respawn_Event_Params
{
};

// Function BP_Mining.BP_Mining_C.ExecuteUbergraph_BP_Mining
struct ABP_Mining_C_ExecuteUbergraph_BP_Mining_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mining.BP_Mining_C.Respawn__DelegateSignature
struct ABP_Mining_C_Respawn__DelegateSignature_Params
{
};

// Function BP_Mining.BP_Mining_C.OnStateChange__DelegateSignature
struct ABP_Mining_C_OnStateChange__DelegateSignature_Params
{
	TEnumAsByte<E_EscapeObjectiveState>                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
