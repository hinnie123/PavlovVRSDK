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

// Enum Z.EZKnockBackDirection
enum class EZKnockBackDirection : uint8_t
{
	Back                           = 0,
	Left                           = 1,
	Right                          = 2,
	EZKnockBackDirection_MAX       = 3
};


// Enum Z.EAIState
enum class EAIState : uint8_t
{
	Idle                           = 0,
	Active                         = 1,
	Pooled                         = 2,
	Spawning                       = 3,
	Dead                           = 4,
	EAIState_MAX                   = 5
};


// Enum Z.EZKnockBackState
enum class EZKnockBackState : uint8_t
{
	None                           = 0,
	Knocking                       = 1,
	WallSlam                       = 2,
	EZKnockBackState_MAX           = 3
};


// Enum Z.EAISetDirectorResponse
enum class EAISetDirectorResponse : uint8_t
{
	Succesful                      = 0,
	AlreadyBelowDesiredAmount      = 1,
	AlreadyAboveDesiredAmount      = 2,
	InvalidParameters              = 3,
	NotEnabled                     = 4,
	EAISetDirectorResponse_MAX     = 5
};


// Enum Z.EAIDirectorMode
enum class EAIDirectorMode : uint8_t
{
	Pooled                         = 0,
	Active                         = 1,
	TrickleIn                      = 2,
	TrickleOut_OnDeath             = 3,
	TrickleOut_OverTime            = 4,
	EAIDirectorMode_MAX            = 5
};


// Enum Z.EAIAttackState
enum class EAIAttackState : uint8_t
{
	NotAttacking                   = 0,
	Aproaching                     = 1,
	Loop                           = 2,
	EAIAttackState_MAX             = 3
};


// Enum Z.EAIClimbingState
enum class EAIClimbingState : uint8_t
{
	NotClimbing                    = 0,
	StartingClimb                  = 1,
	Climbing                       = 2,
	EndingClimb                    = 3,
	EAIClimbingState_MAX           = 4
};


// Enum Z.ENavAreaFlag
enum class ENavAreaFlag : uint8_t
{
	Default                        = 0,
	Jump                           = 1,
	Climb                          = 2,
	NoSprinting                    = 3,
	ENavAreaFlag_MAX               = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Z.AIDamageResult
// 0x0028
struct FAIDamageResult
{
	float                                              Amount;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.NeighborGroup
// 0x0018
struct FNeighborGroup
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Z.FlockingWeight
// 0x000C
struct FFlockingWeight
{
	float                                              AlignmentWeight;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CohesionWeight;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeparationWeight;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.MovementDirection
// 0x0008
struct FMovementDirection
{
	float                                              ForwardMovement;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RightMovement;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.ZProperties
// 0x0038
struct FZProperties
{
	TArray<class UAnimMontage*>                        KnockBackMontages;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                KnockLeftMontage;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                KnockRightMontage;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        WallSlamMontages;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundCue*                                   DeathSound;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Z.MovementTraceSettings
// 0x0020
struct FMovementTraceSettings
{
	float                                              InnerAngle;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerLength;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterAngle;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterLength;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForwardLength;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorOffset;                                             // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
