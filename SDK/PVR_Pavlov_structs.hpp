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

// Enum Pavlov.EMatchmakingState
enum class EMatchmakingState : uint8_t
{
	Standby                        = 0,
	Searching                      = 1,
	Lobby                          = 2,
	Connecting                     = 3,
	EMatchmakingState_MAX          = 4
};


// Enum Pavlov.ELobbyState
enum class ELobbyState : uint8_t
{
	Standby                        = 0,
	FindingGameServer              = 1,
	Playing                        = 2,
	ELobbyState_MAX                = 3
};


// Enum Pavlov.EWorkshopVoteType
enum class EWorkshopVoteType : uint8_t
{
	Up                             = 0,
	Down                           = 1,
	Skipped                        = 2,
	EWorkshopVoteType_MAX          = 3
};


// Enum Pavlov.EBombState
enum class EBombState : uint8_t
{
	StandBy                        = 0,
	Armed                          = 1,
	Planted                        = 2,
	Detonating                     = 3,
	Detonated                      = 4,
	Defused                        = 5,
	EBombState_MAX                 = 6
};


// Enum Pavlov.EGrenadeState
enum class EGrenadeState : uint8_t
{
	SafeWithPin                    = 0,
	Safe                           = 1,
	Cooking                        = 2,
	Detonated                      = 3,
	EGrenadeState_MAX              = 4
};


// Enum Pavlov.EParachuteState
enum class EParachuteState : uint8_t
{
	Packed                         = 0,
	Deploying                      = 1,
	Deployed                       = 2,
	Ditched                        = 3,
	EParachuteState_MAX            = 4
};


// Enum Pavlov.EGestureType
enum class EGestureType : uint8_t
{
	AngularPitch                   = 0,
	AngularYaw                     = 1,
	AngularRoll                    = 2,
	AngularVelocityPitch           = 3,
	AngularVelocityYaw             = 4,
	AngularVelocityRoll            = 5,
	LinearVelocityX                = 6,
	LinearVelocityY                = 7,
	LinearVelocityZ                = 8,
	EGestureType_MAX               = 9
};


// Enum Pavlov.EPlayerEffectState
enum class EPlayerEffectState : uint8_t
{
	Normal                         = 0,
	Flashed                        = 1,
	Supressed                      = 2,
	Ghost                          = 3,
	EPlayerEffectState_MAX         = 4
};


// Enum Pavlov.ETwoHandStockState
enum class ETwoHandStockState : uint8_t
{
	Unstocked                      = 0,
	Stocking                       = 1,
	Stocked                        = 2,
	Destocking                     = 3,
	ETwoHandStockState_MAX         = 4
};


// Enum Pavlov.EAIEngageState
enum class EAIEngageState : uint8_t
{
	Reacting                       = 0,
	Aiming                         = 1,
	Shooting                       = 2,
	Scanning                       = 3,
	EAIEngageState_MAX             = 4
};


// Enum Pavlov.ECustomAction
enum class ECustomAction : uint8_t
{
	None                           = 0,
	RotationReset                  = 1,
	RadioToggle                    = 2,
	MagBoltRelease                 = 3,
	ECustomAction_MAX              = 4
};


// Enum Pavlov.EGripMode
enum class EGripMode : uint8_t
{
	Click                          = 0,
	Hold                           = 1,
	EGripMode_MAX                  = 2
};


// Enum Pavlov.ELocomotionMode
enum class ELocomotionMode : uint8_t
{
	OutOfBody                      = 0,
	StandingOnly                   = 1,
	RoomScale                      = 2,
	ELocomotionMode_MAX            = 3
};


// Enum Pavlov.EOnlineRegion
enum class EOnlineRegion : uint8_t
{
	America                        = 0,
	Europe                         = 1,
	AsiaPacific                    = 2,
	EOnlineRegion_MAX              = 3
};


// Enum Pavlov.EMatchType
enum class EMatchType : uint8_t
{
	Normal                         = 0,
	NormalWithBots                 = 1,
	Coop                           = 2,
	EMatchType_MAX                 = 3
};


// Enum Pavlov.EWeaponFilter
enum class EWeaponFilter : uint8_t
{
	None                           = 0,
	RiflesOnly                     = 1,
	HandGunsOnly                   = 2,
	KnivesOnly                     = 3,
	GrenadesOnly                   = 4,
	EWeaponFilter_MAX              = 5
};


