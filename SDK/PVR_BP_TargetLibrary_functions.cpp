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

// Function BP_TargetLibrary.BP_TargetLibrary_C.UseTarget?
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameType>    CurrentMGType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MiniGameType>    TargetMGType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TargetLibrary_C::STATIC_UseTarget_(TEnumAsByte<E_MiniGameType> CurrentMGType, TEnumAsByte<E_MiniGameType> TargetMGType, class UObject* __WorldContext, bool* UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetLibrary.BP_TargetLibrary_C.UseTarget?");

	UBP_TargetLibrary_C_UseTarget__Params params;
	params.CurrentMGType = CurrentMGType;
	params.TargetMGType = TargetMGType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseTarget != nullptr)
		*UseTarget = params.UseTarget;
}


// Function BP_TargetLibrary.BP_TargetLibrary_C.EnumToTargetText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameType>    MiniGameType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UBP_TargetLibrary_C::STATIC_EnumToTargetText(TEnumAsByte<E_MiniGameType> MiniGameType, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TargetLibrary.BP_TargetLibrary_C.EnumToTargetText");

	UBP_TargetLibrary_C_EnumToTargetText_Params params;
	params.MiniGameType = MiniGameType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
