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

// Function Grenade_Flash.Grenade_Flash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrenade_Flash_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Grenade_Flash.Grenade_Flash_C.UserConstructionScript"));

	AGrenade_Flash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.OnDetonation
// (Event, Public, BlueprintEvent)

void AGrenade_Flash_C::OnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Grenade_Flash.Grenade_Flash_C.OnDetonation"));

	AGrenade_Flash_C_OnDetonation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrenade_Flash_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Grenade_Flash.Grenade_Flash_C.ReceiveBeginPlay"));

	AGrenade_Flash_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.OnPlayerAffectedByFlass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Flash_C::OnPlayerAffectedByFlass(class APavlovPawn* Pawn, float ViewAngle, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Grenade_Flash.Grenade_Flash_C.OnPlayerAffectedByFlass"));

	AGrenade_Flash_C_OnPlayerAffectedByFlass_Params params;
	params.Pawn = Pawn;
	params.ViewAngle = ViewAngle;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Flash.Grenade_Flash_C.ExecuteUbergraph_Grenade_Flash
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Flash_C::ExecuteUbergraph_Grenade_Flash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Grenade_Flash.Grenade_Flash_C.ExecuteUbergraph_Grenade_Flash"));

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
