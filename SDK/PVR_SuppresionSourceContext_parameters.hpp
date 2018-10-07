#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SuppresionSourceContext.SuppresionSourceContext_C.ProvideLocationsSet
struct USuppresionSourceContext_C_ProvideLocationsSet_Params
{
	class UObject**                                    QuerierObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ResultingLocationSet;                                     // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
