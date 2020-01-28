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

// Function Gun_AWP.Gun_AWP_C.SpawnBoltSound
struct AGun_AWP_C_SpawnBoltSound_Params
{
	class USoundBase*                                  SoundCue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AWP.Gun_AWP_C.UserConstructionScript
struct AGun_AWP_C_UserConstructionScript_Params
{
};

// Function Gun_AWP.Gun_AWP_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
struct AGun_AWP_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Gun_AWP.Gun_AWP_C.OnUnderExploitChanged
struct AGun_AWP_C_OnUnderExploitChanged_Params
{
	bool*                                              bUnderExploit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AWP.Gun_AWP_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
struct AGun_AWP_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params
{
	struct FVector                                     Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AWP.Gun_AWP_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature
struct AGun_AWP_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Gun_AWP.Gun_AWP_C.OnDrop
struct AGun_AWP_C_OnDrop_Params
{
};

// Function Gun_AWP.Gun_AWP_C.ReceiveBeginPlay
struct AGun_AWP_C_ReceiveBeginPlay_Params
{
};

// Function Gun_AWP.Gun_AWP_C.OnChamberStateChanged_Event_1
struct AGun_AWP_C_OnChamberStateChanged_Event_1_Params
{
	int                                                ChamberIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AWP.Gun_AWP_C.OnPick
struct AGun_AWP_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_AWP.Gun_AWP_C.ExecuteUbergraph_Gun_AWP
struct AGun_AWP_C_ExecuteUbergraph_Gun_AWP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
