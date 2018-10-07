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

// Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd
struct APavlov_GameLogic_OnRoundEnd_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin
struct APavlov_GameLogic_OnRoundBegin_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged
struct APavlov_GameLogic_MulticastOnRoundStateChanged_Params
{
	bool                                               bStarting;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType
struct APavlov_GameLogic_GetPavlovGameModeType_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EPavlovGameModeType                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
