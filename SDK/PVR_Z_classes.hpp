#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Z.AIDamageComponent
// 0x0028 (0x0118 - 0x00F0)
class UAIDamageComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnApplyDamage;                                            // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActiveStateChange;                                      // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bCanTakeDamage;                                           // 0x0110(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.AIDamageComponent");
		return ptr;
	}


	void SetCanTakeDamage(bool InCanTakeDamage);
	void ResetDamageComponent(bool toState);
	void OnRep_CanTakeDamage();
	void MulticastDamageAplied(const struct FAIDamageResult& DamageResult);
	void IncomingDamage(const struct FAIDamageResult& DamageResult);
	bool GetCanTakeDamage();
	void ApplyDamage(const struct FAIDamageResult& DamageResult);
};


// Class Z.AIDamageComponentInterface
// 0x0000 (0x0028 - 0x0028)
class UAIDamageComponentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.AIDamageComponentInterface");
		return ptr;
	}


	class UAIDamageComponent* GetAIDamageComponent();
};


// Class Z.AIDirector
// 0x0100 (0x0428 - 0x0328)
class AAIDirector : public AActor
{
public:
	float                                              NeighborAreaRadius;                                       // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PopulateNeighborGroupsFrequency;                          // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FNeighborGroup>                      NeighborGroups;                                           // 0x0330(0x0010) (ZeroConstructor, Transient)
	struct FFlockingWeight                             FlockingWeight;                                           // 0x0340(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FTimerHandle                                PopulateNeightborListTimerHandle;                         // 0x0350(0x0008)
	float                                              DynamicNavPointUpdateTime;                                // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoolingLocationOffset;                                    // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfAIToSpawn;                                        // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	int                                                bIsEnabled;                                               // 0x0364(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	bool                                               bPoolOnBeginPlay;                                         // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEQSSpawning;                                          // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x036A(0x0016) MISSED OFFSET
	TArray<class AActor*>                              ResetableObjectList;                                      // 0x0380(0x0010) (ZeroConstructor, Transient)
	bool                                               bSpawnActive;                                             // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0391(0x001F) MISSED OFFSET
	class UClass*                                      AISpawnCharacter;                                         // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x03B8(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAIKilled;                                               // 0x03E0(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03F0(0x0004) MISSED OFFSET
	float                                              RespawnTime;                                              // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RespawnTimeDeviation;                                     // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfDynamicNavPoints;                                 // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0400(0x0010) MISSED OFFSET
	class UClass*                                      DynamicNavMeshClass;                                      // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                DynamicNavPointUpdate;                                    // 0x0418(0x0008)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0420(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.AIDirector");
		return ptr;
	}


	void UpdateDynamicNavLinks();
	void TrickleOutAI_OverTime();
	void TrickleOutAI_OnDeath();
	void TrickleOut_AndKill();
	void TrickleInAI();
	void TrickleIn();
	EAISetDirectorResponse SetDirectorMode(float TrickleTimeIn, int NumberOfDesiredActiveAI, EAIDirectorMode NewDirectorState);
	void SetALLAiPooled();
	void SetAllAIActive();
	void SetAIPoolAmount(int NewPoolAmount);
	void PopulateNeighborGroups();
	void K2_SetPlayersInPlay(TArray<class ACharacter*> ListOfPlayersInPlay);
	void K2_RemovePlayersInPlay(TArray<class ACharacter*> ListOfPlayersToRemove);
	void K2_RemoveAPlayerInPlay(class ACharacter* PlayerToRemove);
	void K2_AddPlayerToPlayList(class ACharacter* PlayerToAdd);
	void InitAIPool();
	int GetVersion();
	int GetAIPoolAmount();
	class AActor* CreateAIPawnAtLocation(const struct FTransform& SpawnLocation);
	void AIWasKilled(class AZAICharacter* KilledAI, class APlayerState* KillerPlayerState);
};


