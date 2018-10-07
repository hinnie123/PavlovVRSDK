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

// Function UI_WheelSegment_Content.UI_WheelSegment_Content_C.OnUpdated
struct UUI_WheelSegment_Content_C_OnUpdated_Params
{
	struct FWheelSegment                               Segment;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_WheelSegment_Content.UI_WheelSegment_Content_C.ExecuteUbergraph_UI_WheelSegment_Content
struct UUI_WheelSegment_Content_C_ExecuteUbergraph_UI_WheelSegment_Content_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
