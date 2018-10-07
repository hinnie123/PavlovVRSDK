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

// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.UserConstructionScript
struct AToolTip_Spec_Cycle_C_UserConstructionScript_Params
{
};

// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.ReceiveBeginPlay
struct AToolTip_Spec_Cycle_C_ReceiveBeginPlay_Params
{
};

// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.OnControllerTriggerChanged
struct AToolTip_Spec_Cycle_C_OnControllerTriggerChanged_Params
{
	bool                                               bTriggered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.OnDestroyed_Event_1
struct AToolTip_Spec_Cycle_C_OnDestroyed_Event_1_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C.ExecuteUbergraph_ToolTip_Spec_Cycle
struct AToolTip_Spec_Cycle_C_ExecuteUbergraph_ToolTip_Spec_Cycle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
