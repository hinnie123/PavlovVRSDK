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

// Function UI_Moderation_Player.UI_Moderation_Player_C.GetColorAndOpacity_4
struct UUI_Moderation_Player_C_GetColorAndOpacity_4_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.OnMouseButtonDown
struct UUI_Moderation_Player_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.GetVisibility_2
struct UUI_Moderation_Player_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.GetVisibility_1
struct UUI_Moderation_Player_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.GetBrush_1
struct UUI_Moderation_Player_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.GetColorAndOpacity_3
struct UUI_Moderation_Player_C_GetColorAndOpacity_3_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.GetColorAndOpacity_2
struct UUI_Moderation_Player_C_GetColorAndOpacity_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.GetColorAndOpacity_1
struct UUI_Moderation_Player_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.BndEvt__CheckBox_108_K2Node_ComponentBoundEvent_58_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_Moderation_Player_C_BndEvt__CheckBox_108_K2Node_ComponentBoundEvent_58_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.ExecuteUbergraph_UI_Moderation_Player
struct UUI_Moderation_Player_C_ExecuteUbergraph_UI_Moderation_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.OnSelectionChanged__DelegateSignature
struct UUI_Moderation_Player_C_OnSelectionChanged__DelegateSignature_Params
{
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_Moderation_Player.UI_Moderation_Player_C.OnMuteChanged__DelegateSignature
struct UUI_Moderation_Player_C_OnMuteChanged__DelegateSignature_Params
{
	bool                                               Mute;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
