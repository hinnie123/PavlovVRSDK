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

// Function UI_ServerFilter.UI_ServerFilter_C.GetSelection
struct UUI_ServerFilter_C_GetSelection_Params
{
	struct FString                                     Selection;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function UI_ServerFilter.UI_ServerFilter_C.SetSelection
struct UUI_ServerFilter_C_SetSelection_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function UI_ServerFilter.UI_ServerFilter_C.Get_GameModeCombo_Visibility_1
struct UUI_ServerFilter_C_Get_GameModeCombo_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ServerFilter.UI_ServerFilter_C.GetVisibility_1
struct UUI_ServerFilter_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ServerFilter.UI_ServerFilter_C.Construct
struct UUI_ServerFilter_C_Construct_Params
{
};

// Function UI_ServerFilter.UI_ServerFilter_C.BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature
struct UUI_ServerFilter_C_BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ServerFilter.UI_ServerFilter_C.ExecuteUbergraph_UI_ServerFilter
struct UUI_ServerFilter_C_ExecuteUbergraph_UI_ServerFilter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ServerFilter.UI_ServerFilter_C.OnSelectionChanged__DelegateSignature
struct UUI_ServerFilter_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
