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

// Function Item_Handcuffs.Item_Handcuffs_C.PlayArrestAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Arrested                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::PlayArrestAnim(bool Arrested)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.PlayArrestAnim");

	AItem_Handcuffs_C_PlayArrestAnim_Params params;
	params.Arrested = Arrested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.SetTriggerDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TriggerDown                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::SetTriggerDown(bool TriggerDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.SetTriggerDown");

	AItem_Handcuffs_C_SetTriggerDown_Params params;
	params.TriggerDown = TriggerDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.PlayHandcuffOpenSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Handcuffs_C::PlayHandcuffOpenSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.PlayHandcuffOpenSound");

	AItem_Handcuffs_C_PlayHandcuffOpenSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.Handcuff
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavlovPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::Handcuff(class ABP_PavlovPawn_C* PavlovPawn, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.Handcuff");

	AItem_Handcuffs_C_Handcuff_Params params;
	params.PavlovPawn = PavlovPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function Item_Handcuffs.Item_Handcuffs_C.TryHandcuff_Client
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::TryHandcuff_Client(class UObject* Object, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.TryHandcuff_Client");

	AItem_Handcuffs_C_TryHandcuff_Client_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function Item_Handcuffs.Item_Handcuffs_C.FindPawnToHandcuff
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FoundPawn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_PavlovPawn_C*        PavPawn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::FindPawnToHandcuff(bool* FoundPawn, class ABP_PavlovPawn_C** PavPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.FindPawnToHandcuff");

	AItem_Handcuffs_C_FindPawnToHandcuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundPawn != nullptr)
		*FoundPawn = params.FoundPawn;
	if (PavPawn != nullptr)
		*PavPawn = params.PavPawn;
}


// Function Item_Handcuffs.Item_Handcuffs_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_Handcuffs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.UserConstructionScript");

	AItem_Handcuffs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.Physicalize");

	AItem_Handcuffs_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.Used");

	AItem_Handcuffs_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.Use
// (Event, Public, BlueprintEvent)

void AItem_Handcuffs_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.Use");

	AItem_Handcuffs_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.OnDrop
// (Event, Public, BlueprintEvent)

void AItem_Handcuffs_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.OnDrop");

	AItem_Handcuffs_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.HandcuffPlayer_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::HandcuffPlayer_Server(class ABP_PavlovPawn_C* PavPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.HandcuffPlayer_Server");

	AItem_Handcuffs_C_HandcuffPlayer_Server_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.PlayHandcuffSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AItem_Handcuffs_C::PlayHandcuffSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.PlayHandcuffSound");

	AItem_Handcuffs_C_PlayHandcuffSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.BndEvt__SK_Handcuffs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AItem_Handcuffs_C::BndEvt__SK_Handcuffs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.BndEvt__SK_Handcuffs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AItem_Handcuffs_C_BndEvt__SK_Handcuffs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.OnPick");

	AItem_Handcuffs_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Handcuffs.Item_Handcuffs_C.ExecuteUbergraph_Item_Handcuffs
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Handcuffs_C::ExecuteUbergraph_Item_Handcuffs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Handcuffs.Item_Handcuffs_C.ExecuteUbergraph_Item_Handcuffs");

	AItem_Handcuffs_C_ExecuteUbergraph_Item_Handcuffs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
