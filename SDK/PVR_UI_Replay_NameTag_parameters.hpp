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

// Function UI_Replay_NameTag.UI_Replay_NameTag_C.GetColorAndOpacity_1
struct UUI_Replay_NameTag_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Replay_NameTag.UI_Replay_NameTag_C.GetBrush_1
struct UUI_Replay_NameTag_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Replay_NameTag.UI_Replay_NameTag_C.Get_playerName_ColorAndOpacity_1
struct UUI_Replay_NameTag_C_Get_playerName_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Replay_NameTag.UI_Replay_NameTag_C.SetPlayerState
struct UUI_Replay_NameTag_C_SetPlayerState_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Replay_NameTag.UI_Replay_NameTag_C.Tick
struct UUI_Replay_NameTag_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Replay_NameTag.UI_Replay_NameTag_C.ExecuteUbergraph_UI_Replay_NameTag
struct UUI_Replay_NameTag_C_ExecuteUbergraph_UI_Replay_NameTag_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
