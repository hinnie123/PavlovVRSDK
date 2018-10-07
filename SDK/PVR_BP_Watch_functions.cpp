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

// Function BP_Watch.BP_Watch_C.OnKillConfirmationPush
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState**     Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Watch_C::OnKillConfirmationPush(class APavlovPlayerState** Victim)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Watch.BP_Watch_C.OnKillConfirmationPush"));

	UBP_Watch_C_OnKillConfirmationPush_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Watch.BP_Watch_C.ExecuteUbergraph_BP_Watch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Watch_C::ExecuteUbergraph_BP_Watch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Watch.BP_Watch_C.ExecuteUbergraph_BP_Watch"));

	UBP_Watch_C_ExecuteUbergraph_BP_Watch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
