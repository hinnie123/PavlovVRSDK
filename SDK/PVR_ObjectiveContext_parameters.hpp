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

// Function ObjectiveContext.ObjectiveContext_C.ProvideSingleLocation
struct UObjectiveContext_C_ProvideSingleLocation_Params
{
	class UObject**                                    QuerierObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultingLocation;                                        // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
