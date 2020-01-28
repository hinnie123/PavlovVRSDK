#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Pavlov.EMatchmakingStatus
enum class EMatchmakingStatus : uint8_t
{
	None                           = 0,
	Waiting                        = 1,
	Polling                        = 2,
	Matched                        = 3,
	EMatchmakingStatus_MAX         = 4
};


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


// Enum Pavlov.EBattlegroundsWaitingState
enum class EBattlegroundsWaitingState : uint8_t
{
	Waiting                        = 0,
	Launching                      = 1,
	Playing                        = 2,
	Dead                           = 3,
	EBattlegroundsWaitingState_MAX = 4
};


// Enum Pavlov.EBattlegroundsServerType
enum class EBattlegroundsServerType : uint8_t
{
	WaitingServer                  = 0,
	GameServer                     = 1,
	EBattlegroundsServerType_MAX   = 2
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


// Enum Pavlov.EGhostPointMode
enum class EGhostPointMode : uint8_t
{
	Teleport                       = 0,
	PlayerCycle                    = 1,
	EGhostPointMode_MAX            = 2
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


// Enum Pavlov.EGrenadeState
enum class EGrenadeState : uint8_t
{
	SafeWithPin                    = 0,
	Safe                           = 1,
	Cooking                        = 2,
	Detonated                      = 3,
	EGrenadeState_MAX              = 4
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


// Enum Pavlov.EImpairedType
enum class EImpairedType : uint8_t
{
	Flash                          = 0,
	Stun                           = 1,
	Frozen                         = 2,
	EImpairedType_MAX              = 3
};


// Enum Pavlov.EModalMessageBoxType
enum class EModalMessageBoxType : uint8_t
{
	None                           = 0,
	Accept                         = 1,
	Ok                             = 2,
	AcceptCancel                   = 3,
	Cancel                         = 4,
	SpinnerCancel                  = 5,
	EModalMessageBoxType_MAX       = 6
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


// Enum Pavlov.EGameSessionState
enum class EGameSessionState : uint8_t
{
	Standby                        = 0,
	Querying                       = 1,
	Active                         = 2,
	EGameSessionState_MAX          = 3
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


// Enum Pavlov.EGoreLevel
enum class EGoreLevel : uint8_t
{
	Disabled                       = 0,
	Normal                         = 1,
	Gruesome                       = 2,
	EGoreLevel_MAX                 = 3
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
	Auto                           = 0,
	Click                          = 1,
	Hold                           = 2,
	EGripMode_MAX                  = 3
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


// Enum Pavlov.EFinger
enum class EFinger : uint8_t
{
	Index                          = 0,
	Middle                         = 1,
	Ring                           = 2,
	Pinky                          = 3,
	Thumb                          = 4,
	EFinger_MAX                    = 5
};


// Enum Pavlov.EServerHostingType
enum class EServerHostingType : uint8_t
{
	Official                       = 0,
	BestAvailable                  = 1,
	Local                          = 2,
	EServerHostingType_MAX         = 3
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


// Enum Pavlov.EHitFeedbackType
enum class EHitFeedbackType : uint8_t
{
	Body                           = 0,
	BodyArmor                      = 1,
	Helmet                         = 2,
	Headshot                       = 3,
	EHitFeedbackType_MAX           = 4
};


// Enum Pavlov.EPlayerFlair
enum class EPlayerFlair : uint8_t
{
	None                           = 0,
	Patron                         = 1,
	Moderator                      = 2,
	Developer                      = 3,
	EPlayerFlair_MAX               = 4
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


// Enum Pavlov.EToolTipState
enum class EToolTipState : uint8_t
{
	None                           = 0,
	ShowingUp                      = 1,
	Waiting                        = 2,
	Terminating                    = 3,
	EToolTipState_MAX              = 4
};


// Enum Pavlov.EVoteState
enum class EVoteState : uint8_t
{
	Voting                         = 0,
	Succeed                        = 1,
	Failed                         = 2,
	EVoteState_MAX                 = 3
};


// Enum Pavlov.EWorkshopQueryType
enum class EWorkshopQueryType : uint8_t
{
	Installed                      = 0,
	Favorite                       = 1,
	MostPopular                    = 2,
	MostSubscribed                 = 3,
	MostRecent                     = 4,
	EWorkshopQueryType_MAX         = 5
};


// Enum Pavlov.EWoundMaterialType
enum class EWoundMaterialType : uint8_t
{
	None                           = 0,
	Simple                         = 1,
	Complex                        = 2,
	EWoundMaterialType_MAX         = 3
};


// Enum Pavlov.EWoundSeverity
enum class EWoundSeverity : uint8_t
{
	None                           = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Shotgun                        = 4,
	EWoundSeverity_MAX             = 5
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

// ScriptStruct Pavlov.DamageTrackInfo
// 0x0038
struct FDamageTrackInfo
{
	class APavlovPlayerState*                          Instigator;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OriginLocation;                                           // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLastHit;                                                 // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBullet;                                                  // 0x0025(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FName                                       DamageCauser;                                             // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Pavlov.RotatedMap
// 0x0020
struct FRotatedMap
{
	struct FString                                     MapId;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0010(0x0010) (ZeroConstructor)
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
	struct FVector                                     BulletOrigin;                                             // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BulletImpact;                                             // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bByBullet;                                                // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class APavlovPlayerState*                          Killer;                                                   // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDamageTrackInfo                            LastHit;                                                  // 0x0028(0x0038) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FDamageTrackInfo>                    Assists;                                                  // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Pavlov.ShotConcurrencyQuality
// 0x0028
struct FShotConcurrencyQuality
{
	class USoundConcurrency*                           Default;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundConcurrency*                           High;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundConcurrency*                           Medium;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundConcurrency*                           Low;                                                      // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundConcurrency*                           Quest;                                                    // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Pavlov.GunAttachmentSetup
// 0x0020
struct FGunAttachmentSetup
{
	class UClass*                                      SuppresorClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SightClass;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PicatinnyOffset;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      GripClass;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.HitBox
// 0x0080
struct FHitBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
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

// ScriptStruct Pavlov.MatchSettings
// 0x0020
struct FMatchSettings
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Map;                                                      // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Pavlov.ModalCommitParams
// 0x0010
struct FModalCommitParams
{
	int                                                Value;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     UserObject;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
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

// ScriptStruct Pavlov.PavlovServerInfo
// 0x00A0
struct FPavlovServerInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     LobbyIdString;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bPinProtected;                                            // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     Map;                                                      // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapLabel;                                                 // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                SlotLimit;                                                // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Slots;                                                    // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaying;                                                 // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFriendsOnly;                                             // 0x0069(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFriendLobby;                                             // 0x006A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x006B(0x0005) MISSED OFFSET
	struct FServerSettings                             Settings;                                                 // 0x0070(0x0030) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Pavlov.PavlovAdvancedMap
// 0x0010
struct FPavlovAdvancedMap
{
	class UPavlov_Map*                                 Map;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPublic;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFavorite;                                                // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              Score;                                                    // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ServerConnectParams
// 0x0028
struct FServerConnectParams
{
	struct FString                                     ConnectURL;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FName                                       MapId;                                                    // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConnectDelay;                                             // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0019(0x000F) MISSED OFFSET
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
	int                                                KillBonus;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BaseDamage;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmourDamage;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmourPenetration;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmetDamage;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HelmetBleed;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Penetration;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPassiveDamage;                                           // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class UTexture*                                    Icon;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.SpectatorViews
// 0x0018
struct FSpectatorViews
{
	struct FName                                       MapName;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Views;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Pavlov.EquipmentDefinition
// 0x0048
struct FEquipmentDefinition
{
	class UClass*                                      Primary;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Secondary;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Knife;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Nades;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      Other;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Inventory;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bByBuyMenu;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBundle;                                                  // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};

// ScriptStruct Pavlov.HandFingerState
// 0x0001
struct FHandFingerState
{
	unsigned char                                      Index : 1;                                                // 0x0000(0x0001)
	unsigned char                                      Midle : 1;                                                // 0x0000(0x0001)
	unsigned char                                      Ring : 1;                                                 // 0x0000(0x0001)
	unsigned char                                      Pinky : 1;                                                // 0x0000(0x0001)
	unsigned char                                      Thumb : 1;                                                // 0x0000(0x0001)
};

// ScriptStruct Pavlov.FingerTracking
// 0x0003
struct FFingerTracking
{
	struct FHandFingerState                            LeftHand;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FHandFingerState                            RightHand;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Supported : 1;                                            // 0x0002(0x0001)
};

// ScriptStruct Pavlov.WoundInfo
// 0x0030
struct FWoundInfo
{
	struct FVector                                     HitLocation;                                              // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLastHit;                                                 // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Pavlov.ImpactDamage
// 0x0038
struct FImpactDamage
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseForce;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              WoundScale;                                               // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.PreBakedWound
// 0x0048 (0x0050 - 0x0008)
struct FPreBakedWound : public FTableRowBase
{
	struct FName                                       SimulateBone;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BloodMap;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AuxClass;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Location;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                UProjection;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VProjection;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.GiveItemParams
// 0x0020
struct FGiveItemParams
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDominant;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                SkinId;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWithAttachments;                                         // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoaded;                                                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct Pavlov.EquipmentSnapshot
// 0x0070
struct FEquipmentSnapshot
{
	TArray<class UClass*>                              InventorySlots;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGunAttachmentSetup>                 InventorySlotsAttachments;                                // 0x0010(0x0010) (ZeroConstructor)
	class UClass*                                      LeftController;                                           // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGunAttachmentSetup                         LeftAttachments;                                          // 0x0028(0x0020)
	class UClass*                                      RightController;                                          // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGunAttachmentSetup                         RightAttachments;                                         // 0x0050(0x0020)
};

// ScriptStruct Pavlov.ClientZombieBulletHit
// 0x0020
struct FClientZombieBulletHit
{
	class AZombie*                                     Zombie;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0008(0x000C)
	unsigned char                                      TotalDamage;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0015(0x0001) MISSED OFFSET
	uint16_t                                           BoneIndex;                                                // 0x0016(0x0002) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ClientKnifeDamage
// 0x0018
struct FClientKnifeDamage
{
	class APavlovPawn*                                 Victim;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AKnife*                                      Knife;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.ClientBulletHit
// 0x0040
struct FClientBulletHit
{
	class APavlovPawn*                                 Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Hit;                                                      // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPenetrated;                                              // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	class UClass*                                      BulletClass;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
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
	struct FTimespan                                   Elapsed;                                                  // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             Users;                                                    // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Pavlov.ServerDetails
// 0x00A0
struct FServerDetails
{
	struct FString                                     Hash;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Ip;                                                       // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapLabel;                                                 // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapId;                                                    // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Slots;                                                    // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxSlots;                                                 // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPasswordProtected;                                       // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSecured;                                                 // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
	TArray<struct FName>                               Tags;                                                     // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Ping;                                                     // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
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

// ScriptStruct Pavlov.PavlovVoicePacket
// 0x0010
struct FPavlovVoicePacket
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.VoicePacketBunch
// 0x0020
struct FVoicePacketBunch
{
	TArray<class APlayerState*>                        Players;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FPavlovVoicePacket>                  Packets;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.WaypointInfo
// 0x0018
struct FWaypointInfo
{
	class AWaypoint*                                   Waypoint;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
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

// ScriptStruct Pavlov.WoundBoneState
// 0x0020
struct FWoundBoneState
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRatio;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MajorHitIndex;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWoundSeverity                                     CurrentSeverity;                                          // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
};

// ScriptStruct Pavlov.WoundMaterialSet
// 0x0020
struct FWoundMaterialSet
{
	class UMaterialInterface*                          Simple;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Complex;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SimpleInstance;                                           // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ComplexInstance;                                          // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Pavlov.WoundMeshInstance
// 0x0068
struct FWoundMeshInstance
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<int, struct FWoundMaterialSet>                MaterialSets;                                             // 0x0010(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UWoundComponent*                             WoundComponent;                                           // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Pavlov.MemberFX
// 0x0020
struct FMemberFX
{
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USurfaceFXAsset*                             DismemberSurfaceFX;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Bones;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Pavlov.ZombieHitInfo
// 0x0038
struct FZombieHitInfo
{
	struct FVector_NetQuantizeNormal                   Direction;                                                // 0x0000(0x000C)
	struct FVector_NetQuantize                         Location;                                                 // 0x000C(0x000C)
	unsigned char                                      TotalDamage;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Distance;                                                 // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
	class UClass*                                      GunClass;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           BoneIndex;                                                // 0x0028(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	class AController*                                 Instigator;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.SightZeroing
// 0x0010 (0x0018 - 0x0008)
struct FSightZeroing : public FTableRowBase
{
	int                                                ZeroDefault;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZeroAt25m;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZeroAt50m;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZeroAt100m;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pavlov.EquipmentCost
// 0x0008 (0x0010 - 0x0008)
struct FEquipmentCost : public FTableRowBase
{
	int                                                Cost;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Pavlov.HitboxInfo
// 0x0030 (0x0038 - 0x0008)
struct FHitboxInfo : public FTableRowBase
{
	float                                              DamageMul;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Slows;                                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Demoralizes;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x000E(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Pavlov.HitboxInfo.HitSound
};

// ScriptStruct Pavlov.VoiceAudioBuffer
// 0x0010
struct FVoiceAudioBuffer
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Pavlov.ZombieBalanceData
// 0x0008 (0x0010 - 0x0008)
struct FZombieBalanceData : public FTableRowBase
{
	unsigned char                                      Damage;                                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
