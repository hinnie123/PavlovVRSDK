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

// Function UI_ServerSettingsIcons.UI_ServerSettingsIcons_C.UpdateIcons
struct UUI_ServerSettingsIcons_C_UpdateIcons_Params
{
	struct FServerSettings                             ServerSettings;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_ServerSettingsIcons.UI_ServerSettingsIcons_C.Construct
struct UUI_ServerSettingsIcons_C_Construct_Params
{
};

// Function UI_ServerSettingsIcons.UI_ServerSettingsIcons_C.ExecuteUbergraph_UI_ServerSettingsIcons
struct UUI_ServerSettingsIcons_C_ExecuteUbergraph_UI_ServerSettingsIcons_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
