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

// Function UI_LobbySetting.UI_LobbySetting_C.SetSelectionByIndex
struct UUI_LobbySetting_C_SetSelectionByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LobbySetting.UI_LobbySetting_C.GetSelectionIndex
struct UUI_LobbySetting_C_GetSelectionIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LobbySetting.UI_LobbySetting_C.GetSelectedValue
struct UUI_LobbySetting_C_GetSelectedValue_Params
{
	struct FString                                     Value;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function UI_LobbySetting.UI_LobbySetting_C.SetSelectionByValue
struct UUI_LobbySetting_C_SetSelectionByValue_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
};

// Function UI_LobbySetting.UI_LobbySetting_C.On_Combo_GenerateWidget_1
struct UUI_LobbySetting_C_On_Combo_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LobbySetting.UI_LobbySetting_C.BuildCombo
struct UUI_LobbySetting_C_BuildCombo_Params
{
};

// Function UI_LobbySetting.UI_LobbySetting_C.SetSelection
struct UUI_LobbySetting_C_SetSelection_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function UI_LobbySetting.UI_LobbySetting_C.Get_GameModeCombo_Visibility_1
struct UUI_LobbySetting_C_Get_GameModeCombo_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LobbySetting.UI_LobbySetting_C.GetVisibility_1
struct UUI_LobbySetting_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LobbySetting.UI_LobbySetting_C.Construct
struct UUI_LobbySetting_C_Construct_Params
{
};

// Function UI_LobbySetting.UI_LobbySetting_C.BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature
struct UUI_LobbySetting_C_BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LobbySetting.UI_LobbySetting_C.BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
struct UUI_LobbySetting_C_BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params
{
};

// Function UI_LobbySetting.UI_LobbySetting_C.ExecuteUbergraph_UI_LobbySetting
struct UUI_LobbySetting_C_ExecuteUbergraph_UI_LobbySetting_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LobbySetting.UI_LobbySetting_C.OnSelectionChanged__DelegateSignature
struct UUI_LobbySetting_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
