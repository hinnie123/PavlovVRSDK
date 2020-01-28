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

// Function UI_Scoreboard.UI_Scoreboard_C.UpdatePlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_Scoreboard_Player_C*> Players                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class APavlovPlayerState*> PlayerArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Scoreboard_C::UpdatePlayers(TArray<class UUI_Scoreboard_Player_C*>* Players, TArray<class APavlovPlayerState*>* PlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.UpdatePlayers");

	UUI_Scoreboard_C_UpdatePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
	if (PlayerArray != nullptr)
		*PlayerArray = params.PlayerArray;
}


// Function UI_Scoreboard.UI_Scoreboard_C.CreatePlayerWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_Scoreboard_Player_C*> TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UVerticalBox*            List                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Scoreboard_C::CreatePlayerWidgets(TArray<class UUI_Scoreboard_Player_C*> TargetArray, class UVerticalBox* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.CreatePlayerWidgets");

	UUI_Scoreboard_C_CreatePlayerWidgets_Params params;
	params.TargetArray = TargetArray;
	params.List = List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Scoreboard.UI_Scoreboard_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Scoreboard_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.Tick");

	UUI_Scoreboard_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Scoreboard.UI_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Scoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.Construct");

	UUI_Scoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Scoreboard_C::ExecuteUbergraph_UI_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard");

	UUI_Scoreboard_C_ExecuteUbergraph_UI_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
