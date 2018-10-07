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

// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWheelSegment           SegmentData                    (Parm)

void UUi_Wheel_Segment_C::Update(const struct FWheelSegment& SegmentData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.Update"));

	UUi_Wheel_Segment_C_Update_Params params;
	params.SegmentData = SegmentData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.Get_Background_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUi_Wheel_Segment_C::Get_Background_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.Get_Background_ColorAndOpacity_1"));

	UUi_Wheel_Segment_C_Get_Background_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.SetRadialAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUi_Wheel_Segment_C::SetRadialAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.SetRadialAngle"));

	UUi_Wheel_Segment_C_SetRadialAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUi_Wheel_Segment_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.Tick"));

	UUi_Wheel_Segment_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.ExecuteUbergraph_Ui_Wheel_Segment
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUi_Wheel_Segment_C::ExecuteUbergraph_Ui_Wheel_Segment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.ExecuteUbergraph_Ui_Wheel_Segment"));

	UUi_Wheel_Segment_C_ExecuteUbergraph_Ui_Wheel_Segment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
