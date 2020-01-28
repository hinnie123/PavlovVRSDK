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

// Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.Get_Cost_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_BuyMenu_Segment_Content_C::Get_Cost_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.Get_Cost_ColorAndOpacity_1");

	UUI_BuyMenu_Segment_Content_C_Get_Cost_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.Get_Cost_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_BuyMenu_Segment_Content_C::Get_Cost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.Get_Cost_Text_1");

	UUI_BuyMenu_Segment_Content_C_Get_Cost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.OnUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWheelSegment*          Segment                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_BuyMenu_Segment_Content_C::OnUpdated(struct FWheelSegment* Segment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.OnUpdated");

	UUI_BuyMenu_Segment_Content_C_OnUpdated_Params params;
	params.Segment = Segment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.ExecuteUbergraph_UI_BuyMenu_Segment_Content
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BuyMenu_Segment_Content_C::ExecuteUbergraph_UI_BuyMenu_Segment_Content(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuyMenu_Segment_Content.UI_BuyMenu_Segment_Content_C.ExecuteUbergraph_UI_BuyMenu_Segment_Content");

	UUI_BuyMenu_Segment_Content_C_ExecuteUbergraph_UI_BuyMenu_Segment_Content_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
