#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_VideoSetting.UI_VideoSetting_C.Get_SliderWidget_Value_1
struct UUI_VideoSetting_C_Get_SliderWidget_Value_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_VideoSetting.UI_VideoSetting_C.Get_SettingButton_Visibility_1
struct UUI_VideoSetting_C_Get_SettingButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_VideoSetting.UI_VideoSetting_C.Get_SliderWidget_Visibility_1
struct UUI_VideoSetting_C_Get_SliderWidget_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_VideoSetting.UI_VideoSetting_C.SetValue
struct UUI_VideoSetting_C_SetValue_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoSetting.UI_VideoSetting_C.GetValue
struct UUI_VideoSetting_C_GetValue_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoSetting.UI_VideoSetting_C.GetBrush_1
struct UUI_VideoSetting_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_VideoSetting.UI_VideoSetting_C.BndEvt__SettingButton_K2Node_ComponentBoundEvent_0_OnValudChanged__DelegateSignature
struct UUI_VideoSetting_C_BndEvt__SettingButton_K2Node_ComponentBoundEvent_0_OnValudChanged__DelegateSignature_Params
{
};

// Function UI_VideoSetting.UI_VideoSetting_C.BndEvt__SliderWidget_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
struct UUI_VideoSetting_C_BndEvt__SliderWidget_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoSetting.UI_VideoSetting_C.ExecuteUbergraph_UI_VideoSetting
struct UUI_VideoSetting_C_ExecuteUbergraph_UI_VideoSetting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VideoSetting.UI_VideoSetting_C.OnValueChaged__DelegateSignature
struct UUI_VideoSetting_C_OnValueChaged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
