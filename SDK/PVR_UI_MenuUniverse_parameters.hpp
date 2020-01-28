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

// Function UI_MenuUniverse.UI_MenuUniverse_C.Get_AdminPanelButton_Visibility_1
struct UUI_MenuUniverse_C_Get_AdminPanelButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_MenuUniverse.UI_MenuUniverse_C.ShowServerStandby
struct UUI_MenuUniverse_C_ShowServerStandby_Params
{
};

// Function UI_MenuUniverse.UI_MenuUniverse_C.OnDismiss_Event_1
struct UUI_MenuUniverse_C_OnDismiss_Event_1_Params
{
};

// Function UI_MenuUniverse.UI_MenuUniverse_C.Construct
struct UUI_MenuUniverse_C_Construct_Params
{
};

// Function UI_MenuUniverse.UI_MenuUniverse_C.BndEvt__AdminPanelButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UUI_MenuUniverse_C_BndEvt__AdminPanelButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_MenuUniverse.UI_MenuUniverse_C.BndEvt__AdminPanel_K2Node_ComponentBoundEvent_1_Exit Menu__DelegateSignature
struct UUI_MenuUniverse_C_BndEvt__AdminPanel_K2Node_ComponentBoundEvent_1_Exit_Menu__DelegateSignature_Params
{
};

// Function UI_MenuUniverse.UI_MenuUniverse_C.BndEvt__AdminPanel_K2Node_ComponentBoundEvent_2_AdminAction__DelegateSignature
struct UUI_MenuUniverse_C_BndEvt__AdminPanel_K2Node_ComponentBoundEvent_2_AdminAction__DelegateSignature_Params
{
	TEnumAsByte<E_AdminAction>                         AdminAction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuUniverse.UI_MenuUniverse_C.ExecuteUbergraph_UI_MenuUniverse
struct UUI_MenuUniverse_C_ExecuteUbergraph_UI_MenuUniverse_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
