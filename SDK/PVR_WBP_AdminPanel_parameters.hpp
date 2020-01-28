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

// Function WBP_AdminPanel.WBP_AdminPanel_C.Get_KickButton_ColorAndOpacity_Bind
struct UWBP_AdminPanel_C_Get_KickButton_ColorAndOpacity_Bind_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.PlayerActionsEnabled_Bind
struct UWBP_AdminPanel_C_PlayerActionsEnabled_Bind_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.Remove Old Selections
struct UWBP_AdminPanel_C_Remove_Old_Selections_Params
{
	class UWBP_PlayerEntry_C*                          Selected_Widget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.PlayerActionIcons_Bind
struct UWBP_AdminPanel_C_PlayerActionIcons_Bind_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.FailedAdminAction
struct UWBP_AdminPanel_C_FailedAdminAction_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.ClearSelection
struct UWBP_AdminPanel_C_ClearSelection_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.PopupRemoveInteraction_Bind
struct UWBP_AdminPanel_C_PopupRemoveInteraction_Bind_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.PopupVis_Bind
struct UWBP_AdminPanel_C_PopupVis_Bind_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.FindPlayerState
struct UWBP_AdminPanel_C_FindPlayerState_Params
{
	struct FString                                     String_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Found_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.GetPavGameState
struct UWBP_AdminPanel_C_GetPavGameState_Params
{
	class APavlovGameState*                            AsPavlov_Game_State;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.UpdatePlayerArray
struct UWBP_AdminPanel_C_UpdatePlayerArray_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__PlayerOptionsButton_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature
struct UWBP_AdminPanel_C_BndEvt__PlayerOptionsButton_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.Show Popup
struct UWBP_AdminPanel_C_Show_Popup_Params
{
	struct FString                                     Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.OnButtonClicked_Event_1
struct UWBP_AdminPanel_C_OnButtonClicked_Event_1_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.OnButtonClicked_Event_2
struct UWBP_AdminPanel_C_OnButtonClicked_Event_2_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__TeleportPlayerButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWBP_AdminPanel_C_BndEvt__TeleportPlayerButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__BanPlayerButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWBP_AdminPanel_C_BndEvt__BanPlayerButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.PerformAdminAction
struct UWBP_AdminPanel_C_PerformAdminAction_Params
{
	struct FString                                     StringId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<E_AdminAction>                         AdminAction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__KillPlayerButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_AdminPanel_C_BndEvt__KillPlayerButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__KickPlayerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_AdminPanel_C_BndEvt__KickPlayerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.PlayerSelected_Event
struct UWBP_AdminPanel_C_PlayerSelected_Event_Params
{
	struct FString                                     SteamId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_PlayerEntry_C*                          PlayerEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.Update Player List
struct UWBP_AdminPanel_C_Update_Player_List_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UWBP_AdminPanel_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.Construct
struct UWBP_AdminPanel_C_Construct_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.BndEvt__ChooseNextMapButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UWBP_AdminPanel_C_BndEvt__ChooseNextMapButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.OpenMenu_Event
struct UWBP_AdminPanel_C_OpenMenu_Event_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.ExecuteUbergraph_WBP_AdminPanel
struct UWBP_AdminPanel_C_ExecuteUbergraph_WBP_AdminPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.OpenMenu__DelegateSignature
struct UWBP_AdminPanel_C_OpenMenu__DelegateSignature_Params
{
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.AdminAction__DelegateSignature
struct UWBP_AdminPanel_C_AdminAction__DelegateSignature_Params
{
	TEnumAsByte<E_AdminAction>                         AdminAction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AdminPanel.WBP_AdminPanel_C.Exit Menu__DelegateSignature
struct UWBP_AdminPanel_C_Exit_Menu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
