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

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.On_Combo_GenerateWidget_1
struct UUI_WorkshopCombo_C_On_Combo_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.BuildCombo
struct UUI_WorkshopCombo_C_BuildCombo_Params
{
};

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.SetSelection
struct UUI_WorkshopCombo_C_SetSelection_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.Get_GameModeCombo_Visibility_1
struct UUI_WorkshopCombo_C_Get_GameModeCombo_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.GetVisibility_1
struct UUI_WorkshopCombo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.Construct
struct UUI_WorkshopCombo_C_Construct_Params
{
};

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature
struct UUI_WorkshopCombo_C_BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
struct UUI_WorkshopCombo_C_BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params
{
};

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.ExecuteUbergraph_UI_WorkshopCombo
struct UUI_WorkshopCombo_C_ExecuteUbergraph_UI_WorkshopCombo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopCombo.UI_WorkshopCombo_C.OnSelectionChanged__DelegateSignature
struct UUI_WorkshopCombo_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
