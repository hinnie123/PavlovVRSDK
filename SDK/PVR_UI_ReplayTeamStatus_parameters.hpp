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

// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.Select
struct UUI_ReplayTeamStatus_C_Select_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.UpdatePlayerArray
struct UUI_ReplayTeamStatus_C_UpdatePlayerArray_Params
{
};

// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.Construct
struct UUI_ReplayTeamStatus_C_Construct_Params
{
};

// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.Tick
struct UUI_ReplayTeamStatus_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayTeamStatus.UI_ReplayTeamStatus_C.ExecuteUbergraph_UI_ReplayTeamStatus
struct UUI_ReplayTeamStatus_C_ExecuteUbergraph_UI_ReplayTeamStatus_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
