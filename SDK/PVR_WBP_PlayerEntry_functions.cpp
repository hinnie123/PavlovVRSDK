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

// Function WBP_PlayerEntry.WBP_PlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PlayerEntry_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerEntry.WBP_PlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_PlayerEntry_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerEntry.WBP_PlayerEntry_C.Init Entry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_PlayerEntry_C::Init_Entry(const struct FString& SteamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerEntry.WBP_PlayerEntry_C.Init Entry");

	UWBP_PlayerEntry_C_Init_Entry_Params params;
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerEntry.WBP_PlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PlayerEntry_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerEntry.WBP_PlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWBP_PlayerEntry_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerEntry.WBP_PlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PlayerEntry_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerEntry.WBP_PlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWBP_PlayerEntry_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerEntry.WBP_PlayerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerEntry.WBP_PlayerEntry_C.Construct");

	UWBP_PlayerEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerEntry.WBP_PlayerEntry_C.RemoveSelection_Event
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerEntry_C::RemoveSelection_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerEntry.WBP_PlayerEntry_C.RemoveSelection_Event");

	UWBP_PlayerEntry_C_RemoveSelection_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerEntry.WBP_PlayerEntry_C.ExecuteUbergraph_WBP_PlayerEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerEntry_C::ExecuteUbergraph_WBP_PlayerEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerEntry.WBP_PlayerEntry_C.ExecuteUbergraph_WBP_PlayerEntry");

	UWBP_PlayerEntry_C_ExecuteUbergraph_WBP_PlayerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerEntry.WBP_PlayerEntry_C.RemoveSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerEntry_C::RemoveSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerEntry.WBP_PlayerEntry_C.RemoveSelection__DelegateSignature");

	UWBP_PlayerEntry_C_RemoveSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerEntry.WBP_PlayerEntry_C.PlayerSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_PlayerEntry_C*      PlayerEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerEntry_C::PlayerSelected__DelegateSignature(const struct FString& SteamId, const struct FText& Name, class UWBP_PlayerEntry_C* PlayerEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerEntry.WBP_PlayerEntry_C.PlayerSelected__DelegateSignature");

	UWBP_PlayerEntry_C_PlayerSelected__DelegateSignature_Params params;
	params.SteamId = SteamId;
	params.Name = Name;
	params.PlayerEntry = PlayerEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
