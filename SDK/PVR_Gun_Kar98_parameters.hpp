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

// Function Gun_Kar98.Gun_Kar98_C.UpdateChamber
struct AGun_Kar98_C_UpdateChamber_Params
{
	bool                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Kar98.Gun_Kar98_C.UserConstructionScript
struct AGun_Kar98_C_UserConstructionScript_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
struct AGun_Kar98_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
struct AGun_Kar98_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params
{
	struct FVector                                     Input;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (Parm, IsPlainOldData)
};

// Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature
struct AGun_Kar98_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.ReceiveBeginPlay
struct AGun_Kar98_C_ReceiveBeginPlay_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.OnChamberStateChanged_Event_1
struct AGun_Kar98_C_OnChamberStateChanged_Event_1_Params
{
	int                                                ChamberIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Kar98.Gun_Kar98_C.ExecuteUbergraph_Gun_Kar98
struct AGun_Kar98_C_ExecuteUbergraph_Gun_Kar98_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
