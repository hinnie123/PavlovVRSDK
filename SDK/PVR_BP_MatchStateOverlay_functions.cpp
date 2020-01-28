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

// Function BP_MatchStateOverlay.BP_MatchStateOverlay_C.OffsetLayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Overlay                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MatchStateOverlay_C::OffsetLayer(const struct FVector& Offset, class USceneComponent* Overlay, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchStateOverlay.BP_MatchStateOverlay_C.OffsetLayer");

	ABP_MatchStateOverlay_C_OffsetLayer_Params params;
	params.Offset = Offset;
	params.Overlay = Overlay;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchStateOverlay.BP_MatchStateOverlay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MatchStateOverlay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchStateOverlay.BP_MatchStateOverlay_C.UserConstructionScript");

	ABP_MatchStateOverlay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
