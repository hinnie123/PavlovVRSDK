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

// Function BP_Wheel.BP_Wheel_C.DoesPickupSupportsAttachments
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   EquipmentName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SupportsAttaments              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::DoesPickupSupportsAttachments(const struct FName& EquipmentName, bool* SupportsAttaments)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.DoesPickupSupportsAttachments");

	ABP_Wheel_C_DoesPickupSupportsAttachments_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SupportsAttaments != nullptr)
		*SupportsAttaments = params.SupportsAttaments;
}


// Function BP_Wheel.BP_Wheel_C.DoesEquipmentSupportsAttachments
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   EquipmentName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SupportsAttaments              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::DoesEquipmentSupportsAttachments(const struct FName& EquipmentName, bool* SupportsAttaments)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.DoesEquipmentSupportsAttachments");

	ABP_Wheel_C_DoesEquipmentSupportsAttachments_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SupportsAttaments != nullptr)
		*SupportsAttaments = params.SupportsAttaments;
}


// Function BP_Wheel.BP_Wheel_C.EnqueDelayedUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Wheel_C::EnqueDelayedUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.EnqueDelayedUpdate");

	ABP_Wheel_C_EnqueDelayedUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.GetAttachmentList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FWheelSegment>   Segments                       (Parm, OutParm, ZeroConstructor)

void ABP_Wheel_C::GetAttachmentList(TArray<struct FWheelSegment>* Segments)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.GetAttachmentList");

	ABP_Wheel_C_GetAttachmentList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Segments != nullptr)
		*Segments = params.Segments;
}


// Function BP_Wheel.BP_Wheel_C.EnableMenuFromGhost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVRPawn*                 self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AVRPawn*                 self3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::EnableMenuFromGhost(class AVRPawn* self2, class AVRPawn* self3)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.EnableMenuFromGhost");

	ABP_Wheel_C_EnableMenuFromGhost_Params params;
	params.self2 = self2;
	params.self3 = self3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.HandleTkCommit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWheelSegment           WheelSegment                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FName                   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::HandleTkCommit(const struct FWheelSegment& WheelSegment, const struct FName& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.HandleTkCommit");

	ABP_Wheel_C_HandleTkCommit_Params params;
	params.WheelSegment = WheelSegment;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.SwitchToTKMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Wheel_C::SwitchToTKMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.SwitchToTKMenu");

	ABP_Wheel_C_SwitchToTKMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.SwitchToRootMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Wheel_C::SwitchToRootMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.SwitchToRootMenu");

	ABP_Wheel_C_SwitchToRootMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.CommitAndClose
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Wheel_C::CommitAndClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.CommitAndClose");

	ABP_Wheel_C_CommitAndClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.HandleBuyCommit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWheelSegment           WheelSegment                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Wheel_C::HandleBuyCommit(int A, const struct FWheelSegment& WheelSegment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.HandleBuyCommit");

	ABP_Wheel_C_HandleBuyCommit_Params params;
	params.A = A;
	params.WheelSegment = WheelSegment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.SetCenterLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   CenterLabel                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Wheel_C::SetCenterLabel(const struct FText& CenterLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.SetCenterLabel");

	ABP_Wheel_C_SetCenterLabel_Params params;
	params.CenterLabel = CenterLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.GetBuySegment List
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBuyMenuMode>      Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FWheelSegment>   Segments                       (Parm, OutParm, ZeroConstructor)

void ABP_Wheel_C::GetBuySegment_List(TEnumAsByte<EBuyMenuMode> Index, TArray<struct FWheelSegment>* Segments)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.GetBuySegment List");

	ABP_Wheel_C_GetBuySegment_List_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Segments != nullptr)
		*Segments = params.Segments;
}


// Function BP_Wheel.BP_Wheel_C.SwitchToBuyMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Wheel_C::SwitchToBuyMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.SwitchToBuyMenu");

	ABP_Wheel_C_SwitchToBuyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Wheel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.UserConstructionScript");

	ABP_Wheel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.OnCommit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWheelSegment*          Segment                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Wheel_C::OnCommit(int* Selection, struct FWheelSegment* Segment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.OnCommit");

	ABP_Wheel_C_OnCommit_Params params;
	params.Selection = Selection;
	params.Segment = Segment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.OnEnabled
// (Event, Public, BlueprintEvent)

void ABP_Wheel_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.OnEnabled");

	ABP_Wheel_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.UpdateBuyMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_Wheel_C::UpdateBuyMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.UpdateBuyMenu");

	ABP_Wheel_C_UpdateBuyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Wheel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.ReceiveBeginPlay");

	ABP_Wheel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.OnBuyingChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBuying                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::OnBuyingChanged_Event_1(bool bBuying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.OnBuyingChanged_Event_1");

	ABP_Wheel_C_OnBuyingChanged_Event_1_Params params;
	params.bBuying = bBuying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Wheel_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.CustomEvent_1");

	ABP_Wheel_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::ExecuteUbergraph_BP_Wheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel");

	ABP_Wheel_C_ExecuteUbergraph_BP_Wheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
