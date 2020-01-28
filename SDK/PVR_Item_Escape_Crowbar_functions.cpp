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

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.CheckCrowbarHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Crowbar_C::CheckCrowbarHit(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.CheckCrowbarHit");

	AItem_Escape_Crowbar_C_CheckCrowbarHit_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.TryUseItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayError                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Crowbar_C::TryUseItem(class UObject** Object, bool* PlayError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.TryUseItem");

	AItem_Escape_Crowbar_C_TryUseItem_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayError != nullptr)
		*PlayError = params.PlayError;
}


// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.PlaySwingSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_Crowbar_C::PlaySwingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.PlaySwingSound");

	AItem_Escape_Crowbar_C_PlaySwingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_Escape_Crowbar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.UserConstructionScript");

	AItem_Escape_Crowbar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AItem_Escape_Crowbar_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.ReceiveBeginPlay");

	AItem_Escape_Crowbar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.Use
// (Event, Public, BlueprintEvent)

void AItem_Escape_Crowbar_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.Use");

	AItem_Escape_Crowbar_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.PlayInteractFX_Multi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AItem_Escape_Crowbar_C::PlayInteractFX_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.PlayInteractFX_Multi");

	AItem_Escape_Crowbar_C_PlayInteractFX_Multi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AItem_Escape_Crowbar_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AItem_Escape_Crowbar_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.ExecuteUbergraph_Item_Escape_Crowbar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Escape_Crowbar_C::ExecuteUbergraph_Item_Escape_Crowbar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.ExecuteUbergraph_Item_Escape_Crowbar");

	AItem_Escape_Crowbar_C_ExecuteUbergraph_Item_Escape_Crowbar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
