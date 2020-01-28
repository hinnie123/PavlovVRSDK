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

// Function UI_PIN.UI_PIN_C.UpdateLabel
struct UUI_PIN_C_UpdateLabel_Params
{
};

// Function UI_PIN.UI_PIN_C.Construct
struct UUI_PIN_C_Construct_Params
{
};

// Function UI_PIN.UI_PIN_C.BndEvt__NumPad_K2Node_ComponentBoundEvent_0_OnConfirm__DelegateSignature
struct UUI_PIN_C_BndEvt__NumPad_K2Node_ComponentBoundEvent_0_OnConfirm__DelegateSignature_Params
{
};

// Function UI_PIN.UI_PIN_C.BndEvt__NumPad_K2Node_ComponentBoundEvent_1_OnErase__DelegateSignature
struct UUI_PIN_C_BndEvt__NumPad_K2Node_ComponentBoundEvent_1_OnErase__DelegateSignature_Params
{
};

// Function UI_PIN.UI_PIN_C.BndEvt__NumPad_K2Node_ComponentBoundEvent_2_OnDigit__DelegateSignature
struct UUI_PIN_C_BndEvt__NumPad_K2Node_ComponentBoundEvent_2_OnDigit__DelegateSignature_Params
{
	int                                                Digit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PIN.UI_PIN_C.ExecuteUbergraph_UI_PIN
struct UUI_PIN_C_ExecuteUbergraph_UI_PIN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PIN.UI_PIN_C.OnConfirm__DelegateSignature
struct UUI_PIN_C_OnConfirm__DelegateSignature_Params
{
	struct FString                                     PinString;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
