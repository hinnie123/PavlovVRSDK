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

// Function Grenade_Flash.Grenade_Flash_C.GetFlashEffectiveness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              Flashed_Comp_Trans             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Flash_Origin                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGrenade_Flash_C::GetFlashEffectiveness(const struct FTransform& Flashed_Comp_Trans, const struct FVector& Flash_Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Flash.Grenade_Flash_C.GetFlashEffectiveness");

	AGrenade_Flash_C_GetFlashEffectiveness_Params params;
	params.Flashed_Comp_Trans = Flashed_Comp_Trans;
	params.Flash_Origin = Flash_Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Grenade_Flash.Grenade_Flash_C.DetonateFlash
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGrenade_Flash_C::DetonateFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Flash.Grenade_Flash_C.DetonateFlash");

	AGrenade_Flash_C_DetonateFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrenade_Flash_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Flash.Grenade_Flash_C.UserConstructionScript");

	AGrenade_Flash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.OnPlayerAffectedByFlass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Flash_C::OnPlayerAffectedByFlass(class APavlovPawn* Pawn, float ViewAngle, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Flash.Grenade_Flash_C.OnPlayerAffectedByFlass");

	AGrenade_Flash_C_OnPlayerAffectedByFlass_Params params;
	params.Pawn = Pawn;
	params.ViewAngle = ViewAngle;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrenade_Flash_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Flash.Grenade_Flash_C.ReceiveBeginPlay");

	AGrenade_Flash_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.OnDetonation
// (Event, Public, BlueprintEvent)

void AGrenade_Flash_C::OnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Flash.Grenade_Flash_C.OnDetonation");

	AGrenade_Flash_C_OnDetonation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.OnPlayerFlashed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Effectiveness                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Flash_C::OnPlayerFlashed(class APavlovPawn* Pawn, float Distance, float Effectiveness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Flash.Grenade_Flash_C.OnPlayerFlashed");

	AGrenade_Flash_C_OnPlayerFlashed_Params params;
	params.Pawn = Pawn;
	params.Distance = Distance;
	params.Effectiveness = Effectiveness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.ExecuteUbergraph_Grenade_Flash
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Flash_C::ExecuteUbergraph_Grenade_Flash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Flash.Grenade_Flash_C.ExecuteUbergraph_Grenade_Flash");

	AGrenade_Flash_C_ExecuteUbergraph_Grenade_Flash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
