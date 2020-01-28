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

// Function Gun_Taser.Gun_Taser_C.SetBarrelState
struct AGun_Taser_C_SetBarrelState_Params
{
	bool                                               bOpen;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Taser.Gun_Taser_C.SetAnimTriggerdown
struct AGun_Taser_C_SetAnimTriggerdown_Params
{
	bool                                               TriggerDown;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Taser.Gun_Taser_C.GetAnimInstance
struct AGun_Taser_C_GetAnimInstance_Params
{
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UABP_Taser_C*                                ABPTaser;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Taser.Gun_Taser_C.UserConstructionScript
struct AGun_Taser_C_UserConstructionScript_Params
{
};

// Function Gun_Taser.Gun_Taser_C.ReceiveBeginPlay
struct AGun_Taser_C_ReceiveBeginPlay_Params
{
};

// Function Gun_Taser.Gun_Taser_C.OnMagBoltRelease_Event_1
struct AGun_Taser_C_OnMagBoltRelease_Event_1_Params
{
};

// Function Gun_Taser.Gun_Taser_C.OnChamberStateChanged_Event_1
struct AGun_Taser_C_OnChamberStateChanged_Event_1_Params
{
	int                                                ChamberIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Taser.Gun_Taser_C.Use
struct AGun_Taser_C_Use_Params
{
};

// Function Gun_Taser.Gun_Taser_C.Used
struct AGun_Taser_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Taser.Gun_Taser_C.OnPick
struct AGun_Taser_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Taser.Gun_Taser_C.ExecuteUbergraph_Gun_Taser
struct AGun_Taser_C_ExecuteUbergraph_Gun_Taser_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
