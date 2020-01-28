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

// Function Item_PickAxe.Item_PickAxe_C.PlaySwingSound
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_PickAxe_C::PlaySwingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.PlaySwingSound");

	AItem_PickAxe_C_PlaySwingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PickAxe.Item_PickAxe_C.UseItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_PickAxe_C::UseItem(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.UseItem");

	AItem_PickAxe_C_UseItem_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PickAxe.Item_PickAxe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_PickAxe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.UserConstructionScript");

	AItem_PickAxe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PickAxe.Item_PickAxe_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_PickAxe_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.Physicalize");

	AItem_PickAxe_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PickAxe.Item_PickAxe_C.Mine_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Mining_C*            Mining                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_PickAxe_C::Mine_Server(class ABP_Mining_C* Mining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.Mine_Server");

	AItem_PickAxe_C_Mine_Server_Params params;
	params.Mining = Mining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PickAxe.Item_PickAxe_C.PlayHit_Multi
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AItem_PickAxe_C::PlayHit_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.PlayHit_Multi");

	AItem_PickAxe_C_PlayHit_Multi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PickAxe.Item_PickAxe_C.Use
// (Event, Public, BlueprintEvent)

void AItem_PickAxe_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.Use");

	AItem_PickAxe_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PickAxe.Item_PickAxe_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_PickAxe_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.Used");

	AItem_PickAxe_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PickAxe.Item_PickAxe_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AItem_PickAxe_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AItem_PickAxe_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Item_PickAxe.Item_PickAxe_C.SwingPickaxe
// (BlueprintCallable, BlueprintEvent)

void AItem_PickAxe_C::SwingPickaxe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.SwingPickaxe");

	AItem_PickAxe_C_SwingPickaxe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PickAxe.Item_PickAxe_C.ExecuteUbergraph_Item_PickAxe
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_PickAxe_C::ExecuteUbergraph_Item_PickAxe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PickAxe.Item_PickAxe_C.ExecuteUbergraph_Item_PickAxe");

	AItem_PickAxe_C_ExecuteUbergraph_Item_PickAxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
