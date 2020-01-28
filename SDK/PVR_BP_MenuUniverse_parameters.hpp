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

// Function BP_MenuUniverse.BP_MenuUniverse_C.GetMainUIWidget
struct ABP_MenuUniverse_C_GetMainUIWidget_Params
{
	class UUI_Main_C*                                  UI_Main;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.UserConstructionScript
struct ABP_MenuUniverse_C_UserConstructionScript_Params
{
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.OnViewTargetChangingFrom
struct ABP_MenuUniverse_C_OnViewTargetChangingFrom_Params
{
	class AActor**                                     ViewTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.OnEnableChanged
struct ABP_MenuUniverse_C_OnEnableChanged_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuUniverse.BP_MenuUniverse_C.ExecuteUbergraph_BP_MenuUniverse
struct ABP_MenuUniverse_C_ExecuteUbergraph_BP_MenuUniverse_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
