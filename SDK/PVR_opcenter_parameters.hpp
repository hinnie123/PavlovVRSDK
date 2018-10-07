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

// Function opcenter.opcenter_C.OnInventoryUpdate_Event_1
struct Aopcenter_C_OnInventoryUpdate_Event_1_Params
{
};

// Function opcenter.opcenter_C.ReceiveBeginPlay
struct Aopcenter_C_ReceiveBeginPlay_Params
{
};

// Function opcenter.opcenter_C.ReceiveTick
struct Aopcenter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function opcenter.opcenter_C.CheckAndSwapControllers
struct Aopcenter_C_CheckAndSwapControllers_Params
{
};

// Function opcenter.opcenter_C.BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct Aopcenter_C_BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function opcenter.opcenter_C.Setup Menu Checker
struct Aopcenter_C_Setup_Menu_Checker_Params
{
};

// Function opcenter.opcenter_C.CustomEvent_1
struct Aopcenter_C_CustomEvent_1_Params
{
};

// Function opcenter.opcenter_C.CustomEvent_2
struct Aopcenter_C_CustomEvent_2_Params
{
};

// Function opcenter.opcenter_C.ExecuteUbergraph_opcenter
struct Aopcenter_C_ExecuteUbergraph_opcenter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
