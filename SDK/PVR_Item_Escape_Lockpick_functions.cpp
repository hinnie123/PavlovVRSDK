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

// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.OpenLockpick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Lockpick_C::OpenLockpick(bool Open_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.OpenLockpick");

	AItem_Escape_Lockpick_C_OpenLockpick_Params params;
	params.Open_ = Open_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.TryGrabLock_Client
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Lockpick_C::TryGrabLock_Client(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.TryGrabLock_Client");

	AItem_Escape_Lockpick_C_TryGrabLock_Client_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Lockpick_Client
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Escape_Lock_C*       EscapeLock                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Lockpick_C::Lockpick_Client(class ABP_Escape_Lock_C* EscapeLock, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Lockpick_Client");

	AItem_Escape_Lockpick_C_Lockpick_Client_Params params;
	params.EscapeLock = EscapeLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.PlayCloseSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_Lockpick_C::PlayCloseSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.PlayCloseSound");

	AItem_Escape_Lockpick_C_PlayCloseSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.PlayOpenSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_Lockpick_C::PlayOpenSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.PlayOpenSound");

	AItem_Escape_Lockpick_C_PlayOpenSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.TryUseItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayError                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Lockpick_C::TryUseItem(class UObject** Object, bool* PlayError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.TryUseItem");

	AItem_Escape_Lockpick_C_TryUseItem_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayError != nullptr)
		*PlayError = params.PlayError;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_Lockpick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.UserConstructionScript");

	AItem_Escape_Lockpick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Lockpick Objective_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Escape_Lock_C*       Escape_Lock                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Lockpick_C::Lockpick_Objective_Server(class ABP_Escape_Lock_C* Escape_Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Lockpick Objective_Server");

	AItem_Escape_Lockpick_C_Lockpick_Objective_Server_Params params;
	params.Escape_Lock = Escape_Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Use
// (Event, Public, BlueprintEvent)

void AItem_Escape_Lockpick_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Use");

	AItem_Escape_Lockpick_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Lockpick_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Used");

	AItem_Escape_Lockpick_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.OnDrop
// (Event, Public, BlueprintEvent)

void AItem_Escape_Lockpick_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.OnDrop");

	AItem_Escape_Lockpick_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Try Lockpick Objective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Lockpick_C::Try_Lockpick_Objective(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.Try Lockpick Objective");

	AItem_Escape_Lockpick_C_Try_Lockpick_Objective_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Lockpick_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.OnPick");

	AItem_Escape_Lockpick_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.ExecuteUbergraph_Item_Escape_Lockpick
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Lockpick_C::ExecuteUbergraph_Item_Escape_Lockpick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Lockpick.Item_Escape_Lockpick_C.ExecuteUbergraph_Item_Escape_Lockpick");

	AItem_Escape_Lockpick_C_ExecuteUbergraph_Item_Escape_Lockpick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
