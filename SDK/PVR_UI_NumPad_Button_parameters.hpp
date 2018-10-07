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

// Function UI_NumPad_Button.UI_NumPad_Button_C.OnMouseButtonDown
struct UUI_NumPad_Button_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_NumPad_Button.UI_NumPad_Button_C.OnMouseEnter
struct UUI_NumPad_Button_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_NumPad_Button.UI_NumPad_Button_C.OnMouseLeave
struct UUI_NumPad_Button_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_NumPad_Button.UI_NumPad_Button_C.Construct
struct UUI_NumPad_Button_C_Construct_Params
{
};

// Function UI_NumPad_Button.UI_NumPad_Button_C.ExecuteUbergraph_UI_NumPad_Button
struct UUI_NumPad_Button_C_ExecuteUbergraph_UI_NumPad_Button_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NumPad_Button.UI_NumPad_Button_C.OnClick__DelegateSignature
struct UUI_NumPad_Button_C_OnClick__DelegateSignature_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
