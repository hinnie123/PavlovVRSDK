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

// Function UI_LobbyMember.UI_LobbyMember_C.GetBrush_1
struct UUI_LobbyMember_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LobbyMember.UI_LobbyMember_C.Get_KickButton_Visibility_1
struct UUI_LobbyMember_C_Get_KickButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LobbyMember.UI_LobbyMember_C.Get_ReadyOverlay_Visibility_1
struct UUI_LobbyMember_C_Get_ReadyOverlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LobbyMember.UI_LobbyMember_C.OnMouseButtonDown
struct UUI_LobbyMember_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LobbyMember.UI_LobbyMember_C.Get_OwnerIcon_Visibility_1
struct UUI_LobbyMember_C_Get_OwnerIcon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LobbyMember.UI_LobbyMember_C.IsMemberTalking
struct UUI_LobbyMember_C_IsMemberTalking_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Talking;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LobbyMember.UI_LobbyMember_C.GetTeamColor
struct UUI_LobbyMember_C_GetTeamColor_Params
{
	int                                                inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LobbyMember.UI_LobbyMember_C.Get_AvatarImage_Brush_1
struct UUI_LobbyMember_C_Get_AvatarImage_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LobbyMember.UI_LobbyMember_C.GetColorAndOpacity_1
struct UUI_LobbyMember_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LobbyMember.UI_LobbyMember_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
struct UUI_LobbyMember_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_LobbyMember.UI_LobbyMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature
struct UUI_LobbyMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_LobbyMember.UI_LobbyMember_C.OnMouseLeave
struct UUI_LobbyMember_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_LobbyMember.UI_LobbyMember_C.ExecuteUbergraph_UI_LobbyMember
struct UUI_LobbyMember_C_ExecuteUbergraph_UI_LobbyMember_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
