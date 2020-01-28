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

// Function UI_ReplayHUD.UI_ReplayHUD_C.SelectPlayerStatus
struct UUI_ReplayHUD_C_SelectPlayerStatus_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.GetBrush_1
struct UUI_ReplayHUD_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.GetGameModeFromCombo
struct UUI_ReplayHUD_C_GetGameModeFromCombo_Params
{
	class UComboBoxString*                             self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.RefreshReplayList
struct UUI_ReplayHUD_C_RefreshReplayList_Params
{
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.ToggleScore
struct UUI_ReplayHUD_C_ToggleScore_Params
{
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.GetReplayManager
struct UUI_ReplayHUD_C_GetReplayManager_Params
{
	class UReplayManager*                              ReplayManager;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.SetScrub
struct UUI_ReplayHUD_C_SetScrub_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.GetVisibility_1
struct UUI_ReplayHUD_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.ToggleMenu
struct UUI_ReplayHUD_C_ToggleMenu_Params
{
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.GetScoreboardVisibility
struct UUI_ReplayHUD_C_GetScoreboardVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.Construct
struct UUI_ReplayHUD_C_Construct_Params
{
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__replayButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature
struct UUI_ReplayHUD_C_BndEvt__replayButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_177_OnButtonClickedEvent__DelegateSignature
struct UUI_ReplayHUD_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_177_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.Tick
struct UUI_ReplayHUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.PushErrorMessage
struct UUI_ReplayHUD_C_PushErrorMessage_Params
{
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_1
struct UUI_ReplayHUD_C_CustomEvent_1_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.OnReplayListUpdated_Event_1
struct UUI_ReplayHUD_C_OnReplayListUpdated_Event_1_Params
{
	bool                                               bSucceeded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__ScrubBtn_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
struct UUI_ReplayHUD_C_BndEvt__ScrubBtn_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__GameModeCombo_K2Node_ComponentBoundEvent_94_OnSelectionChangedEvent__DelegateSignature
struct UUI_ReplayHUD_C_BndEvt__GameModeCombo_K2Node_ComponentBoundEvent_94_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__CompCheckbox_K2Node_ComponentBoundEvent_103_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_ReplayHUD_C_BndEvt__CompCheckbox_K2Node_ComponentBoundEvent_103_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_2
struct UUI_ReplayHUD_C_CustomEvent_2_Params
{
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_3
struct UUI_ReplayHUD_C_CustomEvent_3_Params
{
	struct FString                                     ReplayId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_4
struct UUI_ReplayHUD_C_CustomEvent_4_Params
{
	bool                                               bSucceeded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.ExecuteUbergraph_UI_ReplayHUD
struct UUI_ReplayHUD_C_ExecuteUbergraph_UI_ReplayHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.OnScrubPressed__DelegateSignature
struct UUI_ReplayHUD_C_OnScrubPressed__DelegateSignature_Params
{
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayHUD.UI_ReplayHUD_C.OnMenuChanged__DelegateSignature
struct UUI_ReplayHUD_C_OnMenuChanged__DelegateSignature_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
