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

// Function UI_Lobby.UI_Lobby_C.IsCoopLobby
struct UUI_Lobby_C_IsCoopLobby_Params
{
	bool                                               _TRUE;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.GetLabelFromMap
struct UUI_Lobby_C_GetLabelFromMap_Params
{
	struct FString                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_Lobby.UI_Lobby_C.GetMapFromLabel
struct UUI_Lobby_C_GetMapFromLabel_Params
{
	struct FString                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Map;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function UI_Lobby.UI_Lobby_C.Get_ScaleBox_0_Visibility_1
struct UUI_Lobby_C_Get_ScaleBox_0_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.Get_ReadyStartButton_Visibility_1
struct UUI_Lobby_C_Get_ReadyStartButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.LabelToTeam
struct UUI_Lobby_C_LabelToTeam_Params
{
	struct FString                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.TeamToLabel
struct UUI_Lobby_C_TeamToLabel_Params
{
	int                                                TeamId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function UI_Lobby.UI_Lobby_C.UpdateSettingsEditable
struct UUI_Lobby_C_UpdateSettingsEditable_Params
{
	bool                                               Editable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.GameModeToLabel
struct UUI_Lobby_C_GameModeToLabel_Params
{
	struct FString                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UI_Lobby.UI_Lobby_C.LabelToGameMode
struct UUI_Lobby_C_LabelToGameMode_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     GameMode;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function UI_Lobby.UI_Lobby_C.Construct
struct UUI_Lobby_C_Construct_Params
{
};

// Function UI_Lobby.UI_Lobby_C.UpdateMembers
struct UUI_Lobby_C_UpdateMembers_Params
{
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__UI_ButtonSecondary_21_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
struct UUI_Lobby_C_BndEvt__UI_ButtonSecondary_21_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.OnEnterLobby_Event_1
struct UUI_Lobby_C_OnEnterLobby_Event_1_Params
{
	bool                                               bFailed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.UpdateLobby
struct UUI_Lobby_C_UpdateLobby_Params
{
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__SettingGameMode_K2Node_ComponentBoundEvent_131_OnSelectionChanged__DelegateSignature
struct UUI_Lobby_C_BndEvt__SettingGameMode_K2Node_ComponentBoundEvent_131_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_Lobby.UI_Lobby_C.OnLobbyUpdated_Event_1
struct UUI_Lobby_C_OnLobbyUpdated_Event_1_Params
{
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__SettingTeam_K2Node_ComponentBoundEvent_42_OnSelectionChanged__DelegateSignature
struct UUI_Lobby_C_BndEvt__SettingTeam_K2Node_ComponentBoundEvent_42_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__CheckboxVoiceMute_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
struct UUI_Lobby_C_BndEvt__CheckboxVoiceMute_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__CheckboxReady_K2Node_ComponentBoundEvent_112_OnCheckStateChanged__DelegateSignature
struct UUI_Lobby_C_BndEvt__CheckboxReady_K2Node_ComponentBoundEvent_112_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__ReadyStartButton_K2Node_ComponentBoundEvent_143_OnButtonClicked__DelegateSignature
struct UUI_Lobby_C_BndEvt__ReadyStartButton_K2Node_ComponentBoundEvent_143_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.OnLobbyStateChanged_Event_1
struct UUI_Lobby_C_OnLobbyStateChanged_Event_1_Params
{
	ELobbyState                                        NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.OnLobbyStatusMessage_Event_1
struct UUI_Lobby_C_OnLobbyStatusMessage_Event_1_Params
{
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bError;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__CheckboxFriendsOnly_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature
struct UUI_Lobby_C_BndEvt__CheckboxFriendsOnly_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__SettingServer_K2Node_ComponentBoundEvent_30_OnSelectionChanged__DelegateSignature
struct UUI_Lobby_C_BndEvt__SettingServer_K2Node_ComponentBoundEvent_30_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__cancelButton_K2Node_ComponentBoundEvent_106_OnButtonClicked__DelegateSignature
struct UUI_Lobby_C_BndEvt__cancelButton_K2Node_ComponentBoundEvent_106_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
struct UUI_Lobby_C_BndEvt__MapButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.OnCommit_Event_1
struct UUI_Lobby_C_OnCommit_Event_1_Params
{
	struct FName                                       MapUniqueId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Canceled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.UpdateMapDisplay
struct UUI_Lobby_C_UpdateMapDisplay_Params
{
	struct FName                                       MapId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapLabel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_Lobby.UI_Lobby_C.OnDownloadBegin_Event_1
struct UUI_Lobby_C_OnDownloadBegin_Event_1_Params
{
};

// Function UI_Lobby.UI_Lobby_C.OnDownloadProgress_Event_1
struct UUI_Lobby_C_OnDownloadProgress_Event_1_Params
{
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__CancelDowloadBtn_K2Node_ComponentBoundEvent_467_OnButtonClicked__DelegateSignature
struct UUI_Lobby_C_BndEvt__CancelDowloadBtn_K2Node_ComponentBoundEvent_467_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__CheckBots_K2Node_ComponentBoundEvent_63_OnCheckStateChanged__DelegateSignature
struct UUI_Lobby_C_BndEvt__CheckBots_K2Node_ComponentBoundEvent_63_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__RemovePin_K2Node_ComponentBoundEvent_508_OnButtonClickedEvent__DelegateSignature
struct UUI_Lobby_C_BndEvt__RemovePin_K2Node_ComponentBoundEvent_508_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__SetPinButton_K2Node_ComponentBoundEvent_538_OnButtonClicked__DelegateSignature
struct UUI_Lobby_C_BndEvt__SetPinButton_K2Node_ComponentBoundEvent_538_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__CompetitiveCheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
struct UUI_Lobby_C_BndEvt__CompetitiveCheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature
struct UUI_Lobby_C_BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_300_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__UI_ServerSettings_K2Node_ComponentBoundEvent_317_OnSettingsApply__DelegateSignature
struct UUI_Lobby_C_BndEvt__UI_ServerSettings_K2Node_ComponentBoundEvent_317_OnSettingsApply__DelegateSignature_Params
{
	struct FServerSettings                             Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Lobby.UI_Lobby_C.BndEvt__leaveLobbyButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
struct UUI_Lobby_C_BndEvt__leaveLobbyButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.ExecuteUbergraph_UI_Lobby
struct UUI_Lobby_C_ExecuteUbergraph_UI_Lobby_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Lobby.UI_Lobby_C.OnPinRequest__DelegateSignature
struct UUI_Lobby_C_OnPinRequest__DelegateSignature_Params
{
};

// Function UI_Lobby.UI_Lobby_C.OnMapChanged__DelegateSignature
struct UUI_Lobby_C_OnMapChanged__DelegateSignature_Params
{
	struct FString                                     Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_Lobby.UI_Lobby_C.OnModalEnd__DelegateSignature
struct UUI_Lobby_C_OnModalEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
