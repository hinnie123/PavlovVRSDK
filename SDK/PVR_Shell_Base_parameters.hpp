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

// Function Shell_Base.Shell_Base_C.GetImpulseVector
struct AShell_Base_C_GetImpulseVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shell_Base.Shell_Base_C.SetAsLive
struct AShell_Base_C_SetAsLive_Params
{
};

// Function Shell_Base.Shell_Base_C.UserConstructionScript
struct AShell_Base_C_UserConstructionScript_Params
{
};

// Function Shell_Base.Shell_Base_C.ReceiveBeginPlay
struct AShell_Base_C_ReceiveBeginPlay_Params
{
};

// Function Shell_Base.Shell_Base_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct AShell_Base_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shell_Base.Shell_Base_C.ExecuteUbergraph_Shell_Base
struct AShell_Base_C_ExecuteUbergraph_Shell_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
