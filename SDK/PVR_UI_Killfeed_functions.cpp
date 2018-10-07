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

// Function UI_Killfeed.UI_Killfeed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Killfeed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Killfeed.UI_Killfeed_C.Construct"));

	UUI_Killfeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Killfeed.UI_Killfeed_C.OnKillfeedEntry_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKillfeedEntry          NewEntry                       (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Killfeed_C::OnKillfeedEntry_Event_1(const struct FKillfeedEntry& NewEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Killfeed.UI_Killfeed_C.OnKillfeedEntry_Event_1"));

	UUI_Killfeed_C_OnKillfeedEntry_Event_1_Params params;
	params.NewEntry = NewEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Killfeed.UI_Killfeed_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Killfeed_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Killfeed.UI_Killfeed_C.Tick"));

	UUI_Killfeed_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Killfeed.UI_Killfeed_C.ExecuteUbergraph_UI_Killfeed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Killfeed_C::ExecuteUbergraph_UI_Killfeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Killfeed.UI_Killfeed_C.ExecuteUbergraph_UI_Killfeed"));

	UUI_Killfeed_C_ExecuteUbergraph_UI_Killfeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
