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

// Function ToolTip_Base.ToolTip_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Base.ToolTip_Base_C.UserConstructionScript");

	AToolTip_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
