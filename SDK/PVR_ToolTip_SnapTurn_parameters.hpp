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

// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.UserConstructionScript
struct AToolTip_SnapTurn_C_UserConstructionScript_Params
{
};

// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.ReceiveBeginPlay
struct AToolTip_SnapTurn_C_ReceiveBeginPlay_Params
{
};

// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.OnDestroyed_Event_1
struct AToolTip_SnapTurn_C_OnDestroyed_Event_1_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.OnSnapTurn_Event_1
struct AToolTip_SnapTurn_C_OnSnapTurn_Event_1_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_SnapTurn.ToolTip_SnapTurn_C.ExecuteUbergraph_ToolTip_SnapTurn
struct AToolTip_SnapTurn_C_ExecuteUbergraph_ToolTip_SnapTurn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
