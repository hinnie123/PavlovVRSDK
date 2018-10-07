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

// Function Grenade_Base.Grenade_Base_C.UserConstructionScript
struct AGrenade_Base_C_UserConstructionScript_Params
{
};

// Function Grenade_Base.Grenade_Base_C.BndEvt__PinHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
struct AGrenade_Base_C_BndEvt__PinHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params
{
	struct FVector                                     Input;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (Parm, IsPlainOldData)
};

// Function Grenade_Base.Grenade_Base_C.Cycle
struct AGrenade_Base_C_Cycle_Params
{
};

// Function Grenade_Base.Grenade_Base_C.OnDetonation
struct AGrenade_Base_C_OnDetonation_Params
{
};

// Function Grenade_Base.Grenade_Base_C.Physicalize
struct AGrenade_Base_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Grenade_Base.Grenade_Base_C.ExecuteUbergraph_Grenade_Base
struct AGrenade_Base_C_ExecuteUbergraph_Grenade_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
