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

// Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd
// (Event, Public, BlueprintEvent)

void APavlov_GameLogic::OnRoundEnd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd"));

	APavlov_GameLogic_OnRoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin
// (Event, Public, BlueprintEvent)

void APavlov_GameLogic::OnRoundBegin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin"));

	APavlov_GameLogic_OnRoundBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bStarting                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::MulticastOnRoundStateChanged(bool bStarting)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged"));

	APavlov_GameLogic_MulticastOnRoundStateChanged_Params params;
	params.bStarting = bStarting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// EPavlovGameModeType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPavlovGameModeType APavlov_GameLogic::STATIC_GetPavlovGameModeType(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType"));

	APavlov_GameLogic_GetPavlovGameModeType_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
