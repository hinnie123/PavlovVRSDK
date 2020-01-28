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

// Function UI_WheelSegment_Content.UI_WheelSegment_Content_C.OnUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWheelSegment           Segment                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_WheelSegment_Content_C::OnUpdated(const struct FWheelSegment& Segment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WheelSegment_Content.UI_WheelSegment_Content_C.OnUpdated");

	UUI_WheelSegment_Content_C_OnUpdated_Params params;
	params.Segment = Segment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WheelSegment_Content.UI_WheelSegment_Content_C.ExecuteUbergraph_UI_WheelSegment_Content
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WheelSegment_Content_C::ExecuteUbergraph_UI_WheelSegment_Content(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WheelSegment_Content.UI_WheelSegment_Content_C.ExecuteUbergraph_UI_WheelSegment_Content");

	UUI_WheelSegment_Content_C_ExecuteUbergraph_UI_WheelSegment_Content_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
