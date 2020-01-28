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

// Function MED_Painkillers.MED_Painkillers_C.ResetPainkillers
struct AMED_Painkillers_C_ResetPainkillers_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.UsePainkiller
struct AMED_Painkillers_C_UsePainkiller_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.ClearUnusedPills
struct AMED_Painkillers_C_ClearUnusedPills_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.GetPillSpawnLoc
struct AMED_Painkillers_C_GetPillSpawnLoc_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MED_Painkillers.MED_Painkillers_C.TryEatPill
struct AMED_Painkillers_C_TryEatPill_Params
{
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MED_Painkillers.MED_Painkillers_C.OnRep_#ofPills
struct AMED_Painkillers_C_OnRep__ofPills_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.GetZRot
struct AMED_Painkillers_C_GetZRot_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MED_Painkillers.MED_Painkillers_C.UserConstructionScript
struct AMED_Painkillers_C_UserConstructionScript_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.Spawn Pill
struct AMED_Painkillers_C_Spawn_Pill_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_Painkillers.MED_Painkillers_C.Play Sound FX
struct AMED_Painkillers_C_Play_Sound_FX_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_Painkillers.MED_Painkillers_C.Consume Pill
struct AMED_Painkillers_C_Consume_Pill_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.Use
struct AMED_Painkillers_C_Use_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.UsePainkillerLoop
struct AMED_Painkillers_C_UsePainkillerLoop_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.TryUseTimer
struct AMED_Painkillers_C_TryUseTimer_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.Used
struct AMED_Painkillers_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_Painkillers.MED_Painkillers_C.CloseLid
struct AMED_Painkillers_C_CloseLid_Params
{
	bool                                               Open_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_Painkillers.MED_Painkillers_C.OnDrop
struct AMED_Painkillers_C_OnDrop_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.Physicalize
struct AMED_Painkillers_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_Painkillers.MED_Painkillers_C.ReceiveBeginPlay
struct AMED_Painkillers_C_ReceiveBeginPlay_Params
{
};

// Function MED_Painkillers.MED_Painkillers_C.OnPick
struct AMED_Painkillers_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MED_Painkillers.MED_Painkillers_C.ExecuteUbergraph_MED_Painkillers
struct AMED_Painkillers_C_ExecuteUbergraph_MED_Painkillers_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
