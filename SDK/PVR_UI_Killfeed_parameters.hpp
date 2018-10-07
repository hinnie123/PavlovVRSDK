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

// Function UI_Killfeed.UI_Killfeed_C.Construct
struct UUI_Killfeed_C_Construct_Params
{
};

// Function UI_Killfeed.UI_Killfeed_C.OnKillfeedEntry_Event_1
struct UUI_Killfeed_C_OnKillfeedEntry_Event_1_Params
{
	struct FKillfeedEntry                              NewEntry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_Killfeed.UI_Killfeed_C.Tick
struct UUI_Killfeed_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Killfeed.UI_Killfeed_C.ExecuteUbergraph_UI_Killfeed
struct UUI_Killfeed_C_ExecuteUbergraph_UI_Killfeed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
