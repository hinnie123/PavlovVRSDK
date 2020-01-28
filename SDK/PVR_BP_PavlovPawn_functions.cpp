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

// Function BP_PavlovPawn.BP_PavlovPawn_C.GetTurnRot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TurnInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::GetTurnRot(float TurnInput, struct FRotator* NewRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.GetTurnRot");

	ABP_PavlovPawn_C_GetTurnRot_Params params;
	params.TurnInput = TurnInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewRot != nullptr)
		*NewRot = params.NewRot;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.SetParachuteRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PavlovPawn_C::SetParachuteRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.SetParachuteRot");

	ABP_PavlovPawn_C_SetParachuteRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetStoppingScalar
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovPawn_C::GetStoppingScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.GetStoppingScalar");

	ABP_PavlovPawn_C_GetStoppingScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.NextLocationParachute
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::NextLocationParachute(struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.NextLocationParachute");

	ABP_PavlovPawn_C_NextLocationParachute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.AddHOT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::AddHOT(float HealAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.AddHOT");

	ABP_PavlovPawn_C_AddHOT_Params params;
	params.HealAmount = HealAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetBombHolster
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* ABP_PavlovPawn_C::GetBombHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.GetBombHolster");

	ABP_PavlovPawn_C_GetBombHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetGrenadeHolsters
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UHolsterComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UHolsterComponent*> ABP_PavlovPawn_C::GetGrenadeHolsters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.GetGrenadeHolsters");

	ABP_PavlovPawn_C_GetGrenadeHolsters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetKnifeHolster
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* ABP_PavlovPawn_C::GetKnifeHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.GetKnifeHolster");

	ABP_PavlovPawn_C_GetKnifeHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetSideWeaponHolster
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* ABP_PavlovPawn_C::GetSideWeaponHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.GetSideWeaponHolster");

	ABP_PavlovPawn_C_GetSideWeaponHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetMainWeaponHolster
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* ABP_PavlovPawn_C::GetMainWeaponHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.GetMainWeaponHolster");

	ABP_PavlovPawn_C_GetMainWeaponHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetEquipmentByName
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EquipmentName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEquipmentDefinition    definition                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PavlovPawn_C::GetEquipmentByName(struct FName* EquipmentName, struct FEquipmentDefinition* definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.GetEquipmentByName");

	ABP_PavlovPawn_C_GetEquipmentByName_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (definition != nullptr)
		*definition = params.definition;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.GetAmmoPocket
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVRPocketComponent*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVRPocketComponent* ABP_PavlovPawn_C::GetAmmoPocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.GetAmmoPocket");

	ABP_PavlovPawn_C_GetAmmoPocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.UserConstructionScript");

	ABP_PavlovPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.OnRadioToggle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bToggled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocalPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanListen                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::OnRadioToggle_Event_1(bool bToggled, bool bLocalPlayer, bool CanListen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.OnRadioToggle_Event_1");

	ABP_PavlovPawn_C_OnRadioToggle_Event_1_Params params;
	params.bToggled = bToggled;
	params.bLocalPlayer = bLocalPlayer;
	params.CanListen = CanListen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.LootedActor_Client
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LootActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Dominant_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::LootedActor_Client(class AActor* LootActor, bool Dominant_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.LootedActor_Client");

	ABP_PavlovPawn_C_LootedActor_Client_Params params;
	params.LootActor = LootActor;
	params.Dominant_ = Dominant_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.LootedActor_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LootActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Dominant_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::LootedActor_Server(class AActor* LootActor, bool Dominant_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.LootedActor_Server");

	ABP_PavlovPawn_C_LootedActor_Server_Params params;
	params.LootActor = LootActor;
	params.Dominant_ = Dominant_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PavlovPawn_C::BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature");

	ABP_PavlovPawn_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.HOTTick
// (BlueprintCallable, BlueprintEvent)

void ABP_PavlovPawn_C::HOTTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.HOTTick");

	ABP_PavlovPawn_C_HOTTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.HOTs Timer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PavlovPawn_C::HOTs_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.HOTs Timer");

	ABP_PavlovPawn_C_HOTs_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.OnVectorInputReceived_Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputDelta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::OnVectorInputReceived_Left(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.OnVectorInputReceived_Left");

	ABP_PavlovPawn_C_OnVectorInputReceived_Left_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.OnVectorInputReceived_Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputDelta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::OnVectorInputReceived_Right(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.OnVectorInputReceived_Right");

	ABP_PavlovPawn_C_OnVectorInputReceived_Right_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.SetupWatch
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWatch**                 WatchComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PavlovPawn_C::SetupWatch(class UWatch** WatchComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.SetupWatch");

	ABP_PavlovPawn_C_SetupWatch_Params params;
	params.WatchComp = WatchComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.OnCameraClipChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bClipping                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::OnCameraClipChanged(bool* bClipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.OnCameraClipChanged");

	ABP_PavlovPawn_C_OnCameraClipChanged_Params params;
	params.bClipping = bClipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.DeployParachute
// (BlueprintCallable, BlueprintEvent)

void ABP_PavlovPawn_C::DeployParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.DeployParachute");

	ABP_PavlovPawn_C_DeployParachute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.OnHandleUngrab_Right
// (BlueprintCallable, BlueprintEvent)

void ABP_PavlovPawn_C::OnHandleUngrab_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.OnHandleUngrab_Right");

	ABP_PavlovPawn_C_OnHandleUngrab_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.OnHandleUngrab_Left
// (BlueprintCallable, BlueprintEvent)

void ABP_PavlovPawn_C::OnHandleUngrab_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.OnHandleUngrab_Left");

	ABP_PavlovPawn_C_OnHandleUngrab_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PavlovPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.ReceiveBeginPlay");

	ABP_PavlovPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPawn.BP_PavlovPawn_C.ExecuteUbergraph_BP_PavlovPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPawn_C::ExecuteUbergraph_BP_PavlovPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPawn.BP_PavlovPawn_C.ExecuteUbergraph_BP_PavlovPawn");

	ABP_PavlovPawn_C_ExecuteUbergraph_BP_PavlovPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
