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

// Function ABP_MiniGameController_New.ABP_MiniGameController_New_C.ExecuteUbergraph_ABP_MiniGameController_New
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MiniGameController_New_C::ExecuteUbergraph_ABP_MiniGameController_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MiniGameController_New.ABP_MiniGameController_New_C.ExecuteUbergraph_ABP_MiniGameController_New");

	UABP_MiniGameController_New_C_ExecuteUbergraph_ABP_MiniGameController_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
