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

// Function UI_OnlineSettings.UI_OnlineSettings_C.GetSelectedMap
struct UUI_OnlineSettings_C_GetSelectedMap_Params
{
	struct FString                                     Map;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function UI_OnlineSettings.UI_OnlineSettings_C.BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
struct UUI_OnlineSettings_C_BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_OnlineSettings.UI_OnlineSettings_C.BndEvt__ComboBoxString_115_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
struct UUI_OnlineSettings_C_BndEvt__ComboBoxString_115_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineSettings.UI_OnlineSettings_C.ExecuteUbergraph_UI_OnlineSettings
struct UUI_OnlineSettings_C_ExecuteUbergraph_UI_OnlineSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OnlineSettings.UI_OnlineSettings_C.OnMapChanged__DelegateSignature
struct UUI_OnlineSettings_C_OnMapChanged__DelegateSignature_Params
{
	struct FString                                     Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_OnlineSettings.UI_OnlineSettings_C.OnModalEnd__DelegateSignature
struct UUI_OnlineSettings_C_OnModalEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