// Enum Pavlov.EGameDifficulty
enum class EGameDifficulty : uint8_t
{
	Easy                           = 0,
	Normal                         = 1,
	Hard                           = 2,
	EGameDifficulty_MAX            = 3
};


// Enum Pavlov.ECompetitiveMode
enum class ECompetitiveMode : uint8_t
{
	Disabled                       = 0,
	Normal                         = 1,
	Enhanced                       = 2,
	ECompetitiveMode_MAX           = 3
};


// Enum Pavlov.EMatchResult
enum class EMatchResult : uint8_t
{
	Victory                        = 0,
	Defeat                         = 1,
	Draw                           = 2,
	EMatchResult_MAX               = 3
};


// Enum Pavlov.EPavlovRoundState
enum class EPavlovRoundState : uint8_t
{
	Starting                       = 0,
	StandBy                        = 1,
	Started                        = 2,
	Ended                          = 3,
	EPavlovRoundState_MAX          = 4
};


// Enum Pavlov.EServerHostingType
enum class EServerHostingType : uint8_t
{
	Official                       = 0,
	BestAvailable                  = 1,
	Local                          = 2,
	EServerHostingType_MAX         = 3
};


// Enum Pavlov.EGameSessionState
enum class EGameSessionState : uint8_t
{
	Standby                        = 0,
	Querying                       = 1,
	Active                         = 2,
	EGameSessionState_MAX          = 3
};


// Enum Pavlov.EGhostPointMode
enum class EGhostPointMode : uint8_t
{
	Teleport                       = 0,
	PlayerCycle                    = 1,
	EGhostPointMode_MAX            = 2
};


// Enum Pavlov.EPliersState
enum class EPliersState : uint8_t
{
	Standby                        = 0,
	Cutting                        = 1,
	Cut                            = 2,
	EPliersState_MAX               = 3
};


// Enum Pavlov.EStereoOverlayMode
enum class EStereoOverlayMode : uint8_t
{
	SimpleFrontal                  = 0,
	Frontal                        = 1,
	Sidearm                        = 2,
	EStereoOverlayMode_MAX         = 3
};


// Enum Pavlov.EVoteState
enum class EVoteState : uint8_t
{
	Voting                         = 0,
	Succeed                        = 1,
	Failed                         = 2,
	EVoteState_MAX                 = 3
};


// Enum Pavlov.EToolTipState
enum class EToolTipState : uint8_t
{
	None                           = 0,
	ShowingUp                      = 1,
	Waiting                        = 2,
	Terminating                    = 3,
	EToolTipState_MAX              = 4
};


// Enum Pavlov.EWorkshopQueryType
enum class EWorkshopQueryType : uint8_t
{
	Installed                      = 0,
	MostPopular                    = 1,
	MostSubscribed                 = 2,
	MostRecent                     = 3,
	EWorkshopQueryType_MAX         = 4
};


// Enum Pavlov.EZombieWoundType
enum class EZombieWoundType : uint8_t
{
	Generic                        = 0,
	TorsoDismember                 = 1,
	UpperBack                      = 2,
	LowerBack                      = 3,
	Stomach                        = 4,
	Crotch                         = 5,
	LungAndHeart                   = 6,
	LeftArm                        = 7,
	LeftArmDismember               = 8,
	LeftForearm                    = 9,
	RightArm                       = 10,
	RightArmDismember              = 11,
	RightForearm                   = 12,
	LeftThigh                      = 13,
	LeftThighDismember             = 14,
	LeftCalf                       = 15,
	RightThigh                     = 16,
	RightThighDismember            = 17,
	RightCalf                      = 18,
	Head                           = 19,
	EZombieWoundType_MAX           = 20
};


