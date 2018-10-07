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

// Function BP_MatchStateOverlay.BP_MatchStateOverlay_C.OffsetLayer
struct ABP_MatchStateOverlay_C_OffsetLayer_Params
{
	struct FVector                                     Offset;                                                   // (Parm, IsPlainOldData)
	class USceneComponent*                             Overlay;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchStateOverlay.BP_MatchStateOverlay_C.UserConstructionScript
struct ABP_MatchStateOverlay_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
