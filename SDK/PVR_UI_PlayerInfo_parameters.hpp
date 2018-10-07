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

// Function UI_PlayerInfo.UI_PlayerInfo_C.GetVisibility_1
struct UUI_PlayerInfo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PlayerInfo.UI_PlayerInfo_C.Get_Avatar_Brush_1
struct UUI_PlayerInfo_C_Get_Avatar_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_PlayerInfo.UI_PlayerInfo_C.Get_PlayerName_Text_1
struct UUI_PlayerInfo_C_Get_PlayerName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_PlayerInfo.UI_PlayerInfo_C.GetColorAndOpacity_1
struct UUI_PlayerInfo_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UI_PlayerInfo.UI_PlayerInfo_C.GetBrush_1
struct UUI_PlayerInfo_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_PlayerInfo.UI_PlayerInfo_C.SetPlayerState
struct UUI_PlayerInfo_C_SetPlayerState_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PlayerInfo.UI_PlayerInfo_C.Tick
struct UUI_PlayerInfo_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PlayerInfo.UI_PlayerInfo_C.ExecuteUbergraph_UI_PlayerInfo
struct UUI_PlayerInfo_C_ExecuteUbergraph_UI_PlayerInfo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
