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

// Function BP_FlyingHelmet.BP_FlyingHelmet_C.UserConstructionScript
struct ABP_FlyingHelmet_C_UserConstructionScript_Params
{
};

// Function BP_FlyingHelmet.BP_FlyingHelmet_C.ReceiveBeginPlay
struct ABP_FlyingHelmet_C_ReceiveBeginPlay_Params
{
};

// Function BP_FlyingHelmet.BP_FlyingHelmet_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_FlyingHelmet_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_FlyingHelmet.BP_FlyingHelmet_C.ExecuteUbergraph_BP_FlyingHelmet
struct ABP_FlyingHelmet_C_ExecuteUbergraph_BP_FlyingHelmet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
