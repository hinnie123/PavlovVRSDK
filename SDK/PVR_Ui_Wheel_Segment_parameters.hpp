#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.Update
struct UUi_Wheel_Segment_C_Update_Params
{
	struct FWheelSegment                               SegmentData;                                              // (Parm)
};

// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.Get_Background_ColorAndOpacity_1
struct UUi_Wheel_Segment_C_Get_Background_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.SetRadialAngle
struct UUi_Wheel_Segment_C_SetRadialAngle_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.Tick
struct UUi_Wheel_Segment_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ui_Wheel_Segment.Ui_Wheel_Segment_C.ExecuteUbergraph_Ui_Wheel_Segment
struct UUi_Wheel_Segment_C_ExecuteUbergraph_Ui_Wheel_Segment_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
