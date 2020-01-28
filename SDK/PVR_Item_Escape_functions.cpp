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

// Function Item_Escape.Item_Escape_C.PlayInteractFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseInteractSocket              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              EmitterTrans                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AItem_Escape_C::PlayInteractFX(bool UseInteractSocket, const struct FTransform& EmitterTrans)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.PlayInteractFX");

	AItem_Escape_C_PlayInteractFX_Params params;
	params.UseInteractSocket = UseInteractSocket;
	params.EmitterTrans = EmitterTrans;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.CheckUseAmount_Server
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_C::CheckUseAmount_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.CheckUseAmount_Server");

	AItem_Escape_C_CheckUseAmount_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.TryUseItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayError                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_C::TryUseItem(class UObject* Object, bool* PlayError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.TryUseItem");

	AItem_Escape_C_TryUseItem_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayError != nullptr)
		*PlayError = params.PlayError;
}


// Function Item_Escape.Item_Escape_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.UserConstructionScript");

	AItem_Escape_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.Physicalize");

	AItem_Escape_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.DestroyObjective_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EscapeObjective_C*   EscapeObjective                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_C::DestroyObjective_Server(class ABP_EscapeObjective_C* EscapeObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.DestroyObjective_Server");

	AItem_Escape_C_DestroyObjective_Server_Params params;
	params.EscapeObjective = EscapeObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.Use
// (Event, Public, BlueprintEvent)

void AItem_Escape_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.Use");

	AItem_Escape_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.Used");

	AItem_Escape_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.OnDrop
// (Event, Public, BlueprintEvent)

void AItem_Escape_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.OnDrop");

	AItem_Escape_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.Play Error Sound
// (BlueprintCallable, BlueprintEvent)

void AItem_Escape_C::Play_Error_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.Play Error Sound");

	AItem_Escape_C_Play_Error_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.OnPick");

	AItem_Escape_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape.Item_Escape_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AItem_Escape_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AItem_Escape_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Item_Escape.Item_Escape_C.ExecuteUbergraph_Item_Escape
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_C::ExecuteUbergraph_Item_Escape(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape.Item_Escape_C.ExecuteUbergraph_Item_Escape");

	AItem_Escape_C_ExecuteUbergraph_Item_Escape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