// Class Z.AISlotManager
// 0x0038 (0x0128 - 0x00F0)
class UAISlotManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	int                                                NumberOfAISlots;                                          // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<class AActor*>                              AISlots;                                                  // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               bIsValidTarget;                                           // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              MaxDistanceTarget;                                        // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceOffset;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EQSTargetWeight;                                          // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.AISlotManager");
		return ptr;
	}


	void SetNumberOfMaxAISlots(int NumberOfslots);
	void SetIsValidTarget(bool IsValid);
	bool RemoveAICharacterFromSlot(class AActor* Character);
	bool IsValidTarget();
	bool IsActorInSlots(class AActor* Actor);
	bool HasEmptySlot();
	int GetNumberOfActiveSlots();
	int GetMaxNumberOfAISlots();
	void AssignSlotToActor(class AActor* Actor);
};


// Class Z.BaseAICharacter
// 0x0000 (0x0740 - 0x0740)
class ABaseAICharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BaseAICharacter");
		return ptr;
	}


	struct FMovementDirection GetMovementDirection();
};


// Class Z.BaseAIController
// 0x0000 (0x0438 - 0x0438)
class ABaseAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BaseAIController");
		return ptr;
	}

};


// Class Z.BaseDestructibleActor
// 0x0020 (0x0348 - 0x0328)
class ABaseDestructibleActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET
	class UAIDamageComponent*                          DamageComponent;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAISlotManager*                              SlotManagerComponent;                                     // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BaseDestructibleActor");
		return ptr;
	}

};


// Class Z.BTTask_AssignToSlot
// 0x0000 (0x0098 - 0x0098)
class UBTTask_AssignToSlot : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_AssignToSlot");
		return ptr;
	}

};


// Class Z.BTTask_AttackTarget
// 0x0018 (0x00B0 - 0x0098)
class UBTTask_AttackTarget : public UBTTask_BlackboardBase
{
public:
	float                                              AttackTime;                                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackRange;                                              // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageComponentDamage;                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerDamage;                                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AttackMontage;                                            // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_AttackTarget");
		return ptr;
	}

};


// Class Z.BTTask_FindSpawnZone
// 0x0028 (0x00C0 - 0x0098)
class UBTTask_FindSpawnZone : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyRotation;                                    // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_FindSpawnZone");
		return ptr;
	}

};


// Class Z.BTTask_FindTarget
// 0x0000 (0x0070 - 0x0070)
class UBTTask_FindTarget : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_FindTarget");
		return ptr;
	}

};


// Class Z.BTTask_RespawnAI
// 0x0000 (0x0070 - 0x0070)
class UBTTask_RespawnAI : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_RespawnAI");
		return ptr;
	}

};


// Class Z.BTTask_RespawnDelay
// 0x0000 (0x0070 - 0x0070)
class UBTTask_RespawnDelay : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_RespawnDelay");
		return ptr;
	}

};


// Class Z.BTTask_SetAIState
// 0x0008 (0x0078 - 0x0070)
class UBTTask_SetAIState : public UBTTaskNode
{
public:
	EAIState                                           StateToChangeTo;                                          // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_SetAIState");
		return ptr;
	}

};


// Class Z.BTTask_SetPawnLocation
// 0x0030 (0x00C8 - 0x0098)
class UBTTask_SetPawnLocation : public UBTTask_BlackboardBase
{
public:
	float                                              ZOffset;                                                  // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyRotation;                                    // 0x00A0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_SetPawnLocation");
		return ptr;
	}

};


// Class Z.BTTask_ZCheckAndSetAttackState
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_ZCheckAndSetAttackState : public UBTTask_BlackboardBase
{
public:
	float                                              StartPreparingForAttackDistance;                          // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartAttackingDistance;                                   // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_ZCheckAndSetAttackState");
		return ptr;
	}

};


// Class Z.BTTask_ZMoveTo
// 0x0010 (0x00A8 - 0x0098)
class UBTTask_ZMoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              ObservedBlackboardValueTolerance;                         // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bObserveBlackboardValue : 1;                              // 0x009C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              AcceptanceRadius;                                         // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StuckMaxTime;                                             // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.BTTask_ZMoveTo");
		return ptr;
	}

};


// Class Z.DynamivNavArea
// 0x0000 (0x0328 - 0x0328)
class ADynamivNavArea : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.DynamivNavArea");
		return ptr;
	}

};


// Class Z.EnvQueryGenerator_ByComponent
// 0x0070 (0x00C0 - 0x0050)
class UEnvQueryGenerator_ByComponent : public UEnvQueryGenerator
{
public:
	class UClass*                                      ComponentToSearchFor;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.EnvQueryGenerator_ByComponent");
		return ptr;
	}

};


