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

// Function ABP_Taser.ABP_Taser_C.ExecuteUbergraph_ABP_Taser
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Taser_C::ExecuteUbergraph_ABP_Taser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Taser.ABP_Taser_C.ExecuteUbergraph_ABP_Taser");

	UABP_Taser_C_ExecuteUbergraph_ABP_Taser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
