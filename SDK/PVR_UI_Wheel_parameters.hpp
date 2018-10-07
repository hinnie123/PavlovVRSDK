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

// Function UI_Wheel.UI_Wheel_C.Get_inner_ColorAndOpacity_1
struct UUI_Wheel_C_Get_inner_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UI_Wheel.UI_Wheel_C.Construct
struct UUI_Wheel_C_Construct_Params
{
};

// Function UI_Wheel.UI_Wheel_C.Tick
struct UUI_Wheel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Wheel.UI_Wheel_C.OnWheelUpdate
struct UUI_Wheel_C_OnWheelUpdate_Params
{
};

// Function UI_Wheel.UI_Wheel_C.ExecuteUbergraph_UI_Wheel
struct UUI_Wheel_C_ExecuteUbergraph_UI_Wheel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
