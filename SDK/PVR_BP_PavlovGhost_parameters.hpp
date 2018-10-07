#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PavlovGhost.BP_PavlovGhost_C.SetVRScale
struct ABP_PavlovGhost_C_SetVRScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.UserConstructionScript
struct ABP_PavlovGhost_C_UserConstructionScript_Params
{
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.GhostViewFadeOut__FinishedFunc
struct ABP_PavlovGhost_C_GhostViewFadeOut__FinishedFunc_Params
{
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.GhostViewFadeOut__UpdateFunc
struct ABP_PavlovGhost_C_GhostViewFadeOut__UpdateFunc_Params
{
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.ReceiveBeginPlay
struct ABP_PavlovGhost_C_ReceiveBeginPlay_Params
{
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.OnTraveledToSpectatorRoom
struct ABP_PavlovGhost_C_OnTraveledToSpectatorRoom_Params
{
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.OnDestroyed_Event_1
struct ABP_PavlovGhost_C_OnDestroyed_Event_1_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.BndEvt__Spectator_K2Node_ComponentBoundEvent_0_VROnSpectatorScaleSignature__DelegateSignature
struct ABP_PavlovGhost_C_BndEvt__Spectator_K2Node_ComponentBoundEvent_0_VROnSpectatorScaleSignature__DelegateSignature_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.OnGraceTimeEnded
struct ABP_PavlovGhost_C_OnGraceTimeEnded_Params
{
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.OnTeamIdChanged
struct ABP_PavlovGhost_C_OnTeamIdChanged_Params
{
	int*                                               TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.OnPreTeleport
struct ABP_PavlovGhost_C_OnPreTeleport_Params
{
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.OnTeleport
struct ABP_PavlovGhost_C_OnTeleport_Params
{
};

// Function BP_PavlovGhost.BP_PavlovGhost_C.ExecuteUbergraph_BP_PavlovGhost
struct ABP_PavlovGhost_C_ExecuteUbergraph_BP_PavlovGhost_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