// Class Z.EnvQueryGenerator_ByInterface
// 0x0070 (0x00C0 - 0x0050)
class UEnvQueryGenerator_ByInterface : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedInterfaceClass;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.EnvQueryGenerator_ByInterface");
		return ptr;
	}

};


// Class Z.EnvQueryTest_CheckSlots
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_CheckSlots : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.EnvQueryTest_CheckSlots");
		return ptr;
	}

};


// Class Z.EnvQueryTest_DamageableActors
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_DamageableActors : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.EnvQueryTest_DamageableActors");
		return ptr;
	}

};


// Class Z.EnvQueryTest_ValidTarget
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_ValidTarget : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.EnvQueryTest_ValidTarget");
		return ptr;
	}

};


// Class Z.NavArea_Climb
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Climb : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.NavArea_Climb");
		return ptr;
	}

};


// Class Z.NavArea_DynamicObstacle
// 0x0000 (0x0048 - 0x0048)
class UNavArea_DynamicObstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.NavArea_DynamicObstacle");
		return ptr;
	}

};


// Class Z.NavArea_Jump
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Jump : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.NavArea_Jump");
		return ptr;
	}

};


// Class Z.NavArea_NoSprinting
// 0x0000 (0x0048 - 0x0048)
class UNavArea_NoSprinting : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.NavArea_NoSprinting");
		return ptr;
	}

};


// Class Z.ProxyPlayerCharacter
// 0x0020 (0x0760 - 0x0740)
class AProxyPlayerCharacter : public ACharacter
{
public:
	class USpringArmComponent*                         SpringArm;                                                // 0x0740(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraComp;                                               // 0x0748(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bDead;                                                    // 0x0750(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	float                                              Health;                                                   // 0x0754(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	class UAISlotManager*                              AISlotManager;                                            // 0x0758(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ProxyPlayerCharacter");
		return ptr;
	}


	void ReviveCharacter();
};


// Class Z.QueryContext_BaseZ
// 0x0000 (0x0028 - 0x0028)
class UQueryContext_BaseZ : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.QueryContext_BaseZ");
		return ptr;
	}

};


// Class Z.QueryContext_AllPlayers
// 0x0000 (0x0028 - 0x0028)
class UQueryContext_AllPlayers : public UQueryContext_BaseZ
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.QueryContext_AllPlayers");
		return ptr;
	}


	void ProvideActorsSet(class UObject* QuerierObject, TArray<class AActor*>* ResultingActorSet);
};


// Class Z.QueryContext_PlayerContext
// 0x0000 (0x0028 - 0x0028)
class UQueryContext_PlayerContext : public UQueryContext_BaseZ
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.QueryContext_PlayerContext");
		return ptr;
	}


	void ProvideSingleActor(class UObject* QuerierObject, class AActor** ResultingActor);
};


// Class Z.RoundInterface
// 0x0000 (0x0028 - 0x0028)
class URoundInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.RoundInterface");
		return ptr;
	}


	void ResetToDefaultState();
};


// Class Z.SlotSystemInterface
// 0x0000 (0x0028 - 0x0028)
class USlotSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.SlotSystemInterface");
		return ptr;
	}


	class UAISlotManager* GetPlayerSlotManager();
};


