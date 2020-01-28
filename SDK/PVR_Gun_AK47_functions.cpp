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

// Function Gun_AK47.Gun_AK47_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_AK47_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AK47.Gun_AK47_C.UserConstructionScript");

	AGun_AK47_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK47.Gun_AK47_C.OnNotifyEnd_27DD29614B43507E27BE9B93AD44067B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AK47_C::OnNotifyEnd_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AK47.Gun_AK47_C.OnNotifyEnd_27DD29614B43507E27BE9B93AD44067B");

	AGun_AK47_C_OnNotifyEnd_27DD29614B43507E27BE9B93AD44067B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK47.Gun_AK47_C.OnNotifyBegin_27DD29614B43507E27BE9B93AD44067B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AK47_C::OnNotifyBegin_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AK47.Gun_AK47_C.OnNotifyBegin_27DD29614B43507E27BE9B93AD44067B");

	AGun_AK47_C_OnNotifyBegin_27DD29614B43507E27BE9B93AD44067B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK47.Gun_AK47_C.OnInterrupted_27DD29614B43507E27BE9B93AD44067B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AK47_C::OnInterrupted_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AK47.Gun_AK47_C.OnInterrupted_27DD29614B43507E27BE9B93AD44067B");

	AGun_AK47_C_OnInterrupted_27DD29614B43507E27BE9B93AD44067B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK47.Gun_AK47_C.OnBlendOut_27DD29614B43507E27BE9B93AD44067B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AK47_C::OnBlendOut_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AK47.Gun_AK47_C.OnBlendOut_27DD29614B43507E27BE9B93AD44067B");

	AGun_AK47_C_OnBlendOut_27DD29614B43507E27BE9B93AD44067B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK47.Gun_AK47_C.OnCompleted_27DD29614B43507E27BE9B93AD44067B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AK47_C::OnCompleted_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AK47.Gun_AK47_C.OnCompleted_27DD29614B43507E27BE9B93AD44067B");

	AGun_AK47_C_OnCompleted_27DD29614B43507E27BE9B93AD44067B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK47.Gun_AK47_C.Fired
// (Event, Public, BlueprintEvent)

void AGun_AK47_C::Fired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AK47.Gun_AK47_C.Fired");

	AGun_AK47_C_Fired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_AK47.Gun_AK47_C.ExecuteUbergraph_Gun_AK47
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_AK47_C::ExecuteUbergraph_Gun_AK47(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_AK47.Gun_AK47_C.ExecuteUbergraph_Gun_AK47");

	AGun_AK47_C_ExecuteUbergraph_Gun_AK47_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
