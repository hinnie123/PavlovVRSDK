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

// Function BP_ZAICharacter.BP_ZAICharacter_C.GetMeshAndAnimInstance
struct ABP_ZAICharacter_C_GetMeshAndAnimInstance_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.UserConstructionScript
struct ABP_ZAICharacter_C_UserConstructionScript_Params
{
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.ReceiveTick
struct ABP_ZAICharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.ServerKillAI
struct ABP_ZAICharacter_C_ServerKillAI_Params
{
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.KillThisAI
struct ABP_ZAICharacter_C_KillThisAI_Params
{
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.ExecuteUbergraph_BP_ZAICharacter
struct ABP_ZAICharacter_C_ExecuteUbergraph_BP_ZAICharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
