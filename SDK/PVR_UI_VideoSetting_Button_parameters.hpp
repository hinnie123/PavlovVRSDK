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

// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.GetText_1
struct UUI_VideoSetting_Button_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.Prev
struct UUI_VideoSetting_Button_C_Prev_Params
{
};

// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.Next
struct UUI_VideoSetting_Button_C_Next_Params
{
};

// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.OnMouseButtonDown
struct UUI_VideoSetting_Button_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.GetBrush_1
struct UUI_VideoSetting_Button_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_VideoSetting_Button.UI_VideoSetting_Button_C.OnValudChanged__DelegateSignature
struct UUI_VideoSetting_Button_C_OnValudChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
