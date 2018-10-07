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

// Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.Get_Cost_ColorAndOpacity_1
struct UUI_BuyMenu_Segment_Content_C_Get_Cost_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.Get_Cost_Text_1
struct UUI_BuyMenu_Segment_Content_C_Get_Cost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.OnUpdated
struct UUI_BuyMenu_Segment_Content_C_OnUpdated_Params
{
	struct FWheelSegment*                              Segment;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.ExecuteUbergraph_UI_BuyMenu_Segment_Content
struct UUI_BuyMenu_Segment_Content_C_ExecuteUbergraph_UI_BuyMenu_Segment_Content_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
