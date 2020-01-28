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

// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Get_VotesHList_Visibility_1
struct UUI_Stereo_Vote_Generic_C_Get_VotesHList_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Get_bg_Brush_1
struct UUI_Stereo_Vote_Generic_C_Get_bg_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Construct
struct UUI_Stereo_Vote_Generic_C_Construct_Params
{
};

// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.Tick
struct UUI_Stereo_Vote_Generic_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Stereo_Vote_Generic.UI_Stereo_Vote_Generic_C.ExecuteUbergraph_UI_Stereo_Vote_Generic
struct UUI_Stereo_Vote_Generic_C_ExecuteUbergraph_UI_Stereo_Vote_Generic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
