// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Grenade_Smoke.Grenade_Smoke_C.OnRep_bSmokeActive
// (BlueprintCallable, BlueprintEvent)

void AGrenade_Smoke_C::OnRep_bSmokeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Smoke.Grenade_Smoke_C.OnRep_bSmokeActive");

	AGrenade_Smoke_C_OnRep_bSmokeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Smoke.Grenade_Smoke_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrenade_Smoke_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Smoke.Grenade_Smoke_C.UserConstructionScript");

	AGrenade_Smoke_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Smoke.Grenade_Smoke_C.StartSmoke
// (BlueprintCallable, BlueprintEvent)

void AGrenade_Smoke_C::StartSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Smoke.Grenade_Smoke_C.StartSmoke");

	AGrenade_Smoke_C_StartSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Smoke.Grenade_Smoke_C.SpawnSingleParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LocalOffset                    (Parm, IsPlainOldData)

void AGrenade_Smoke_C::SpawnSingleParticle(const struct FVector& LocalOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Smoke.Grenade_Smoke_C.SpawnSingleParticle");

	AGrenade_Smoke_C_SpawnSingleParticle_Params params;
	params.LocalOffset = LocalOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Smoke.Grenade_Smoke_C.OnDetonation
// (Event, Public, BlueprintEvent)

void AGrenade_Smoke_C::OnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Smoke.Grenade_Smoke_C.OnDetonation");

	AGrenade_Smoke_C_OnDetonation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Smoke.Grenade_Smoke_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrenade_Smoke_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Smoke.Grenade_Smoke_C.ReceiveBeginPlay");

	AGrenade_Smoke_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Smoke.Grenade_Smoke_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Smoke_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Smoke.Grenade_Smoke_C.ReceiveTick");

	AGrenade_Smoke_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Smoke.Grenade_Smoke_C.ExecuteUbergraph_Grenade_Smoke
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Smoke_C::ExecuteUbergraph_Grenade_Smoke(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Smoke.Grenade_Smoke_C.ExecuteUbergraph_Grenade_Smoke");

	AGrenade_Smoke_C_ExecuteUbergraph_Grenade_Smoke_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
