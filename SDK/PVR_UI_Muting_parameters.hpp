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

// Function UI_Muting.UI_Muting_C.Update
struct UUI_Muting_C_Update_Params
{
};

// Function UI_Muting.UI_Muting_C.UpdatePlayers
struct UUI_Muting_C_UpdatePlayers_Params
{
	TArray<class UUI_Moderation_Player_C*>             Players;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APavlovPlayerState*>                  PlayerArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Muting.UI_Muting_C.CreatePlayerWidgets
struct UUI_Muting_C_CreatePlayerWidgets_Params
{
	TArray<class UUI_Moderation_Player_C*>             TargetArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVerticalBox*                                List;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Muting.UI_Muting_C.Construct
struct UUI_Muting_C_Construct_Params
{
};

// Function UI_Muting.UI_Muting_C.BndEvt__UI_ButtonSecondary_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature
struct UUI_Muting_C_BndEvt__UI_ButtonSecondary_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_Muting.UI_Muting_C.OnPlayerWidgetMuteChanged
struct UUI_Muting_C_OnPlayerWidgetMuteChanged_Params
{
	bool                                               Mute;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_Muting.UI_Muting_C.UpdateList
struct UUI_Muting_C_UpdateList_Params
{
};

// Function UI_Muting.UI_Muting_C.ExecuteUbergraph_UI_Muting
struct UUI_Muting_C_ExecuteUbergraph_UI_Muting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Muting.UI_Muting_C.OnExit__DelegateSignature
struct UUI_Muting_C_OnExit__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
