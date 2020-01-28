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

// Function CMP_Revive.CMP_Revive_C.Revive_Server
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CheckTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCMP_Revive_C::Revive_Server(bool CheckTeam, int TeamId, const struct FTransform& Transform, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_Revive.CMP_Revive_C.Revive_Server");

	UCMP_Revive_C_Revive_Server_Params params;
	params.CheckTeam = CheckTeam;
	params.TeamId = TeamId;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function CMP_Revive.CMP_Revive_C.CanRevive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CheckTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Revive                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCMP_Revive_C::CanRevive(bool CheckTeam, int TeamId, bool* Revive)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_Revive.CMP_Revive_C.CanRevive");

	UCMP_Revive_C_CanRevive_Params params;
	params.CheckTeam = CheckTeam;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Revive != nullptr)
		*Revive = params.Revive;
}


// Function CMP_Revive.CMP_Revive_C.InitReviveCMP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             ReviveController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCMP_Revive_C::InitReviveCMP(class AController* ReviveController)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_Revive.CMP_Revive_C.InitReviveCMP");

	UCMP_Revive_C_InitReviveCMP_Params params;
	params.ReviveController = ReviveController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
