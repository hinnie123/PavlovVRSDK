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

// Enum VRFramework.EVRControllerMode
enum class EVRControllerMode : uint8_t
{
	Normal                         = 0,
	Teleport                       = 1,
	Menu                           = 2,
	EVRControllerMode_MAX          = 3
};


// Enum VRFramework.EVRQuadrantButton
enum class EVRQuadrantButton : uint8_t
{
	Left                           = 0,
	Up                             = 1,
	Right                          = 2,
	Down                           = 3,
	EVRQuadrantButton_MAX          = 4
};


// Enum VRFramework.EVRGunChamberState
enum class EVRGunChamberState : uint8_t
{
	Empty                          = 0,
	LiveRound                      = 1,
	EmptyShell                     = 2,
	EVRGunChamberState_MAX         = 3
};


// Enum VRFramework.EVRHapticType
enum class EVRHapticType : uint8_t
{
	Button1                        = 0,
	Button2                        = 1,
	InteractBegin                  = 2,
	InteractEnd                    = 3,
	SlowPulse                      = 4,
	Custom1                        = 5,
	Custom2                        = 6,
	Custom4                        = 7,
	EVRHapticType_MAX              = 8
};


// Enum VRFramework.EVRGunFireMode
enum class EVRGunFireMode : uint8_t
{
	Semi                           = 0,
	Automatic                      = 1,
	Manual                         = 2,
	Burst                          = 3,
	EVRGunFireMode_MAX             = 4
};


// Enum VRFramework.EVRHandleHapticMode
enum class EVRHandleHapticMode : uint8_t
{
	LinearX                        = 0,
	LinearY                        = 1,
	LinearZ                        = 2,
	Combined                       = 3,
	EVRHandleHapticMode_MAX        = 4
};


// Enum VRFramework.EVRHandleRotationType
enum class EVRHandleRotationType : uint8_t
{
	AroundAxisX                    = 0,
	AroundAxisY                    = 1,
	AroundAxisZ                    = 2,
	EVRHandleRotationType_MAX      = 3
};


// Enum VRFramework.EVRQuickSlotType
enum class EVRQuickSlotType : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Back                           = 2,
	Chest                          = 3,
	EVRQuickSlotType_MAX           = 4
};


// Enum VRFramework.EVRGrabState
enum class EVRGrabState : uint8_t
{
	Empty                          = 0,
	Grabbing                       = 1,
	Grabbed                        = 2,
	Disabled                       = 3,
	Custom1                        = 4,
	Custom2                        = 5,
	Custom3                        = 6,
	Custom4                        = 7,
	EVRGrabState_MAX               = 8
};


// Enum VRFramework.EVRSmoothLocomotionMode
enum class EVRSmoothLocomotionMode : uint8_t
{
	Head                           = 0,
	Dominant                       = 1,
	Offhand                        = 2,
	Pawn                           = 3,
	EVRSmoothLocomotionMode_MAX    = 4
};


// Enum VRFramework.EVRTeleportSpace
enum class EVRTeleportSpace : uint8_t
{
	Head                           = 0,
	Floor                          = 1,
	EVRTeleportSpace_MAX           = 2
};


// Enum VRFramework.EVREmulatedPlayerRotation
enum class EVREmulatedPlayerRotation : uint8_t
{
	None                           = 0,
	Movement                       = 1,
	Focus                          = 2,
	EVREmulatedPlayerRotation_MAX  = 3
};


// Enum VRFramework.EVRPlatform
enum class EVRPlatform : uint8_t
{
	SteamVR_Vive                   = 0,
	SteamVR_Oculus                 = 1,
	SteamVR_Index                  = 2,
	SteamVR_WMR                    = 3,
	Oculus                         = 4,
	Oculus_Quest                   = 5,
	EVRPlatform_MAX                = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VRFramework.VRBulletImpactEffect
// 0x0010
struct FVRBulletImpactEffect
{
	class UParticleSystem*                             Particle;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Sound;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRItemState
// 0x0018
struct FVRItemState
{
	class AVRItem*                                     Parent;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ParentSlot;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AVRItemController*                           Controller;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRCustomInventoryOffset
// 0x0040
struct FVRCustomInventoryOffset
{
	unsigned char                                      Slot;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct VRFramework.VRGunStateProxy
// 0x0010
struct FVRGunStateProxy
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct VRFramework.VRHandFingerJoint
// 0x0010
struct FVRHandFingerJoint
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct VRFramework.VRHandleSequenceSetup
// 0x0020
struct FVRHandleSequenceSetup
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct VRFramework.VRInventoryFilter
// 0x0018
struct FVRInventoryFilter
{
	unsigned char                                      Slot;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExclusive;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<class UClass*>                              List;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct VRFramework.VRInventorySlot
// 0x0010
struct FVRInventorySlot
{
	unsigned char                                      Index;                                                    // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AVRItem*                                     Pickup;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRItemControllerState
// 0x0050
struct FVRItemControllerState
{
	EVRGrabState                                       State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bFlag;                                                    // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct VRFramework.VRMovementSnapshot
// 0x0024
struct FVRMovementSnapshot
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Velocity;                                                 // 0x000C(0x000C)
	float                                              OffsetX;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRNetTransform
// 0x0018
struct FVRNetTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRNetSnapshot
// 0x0068
struct FVRNetSnapshot
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Velocity;                                                 // 0x000C(0x000C)
	float                                              Heading;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             Flags;                                                    // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FVRNetTransform                             HeadTX;                                                   // 0x0020(0x0018)
	struct FVRNetTransform                             HandTXLeft;                                               // 0x0038(0x0018)
	struct FVRNetTransform                             HandTXRight;                                              // 0x0050(0x0018)
};

// ScriptStruct VRFramework.VREmulatedPlayerPose
// 0x00A8 (0x00B0 - 0x0008)
struct FVREmulatedPlayerPose : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  LeftHand;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  RightHand;                                                // 0x0040(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  Head;                                                     // 0x0070(0x0030) (Edit, IsPlainOldData)
	float                                              LerpSpeed;                                                // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00A4(0x000C) MISSED OFFSET
};

// ScriptStruct VRFramework.VRSettings
// 0x0014
struct FVRSettings
{
	int                                                Scaling;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AntiAlias;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Shading;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Effects;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRBulletDamageEvent
// 0x0020 (0x00C8 - 0x00A8)
struct FVRBulletDamageEvent : public FPointDamageEvent
{
	bool                                               bClient;                                                  // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x00AC(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ImpulsePower;                                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UClass*                                      GunClass;                                                 // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRFireBulletParams
// 0x0030
struct FVRFireBulletParams
{
	class UClass*                                      BulletClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	class AController*                                 Instigator;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRFramework.VRNetSnapshotLerpInterface
// 0x00E4
struct FVRNetSnapshotLerpInterface
{
	unsigned char                                      UnknownData00[0xE4];                                      // 0x0000(0x00E4) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
