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

// Function UI_Stereo_RoundStart.UI_Stereo_RoundStart_C.Get_Counter_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Stereo_RoundStart_C::Get_Counter_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Stereo_RoundStart.UI_Stereo_RoundStart_C.Get_Counter_Text_1"));

	UUI_Stereo_RoundStart_C_Get_Counter_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Stereo_RoundStart.UI_Stereo_RoundStart_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Stereo_RoundStart_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Stereo_RoundStart.UI_Stereo_RoundStart_C.Construct"));

	UUI_Stereo_RoundStart_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Stereo_RoundStart.UI_Stereo_RoundStart_C.ExecuteUbergraph_UI_Stereo_RoundStart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Stereo_RoundStart_C::ExecuteUbergraph_UI_Stereo_RoundStart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Stereo_RoundStart.UI_Stereo_RoundStart_C.ExecuteUbergraph_UI_Stereo_RoundStart"));

	UUI_Stereo_RoundStart_C_ExecuteUbergraph_UI_Stereo_RoundStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
