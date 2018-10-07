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

// Function BP_GlassPanel.BP_GlassPanel_C.OnRep_Broken
struct ABP_GlassPanel_C_OnRep_Broken_Params
{
};

// Function BP_GlassPanel.BP_GlassPanel_C.UserConstructionScript
struct ABP_GlassPanel_C_UserConstructionScript_Params
{
};

// Function BP_GlassPanel.BP_GlassPanel_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_GlassPanel_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_GlassPanel.BP_GlassPanel_C.UpdateState
struct ABP_GlassPanel_C_UpdateState_Params
{
};

// Function BP_GlassPanel.BP_GlassPanel_C.PlayHitSound
struct ABP_GlassPanel_C_PlayHitSound_Params
{
};

// Function BP_GlassPanel.BP_GlassPanel_C.OnShatter
struct ABP_GlassPanel_C_OnShatter_Params
{
	struct FVector*                                    Normal;                                                   // (Parm, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, IsPlainOldData)
};

// Function BP_GlassPanel.BP_GlassPanel_C.ExecuteUbergraph_BP_GlassPanel
struct ABP_GlassPanel_C_ExecuteUbergraph_BP_GlassPanel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
