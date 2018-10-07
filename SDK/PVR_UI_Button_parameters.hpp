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

// Function UI_Button.UI_Button_C.OnMouseButtonUp
struct UUI_Button_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Button.UI_Button_C.OnMouseButtonDown
struct UUI_Button_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Button.UI_Button_C.Construct
struct UUI_Button_C_Construct_Params
{
};

// Function UI_Button.UI_Button_C.OnMouseEnter
struct UUI_Button_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_Button.UI_Button_C.OnMouseLeave
struct UUI_Button_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_Button.UI_Button_C.OnButtonClicked_Event
struct UUI_Button_C_OnButtonClicked_Event_Params
{
};

// Function UI_Button.UI_Button_C.ExecuteUbergraph_UI_Button
struct UUI_Button_C_ExecuteUbergraph_UI_Button_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Button.UI_Button_C.OnButtonClicked__DelegateSignature
struct UUI_Button_C_OnButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
