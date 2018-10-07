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

// Function UI_Home.UI_Home_C.SetRegion
struct UUI_Home_C_SetRegion_Params
{
	EOnlineRegion                                      Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Home.UI_Home_C.Construct
struct UUI_Home_C_Construct_Params
{
};

// Function UI_Home.UI_Home_C.BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
struct UUI_Home_C_BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Home.UI_Home_C.BndEvt__UI_ButtonSecondary_95_K2Node_ComponentBoundEvent_94_OnButtonClicked__DelegateSignature
struct UUI_Home_C_BndEvt__UI_ButtonSecondary_95_K2Node_ComponentBoundEvent_94_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Home.UI_Home_C.BndEvt__CancelQuickMatch_K2Node_ComponentBoundEvent_169_OnButtonClicked__DelegateSignature
struct UUI_Home_C_BndEvt__CancelQuickMatch_K2Node_ComponentBoundEvent_169_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Home.UI_Home_C.QuickMatchStarted
struct UUI_Home_C_QuickMatchStarted_Params
{
};

// Function UI_Home.UI_Home_C.OnQuickMatchCompleted
struct UUI_Home_C_OnQuickMatchCompleted_Params
{
	bool                                               Succeeded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       FailReason;                                               // (Parm)
};

// Function UI_Home.UI_Home_C.BndEvt__QuickMatchPendingOk_K2Node_ComponentBoundEvent_135_OnButtonClicked__DelegateSignature
struct UUI_Home_C_BndEvt__QuickMatchPendingOk_K2Node_ComponentBoundEvent_135_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Home.UI_Home_C.BndEvt__LobbyButton_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature
struct UUI_Home_C_BndEvt__LobbyButton_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Home.UI_Home_C.BndEvt__europeCheckbox_K2Node_ComponentBoundEvent_75_OnCheckStateChanged__DelegateSignature
struct UUI_Home_C_BndEvt__europeCheckbox_K2Node_ComponentBoundEvent_75_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Home.UI_Home_C.BndEvt__americaCheckbox_K2Node_ComponentBoundEvent_82_OnCheckStateChanged__DelegateSignature
struct UUI_Home_C_BndEvt__americaCheckbox_K2Node_ComponentBoundEvent_82_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Home.UI_Home_C.OnLeftLobby_Event_1
struct UUI_Home_C_OnLeftLobby_Event_1_Params
{
	ESteamLobbyChatMemberStateChange                   StateChange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Home.UI_Home_C.BndEvt__asiaCheckbox_K2Node_ComponentBoundEvent_37_OnCheckStateChanged__DelegateSignature
struct UUI_Home_C_BndEvt__asiaCheckbox_K2Node_ComponentBoundEvent_37_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Home.UI_Home_C.BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_64_OnJoinServer__DelegateSignature
struct UUI_Home_C_BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_64_OnJoinServer__DelegateSignature_Params
{
	struct FPavlovServerInfo                           ServerInfo;                                               // (Parm)
};

// Function UI_Home.UI_Home_C.ExecuteUbergraph_UI_Home
struct UUI_Home_C_ExecuteUbergraph_UI_Home_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Home.UI_Home_C.OnJoinServer__DelegateSignature
struct UUI_Home_C_OnJoinServer__DelegateSignature_Params
{
	struct FPavlovServerInfo                           ServerInfo;                                               // (Parm)
};

// Function UI_Home.UI_Home_C.OnCancelQuickMatch__DelegateSignature
struct UUI_Home_C_OnCancelQuickMatch__DelegateSignature_Params
{
};

// Function UI_Home.UI_Home_C.QuickMatch__DelegateSignature
struct UUI_Home_C_QuickMatch__DelegateSignature_Params
{
};

// Function UI_Home.UI_Home_C.OpenSettings__DelegateSignature
struct UUI_Home_C_OpenSettings__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
