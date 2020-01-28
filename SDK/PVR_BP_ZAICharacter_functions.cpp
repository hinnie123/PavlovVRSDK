// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZAICharacter.BP_ZAICharacter_C.GetMeshAndAnimInstance
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ZAICharacter_C::GetMeshAndAnimInstance(int* Index, class USkeletalMesh** SkeletalMesh, class UClass** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.GetMeshAndAnimInstance");

	ABP_ZAICharacter_C_GetMeshAndAnimInstance_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_ZAICharacter.BP_ZAICharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZAICharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.UserConstructionScript");

	ABP_ZAICharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZAICharacter.BP_ZAICharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZAICharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.ReceiveTick");

	ABP_ZAICharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZAICharacter.BP_ZAICharacter_C.ServerKillAI
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_ZAICharacter_C::ServerKillAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.ServerKillAI");

	ABP_ZAICharacter_C_ServerKillAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZAICharacter.BP_ZAICharacter_C.KillThisAI
// (BlueprintCallable, BlueprintEvent)

void ABP_ZAICharacter_C::KillThisAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.KillThisAI");

	ABP_ZAICharacter_C_KillThisAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZAICharacter.BP_ZAICharacter_C.ExecuteUbergraph_BP_ZAICharacter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZAICharacter_C::ExecuteUbergraph_BP_ZAICharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.ExecuteUbergraph_BP_ZAICharacter");

	ABP_ZAICharacter_C_ExecuteUbergraph_BP_ZAICharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
