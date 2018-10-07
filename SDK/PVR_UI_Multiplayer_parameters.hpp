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

// Function UI_Multiplayer.UI_Multiplayer_C.BndEvt__UI_Home_K2Node_ComponentBoundEvent_35_OpenSettings__DelegateSignature
struct UUI_Multiplayer_C_BndEvt__UI_Home_K2Node_ComponentBoundEvent_35_OpenSettings__DelegateSignature_Params
{
};

// Function UI_Multiplayer.UI_Multiplayer_C.BndEvt__UI_Home_K2Node_ComponentBoundEvent_108_QuickMatch__DelegateSignature
struct UUI_Multiplayer_C_BndEvt__UI_Home_K2Node_ComponentBoundEvent_108_QuickMatch__DelegateSignature_Params
{
};

// Function UI_Multiplayer.UI_Multiplayer_C.Construct
struct UUI_Multiplayer_C_Construct_Params
{
};

// Function UI_Multiplayer.UI_Multiplayer_C.OnButtonClicked_Event_1
struct UUI_Multiplayer_C_OnButtonClicked_Event_1_Params
{
};

// Function UI_Multiplayer.UI_Multiplayer_C.OnQuickmatchFailed_Event_1
struct UUI_Multiplayer_C_OnQuickmatchFailed_Event_1_Params
{
	struct FString                                     ErrorMessage;                                             // (Parm, ZeroConstructor)
};

// Function UI_Multiplayer.UI_Multiplayer_C.BndEvt__UI_OnlineSettings_K2Node_ComponentBoundEvent_20_OnModalEnd__DelegateSignature
struct UUI_Multiplayer_C_BndEvt__UI_OnlineSettings_K2Node_ComponentBoundEvent_20_OnModalEnd__DelegateSignature_Params
{
};

// Function UI_Multiplayer.UI_Multiplayer_C.OnMatchmakingStateChanged_Event_1
struct UUI_Multiplayer_C_OnMatchmakingStateChanged_Event_1_Params
{
	EMatchmakingState                                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Multiplayer.UI_Multiplayer_C.BndEvt__UI_Home_K2Node_ComponentBoundEvent_0_OnCancelQuickMatch__DelegateSignature
struct UUI_Multiplayer_C_BndEvt__UI_Home_K2Node_ComponentBoundEvent_0_OnCancelQuickMatch__DelegateSignature_Params
{
};

// Function UI_Multiplayer.UI_Multiplayer_C.OnSwitch
struct UUI_Multiplayer_C_OnSwitch_Params
{
};

// Function UI_Multiplayer.UI_Multiplayer_C.UpdateMatchmakingState
struct UUI_Multiplayer_C_UpdateMatchmakingState_Params
{
	EMatchmakingState                                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Multiplayer.UI_Multiplayer_C.BndEvt__UI_Lobby_K2Node_ComponentBoundEvent_3_OnPinRequest__DelegateSignature
struct UUI_Multiplayer_C_BndEvt__UI_Lobby_K2Node_ComponentBoundEvent_3_OnPinRequest__DelegateSignature_Params
{
};

// Function UI_Multiplayer.UI_Multiplayer_C.CustomEvent_1
struct UUI_Multiplayer_C_CustomEvent_1_Params
{
	struct FString                                     PinString;                                                // (Parm, ZeroConstructor)
};

// Function UI_Multiplayer.UI_Multiplayer_C.BndEvt__UI_Home_K2Node_ComponentBoundEvent_58_OnJoinServer__DelegateSignature
struct UUI_Multiplayer_C_BndEvt__UI_Home_K2Node_ComponentBoundEvent_58_OnJoinServer__DelegateSignature_Params
{
	struct FPavlovServerInfo                           ServerInfo;                                               // (Parm)
};

// Function UI_Multiplayer.UI_Multiplayer_C.OnJoinServerPingConfirm
struct UUI_Multiplayer_C_OnJoinServerPingConfirm_Params
{
	struct FString                                     PinString;                                                // (Parm, ZeroConstructor)
};

// Function UI_Multiplayer.UI_Multiplayer_C.ExecuteUbergraph_UI_Multiplayer
struct UUI_Multiplayer_C_ExecuteUbergraph_UI_Multiplayer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Multiplayer.UI_Multiplayer_C.OnExit__DelegateSignature
struct UUI_Multiplayer_C_OnExit__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