// Class Z.ZAICharacter
// 0x00E0 (0x0820 - 0x0740)
class AZAICharacter : public ABaseAICharacter
{
public:
	int                                                CosmeticId;                                               // 0x0740(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	struct FZProperties                                Properties;                                               // 0x0748(0x0038) (BlueprintVisible)
	struct FScriptMulticastDelegate                    OnKnockBack;                                              // 0x0780(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              KnockBackDelay;                                           // 0x0790(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x0794(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0795(0x0013) MISSED OFFSET
	EZKnockBackState                                   KnockBackState;                                           // 0x07A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x07A9(0x000F) MISSED OFFSET
	float                                              LandedDelayTime;                                          // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayedAirCollisions;                                    // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x07BD(0x000B) MISSED OFFSET
	EAIState                                           AIControllerState;                                        // 0x07C8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07C9(0x0007) MISSED OFFSET
	class AActor*                                      AITarget;                                                 // 0x07D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	EAIAttackState                                     AttackingState;                                           // 0x07D8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x17];                                      // 0x07D9(0x0017) MISSED OFFSET
	float                                              PoolAttackDelay;                                          // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAIClimbingState                                   ClimbingState;                                            // 0x07F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	float                                              RandomSprintDelayCheckTime;                               // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSprintChance;                                       // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSprinting;                                             // 0x0800(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	float                                              StopSprintingDistance;                                    // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackRange;                                              // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleWidth;                                             // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleLength;                                            // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageToPlayer;                                           // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageToObjects;                                          // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x081C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZAICharacter");
		return ptr;
	}


	void SetSprinting(bool inIsSprinting);
	void SetKnockBackState(EZKnockBackState NewState);
	void SetClimbing(EAIClimbingState inIsClimbing);
	void SetCanSprint(bool inCanSprint);
	void SetAttackState(EAIAttackState AttackingState);
	void ReEnableMovement();
	void OnRep_Target();
	void OnRep_Sprint();
	void OnRep_Climb();
	void OnRep_bIsDead();
	void OnRep_Attacking();
	void OnRep_AIControllerState();
	void OnMontangeStarted(class UAnimMontage* Montange);
	void OnMontangeEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnAnimInit();
	void NewTargetSelected(class AActor* NewTarget, class UAISlotManager* SlotManager);
	void MulticastKnockBack(EZKnockBackDirection Direction, unsigned char Flags, class AController* bY);
	void KnockBack(EZKnockBackDirection Direction);
	void K2_KillAI();
	class AActor* GetTarget();
	bool GetSprinting();
	void GetMeshAndAnimInstance(int Index, class USkeletalMesh** SkeletalMesh, class UClass** AnimInstance);
	EZKnockBackState GetKnockBackState();
	EAIState GetCurrentAIstate();
	EAIClimbingState GetClimbingState();
	EAIAttackState GetAttackState();
	void DelayedReturnToNormalCollision();
	void AttemptRandomSprint();
	void AttackTargetInRange();
	void AIStateChange(EAIState NewState);
};


// Class Z.ZAIController
// 0x0188 (0x05C0 - 0x0438)
class AZAIController : public ABaseAIController
{
public:
	struct FScriptMulticastDelegate                    OnTargetSelected;                                         // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAIStateChanged;                                         // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAIJumpTo;                                               // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class AZNavLinkProxy*>                      ClaimedNavLinks;                                          // 0x0468(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	class AActor*                                      SelectedTarget;                                           // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EAIState                                           AIPlayState;                                              // 0x0488(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	class UEnvQuery*                                   TargetPlayerSelectionQuery;                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlackboardData*                             BlackboardDataAsset;                                      // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorTreeAsset;                                        // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryRequest                            TargetSelectionQueryRequest;                              // 0x04A8(0x0068)
	float                                              AcceptanceRadius;                                         // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsClimbing;                                              // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x0515(0x0013) MISSED OFFSET
	float                                              MinClimbDistanceCheck;                                    // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CompairedMoveClimbDistanceCheck;                          // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardTargetKey;                                      // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardUseEQSKey;                                      // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardUsePoolOnDeath;                                 // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BlackboardStateKey;                                       // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0550(0x0008) MISSED OFFSET
	float                                              MaxStuckTime;                                             // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StuckSpeed;                                               // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x40];                                      // 0x0560(0x0040) MISSED OFFSET
	float                                              StartJumpAnimationTimer;                                  // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndJumpAnimationTimer;                                    // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x05A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZAIController");
		return ptr;
	}


	void SetState(EAIState inState);
	bool SetCurrentTarget(class AActor* InTarget);
	void RandomDeviationFindTarget();
	void OnSlotsCleared();
	void JumpTo(const struct FTransform& Destination, float Arc, class AActor* JumpFromActor);
	bool IsDecelerationgOnPath();
	bool HasTarget();
	EAIState GetState();
	class AActor* GetCurrentTarget();
	void FinishClimb();
	void FindTarget();
	bool DoJumpLaunch_PrecomputedVelocity(const struct FTransform& Destination, float Arc, const struct FVector& InLaunchVelocity, class AActor* JumpFromActor, float* OutAscendingTime, float* OutDescendingTime);
	bool DoJumpLaunch(const struct FTransform& Destination, float Arc, class AActor* JumpFromActor, float* OutAscendingTime, float* OutDescendingTime);
	void ClimbTo(const struct FTransform& LedgeTransform, const struct FVector& EndPosition, uint32_t NavLinkID);
	void ClearTarget();
	void ClearAITargets();
};


