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

// Function UI_WorkshopMap.UI_WorkshopMap_C.SetDownloadProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorkshopMap_C::SetDownloadProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopMap.UI_WorkshopMap_C.SetDownloadProgress");

	UUI_WorkshopMap_C_SetDownloadProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopMap.UI_WorkshopMap_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_WorkshopMap_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopMap.UI_WorkshopMap_C.OnMouseButtonDown");

	UUI_WorkshopMap_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorkshopMap.UI_WorkshopMap_C.SetOfficial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorkshopMap_C::SetOfficial(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopMap.UI_WorkshopMap_C.SetOfficial");

	UUI_WorkshopMap_C_SetOfficial_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopMap.UI_WorkshopMap_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewActive                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorkshopMap_C::SetActive(bool NewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopMap.UI_WorkshopMap_C.SetActive");

	UUI_WorkshopMap_C_SetActive_Params params;
	params.NewActive = NewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopMap.UI_WorkshopMap_C.ExecuteUbergraph_UI_WorkshopMap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorkshopMap_C::ExecuteUbergraph_UI_WorkshopMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopMap.UI_WorkshopMap_C.ExecuteUbergraph_UI_WorkshopMap");

	UUI_WorkshopMap_C_ExecuteUbergraph_UI_WorkshopMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorkshopMap.UI_WorkshopMap_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_WorkshopMap_C*       WorkshopMap                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorkshopMap_C::OnClicked__DelegateSignature(class UUI_WorkshopMap_C* WorkshopMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkshopMap.UI_WorkshopMap_C.OnClicked__DelegateSignature");

	UUI_WorkshopMap_C_OnClicked__DelegateSignature_Params params;
	params.WorkshopMap = WorkshopMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
