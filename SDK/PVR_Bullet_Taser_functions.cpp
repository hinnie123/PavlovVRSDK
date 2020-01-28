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

// Function Bullet_Taser.Bullet_Taser_C.TryTasePlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABullet_Taser_C::TryTasePlayer(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bullet_Taser.Bullet_Taser_C.TryTasePlayer");

	ABullet_Taser_C_TryTasePlayer_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bullet_Taser.Bullet_Taser_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABullet_Taser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bullet_Taser.Bullet_Taser_C.UserConstructionScript");

	ABullet_Taser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bullet_Taser.Bullet_Taser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABullet_Taser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bullet_Taser.Bullet_Taser_C.ReceiveBeginPlay");

	ABullet_Taser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bullet_Taser.Bullet_Taser_C.OnImpact
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABullet_Taser_C::OnImpact(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bullet_Taser.Bullet_Taser_C.OnImpact");

	ABullet_Taser_C_OnImpact_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bullet_Taser.Bullet_Taser_C.ExecuteUbergraph_Bullet_Taser
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABullet_Taser_C::ExecuteUbergraph_Bullet_Taser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bullet_Taser.Bullet_Taser_C.ExecuteUbergraph_Bullet_Taser");

	ABullet_Taser_C_ExecuteUbergraph_Bullet_Taser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
