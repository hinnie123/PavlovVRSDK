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

// Function UI_ServerSettings.UI_ServerSettings_C.GetWeapobFilterEnum
struct UUI_ServerSettings_C_GetWeapobFilterEnum_Params
{
	struct FString                                     StringEnum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EWeaponFilter                                      Enum;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ServerSettings.UI_ServerSettings_C.UpdateSettings
struct UUI_ServerSettings_C_UpdateSettings_Params
{
	struct FServerSettings                             Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_ServerSettings.UI_ServerSettings_C.Construct
struct UUI_ServerSettings_C_Construct_Params
{
};

// Function UI_ServerSettings.UI_ServerSettings_C.BndEvt__applyBtn_K2Node_ComponentBoundEvent_104_OnButtonClicked__DelegateSignature
struct UUI_ServerSettings_C_BndEvt__applyBtn_K2Node_ComponentBoundEvent_104_OnButtonClicked__DelegateSignature_Params
{
};

// Function UI_ServerSettings.UI_ServerSettings_C.ExecuteUbergraph_UI_ServerSettings
struct UUI_ServerSettings_C_ExecuteUbergraph_UI_ServerSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ServerSettings.UI_ServerSettings_C.OnSettingsApply__DelegateSignature
struct UUI_ServerSettings_C_OnSettingsApply__DelegateSignature_Params
{
	struct FServerSettings                             Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
