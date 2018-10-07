#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PavlovProxy.EPavlovGameModeType
enum class EPavlovGameModeType : uint8_t
{
	Custom                         = 0,
	Deathmatch                     = 1,
	TeamDeathmatch                 = 2,
	SearchAndDestroy               = 3,
	KingOfTheHill                  = 4,
	Siege                          = 5,
	CaptureTheFlag                 = 6,
	EPavlovGameModeType_MAX        = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PavlovProxy.Pavlov_MapCompatibility
// 0x0004
struct FPavlov_MapCompatibility
{
	bool                                               bMultiplayer;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamDeathMatch;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSearchAndDestroy;                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSiege;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
