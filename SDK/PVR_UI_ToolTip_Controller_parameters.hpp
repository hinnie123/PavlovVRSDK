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

// Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.GetNonOculusImages
struct UUI_ToolTip_Controller_C_GetNonOculusImages_Params
{
	TEnumAsByte<EToolTipControllerType>                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.Update
struct UUI_ToolTip_Controller_C_Update_Params
{
};

// Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.Construct
struct UUI_ToolTip_Controller_C_Construct_Params
{
};

// Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.ExecuteUbergraph_UI_ToolTip_Controller
struct UUI_ToolTip_Controller_C_ExecuteUbergraph_UI_ToolTip_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
