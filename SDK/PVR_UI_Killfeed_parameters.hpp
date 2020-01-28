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

// Function UI_Killfeed.UI_Killfeed_C.Construct
struct UUI_Killfeed_C_Construct_Params
{
};

// Function UI_Killfeed.UI_Killfeed_C.OnKillfeedEntry_Event_1
struct UUI_Killfeed_C_OnKillfeedEntry_Event_1_Params
{
	struct FKillfeedEntry                              NewEntry;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Killfeed.UI_Killfeed_C.Tick
struct UUI_Killfeed_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Killfeed.UI_Killfeed_C.ExecuteUbergraph_UI_Killfeed
struct UUI_Killfeed_C_ExecuteUbergraph_UI_Killfeed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
