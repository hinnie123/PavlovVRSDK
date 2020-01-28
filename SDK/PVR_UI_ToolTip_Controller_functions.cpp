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

// Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.GetNonOculusImages
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EToolTipControllerType> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UUI_ToolTip_Controller_C::GetNonOculusImages(TEnumAsByte<EToolTipControllerType> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.GetNonOculusImages");

	UUI_ToolTip_Controller_C_GetNonOculusImages_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ToolTip_Controller_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.Update");

	UUI_ToolTip_Controller_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ToolTip_Controller_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.Construct");

	UUI_ToolTip_Controller_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.ExecuteUbergraph_UI_ToolTip_Controller
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ToolTip_Controller_C::ExecuteUbergraph_UI_ToolTip_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ToolTip_Controller.UI_ToolTip_Controller_C.ExecuteUbergraph_UI_ToolTip_Controller");

	UUI_ToolTip_Controller_C_ExecuteUbergraph_UI_ToolTip_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
