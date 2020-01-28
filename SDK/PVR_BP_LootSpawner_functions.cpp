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

// Function BP_LootSpawner.BP_LootSpawner_C.UseSoftGrabConstraint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LootSpawner_C::UseSoftGrabConstraint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.UseSoftGrabConstraint");

	ABP_LootSpawner_C_UseSoftGrabConstraint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LootSpawner.BP_LootSpawner_C.GetRandomLoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_LootSpawner_C::GetRandomLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.GetRandomLoot");

	ABP_LootSpawner_C_GetRandomLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LootSpawner.BP_LootSpawner_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         In_SpawnableItems              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          In_MinSpawnTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          In_MaxSpawnTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            In_SpawnType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           In_SpawnWithoutAttachments     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::Init(float In_MinSpawnTime, float In_MaxSpawnTime, int In_SpawnType, bool In_SpawnWithoutAttachments, TArray<struct FString>* In_SpawnableItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.Init");

	ABP_LootSpawner_C_Init_Params params;
	params.In_MinSpawnTime = In_MinSpawnTime;
	params.In_MaxSpawnTime = In_MaxSpawnTime;
	params.In_SpawnType = In_SpawnType;
	params.In_SpawnWithoutAttachments = In_SpawnWithoutAttachments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In_SpawnableItems != nullptr)
		*In_SpawnableItems = params.In_SpawnableItems;
}


// Function BP_LootSpawner.BP_LootSpawner_C.CanUseAttachment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::CanUseAttachment(class APavlovPawn* PavPawn, bool* CanUse_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.CanUseAttachment");

	ABP_LootSpawner_C_CanUseAttachment_Params params;
	params.PavPawn = PavPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse_ != nullptr)
		*CanUse_ = params.CanUse_;
}


// Function BP_LootSpawner.BP_LootSpawner_C.GetAttachmentSocket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  vr_item                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGun_Base_C*             gun_base                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Picatinny_Lenth                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::GetAttachmentSocket(class UClass* vr_item, class AGun_Base_C* gun_base, struct FName* SocketName, int* Type, float* Picatinny_Lenth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.GetAttachmentSocket");

	ABP_LootSpawner_C_GetAttachmentSocket_Params params;
	params.vr_item = vr_item;
	params.gun_base = gun_base;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketName != nullptr)
		*SocketName = params.SocketName;
	if (Type != nullptr)
		*Type = params.Type;
	if (Picatinny_Lenth != nullptr)
		*Picatinny_Lenth = params.Picatinny_Lenth;
}


// Function BP_LootSpawner.BP_LootSpawner_C.EquipLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Dominant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::EquipLoot(class APavlovPawn* PavPawn, bool Dominant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.EquipLoot");

	ABP_LootSpawner_C_EquipLoot_Params params;
	params.PavPawn = PavPawn;
	params.Dominant = Dominant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.ClampExtent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Extents                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Clamped_Extent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::ClampExtent(const struct FVector& Extents, struct FVector* Clamped_Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.ClampExtent");

	ABP_LootSpawner_C_ClampExtent_Params params;
	params.Extents = Extents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Clamped_Extent != nullptr)
		*Clamped_Extent = params.Clamped_Extent;
}


// Function BP_LootSpawner.BP_LootSpawner_C.SetMeshFromLootTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawner_C::SetMeshFromLootTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.SetMeshFromLootTable");

	ABP_LootSpawner_C_SetMeshFromLootTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.UserConstructionScript");

	ABP_LootSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.UnGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::UnGrabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.UnGrabbed");

	ABP_LootSpawner_C_UnGrabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LootSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.ReceiveBeginPlay");

	ABP_LootSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.Grabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::Grabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.Grabbed");

	ABP_LootSpawner_C_Grabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.Weapon Taken
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawner_C::Weapon_Taken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.Weapon Taken");

	ABP_LootSpawner_C_Weapon_Taken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.InitSpawner
// (Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         SpawnableItems                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          MinTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnerType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnWithoutAttachments        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::InitSpawner(float MinTime, float MaxTime, int SpawnerType, bool SpawnWithoutAttachments, TArray<struct FString>* SpawnableItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.InitSpawner");

	ABP_LootSpawner_C_InitSpawner_Params params;
	params.MinTime = MinTime;
	params.MaxTime = MaxTime;
	params.SpawnerType = SpawnerType;
	params.SpawnWithoutAttachments = SpawnWithoutAttachments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnableItems != nullptr)
		*SpawnableItems = params.SpawnableItems;
}


// Function BP_LootSpawner.BP_LootSpawner_C.SelectNewItem
// (BlueprintCallable, BlueprintEvent)

void ABP_LootSpawner_C::SelectNewItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.SelectNewItem");

	ABP_LootSpawner_C_SelectNewItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.LootGrabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Dominant_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.LootGrabbed");

	ABP_LootSpawner_C_LootGrabbed_Params params;
	params.PavPawn = PavPawn;
	params.Dominant_ = Dominant_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.BndEvt__GrabVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_LootSpawner_C::BndEvt__GrabVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.BndEvt__GrabVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_LootSpawner_C_BndEvt__GrabVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_LootSpawner.BP_LootSpawner_C.RespawnOnRoundRestart
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawner_C::RespawnOnRoundRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.RespawnOnRoundRestart");

	ABP_LootSpawner_C_RespawnOnRoundRestart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.BndEvt__GrabVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::BndEvt__GrabVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.BndEvt__GrabVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_LootSpawner_C_BndEvt__GrabVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.Reset Always Active DoOnce
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_LootSpawner_C::Reset_Always_Active_DoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.Reset Always Active DoOnce");

	ABP_LootSpawner_C_Reset_Always_Active_DoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.OnLootChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char*                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_LootSpawner_C::OnLootChanged(unsigned char* Index, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.OnLootChanged");

	ABP_LootSpawner_C_OnLootChanged_Params params;
	params.Index = Index;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.Begin Play Loot
// (BlueprintCallable, BlueprintEvent)

void ABP_LootSpawner_C::Begin_Play_Loot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.Begin Play Loot");

	ABP_LootSpawner_C_Begin_Play_Loot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootSpawner.BP_LootSpawner_C.ExecuteUbergraph_BP_LootSpawner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootSpawner_C::ExecuteUbergraph_BP_LootSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawner.BP_LootSpawner_C.ExecuteUbergraph_BP_LootSpawner");

	ABP_LootSpawner_C_ExecuteUbergraph_BP_LootSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
