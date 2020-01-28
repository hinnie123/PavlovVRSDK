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

// Function BP_Escape_Vent.BP_Escape_Vent_C.TryDestroyObjective_Server
struct ABP_Escape_Vent_C_TryDestroyObjective_Server_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroyed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Vent.BP_Escape_Vent_C.CanDestroyObjective
struct ABP_Escape_Vent_C_CanDestroyObjective_Params
{
	class AVRItem**                                    VRItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDestroy;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Vent.BP_Escape_Vent_C.UserConstructionScript
struct ABP_Escape_Vent_C_UserConstructionScript_Params
{
};

// Function BP_Escape_Vent.BP_Escape_Vent_C.SetRepairMeshVis
struct ABP_Escape_Vent_C_SetRepairMeshVis_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Vent.BP_Escape_Vent_C.ExecuteUbergraph_BP_Escape_Vent
struct ABP_Escape_Vent_C_ExecuteUbergraph_BP_Escape_Vent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
