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

// Function Gun_Hunting.Gun_Hunting_C.UpdateChamber
struct AGun_Hunting_C_UpdateChamber_Params
{
	bool                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Hunting.Gun_Hunting_C.SetScopeCapture
struct AGun_Hunting_C_SetScopeCapture_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Hunting.Gun_Hunting_C.UserConstructionScript
struct AGun_Hunting_C_UserConstructionScript_Params
{
};

// Function Gun_Hunting.Gun_Hunting_C.OnPick
struct AGun_Hunting_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Hunting.Gun_Hunting_C.OnDrop
struct AGun_Hunting_C_OnDrop_Params
{
};

// Function Gun_Hunting.Gun_Hunting_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
struct AGun_Hunting_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Gun_Hunting.Gun_Hunting_C.OnUnderExploitChanged
struct AGun_Hunting_C_OnUnderExploitChanged_Params
{
	bool*                                              bUnderExploit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Hunting.Gun_Hunting_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
struct AGun_Hunting_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params
{
	struct FVector                                     Input;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (Parm, IsPlainOldData)
};

// Function Gun_Hunting.Gun_Hunting_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature
struct AGun_Hunting_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Gun_Hunting.Gun_Hunting_C.ReceiveBeginPlay
struct AGun_Hunting_C_ReceiveBeginPlay_Params
{
};

// Function Gun_Hunting.Gun_Hunting_C.OnChamberStateChanged_Event_1
struct AGun_Hunting_C_OnChamberStateChanged_Event_1_Params
{
	int                                                ChamberIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Hunting.Gun_Hunting_C.ExecuteUbergraph_Gun_Hunting
struct AGun_Hunting_C_ExecuteUbergraph_Gun_Hunting_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
