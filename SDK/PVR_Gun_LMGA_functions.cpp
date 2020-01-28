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

// Function Gun_LMGA.Gun_LMGA_C.OnRep_OverHeated
// (BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::OnRep_OverHeated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.OnRep_OverHeated");

	AGun_LMGA_C_OnRep_OverHeated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.ClearOverheatTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::ClearOverheatTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.ClearOverheatTimer");

	AGun_LMGA_C_ClearOverheatTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.AddHeat
// (Public, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::AddHeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.AddHeat");

	AGun_LMGA_C_AddHeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.OnRep_OverHeating
// (BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::OnRep_OverHeating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.OnRep_OverHeating");

	AGun_LMGA_C_OnRep_OverHeating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.IsMagazineEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Empty                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGun_LMGA_C::IsMagazineEmpty(bool* Empty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.IsMagazineEmpty");

	AGun_LMGA_C_IsMagazineEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Empty != nullptr)
		*Empty = params.Empty;
}


// Function Gun_LMGA.Gun_LMGA_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.NewFunction_1");

	AGun_LMGA_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.UserConstructionScript");

	AGun_LMGA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InputValueDegrees              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_LMGA_C::BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature(float InputValueDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature");

	AGun_LMGA_C_BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params params;
	params.InputValueDegrees = InputValueDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_LMGA_C::BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature");

	AGun_LMGA_C_BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_LMGA_C::BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature");

	AGun_LMGA_C_BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.ServerReportDustCoverState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_LMGA_C::ServerReportDustCoverState(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.ServerReportDustCoverState");

	AGun_LMGA_C_ServerReportDustCoverState_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.OnPostDustCoverStateChange
// (BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::OnPostDustCoverStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.OnPostDustCoverStateChange");

	AGun_LMGA_C_OnPostDustCoverStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.OnDrop
// (Event, Public, BlueprintEvent)

void AGun_LMGA_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.OnDrop");

	AGun_LMGA_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputDelta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_LMGA_C::BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature");

	AGun_LMGA_C_BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_LMGA_C::BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature");

	AGun_LMGA_C_BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature
// (BlueprintEvent)

void AGun_LMGA_C::BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature");

	AGun_LMGA_C_BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_LMGA_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.OnPick");

	AGun_LMGA_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.OnUnload
// (Event, Public, BlueprintEvent)

void AGun_LMGA_C::OnUnload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.OnUnload");

	AGun_LMGA_C_OnUnload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_LMGA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.ReceiveBeginPlay");

	AGun_LMGA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.OnMagazineChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHasMagazine                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_LMGA_C::OnMagazineChanged(bool* bHasMagazine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.OnMagazineChanged");

	AGun_LMGA_C_OnMagazineChanged_Params params;
	params.bHasMagazine = bHasMagazine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_LMGA_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.Physicalize");

	AGun_LMGA_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.Fired
// (Event, Public, BlueprintEvent)

void AGun_LMGA_C::Fired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.Fired");

	AGun_LMGA_C_Fired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_LMGA_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.Used");

	AGun_LMGA_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.CoolOffTimer_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::CoolOffTimer_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.CoolOffTimer_Server");

	AGun_LMGA_C_CoolOffTimer_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.CoolOff
// (BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::CoolOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.CoolOff");

	AGun_LMGA_C_CoolOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.Use
// (Event, Public, BlueprintEvent)

void AGun_LMGA_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.Use");

	AGun_LMGA_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.Add Barrel Heat_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::Add_Barrel_Heat_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.Add Barrel Heat_Server");

	AGun_LMGA_C_Add_Barrel_Heat_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.ClearOverHeatTimer_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::ClearOverHeatTimer_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.ClearOverHeatTimer_Server");

	AGun_LMGA_C_ClearOverHeatTimer_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.PlaySoundFXAttached
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::PlaySoundFXAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.PlaySoundFXAttached");

	AGun_LMGA_C_PlaySoundFXAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.Stop SoundFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::Stop_SoundFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.Stop SoundFX");

	AGun_LMGA_C_Stop_SoundFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.Stop shooting
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::Stop_shooting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.Stop shooting");

	AGun_LMGA_C_Stop_shooting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.AddHeatTimer
// (BlueprintCallable, BlueprintEvent)

void AGun_LMGA_C::AddHeatTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.AddHeatTimer");

	AGun_LMGA_C_AddHeatTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_LMGA.Gun_LMGA_C.ExecuteUbergraph_Gun_LMGA
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_LMGA_C::ExecuteUbergraph_Gun_LMGA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_LMGA.Gun_LMGA_C.ExecuteUbergraph_Gun_LMGA");

	AGun_LMGA_C_ExecuteUbergraph_Gun_LMGA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
