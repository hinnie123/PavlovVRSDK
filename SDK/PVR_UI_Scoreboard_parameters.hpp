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

// Function UI_Scoreboard.UI_Scoreboard_C.UpdatePlayers
struct UUI_Scoreboard_C_UpdatePlayers_Params
{
	TArray<class UUI_Scoreboard_Player_C*>             Players;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APavlovPlayerState*>                  PlayerArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Scoreboard.UI_Scoreboard_C.CreatePlayerWidgets
struct UUI_Scoreboard_C_CreatePlayerWidgets_Params
{
	TArray<class UUI_Scoreboard_Player_C*>             TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVerticalBox*                                List;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Scoreboard.UI_Scoreboard_C.Tick
struct UUI_Scoreboard_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Scoreboard.UI_Scoreboard_C.Construct
struct UUI_Scoreboard_C_Construct_Params
{
};

// Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard
struct UUI_Scoreboard_C_ExecuteUbergraph_UI_Scoreboard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
