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

// Function ModalView_MessageBox.ModalView_MessageBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AModalView_MessageBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalView_MessageBox.ModalView_MessageBox_C.UserConstructionScript");

	AModalView_MessageBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
