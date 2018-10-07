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

// Function UI_NumPad.UI_NumPad_C.Construct
struct UUI_NumPad_C_Construct_Params
{
};

// Function UI_NumPad.UI_NumPad_C.OnKeyClicked
struct UUI_NumPad_C_OnKeyClicked_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NumPad.UI_NumPad_C.ExecuteUbergraph_UI_NumPad
struct UUI_NumPad_C_ExecuteUbergraph_UI_NumPad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NumPad.UI_NumPad_C.OnDigit__DelegateSignature
struct UUI_NumPad_C_OnDigit__DelegateSignature_Params
{
	int                                                Digit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NumPad.UI_NumPad_C.OnConfirm__DelegateSignature
struct UUI_NumPad_C_OnConfirm__DelegateSignature_Params
{
};

// Function UI_NumPad.UI_NumPad_C.OnErase__DelegateSignature
struct UUI_NumPad_C_OnErase__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
