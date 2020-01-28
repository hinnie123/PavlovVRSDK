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

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Get_ping_ColorAndOpacity_1
struct UUI_CustomServerEntry_C_Get_ping_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Connect
struct UUI_CustomServerEntry_C_Connect_Params
{
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.GetTime
struct UUI_CustomServerEntry_C_GetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseButtonUp
struct UUI_CustomServerEntry_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseButtonDown
struct UUI_CustomServerEntry_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Get_players_Text_1
struct UUI_CustomServerEntry_C_Get_players_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Get_ping_Text_1
struct UUI_CustomServerEntry_C_Get_ping_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseEnter
struct UUI_CustomServerEntry_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseLeave
struct UUI_CustomServerEntry_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Tick
struct UUI_CustomServerEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.ExecuteUbergraph_UI_CustomServerEntry
struct UUI_CustomServerEntry_C_ExecuteUbergraph_UI_CustomServerEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnJoinClicked__DelegateSignature
struct UUI_CustomServerEntry_C_OnJoinClicked__DelegateSignature_Params
{
	struct FServerDetails                              Server;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
