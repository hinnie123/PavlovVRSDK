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

// Function Bullet_AntiTank.Bullet_AntiTank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABullet_AntiTank_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bullet_AntiTank.Bullet_AntiTank_C.UserConstructionScript");

	ABullet_AntiTank_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
