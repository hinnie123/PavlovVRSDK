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

// Function BP_GlassPanel.BP_GlassPanel_C.OnRep_Broken
// (BlueprintCallable, BlueprintEvent)

void ABP_GlassPanel_C::OnRep_Broken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlassPanel.BP_GlassPanel_C.OnRep_Broken");

	ABP_GlassPanel_C_OnRep_Broken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlassPanel.BP_GlassPanel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GlassPanel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlassPanel.BP_GlassPanel_C.UserConstructionScript");

	ABP_GlassPanel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlassPanel.BP_GlassPanel_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_GlassPanel_C::BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlassPanel.BP_GlassPanel_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_GlassPanel_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlassPanel.BP_GlassPanel_C.UpdateState
// (BlueprintCallable, BlueprintEvent)

void ABP_GlassPanel_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlassPanel.BP_GlassPanel_C.UpdateState");

	ABP_GlassPanel_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlassPanel.BP_GlassPanel_C.PlayHitSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GlassPanel_C::PlayHitSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlassPanel.BP_GlassPanel_C.PlayHitSound");

	ABP_GlassPanel_C_PlayHitSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlassPanel.BP_GlassPanel_C.OnShatter
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                Normal                         (Parm, IsPlainOldData)
// struct FVector*                Location                       (Parm, IsPlainOldData)

void ABP_GlassPanel_C::OnShatter(struct FVector* Normal, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlassPanel.BP_GlassPanel_C.OnShatter");

	ABP_GlassPanel_C_OnShatter_Params params;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GlassPanel.BP_GlassPanel_C.ExecuteUbergraph_BP_GlassPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GlassPanel_C::ExecuteUbergraph_BP_GlassPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlassPanel.BP_GlassPanel_C.ExecuteUbergraph_BP_GlassPanel");

	ABP_GlassPanel_C_ExecuteUbergraph_BP_GlassPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
