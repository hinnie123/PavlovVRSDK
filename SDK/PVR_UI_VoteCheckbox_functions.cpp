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

// Function UI_VoteCheckbox.UI_VoteCheckbox_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVoteState                     State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VoteCheckbox_C::SetState(EVoteState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VoteCheckbox.UI_VoteCheckbox_C.SetState");

	UUI_VoteCheckbox_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
