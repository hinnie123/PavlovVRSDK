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

// Function UI_ReplayScore.UI_ReplayScore_C.Tick
struct UUI_ReplayScore_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayScore.UI_ReplayScore_C.Construct
struct UUI_ReplayScore_C_Construct_Params
{
};

// Function UI_ReplayScore.UI_ReplayScore_C.ExecuteUbergraph_UI_ReplayScore
struct UUI_ReplayScore_C_ExecuteUbergraph_UI_ReplayScore_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
