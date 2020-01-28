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

// Function BP_BRItemProxy.BP_BRItemProxy_C.UseSoftGrabConstraint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BRItemProxy_C::UseSoftGrabConstraint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.UseSoftGrabConstraint");

	ABP_BRItemProxy_C_UseSoftGrabConstraint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.UpdateMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::UpdateMeshes(const struct FName& Loot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.UpdateMeshes");

	ABP_BRItemProxy_C_UpdateMeshes_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.GrabLoot_Server
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDominant                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::GrabLoot_Server(class APavlovPawn* PavPawn, bool bDominant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.GrabLoot_Server");

	ABP_BRItemProxy_C_GrabLoot_Server_Params params;
	params.PavPawn = PavPawn;
	params.bDominant = bDominant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.SelectionDisable_Client
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::SelectionDisable_Client(class AActor* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.SelectionDisable_Client");

	ABP_BRItemProxy_C_SelectionDisable_Client_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.Haptic+SelectionEnable_Client
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::Haptic_SelectionEnable_Client(class AActor* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.Haptic+SelectionEnable_Client");

	ABP_BRItemProxy_C_Haptic_SelectionEnable_Client_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.UpdateLoot_Server
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActiveLoot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::UpdateLoot_Server(const struct FName& ActiveLoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.UpdateLoot_Server");

	ABP_BRItemProxy_C_UpdateLoot_Server_Params params;
	params.ActiveLoot = ActiveLoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.OnRep_ActiveLoot
// (BlueprintCallable, BlueprintEvent)

void ABP_BRItemProxy_C::OnRep_ActiveLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.OnRep_ActiveLoot");

	ABP_BRItemProxy_C_OnRep_ActiveLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BRItemProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.UserConstructionScript");

	ABP_BRItemProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.UnGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::UnGrabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.UnGrabbed");

	ABP_BRItemProxy_C_UnGrabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BRItemProxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.ReceiveBeginPlay");

	ABP_BRItemProxy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.LootGrabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Dominant_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.LootGrabbed");

	ABP_BRItemProxy_C_LootGrabbed_Params params;
	params.PavPawn = PavPawn;
	params.Dominant_ = Dominant_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.Grabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::Grabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.Grabbed");

	ABP_BRItemProxy_C_Grabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BRItemProxy_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BRItemProxy_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_BRItemProxy.BP_BRItemProxy_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_BRItemProxy_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.SpawnLoot
// (BlueprintCallable, BlueprintEvent)

void ABP_BRItemProxy_C::SpawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.SpawnLoot");

	ABP_BRItemProxy_C_SpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BRItemProxy.BP_BRItemProxy_C.ExecuteUbergraph_BP_BRItemProxy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BRItemProxy_C::ExecuteUbergraph_BP_BRItemProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRItemProxy.BP_BRItemProxy_C.ExecuteUbergraph_BP_BRItemProxy");

	ABP_BRItemProxy_C_ExecuteUbergraph_BP_BRItemProxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
