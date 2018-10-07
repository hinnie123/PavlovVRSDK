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

// Function UI_ServerBrowser.UI_ServerBrowser_C.UpdatePageLabel
struct UUI_ServerBrowser_C_UpdatePageLabel_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.GetMapFromLabel
struct UUI_ServerBrowser_C_GetMapFromLabel_Params
{
	struct FString                                     Label;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Map;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.GetGameModeFromLabel
struct UUI_ServerBrowser_C_GetGameModeFromLabel_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.RefreshList
struct UUI_ServerBrowser_C_RefreshList_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.Construct
struct UUI_ServerBrowser_C_Construct_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.OnServerListUpdated_Event
struct UUI_ServerBrowser_C_OnServerListUpdated_Event_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__UI_ServerFilter_C_0_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature
struct UUI_ServerBrowser_C_BndEvt__UI_ServerFilter_C_0_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (Parm, ZeroConstructor)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__FriendsFiltercombo_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature
struct UUI_ServerBrowser_C_BndEvt__FriendsFiltercombo_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (Parm, ZeroConstructor)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__GameModeFilterCombo_K2Node_ComponentBoundEvent_17_OnSelectionChanged__DelegateSignature
struct UUI_ServerBrowser_C_BndEvt__GameModeFilterCombo_K2Node_ComponentBoundEvent_17_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Selection;                                                // (Parm, ZeroConstructor)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature
struct UUI_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.OnEntryJoinServer
struct UUI_ServerBrowser_C_OnEntryJoinServer_Params
{
	struct FPavlovServerInfo                           Server;                                                   // (Parm)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__PreviousBtn_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
struct UUI_ServerBrowser_C_BndEvt__PreviousBtn_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_346_OnButtonClickedEvent__DelegateSignature
struct UUI_ServerBrowser_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_346_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.ExecuteUbergraph_UI_ServerBrowser
struct UUI_ServerBrowser_C_ExecuteUbergraph_UI_ServerBrowser_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.OnJoinServer__DelegateSignature
struct UUI_ServerBrowser_C_OnJoinServer__DelegateSignature_Params
{
	struct FPavlovServerInfo                           ServerInfo;                                               // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
