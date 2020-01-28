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

// Function MED_ReviveTool.MED_ReviveTool_C.CanUse_Client
struct AMED_ReviveTool_C_CanUse_Client_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MED_ReviveTool.MED_ReviveTool_C.CheckUseCount
struct AMED_ReviveTool_C_CheckUseCount_Params
{
};

// Function MED_ReviveTool.MED_ReviveTool_C.ClearUseTimer
struct AMED_ReviveTool_C_ClearUseTimer_Params
{
};

// Function MED_ReviveTool.MED_ReviveTool_C.GetAnimBP
struct AMED_ReviveTool_C_GetAnimBP_Params
{
	class UABP_Syringe_C*                              ABP_Syringe;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MED_ReviveTool.MED_ReviveTool_C.TryRevive_Server
struct AMED_ReviveTool_C_TryRevive_Server_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MED_ReviveTool.MED_ReviveTool_C.TryRevive_Client
struct AMED_ReviveTool_C_TryRevive_Client_Params
{
};

// Function MED_ReviveTool.MED_ReviveTool_C.UserConstructionScript
struct AMED_ReviveTool_C_UserConstructionScript_Params
{
};

// Function MED_ReviveTool.MED_ReviveTool_C.Use
struct AMED_ReviveTool_C_Use_Params
{
};

// Function MED_ReviveTool.MED_ReviveTool_C.Physicalize
struct AMED_ReviveTool_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_ReviveTool.MED_ReviveTool_C.Revive_Server
struct AMED_ReviveTool_C_Revive_Server_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_ReviveTool.MED_ReviveTool_C.Used
struct AMED_ReviveTool_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_ReviveTool.MED_ReviveTool_C.OnPick
struct AMED_ReviveTool_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_ReviveTool.MED_ReviveTool_C.OnDrop
struct AMED_ReviveTool_C_OnDrop_Params
{
};

// Function MED_ReviveTool.MED_ReviveTool_C.TryUseReviveTool
struct AMED_ReviveTool_C_TryUseReviveTool_Params
{
};

// Function MED_ReviveTool.MED_ReviveTool_C.CheckReviveUse
struct AMED_ReviveTool_C_CheckReviveUse_Params
{
};

// Function MED_ReviveTool.MED_ReviveTool_C.PlayReviveSound_Multi
struct AMED_ReviveTool_C_PlayReviveSound_Multi_Params
{
};

// Function MED_ReviveTool.MED_ReviveTool_C.ExecuteUbergraph_MED_ReviveTool
struct AMED_ReviveTool_C_ExecuteUbergraph_MED_ReviveTool_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