// Class Z.ZAIDataProvide_AIManager
// 0x0000 (0x0040 - 0x0040)
class UZAIDataProvide_AIManager : public UAIDataProvider_QueryParams
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZAIDataProvide_AIManager");
		return ptr;
	}

};


// Class Z.ZAISpawnZone
// 0x0058 (0x0380 - 0x0328)
class AZAISpawnZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	struct FTransform                                  MidPoint;                                                 // 0x0330(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0360(0x0008) MISSED OFFSET
	struct FVector                                     SpawnBoxExtent;                                           // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0374(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZAISpawnZone");
		return ptr;
	}

};


// Class Z.ZAnimInstance
// 0x0080 (0x03E0 - 0x0360)
class UZAnimInstance : public UAnimInstance
{
public:
	struct FRotator                                    SavedRotation;                                            // 0x0360(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<class UAnimSequence*>                       SprintAnimations;                                         // 0x0370(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              ReferenceSpeed;                                           // 0x0380(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLeaningAngle;                                          // 0x0384(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLeanAngleDelta;                                        // 0x0388(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeaningExp;                                               // 0x038C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnleaningStrength;                                        // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackBlendExp;                                           // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMoving;                                                  // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFalling;                                                 // 0x0399(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRaging;                                                  // 0x039A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSprinting;                                               // 0x039B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UAnimSequence*                               SprintAnimation;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveRatioX;                                               // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveRatioY;                                               // 0x03AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoveRatio;                                                // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SprintRootRotation;                                       // 0x03B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLookAt;                                            // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	struct FVector                                     LookAtTarget;                                             // 0x03C4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAIAttackState                                     AttackState;                                              // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAIClimbingState                                   ClimbingState;                                            // 0x03D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	float                                              AttackAlpha;                                              // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeaningRatio;                                             // 0x03D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZAnimInstance");
		return ptr;
	}

};


// Class Z.ZAnimNotify_Attack
// 0x0000 (0x0038 - 0x0038)
class UZAnimNotify_Attack : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZAnimNotify_Attack");
		return ptr;
	}

};


// Class Z.ZAnimNotify_FootStep
// 0x0000 (0x0038 - 0x0038)
class UZAnimNotify_FootStep : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZAnimNotify_FootStep");
		return ptr;
	}

};


// Class Z.ZAnimNotify_VO
// 0x0000 (0x0058 - 0x0058)
class UZAnimNotify_VO : public UAnimNotify_PlaySound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZAnimNotify_VO");
		return ptr;
	}

};


// Class Z.ZBaseDamageType
// 0x0000 (0x0040 - 0x0040)
class UZBaseDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZBaseDamageType");
		return ptr;
	}

};


// Class Z.ZCharacterMovementComponent
// 0x0060 (0x0780 - 0x0720)
class UZCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0720(0x0010) MISSED OFFSET
	float                                              JumpLandingTimerDelay;                                    // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintAccelerationMultiplier;                             // 0x0734(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintMaxSpeedMultiplier;                                 // 0x0738(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLanded;                                                 // 0x0740(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bCanSprint;                                               // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x0751(0x0013) MISSED OFFSET
	float                                              ClimbingTargetScale;                                      // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseBreakingFactor;                                       // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x076C(0x0004) MISSED OFFSET
	float                                              TimeTransitionScale;                                      // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0774(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZCharacterMovementComponent");
		return ptr;
	}


	void SetSprinting(bool inWantsToSprint, float DesiredSpeed);
	void SetSprintEnabled(bool inbIsSprintEnabled);
	void ServerFinishLanding();
	void FinishLanding();
	bool CanSprint();
};


// Class Z.ZCheatManager
// 0x0000 (0x0078 - 0x0078)
class UZCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZCheatManager");
		return ptr;
	}


	void TogglePathFollowingDebug();
};


// Class Z.ZNavLineBatchComponent
// 0x0000 (0x05A0 - 0x05A0)
class UZNavLineBatchComponent : public ULineBatchComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZNavLineBatchComponent");
		return ptr;
	}

};