// Enum Pavlov.EAIZombieState
enum class EAIZombieState : uint8_t
{
	Idle                           = 0,
	Alerted                        = 1,
	Attacking                      = 2,
	EAIZombieState_MAX             = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Pavlov.DamageTrackInfo
// 0x0038
struct FDamageTrackInfo
{
	class APavlovPlayerState*                          Instigator;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OriginLocation;                                           // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bLastHit;                                                 // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBullet;                                                  // 0x0025(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FName                                       DamageCauser;                                             // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Pavlov.GestureSetup
// 0x0028
struct FGestureSetup
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGestureType                                       Type;                                                     // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Threshold;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Pavlov.KillInfo
// 0x0070
struct FKillInfo
{
	struct FVector                                     BulletOrigin;                                             // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     BulletImpact;                                             // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bByBullet;                                                // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class APavlovPlayerState*                          Killer;                                                   // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDamageTrackInfo                            LastHit;                                                  // 0x0028(0x0038) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FDamageTrackInfo>                    Assists;                                                  // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Pavlov.HitBox
// 0x0080
struct FHitBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0018(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       Bone;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneMirror;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BoxComponent;                                             // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct Pavlov.HitBoxHistory
// 0x0018
struct FHitBoxHistory
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FHitBox>                             Instances;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.AIPersonality
// 0x0020 (0x0028 - 0x0008)
struct FAIPersonality : public FTableRowBase
{
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              Courage;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Reaction;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Strategy;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Skill;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.SpectatorViews
// 0x0018
struct FSpectatorViews
{
	struct FName                                       MapName;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Views;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Pavlov.EquipmentDefinition
// 0x0038
struct FEquipmentDefinition
{
	class UClass*                                      Primary;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Secondary;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Knife;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Nades;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      Other;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bByBuyMenu;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBundle;                                                  // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Pavlov.ImpactDamage
// 0x0030
struct FImpactDamage
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              ImpulseForce;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ServerSettings
// 0x0030
struct FServerSettings
{
	EMatchType                                         MatchType;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MatchLength;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCompetitive;                                             // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHardcore;                                                // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponFilter                                      WeaponFilter;                                             // 0x000A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	TArray<struct FString>                             Team0;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Team1;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.KillfeedEntry
// 0x0078
struct FKillfeedEntry
{
	class APavlovPlayerState*                          Killer;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          Victim;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageCauser;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     KillerName;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                KillerTeamId;                                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     KillerId;                                                 // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     VictimName;                                               // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                VictimTeamId;                                             // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     VictimId;                                                 // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              EntryLifespan;                                            // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLocalPlayer;                                             // 0x0074(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct Pavlov.EquipmentData
// 0x0038 (0x0040 - 0x0008)
struct FEquipmentData : public FTableRowBase
{
	int                                                MagazineCount;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BaseDamage;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmourDamage;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmourPenetration;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmetDamage;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HelmetBleed;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Penetration;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPassiveDamage;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UTexture*                                    Icon;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.PavlovServerInfo
// 0x0080
struct FPavlovServerInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bPinProtected;                                            // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Map;                                                      // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                SlotLimit;                                                // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Slots;                                                    // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaying;                                                 // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFriendsOnly;                                             // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFriendLobby;                                             // 0x004A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FServerSettings                             Settings;                                                 // 0x0050(0x0030) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Pavlov.PavlovAdvancedMap
// 0x0010
struct FPavlovAdvancedMap
{
	class UPavlov_Map*                                 Map;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPublic;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Score;                                                    // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.EquipmentSnapshot
// 0x0020
struct FEquipmentSnapshot
{
	TArray<class UClass*>                              InventorySlots;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      LeftController;                                           // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RightController;                                          // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ClientZombieBulletHit
// 0x0028
struct FClientZombieBulletHit
{
	class AZombie*                                     Zombie;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      HitLocation;                                              // 0x0008(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      BulletClass;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BoneIndex;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Pavlov.ClientBulletHit
// 0x0040
struct FClientBulletHit
{
	class APavlovPawn*                                 Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Hit;                                                      // 0x0008(0x000C) (IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPenetrated;                                              // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	class UClass*                                      BulletClass;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0028(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ReplayInfo
// 0x0050
struct FReplayInfo
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bLive;                                                    // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FTimespan                                   Elapsed;                                                  // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FString>                             Users;                                                    // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Pavlov.WheelSegment
// 0x0030
struct FWheelSegment
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       ID;                                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UClass*                                      ContentClass;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.WaypointInfo
// 0x0018
struct FWaypointInfo
{
	class AWaypoint*                                   Waypoint;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct Pavlov.WorkshopItem
// 0x0038
struct FWorkshopItem
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bSubscribed;                                              // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Score;                                                    // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Preview;                                                  // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.EquipmentCost
// 0x0008 (0x0010 - 0x0008)
struct FEquipmentCost : public FTableRowBase
{
	int                                                Cost;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Pavlov.PavlovPacket
// 0x0010
struct FPavlovPacket
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.HitboxInfo
// 0x0028 (0x0030 - 0x0008)
struct FHitboxInfo : public FTableRowBase
{
	float                                              DamageMul;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Slows;                                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Demoralizes;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TAssetPtr<class USoundCue>                         HitSound;                                                 // 0x0010(0x0020) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
