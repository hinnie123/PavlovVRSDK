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

// Function Suppressor_Base.Suppressor_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASuppressor_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Suppressor_Base.Suppressor_Base_C.UserConstructionScript");

	ASuppressor_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
