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

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_DamageCauser_Brush_1
struct UUI_KillfeedEntry_C_Get_DamageCauser_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_DamageCauserBox_Visibility_1
struct UUI_KillfeedEntry_C_Get_DamageCauserBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_Headshot_Visibility_1
struct UUI_KillfeedEntry_C_Get_Headshot_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_Skull_Visibility_1
struct UUI_KillfeedEntry_C_Get_Skull_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_VictimLabel_ColorAndOpacity_1
struct UUI_KillfeedEntry_C_Get_VictimLabel_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Get_KillerLabel_ColorAndOpacity_1
struct UUI_KillfeedEntry_C_Get_KillerLabel_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.GetColorAndOpacity_1
struct UUI_KillfeedEntry_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.Tick
struct UUI_KillfeedEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KillfeedEntry.UI_KillfeedEntry_C.ExecuteUbergraph_UI_KillfeedEntry
struct UUI_KillfeedEntry_C_ExecuteUbergraph_UI_KillfeedEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
