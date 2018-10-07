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

// Function Gun_Shotgun.Gun_Shotgun_C.UnlockPump
struct AGun_Shotgun_C_UnlockPump_Params
{
};

// Function Gun_Shotgun.Gun_Shotgun_C.LockPump
struct AGun_Shotgun_C_LockPump_Params
{
	float                                              LockRatio;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Shotgun.Gun_Shotgun_C.ShouldPumpByTrigger
struct AGun_Shotgun_C_ShouldPumpByTrigger_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Shotgun.Gun_Shotgun_C.ToggleReloadHandle
struct AGun_Shotgun_C_ToggleReloadHandle_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Shotgun.Gun_Shotgun_C.PlayPumpHaptic
struct AGun_Shotgun_C_PlayPumpHaptic_Params
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Shotgun.Gun_Shotgun_C.UserConstructionScript
struct AGun_Shotgun_C_UserConstructionScript_Params
{
};

// Function Gun_Shotgun.Gun_Shotgun_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
struct AGun_Shotgun_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Gun_Shotgun.Gun_Shotgun_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature
struct AGun_Shotgun_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Gun_Shotgun.Gun_Shotgun_C.ReceiveBeginPlay
struct AGun_Shotgun_C_ReceiveBeginPlay_Params
{
};

// Function Gun_Shotgun.Gun_Shotgun_C.ReceiveTick
struct AGun_Shotgun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Shotgun.Gun_Shotgun_C.OnPumpDelta
struct AGun_Shotgun_C_OnPumpDelta_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Shotgun.Gun_Shotgun_C.OnTwoHandGripChanged
struct AGun_Shotgun_C_OnTwoHandGripChanged_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Shotgun.Gun_Shotgun_C.OnActionChanged_Event_1
struct AGun_Shotgun_C_OnActionChanged_Event_1_Params
{
};

// Function Gun_Shotgun.Gun_Shotgun_C.OnOpenAction_Event_1
struct AGun_Shotgun_C_OnOpenAction_Event_1_Params
{
};

// Function Gun_Shotgun.Gun_Shotgun_C.CustomEvent_1
struct AGun_Shotgun_C_CustomEvent_1_Params
{
};

// Function Gun_Shotgun.Gun_Shotgun_C.ExecuteUbergraph_Gun_Shotgun
struct AGun_Shotgun_C_ExecuteUbergraph_Gun_Shotgun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
