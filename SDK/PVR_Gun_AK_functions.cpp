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

// Function Gun_AK.Gun_AK_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_AK_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AK.Gun_AK_C.UserConstructionScript"));

	AGun_AK_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK.Gun_AK_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_AK_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AK.Gun_AK_C.ReceiveBeginPlay"));

	AGun_AK_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK.Gun_AK_C.BndEvt__Skin_K2Node_ComponentBoundEvent_0_OnSkinChangedSignature__DelegateSignature
// (BlueprintEvent)

void AGun_AK_C::BndEvt__Skin_K2Node_ComponentBoundEvent_0_OnSkinChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AK.Gun_AK_C.BndEvt__Skin_K2Node_ComponentBoundEvent_0_OnSkinChangedSignature__DelegateSignature"));

	AGun_AK_C_BndEvt__Skin_K2Node_ComponentBoundEvent_0_OnSkinChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK.Gun_AK_C.ExecuteUbergraph_Gun_AK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGun_AK_C::ExecuteUbergraph_Gun_AK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Gun_AK.Gun_AK_C.ExecuteUbergraph_Gun_AK"));

	AGun_AK_C_ExecuteUbergraph_Gun_AK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
