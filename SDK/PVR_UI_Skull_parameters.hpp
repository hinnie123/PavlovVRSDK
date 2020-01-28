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

// Function UI_Skull.UI_Skull_C.GetVisibility_1
struct UUI_Skull_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Skull.UI_Skull_C.Get_Avatar_Brush_1
struct UUI_Skull_C_Get_Avatar_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Skull.UI_Skull_C.Get_PlayerName_Text_1
struct UUI_Skull_C_Get_PlayerName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Skull.UI_Skull_C.GetColorAndOpacity_1
struct UUI_Skull_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Skull.UI_Skull_C.GetBrush_1
struct UUI_Skull_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Skull.UI_Skull_C.SetPlayerState
struct UUI_Skull_C_SetPlayerState_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Skull.UI_Skull_C.Construct
struct UUI_Skull_C_Construct_Params
{
};

// Function UI_Skull.UI_Skull_C.UpdateInfo
struct UUI_Skull_C_UpdateInfo_Params
{
};

// Function UI_Skull.UI_Skull_C.Destruct
struct UUI_Skull_C_Destruct_Params
{
};

// Function UI_Skull.UI_Skull_C.ExecuteUbergraph_UI_Skull
struct UUI_Skull_C_ExecuteUbergraph_UI_Skull_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
