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

// Function BP_PavlovGhostController.BP_PavlovGhostController_C.SetVRScale
struct ABP_PavlovGhostController_C_SetVRScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovGhostController.BP_PavlovGhostController_C.UserConstructionScript
struct ABP_PavlovGhostController_C_UserConstructionScript_Params
{
};

// Function BP_PavlovGhostController.BP_PavlovGhostController_C.ReceiveBeginPlay
struct ABP_PavlovGhostController_C_ReceiveBeginPlay_Params
{
};

// Function BP_PavlovGhostController.BP_PavlovGhostController_C.GripChanged
struct ABP_PavlovGhostController_C_GripChanged_Params
{
	bool*                                              bNewGrip;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovGhostController.BP_PavlovGhostController_C.OnPointModeChanged
struct ABP_PavlovGhostController_C_OnPointModeChanged_Params
{
	EGhostPointMode*                                   OldPointMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovGhostController.BP_PavlovGhostController_C.ExecuteUbergraph_BP_PavlovGhostController
struct ABP_PavlovGhostController_C_ExecuteUbergraph_BP_PavlovGhostController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
