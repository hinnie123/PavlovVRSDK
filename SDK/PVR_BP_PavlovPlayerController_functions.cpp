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

// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.AdminKillPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPlayerController_C::AdminKillPlayer(class APavlovPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.AdminKillPlayer");

	ABP_PavlovPlayerController_C_AdminKillPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.AdminTeleportPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPlayerController_C::AdminTeleportPlayer(class APavlovPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.AdminTeleportPlayer");

	ABP_PavlovPlayerController_C_AdminTeleportPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.UserConstructionScript");

	ABP_PavlovPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PavlovPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ReceiveBeginPlay");

	ABP_PavlovPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.OnBuyingChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBuying                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPlayerController_C::OnBuyingChanged_Event_1(bool bBuying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.OnBuyingChanged_Event_1");

	ABP_PavlovPlayerController_C_OnBuyingChanged_Event_1_Params params;
	params.bBuying = bBuying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.AdminAction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_AdminAction>     Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPlayerController_C::AdminAction(class APlayerState* PlayerState, TEnumAsByte<E_AdminAction> Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.AdminAction");

	ABP_PavlovPlayerController_C_AdminAction_Params params;
	params.PlayerState = PlayerState;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ExecuteUbergraph_BP_PavlovPlayerController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPlayerController_C::ExecuteUbergraph_BP_PavlovPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ExecuteUbergraph_BP_PavlovPlayerController");

	ABP_PavlovPlayerController_C_ExecuteUbergraph_BP_PavlovPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