// Class Z.ZNavLinkComponent
// 0x0000 (0x01C8 - 0x01C8)
class UZNavLinkComponent : public UNavLinkCustomComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZNavLinkComponent");
		return ptr;
	}


	void ToggleNavLink(bool IsEnabled);
};


// Class Z.ZNavLinkProxy
// 0x0018 (0x0390 - 0x0378)
class AZNavLinkProxy : public ANavLinkProxy
{
public:
	class AZAIController*                              ClaimedBy;                                                // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0380(0x0008) MISSED OFFSET
	float                                              ClaimReleaseDelay;                                        // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZNavLinkProxy");
		return ptr;
	}

};


// Class Z.ZNavLinkProxy_Climb
// 0x0008 (0x0398 - 0x0390)
class AZNavLinkProxy_Climb : public AZNavLinkProxy
{
public:
	class UArrowComponent*                             LedgeAlignmentComponent;                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZNavLinkProxy_Climb");
		return ptr;
	}

};


// Class Z.ZNavLinkProxy_Destructible
// 0x0028 (0x03B8 - 0x0390)
class AZNavLinkProxy_Destructible : public AZNavLinkProxy
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET
	class UAIDamageComponent*                          AIDamageComponent;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bDefaultState;                                            // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class UAISlotManager*                              SlotManager;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZNavLinkProxy_Destructible");
		return ptr;
	}


	void ToggleNavLinkState(bool bEnable);
	void OnTakeDamage(const struct FAIDamageResult& DamageTaken);
	void OnCanTakeDamageChange(bool CurrentState);
	class UAIDamageComponent* GetAIDamageComponent();
};


// Class Z.ZNavLinkProxy_Jump
// 0x0060 (0x03F0 - 0x0390)
class AZNavLinkProxy_Jump : public AZNavLinkProxy
{
public:
	float                                              JumpArc;                                                  // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTracedPath;                                              // 0x0394(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bTraceHit;                                                // 0x0395(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0396(0x0002) MISSED OFFSET
	struct FPredictProjectilePathPointData             TraceStartPoint;                                          // 0x0398(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	struct FPredictProjectilePathPointData             TraceApex;                                                // 0x03B4(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	struct FPredictProjectilePathPointData             TraceEndPoint;                                            // 0x03D0(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZNavLinkProxy_Jump");
		return ptr;
	}


	void RefreshPathVisualizer();
};


// Class Z.ZombieDamageType
// 0x0000 (0x0040 - 0x0040)
class UZombieDamageType : public UZBaseDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZombieDamageType");
		return ptr;
	}

};


// Class Z.ZombieRecastNavMesh
// 0x0000 (0x05A0 - 0x05A0)
class AZombieRecastNavMesh : public ARecastNavMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZombieRecastNavMesh");
		return ptr;
	}

};


// Class Z.ZPathFollowingComponent
// 0x0110 (0x03A8 - 0x0298)
class UZPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	class AZAIController*                              OwningZController;                                        // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAISlotManager*                              TargetSlotManager;                                        // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              ArcLineScale;                                             // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlowDistance;                                             // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalFlockingScale;                                       // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x02BC(0x0088) MISSED OFFSET
	float                                              PursueDistanceOffset;                                     // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PursueMinimumAlpha;                                       // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PursueModifier;                                           // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeekRandomCircleRadius;                                   // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeekRandomCircleDistance;                                 // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeekRandomAngleRange;                                     // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeekTargetScale;                                          // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0360(0x0008) MISSED OFFSET
	float                                              RandomSeekScale;                                          // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSeekTimeMax;                                        // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0370(0x0004) MISSED OFFSET
	float                                              RandomSeekChance;                                         // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeekRandomDistance;                                       // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceScale;                                           // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMovementTraceSettings                      MovementTraceSettings;                                    // 0x0380(0x0020) (Edit, BlueprintVisible)
	float                                              MaxSprintingRotation;                                     // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxJockeyRotation;                                        // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZPathFollowingComponent");
		return ptr;
	}


	void OnTargetSelectionUpdate(class AActor* NewTarget, class UAISlotManager* SlotManager);
};


// Class Z.ZPlayerTestingController
// 0x0000 (0x0688 - 0x0688)
class AZPlayerTestingController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Z.ZPlayerTestingController");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
