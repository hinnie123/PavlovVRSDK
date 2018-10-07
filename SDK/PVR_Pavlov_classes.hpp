#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Pavlov.ActionGunState
// 0x0038 (0x0198 - 0x0160)
class UActionGunState : public UVRGunState
{
public:
	float                                              Action;                                                   // 0x0160(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActionChanged;                                          // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpenAction;                                             // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloseAction;                                            // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ActionGunState"));
		return ptr;
	}


	void SetAction(float NewValue);
	void OpenAction();
	void CloseAction();
};


// Class Pavlov.RifleGunState
// 0x0000 (0x0198 - 0x0198)
class URifleGunState : public UActionGunState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.RifleGunState"));
		return ptr;
	}

};


// Class Pavlov.AirplaneRoyale
// 0x0020 (0x03A8 - 0x0388)
class AAirplaneRoyale : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0388(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x038C(0x000C) (Net, IsPlainOldData)
	float                                              Traveled;                                                 // 0x0398(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTraveling;                                               // 0x039C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	float                                              TravelSpeed;                                              // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.AirplaneRoyale"));
		return ptr;
	}


	void StartTravel();
	void SetAsBase(class APavlovPawn* Pawn);
	void OnRep_Traveled();
	void ClearBase(class APavlovPawn* Pawn);
};


// Class Pavlov.AmmoPouchComponent
// 0x0030 (0x08D0 - 0x08A0)
class UAmmoPouchComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  GrabHaptic;                                               // 0x08A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GrabSound;                                                // 0x08B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  LastMagazineHaptic;                                       // 0x08B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  EmptyGrabHaptic;                                          // 0x08C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.AmmoPouchComponent"));
		return ptr;
	}

};


// Class Pavlov.BeltFedGunState
// 0x0000 (0x0160 - 0x0160)
class UBeltFedGunState : public UVRGunState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.BeltFedGunState"));
		return ptr;
	}

};


// Class Pavlov.BloodSplat
// 0x0040 (0x03C8 - 0x0388)
class ABloodSplat : public AActor
{
public:
	class UStaticMeshComponent*                        Decal;                                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DecalPivot;                                               // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             ImpactEffect;                                             // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Sound;                                                    // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x03A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Scale;                                                    // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Depth;                                                    // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxProjection;                                            // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.BloodSplat"));
		return ptr;
	}

};


// Class Pavlov.Bomb
// 0x0220 (0x0750 - 0x0530)
class ABomb : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x128];                                     // 0x0538(0x0128) MISSED OFFSET
	bool                                               bOccluded;                                                // 0x0660(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EBombState                                         State;                                                    // 0x0661(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0662(0x0002) MISSED OFFSET
	int                                                Timer;                                                    // 0x0664(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                NextDigit;                                                // 0x0668(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x066C(0x0004) MISSED OFFSET
	struct FString                                     Code;                                                     // 0x0670(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              DetonatorDelay;                                           // 0x0680(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GraceDuration;                                            // 0x0684(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DefuseSound;                                              // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GraceSound;                                               // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   PlantedSound;                                             // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DetonationSound;                                          // 0x06A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BeepSound;                                                // 0x06A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BeepIntervalCurve;                                        // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DigitExpireDelay;                                         // 0x06B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KeyPadOffset;                                             // 0x06BC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              KeyDistance;                                              // 0x06C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06CC(0x0004) MISSED OFFSET
	class USoundCue*                                   KeySound;                                                 // 0x06D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ErrorSound;                                               // 0x06D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SuccessSound;                                             // 0x06E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<bool>                                       WireStates;                                               // 0x06E8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FName>                               Wires;                                                    // 0x06F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CutMaxDist;                                               // 0x0708(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x070C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x0710(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // 0x0714(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // 0x0718(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x071C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0720(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBombDetonation;                                         // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBombDefused;                                            // 0x0738(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0748(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Bomb"));
		return ptr;
	}


	void PlantAt(class ABombPlantSpot* Spot, bool bForce);
	void OnPlayerOcclusionChange(bool bNewOccluded);
	void OnPlanted();
	void OnGrace();
	void OnDetonation();
	void OnDefuse();
	void OnButtonPressed(int Index);
	void OnBeep();
	void MulticastOnPlantAt(class ABombPlantSpot* Spot);
	void MulticastOnGrace();
	void MulticastOnEnterCode(bool bSucceed);
	void MulticastOnDetonation();
	void MulticastOnDefuse();
	void MulticastOnBeep();
	bool IsWireCut(int Index);
	bool IsButtonPressed(int Index);
	struct FVector GetWireLocation(int Index);
	int GetClosestValidWireIndex(const struct FVector& Location);
	void ExpireCode();
	void EnterDigit(int Digit, class AController* Presser);
	void Detonate();
	void Defuse(class AController* Defuser);
	void CutWire(int Index, class AController* Defuser);
};


// Class Pavlov.BombAnimInstance
// 0x0038 (0x0390 - 0x0358)
class UBombAnimInstance : public UAnimInstance
{
public:
	float                                              Button01;                                                 // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button02;                                                 // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button03;                                                 // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button04;                                                 // 0x0364(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button05;                                                 // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button06;                                                 // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button07;                                                 // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button08;                                                 // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button09;                                                 // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Button00;                                                 // 0x037C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ButtonX1;                                                 // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ButtonX2;                                                 // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRedCableCut;                                             // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bYellowCableCut;                                          // 0x0389(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWhiteCableCut;                                           // 0x038A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x038B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.BombAnimInstance"));
		return ptr;
	}

};


// Class Pavlov.BombPlantSpot
// 0x0030 (0x0560 - 0x0530)
class ABombPlantSpot : public AVRItem
{
public:
	class UBoxComponent*                               Collision;                                                // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bIsB;                                                     // 0x0540(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bPlantedHere;                                             // 0x0541(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSpotEnabled;                                             // 0x0542(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0543(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBombPlanted;                                            // 0x0548(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0558(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.BombPlantSpot"));
		return ptr;
	}


	void UpdateEnabledState();
	void SetSpotEnabled(bool bEnabled);
	void ResetSpot();
	void OnRep_PlantedHere();
	void MulticastOnPlantStateChanged(bool bPlanted);
};


// Class Pavlov.Bullet
// 0x0028 (0x0518 - 0x04F0)
class ABullet : public AVRBullet
{
public:
	float                                              TimeSpawned;                                              // 0x04F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Latency;                                                  // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // 0x04F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArmourDamage;                                             // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArmourPenetration;                                        // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HelmetDamage;                                             // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HelmetBleed;                                              // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HeadshotProbability;                                      // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Bullet"));
		return ptr;
	}

};


// Class Pavlov.BulletHoleManager
// 0x0030 (0x03B8 - 0x0388)
class ABulletHoleManager : public AActor
{
public:
	TArray<class UInstancedStaticMeshComponent*>       MeshInstances;                                            // 0x0388(0x0010) (ExportObject, ZeroConstructor)
	TArray<int>                                        Needles;                                                  // 0x0398(0x0010) (ZeroConstructor)
	int                                                MaxHoles;                                                 // 0x03A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DecalScale;                                               // 0x03AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DepthOffset;                                              // 0x03B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.BulletHoleManager"));
		return ptr;
	}

};


// Class Pavlov.BuyZone
// 0x0000 (0x03C0 - 0x03C0)
class ABuyZone : public ATriggerVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.BuyZone"));
		return ptr;
	}

};


// Class Pavlov.ChamberComponent
// 0x0080 (0x05C0 - 0x0540)
class UChamberComponent : public UPhysicsConstraintComponent
{
public:
	class UStaticMeshComponent*                        MeshInstance;                                             // 0x0540(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ConstrainedMesh;                                          // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Volume;                                                   // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGun*                                        Gun;                                                      // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData)
	class UVRGunState*                                 GunState;                                                 // 0x0560(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0568(0x0008) MISSED OFFSET
	bool                                               bRemoving;                                                // 0x0570(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRemoval;                                            // 0x0571(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0572(0x0002) MISSED OFFSET
	int                                                ChamberIndex;                                             // 0x0574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LiveRound;                                                // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 EmptyShell;                                               // 0x0580(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleLength;                                            // 0x058C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CapsuleOffset;                                            // 0x0590(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              ConstraintLimit;                                          // 0x059C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConstraintOffset;                                         // 0x05A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	class USoundCue*                                   RemoveSound;                                              // 0x05A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   InsertSound;                                              // 0x05B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  InsertHaptic;                                             // 0x05B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ChamberComponent"));
		return ptr;
	}


	void ResetChamber();
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnChamberStateChanged(int Index, EVRGunChamberState OldState, EVRGunChamberState NewState);
	void DestroyConstrainedMesh();
	void DebugDraw();
	void CheckConstraintBreakThreshold();
	void BreakCheck();
	void AllowRemoval();
};


// Class Pavlov.DamageTrackerComponent
// 0x0010 (0x0100 - 0x00F0)
class UDamageTrackerComponent : public UActorComponent
{
public:
	TArray<struct FDamageTrackInfo>                    InfoList;                                                 // 0x00F0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.DamageTrackerComponent"));
		return ptr;
	}


	void ResetTracking();
	bool GetLastHit(struct FDamageTrackInfo* LastHit);
	void GatherAssists(TArray<struct FDamageTrackInfo>* Assists);
};


// Class Pavlov.DamageType_Explotion
// 0x0000 (0x0040 - 0x0040)
class UDamageType_Explotion : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.DamageType_Explotion"));
		return ptr;
	}

};


// Class Pavlov.Grenade
// 0x0090 (0x05C0 - 0x0530)
class AGrenade : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	class AGrenadeTrailProxy*                          TrailProxy;                                               // 0x0548(0x0008) (ZeroConstructor, IsPlainOldData)
	class AController*                                 DetonationInstigator;                                     // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGrenadeState                                      State;                                                    // 0x0558(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectileActive;                                        // 0x0559(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x055A(0x0002) MISSED OFFSET
	float                                              ProjectileThreashold;                                     // 0x055C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMul;                                       // 0x0560(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PinPullRatio;                                             // 0x0564(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DetonatorDelay;                                           // 0x0568(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetonatedLifeSpan;                                        // 0x056C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideOnDetonation;                                        // 0x0570(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisablePhysics;                                          // 0x0571(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0572(0x0006) MISSED OFFSET
	class USoundCue*                                   FuseIgniteSound;                                          // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   LeverReleaseSound;                                        // 0x0580(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DryLeverReleaseSound;                                     // 0x0588(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SafetyPinRemovedSound;                                    // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DetonationSound;                                          // 0x0598(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDealDamage;                                              // 0x05A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05A1(0x0003) MISSED OFFSET
	float                                              Damage;                                                   // 0x05A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x05A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // 0x05AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // 0x05B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x05B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Grenade"));
		return ptr;
	}


	void ServerRemoveSafetyPin();
	void ServerReleaseSafetyLever();
	void RemoveSafetyPin();
	void ReleaseSafetyLever();
	void PullSafetyPin(float Ratio);
	void OnRep_ProjectileActive();
	void OnProjectileStop(const struct FHitResult& ImpactResult);
	void OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnDetonation();
	void MulticastThrow(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Velocity);
	void MulticastOnSafetyPinRemoved();
	void MulticastOnReleaseSafetyLever();
	void MulticastOnDetonation();
	void Detonate();
};


// Class Pavlov.DamageType_Knife
// 0x0000 (0x0040 - 0x0040)
class UDamageType_Knife : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.DamageType_Knife"));
		return ptr;
	}

};


// Class Pavlov.Knife
// 0x0070 (0x05A0 - 0x0530)
class AKnife : public AVRItem
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BladeProxy;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0540(0x0010) MISSED OFFSET
	class AController*                                 LatestInstigator;                                         // 0x0550(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bBloody;                                                  // 0x0558(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	struct FVector                                     BladeVelocity;                                            // 0x055C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Damage;                                                   // 0x0568(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x056C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamage;                                                // 0x0570(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedReference;                                           // 0x0574(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   StabSound;                                                // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             StabParticle;                                             // 0x0580(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleOffset;                                           // 0x0588(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0594(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Knife"));
		return ptr;
	}


	void SetBloody(bool bEnabled);
	void OnRep_Bloody();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBloodyChanged(bool bNewBloody);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EnableTicking();
};


// Class Pavlov.DecorationSkeletalMeshComponent
// 0x0000 (0x0F00 - 0x0F00)
class UDecorationSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.DecorationSkeletalMeshComponent"));
		return ptr;
	}

};


// Class Pavlov.Destructible
// 0x0000 (0x0388 - 0x0388)
class ADestructible : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Destructible"));
		return ptr;
	}


	void OnShatter(const struct FVector& Normal, const struct FVector& Location);
	void MulticastOnShatter(const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location);
};


// Class Pavlov.DoubleBarrelGunState
// 0x0018 (0x0178 - 0x0160)
class UDoubleBarrelGunState : public UVRGunState
{
public:
	bool                                               bBarrelOpen;                                              // 0x0160(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBarrelChanged;                                          // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.DoubleBarrelGunState"));
		return ptr;
	}


	void SetBarrel(bool bOpen);
};


// Class Pavlov.FallDamageType
// 0x0000 (0x0040 - 0x0040)
class UFallDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.FallDamageType"));
		return ptr;
	}

};


// Class Pavlov.PavlovMovementComponent
// 0x0080 (0x0790 - 0x0710)
class UPavlovMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x29];                                      // 0x0710(0x0029) MISSED OFFSET
	EParachuteState                                    ParachuteState;                                           // 0x0739(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x073A(0x0002) MISSED OFFSET
	float                                              FallDamage;                                               // 0x073C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyFallDamage;                                         // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	float                                              AiSpeedMultiplier;                                        // 0x0744(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRoomScaleLocomotion;                                     // 0x0748(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	float                                              FreeFallThreashold;                                       // 0x074C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallMaxLateralSpeed;                                  // 0x0750(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallAirControlBoost;                                  // 0x0754(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallDamagePerSecond;                                      // 0x0758(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumFallDamage;                                        // 0x075C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoParachuteAltitude;                                    // 0x0760(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteDeceleration;                                    // 0x0764(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteTerminalVelocity;                                // 0x0768(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteAirControlBoost;                                 // 0x076C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeploymentDuration;                                       // 0x0770(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	class USoundCue*                                   DeploymentSound;                                          // 0x0778(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintSpeedMultiplier;                                    // 0x0780(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintAccelerationMultiplier;                             // 0x0784(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x0788(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x078C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovMovementComponent"));
		return ptr;
	}


	void ServerDeployParachute();
	void OnRep_PrachuteState();
	void MulticastOnParachuteDeployed();
};


// Class Pavlov.FootstepAnimNotify
// 0x0000 (0x0038 - 0x0038)
class UFootstepAnimNotify : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.FootstepAnimNotify"));
		return ptr;
	}

};


// Class Pavlov.GestureComponent
// 0x0020 (0x0110 - 0x00F0)
class UGestureComponent : public UActorComponent
{
public:
	TArray<struct FGestureSetup>                       Gestures;                                                 // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnGesturePerformed;                                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.GestureComponent"));
		return ptr;
	}


	void RegisterGesture(const struct FGestureSetup& Setup);
};


// Class Pavlov.KillCam
// 0x00B0 (0x0438 - 0x0388)
class AKillCam : public AActor
{
public:
	class UStaticMeshComponent*                        BulletTrace;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ImpactPoint;                                              // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            KillerInfo;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FKillInfo                                   KillInfo;                                                 // 0x03A0(0x0070) (BlueprintVisible, BlueprintReadOnly)
	float                                              TraceScaleMul;                                            // 0x0410(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinInfoDistance;                                          // 0x0414(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FactorScale;                                              // 0x0418(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScale;                                                 // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x0420(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RefInfoScale;                                             // 0x0424(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InfoOffset;                                               // 0x0428(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.KillCam"));
		return ptr;
	}

};


// Class Pavlov.GhostPawn
// 0x0050 (0x0B80 - 0x0B30)
class AGhostPawn : public AVRPawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B30(0x0008) MISSED OFFSET
	TArray<class ASpectatorTag*>                       SpectatorTags;                                            // 0x0B38(0x0010) (ZeroConstructor)
	float                                              FreeViewSpeedMul;                                         // 0x0B48(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	class UClass*                                      KillCamClass;                                             // 0x0B50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKillCam*                                    KillCam;                                                  // 0x0B58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInSpectatorRoom;                                         // 0x0B60(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnGrace;                                               // 0x0B61(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0B62(0x0006) MISSED OFFSET
	class UClass*                                      SpectatorTVCameraClass;                                   // 0x0B68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpectatorTagClass;                                        // 0x0B70(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GraceDuration;                                            // 0x0B78(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeViewSpeed;                                            // 0x0B7C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.GhostPawn"));
		return ptr;
	}


	void SpawnTags();
	void OnTraveledToSpectatorRoom();
	void OnTeamIdChanged(int TeamID);
	void OnGraceTimeEnded();
	void EndGraceTime();
	void ClientTravelToSpectatorRoom();
	void ClientSpawnKillCam(const struct FKillInfo& KillInfo);
	void ClearTags();
};


// Class Pavlov.GlobalPlayerEffects
// 0x0080 (0x0408 - 0x0388)
class AGlobalPlayerEffects : public AInfo
{
public:
	class UMaterialInstanceDynamic*                    FlashedMaterialInstance;                                  // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SupressedMaterialInstance;                                // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          PostProcess;                                              // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET
	class UAudioComponent*                             BuzzingSound;                                             // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WindSound;                                                // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x03B8(0x0009) MISSED OFFSET
	EPlayerEffectState                                 State;                                                    // 0x03C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03C2(0x0002) MISSED OFFSET
	float                                              Time;                                                     // 0x03C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // 0x03C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class UMaterial*                                   GhostMaterial;                                            // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   GhostSoundMix;                                            // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   FlashedMaterial;                                          // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   FlashedSoundMix;                                          // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FlashedOpacityCurve;                                      // 0x03F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SupressedMaterial;                                        // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   SupressedSoundMix;                                        // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.GlobalPlayerEffects"));
		return ptr;
	}


	void SwitchState(EPlayerEffectState NewState);
	void InstigateFlash(float Duration);
};


// Class Pavlov.GrenadeAnimInstance
// 0x0038 (0x0400 - 0x03C8)
class UGrenadeAnimInstance : public UVRControllerAnimInstance
{
public:
	EGrenadeState                                      GrenadeState;                                             // 0x03C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	float                                              PinPullRatio;                                             // 0x03CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PullPinVectorTarget;                                      // 0x03D0(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     PullPinVector;                                            // 0x03DC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     PinScale;                                                 // 0x03E8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LeverScale;                                               // 0x03F4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.GrenadeAnimInstance"));
		return ptr;
	}

};


// Class Pavlov.GrenadeTrailProxy
// 0x0020 (0x03A8 - 0x0388)
class AGrenadeTrailProxy : public AActor
{
public:
	class UTrailComponent*                             Trail;                                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInstanceConstant*                   Team0Material;                                            // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   Team1Material;                                            // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x03A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.GrenadeTrailProxy"));
		return ptr;
	}

};


// Class Pavlov.Gun
// 0x0140 (0x0920 - 0x07E0)
class AGun : public AVRGun
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x07E0(0x000C) MISSED OFFSET
	struct FVector                                     GripRefLocation;                                          // 0x07EC(0x000C) (IsPlainOldData)
	bool                                               bHasLegacyGrip;                                           // 0x07F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5F];                                      // 0x07F9(0x005F) MISSED OFFSET
	struct FVector                                     LastTwoHandDirection;                                     // 0x0858(0x000C) (Net, IsPlainOldData)
	struct FVector                                     TwoHandPickOffset;                                        // 0x0864(0x000C) (Net, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0870(0x0001) MISSED OFFSET
	bool                                               bKeepTwoHand;                                             // 0x0871(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0872(0x0002) MISSED OFFSET
	struct FVector                                     AdditionalHandOffset;                                     // 0x0874(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bSideGun;                                                 // 0x0880(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGenerateMagBoltReleaseEvents;                            // 0x0881(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCustomCocking;                                           // 0x0882(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeltaCocking;                                            // 0x0883(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeedsTwoHands;                                           // 0x0884(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0885(0x0003) MISSED OFFSET
	float                                              StockDuration;                                            // 0x0888(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTwoHandSupportOnly;                                      // 0x088C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTwoHandReload;                                           // 0x088D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x088E(0x0002) MISSED OFFSET
	class USoundCue*                                   TwoHandGripSound;                                         // 0x0890(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDropByRecoil;                                            // 0x0898(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsAutoUngrip;                                      // 0x0899(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsMagRelease;                                      // 0x089A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSingleShotDrop;                                          // 0x089B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTwoHandGripDistance;                                   // 0x089C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GripOffset;                                               // 0x08A0(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              MagneticGripDistance;                                     // 0x08AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               MagneticGripSequence;                                     // 0x08B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsteadyRecoilAngleMul;                                   // 0x08B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsteadyRecoilTraslationMul;                              // 0x08BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsteadySpraySpreadMul;                                   // 0x08C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUngrippedRecoil;                                       // 0x08C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUngrippedDuration;                                     // 0x08C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrippedCounterRecoilLimitMul;                             // 0x08CC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExploitSound;                                             // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedModifier;                                            // 0x08E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchAcuracy;                                            // 0x08E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandingAcuracy;                                          // 0x08E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingAcuracy;                                            // 0x08EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                BobCurve;                                                 // 0x08F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed;                                                 // 0x08F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobMultiplier;                                            // 0x08FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobBlendSpeed;                                            // 0x0900(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x0904(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafingMultiplier;                                       // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSideRecoilMul;                                      // 0x090C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMagBoltRelease;                                         // 0x0910(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Gun"));
		return ptr;
	}


	void RecoilDrop();
	void OnUnderExploitChanged(bool bUnderExploit);
	void OnTwoHandGripChanged(bool bEnabled);
	void OnSpawnUnloaded();
	void OnSliderUngrabbed();
	void OnSliderInputReceived(const struct FVector& Input, const struct FVector& InputDelta);
	void OnSliderGrabbed();
	void OnRecoilDropCooldown();
	void MulticastOnRecoilDrop();
	bool IsBeingGrippedBy(class APavlovItemController* ByController);
	bool IsBeingGripped();
};


// Class Pavlov.HitBoxProxyComponent
// 0x0048 (0x0138 - 0x00F0)
class UHitBoxProxyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UBoxComponent*                               BoundingBox;                                              // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NumSamples;                                               // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SampleInterval;                                           // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHitBox>                             HitBoxDefinitions;                                        // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      SkeletonMesh;                                             // 0x0118(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
	TArray<struct FHitBoxHistory>                      History;                                                  // 0x0128(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.HitBoxProxyComponent"));
		return ptr;
	}


	void OnBulletOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Pavlov.HolsterComponent
// 0x0040 (0x0770 - 0x0730)
class UHolsterComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0730(0x0010) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0740(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AllowedClasses;                                           // 0x0748(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDisabled;                                                // 0x0758(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMirrorable;                                              // 0x0759(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x075A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x075B(0x0005) MISSED OFFSET
	class AVRItem*                                     HolsteredItem;                                            // 0x0760(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0768(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.HolsterComponent"));
		return ptr;
	}


	void TakeItem(class APavlovItemController* Controller);
	void ServerTakeItem(class APavlovItemController* Controller);
	void ServerHolster(class AVRItem* Item);
	void OnRep_HolsteredItem();
	void MulticastOnItemHolstered(class AVRItem* Item);
	void MulticastOnDrop(class AVRItem* Item);
	void Mirror();
	void Holster(class AVRItem* Item);
	void Drop();
	void AttachItemLocally();
};


// Class Pavlov.MainMenu
// 0x0020 (0x03A8 - 0x0388)
class AMainMenu : public AActor
{
public:
	class UWidgetComponent*                            UI;                                                       // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ShowSound;                                                // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HideSound;                                                // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bScoreboard;                                              // 0x03A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.MainMenu"));
		return ptr;
	}

};


// Class Pavlov.MuzzleExploitBlocker
// 0x0000 (0x0398 - 0x0398)
class AMuzzleExploitBlocker : public ATriggerBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.MuzzleExploitBlocker"));
		return ptr;
	}

};


// Class Pavlov.PavlovAIController
// 0x00D8 (0x0558 - 0x0480)
class APavlovAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0480(0x0040) MISSED OFFSET
	struct FVector                                     LastKnownAimTarget;                                       // 0x04C0(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x04CC(0x0024) MISSED OFFSET
	TArray<struct FVector>                             SuppresionSources;                                        // 0x04F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bTargetVisible;                                           // 0x0500(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	float                                              TargetDistance;                                           // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanEngage;                                               // 0x0508(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAIEngageState                                     EngageState;                                              // 0x0509(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x050A(0x0002) MISSED OFFSET
	float                                              SkillRatio;                                               // 0x050C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkillMultiplier;                                          // 0x0510(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	struct FAIPersonality                              Personality;                                              // 0x0518(0x0028) (BlueprintVisible)
	float                                              SwitchTargetCooldown;                                     // 0x0540(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibilityCheckInterval;                                  // 0x0544(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuppresedThreashold;                                      // 0x0548(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuppresionCleanUpInterval;                                // 0x054C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReactionDelay;                                            // 0x0550(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutOfSightShootingDuration;                               // 0x0554(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovAIController"));
		return ptr;
	}


	void SetTargetPawn(class APavlovPawn* TargetPawn);
	void OnPawnCollisionBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsSuppressed();
	class APavlovPawn* GetTargetPawn();
};


// Class Pavlov.PavlovAvatarAnimInstance
// 0x0058 (0x0498 - 0x0440)
class UPavlovAvatarAnimInstance : public UVRAvatarAnimInstance
{
public:
	struct FRotator                                    MovingRotationTarget;                                     // 0x0440(0x000C) (IsPlainOldData)
	float                                              MovingRotationLerpRatio;                                  // 0x044C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSprinting;                                               // 0x0450(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	struct FRotator                                    MovingRotation;                                           // 0x0454(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     JointPickup;                                              // 0x0460(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     JointGun;                                                 // 0x046C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     JointGunGripped;                                          // 0x0478(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              HandBlendExp;                                             // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x0488(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGrippingGun;                                           // 0x0489(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPickupRight;                                          // 0x048A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasGunRight;                                             // 0x048B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPickupLeft;                                           // 0x048C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasGunLeft;                                              // 0x048D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x048E(0x0002) MISSED OFFSET
	float                                              HandBlendLeft;                                            // 0x0490(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HandBlendRight;                                           // 0x0494(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovAvatarAnimInstance"));
		return ptr;
	}

};


// Class Pavlov.PavlovGameUserSettings
// 0x0050 (0x0158 - 0x0108)
class UPavlovGameUserSettings : public UGameUserSettings
{
public:
	float                                              PlayerHeight;                                             // 0x0108(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PlayerCrouchHeight;                                       // 0x010C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPlayerRightHanded;                                       // 0x0110(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCalibrated;                                              // 0x0111(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOOBLocomotion;                                           // 0x0112(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTwoHandToggle;                                           // 0x0113(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoUngrip;                                              // 0x0114(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLegacyGrip;                                              // 0x0115(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSnapTurn;                                                // 0x0116(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSnapTurnVive;                                            // 0x0117(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSnapTurnOculus;                                          // 0x0118(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMountFriendly;                                           // 0x0119(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EOnlineRegion                                      PrimaryRegion;                                            // 0x011A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceNoPostProcess;                                      // 0x011B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoSwapHands;                                           // 0x011C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLeftEyeRendering;                                        // 0x011D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSwapControllers;                                         // 0x011E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bVirtualStock;                                            // 0x011F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGripMode                                          GripModeVive;                                             // 0x0120(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGripMode                                          GripModeOculus;                                           // 0x0121(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSmoothTurn;                                              // 0x0122(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0123(0x0001) MISSED OFFSET
	float                                              SmoothTurnRate;                                           // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	ECustomAction                                      MainHandAction;                                           // 0x0128(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ECustomAction                                      OffHandAction;                                            // 0x0129(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoSprint;                                              // 0x012A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSnapTurnDisabled;                                        // 0x012B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLiteFootStepHaptics;                                     // 0x012C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLockInventory;                                           // 0x012D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bHeadLocomotion;                                          // 0x012E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bFreeSpectating;                                          // 0x012F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FSpectatorViews>                     SpectatorViews;                                           // 0x0130(0x0010) (ZeroConstructor, Config)
	bool                                               bInvertTouchpad;                                          // 0x0140(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bArmKillfeed;                                             // 0x0141(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0142(0x0006) MISSED OFFSET
	TArray<uint64_t>                                   MutedPlayers;                                             // 0x0148(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovGameUserSettings"));
		return ptr;
	}


	bool UseOOBLocomotion();
	bool ShouldSwapControllers();
	void SetVirtualStock(class UObject* WorldContextObject, bool bEnabled);
	void SetTwoHandToggle(bool bEnabled);
	void SetTouchpadInverted(bool bInverted);
	void SetSwapControllers(bool bEnabled);
	void SetSnapTurnDisabled(bool bEnabled);
	void SetSnapTurn(bool bEnabled);
	void SetSmoothTurnRate(float Rate);
	void SetSmoothTurn(bool bEnabled);
	void SetResolutionQuality(float Quality);
	void SetPrimaryRegion(EOnlineRegion Region);
	void SetPlayerRightHanded(bool bRightHanded);
	void SetPlayerHeight(float Height);
	void SetOOBLocomotion(bool bUse);
	void SetOffHandAction(ECustomAction Action);
	void SetMountFriendly(bool bFriendly);
	void SetMainHandAction(ECustomAction Action);
	void SetLockInventory(bool bEnabled);
	void SetLiteFootStepHaptics(bool bEnabled);
	void SetLegacyGrip(bool bEnabled);
	void SetLeftEyeRendering(bool bEnabled);
	void SetHeadLocomotion(bool bEnabled);
	void SetGripMode(EGripMode NewGripMode);
	void SetFreeSpectatingEnabled(bool bEnabled);
	void SetAutoUngrip(bool bEnabled);
	void SetAutoSwapHandsEnabled(bool bEnabled);
	void SetAutoSprint(bool bEnabled);
	void SetArmKillfeedEnabled(class UObject* WorldContextObject, bool bEnabled);
	void SendAnalyticEvents();
	void SaveSpectatorView(class UObject* WorldContextObject, int Index, const struct FTransform& Transform);
	void MarkAsCalibrated();
	bool IsTwoHandToggleEnabled();
	bool IsTouchpadInverted();
	bool IsSnapTurnEnabled();
	bool IsSnapTurnDisabled();
	bool IsSmoothTurnEnabled();
	bool IsPostProcessDisabled();
	bool IsPlayerRightHanded();
	bool IsMountFriendly();
	bool IsLiteFootStepHapticsEnabled();
	bool IsLeftEyeRendering();
	bool IsHeadLocomotionEnabled();
	bool IsFreeSpectatingEnabled();
	bool IsCalibrated();
	bool IsAutoUngripEnabled();
	bool IsAutoSwapHandsEnabled();
	bool IsAutoSprintEnabled();
	bool IsArmKillfeedEnabled();
	bool HasLegacyGrip();
	bool GetVirtualStock();
	struct FTransform GetSpectatorView(class UObject* WorldContextObject, int Index);
	float GetSmoothTurnRate();
	EOnlineRegion GetPrimaryRegion();
	float GetPlayerHeight();
	ECustomAction GetOffHandAction();
	ECustomAction GetMainHandAction();
	bool GetLockInventory();
	EGripMode GetGripMode();
	void ForceNoPostProcessing(bool bEnabled);
};


// Class Pavlov.PavlovPawn
// 0x0330 (0x0E60 - 0x0B30)
class APavlovPawn : public AVRPawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B30(0x0008) MISSED OFFSET
	class USkeletalMeshComponent*                      KevlarVestMesh;                                           // 0x0B38(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      HelmetMesh;                                               // 0x0B40(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVRAvatarComponent*                          Avatar;                                                   // 0x0B48(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVHealthComponent*                           HealthComponent;                                          // 0x0B50(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            PlayerInfo;                                               // 0x0B58(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPavlovVoiceComponent*                       VoiceComponent;                                           // 0x0B60(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVRSelectionComponent*                       SelectionComponent;                                       // 0x0B68(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageTrackerComponent*                     DamageTracker;                                            // 0x0B70(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0B78(0x0010) MISSED OFFSET
	struct FEquipmentDefinition                        EquipmentToLoad;                                          // 0x0B88(0x0038)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0BC0(0x0020) MISSED OFFSET
	struct FKillInfo                                   LatestKillInfo;                                           // 0x0BE0(0x0070)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0C50(0x0008) MISSED OFFSET
	float                                              StopSprintTimer;                                          // 0x0C58(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlaySpaceExploitKillTimer;                                // 0x0C5C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UHolsterComponent*                           MainWeaponHolster;                                        // 0x0C60(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWatch*                                      WatchComponent;                                           // 0x0C68(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0C70(0x000C) MISSED OFFSET
	float                                              SlowTimer;                                                // 0x0C7C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bInvulnerable;                                            // 0x0C80(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0C81(0x0003) MISSED OFFSET
	int                                                Armour;                                                   // 0x0C84(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                HelmetArmour;                                             // 0x0C88(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0C8C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bVoiceActive;                                             // 0x0C90(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0C91(0x0003) MISSED OFFSET
	float                                              ImpactWeight;                                             // 0x0C94(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ImpactCurve;                                              // 0x0C98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BloodSplatClass;                                          // 0x0CA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBloodSplats;                                           // 0x0CA8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0CAC(0x0004) MISSED OFFSET
	class UParticleSystem*                             HeadshotParticle;                                         // 0x0CB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotSound;                                            // 0x0CB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FallDamageSound;                                          // 0x0CC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadBoneName;                                             // 0x0CC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ChestBoneName;                                            // 0x0CD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HelmetHitParticle;                                        // 0x0CD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HelmetHitSound;                                           // 0x0CE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnProtectionDuration;                                  // 0x0CE8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlaySpaceLimits;                                          // 0x0CEC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnderPlaySpaceExploit;                                   // 0x0CF8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0CF9(0x0003) MISSED OFFSET
	float                                              PlaySpaceExploitKillDelay;                                // 0x0CFC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraClipProtectionEnabled;                             // 0x0D00(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0D01(0x0003) MISSED OFFSET
	float                                              CameraClipThreashold;                                     // 0x0D04(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraClipMaxDuration;                                    // 0x0D08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0D0C(0x0004) MISSED OFFSET
	class USoundCue*                                   WearArmourSound;                                          // 0x0D10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WearHelmetSound;                                          // 0x0D18(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSlowDuration;                                          // 0x0D20(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitSlowDuration;                                          // 0x0D24(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlowMultiplier;                                           // 0x0D28(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0D2C(0x0004) MISSED OFFSET
	TArray<struct FName>                               SlowBones;                                                // 0x0D30(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   HitSound;                                                 // 0x0D40(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HitSoundShooter;                                          // 0x0D48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitEffect;                                                // 0x0D50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        HitMontages;                                              // 0x0D58(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   RogerSound;                                               // 0x0D68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WatchClass;                                               // 0x0D70(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSZThreashold;                                           // 0x0D78(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0D7C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          XRayMaterialTeam0;                                        // 0x0D80(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          XRayMaterialTeam1;                                        // 0x0D88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPickDisableOnDead;                                       // 0x0D90(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bXRayEnabled;                                             // 0x0D91(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFirstPerson;                                        // 0x0D92(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0D93(0x0001) MISSED OFFSET
	float                                              TimeSinceLastFootStep;                                    // 0x0D94(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SprintFootStepCount;                                      // 0x0D98(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0D9C(0x0004) MISSED OFFSET
	class USoundCue*                                   DefaultFootStepSound;                                     // 0x0DA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DefaultRunFootStepSound;                                  // 0x0DA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ConcreteFootStepSound;                                    // 0x0DB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ConcreteRunFootStepSound;                                 // 0x0DB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MetalFootStepSound;                                       // 0x0DC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MetalRunFootStepSound;                                    // 0x0DC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CarpetFootStepSound;                                      // 0x0DD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CarpetRunFootStepSound;                                   // 0x0DD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FabricFootStepSound;                                      // 0x0DE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FabricRunFootStepSound;                                   // 0x0DE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WoodFootStepSound;                                        // 0x0DF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WoodRunFootStepSound;                                     // 0x0DF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GlassFootStepSound;                                       // 0x0E00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GlassRunFootStepSound;                                    // 0x0E08(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WaterFootStepSound;                                       // 0x0E10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WaterRunFootStepSound;                                    // 0x0E18(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DirtFootStepSound;                                        // 0x0E20(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DirtRunFootStepSound;                                     // 0x0E28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  FootStepHaptic;                                           // 0x0E30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFootStepInterval;                                      // 0x0E38(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollMinDamping;                                        // 0x0E3C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollLifeDuration;                                      // 0x0E40(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollLife;                                              // 0x0E44(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FConstraintProfileProperties>        ConstraintDefaultProfiles;                                // 0x0E48(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0E58(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovPawn"));
		return ptr;
	}


	void WearKevlar(bool bWithHelmet);
	void UpdateLocomotion();
	void TakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	void SetupWatch(class UWatch* WatchComp);
	void SetTeamId(int NewTeamId);
	void ServerReportFallDamage(float Damage);
	void ServerGiveMagazine(bool bOffHand);
	void ServerGive(const struct FName& EquipmentName, const struct FName& Skin);
	void ServerDeployParachute();
	void OnVoiceChanged(bool bTalking, bool bLocal);
	void OnTeamIdChanged();
	void OnRevive(class AActor* OwnerActor);
	void OnRep_TeamId();
	void OnRep_HelmetArmour();
	void OnRep_Armour();
	void OnKill(class AActor* OwnerActor);
	void OnImpactDamage(const struct FImpactDamage& ImpactDamage);
	void OnCameraClipChanged(bool bClipping);
	void MulticastTeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	void MulticastOnWearArmour();
	void MulticastOnReset();
	void MulticastOnRadialDeath(const struct FVector_NetQuantize& Origin);
	void MulticastOnImpactDamage(const struct FImpactDamage& ImpactDamage);
	void MulticastOnHitSlow();
	void MulticastOnHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Normal, class APlayerState* Shooter, bool bOnArmor);
	void MulticastOnHelmetHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Direction);
	void MulticastOnHelmetBlownoff();
	void MulticastOnHeadshot();
	void MulticastAdjustAvatarScale(float PlayerHeight);
	void LoadEquipment(const struct FEquipmentDefinition& Definition);
	bool IsSprinting();
	bool IsDead();
	bool IsCameraClipping();
	void GiveBomb(class ABomb* Bomb);
	void Give(const struct FName& EquipmentName, const struct FName& Skin, bool bWithAmmo, bool bByBuyMenu);
	class UHolsterComponent* GetSideWeaponHolster();
	class APavlovItemController* GetNonDominantController();
	class UHolsterComponent* GetMainWeaponHolster();
	class UHolsterComponent* GetKnifeHolster();
	float GetHealth();
	TArray<class UHolsterComponent*> GetGrenadeHolsters();
	bool GetEquipmentByName(const struct FName& EquipmentName, struct FEquipmentDefinition* Definition);
	class APavlovItemController* GetDominantController();
	class UHolsterComponent* GetBombHolster();
	class UVRPocketComponent* GetAmmoPocket();
	void DropEquipment();
	void ClientClearSoundMix();
	void BlowHelmetOff();
	void AddHitSlow();
	void ActivateCameraClip();
};


// Class Pavlov.PavlovGameState
// 0x0098 (0x0480 - 0x03E8)
class APavlovGameState : public AGameState
{
public:
	TArray<class APavlovPlayerState*>                  TempPlayerArray;                                          // 0x03E8(0x0010) (ZeroConstructor, Transient)
	struct FServerSettings                             Settings;                                                 // 0x03F8(0x0030) (BlueprintVisible, BlueprintReadOnly, Net)
	bool                                               bNoTeams;                                                 // 0x0428(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bMovementDisabled;                                        // 0x0429(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x042A(0x0002) MISSED OFFSET
	int                                                Team0Score;                                               // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                Team1Score;                                               // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundDuration;                                            // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundTime;                                                // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AttackingTeam;                                            // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundWinner;                                              // 0x0440(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class UDataTable*                                  EquipmentCosts;                                           // 0x0448(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	ECompetitiveMode                                   CompetitiveMode;                                          // 0x0450(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	class UDataTable*                                  EquipmentTable;                                           // 0x0458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FKillfeedEntry>                      Killfeed;                                                 // 0x0460(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnKillfeedEntry;                                          // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovGameState"));
		return ptr;
	}


	void MulticastOnKillfeedEntry(const struct FKillfeedEntry& NewEntry);
	int GetTeamScore(int TeamID);
	void GetTeamArray(int TeamID, TArray<class APavlovPlayerState*>* TeamArray);
	void GetSortedPlayerArray(int FilterByTeamId, TArray<class APavlovPlayerState*>* SortedPlayerArray);
	struct FString GetPlayerStringId(class APavlovPlayerState* PlayerState);
	class APavlovPlayerState* GetPlayerStateByStringId(const struct FString& StringId);
	class APavlovPlayerState* GetPlayerByScore(int Index, int TeamID);
	EMatchResult GetMatchResult();
	struct FName GetEquipmentNameByClass(class UClass* ItemClass);
	struct FEquipmentData GetEquipmentDataByClass(class UClass* ItemClass, bool* bSuccess);
	struct FEquipmentData GetEquipmentData(const struct FName& EquipmentName, bool* bSuccess);
	int GetEquipmentCost(const struct FName& EquipmentName);
	void DisplayMatchStateOverlay(class UClass* OverlayClass);
};


// Class Pavlov.PavlovGameMode
// 0x0178 (0x05D0 - 0x0458)
class APavlovGameMode : public ASteamworksGameMode
{
public:
	TArray<class AAIController*>                       Bots;                                                     // 0x0458(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0468(0x0018) MISSED OFFSET
	TArray<struct FAIPersonality>                      BotPersonalities;                                         // 0x0480(0x0010) (ZeroConstructor)
	float                                              DynTeam0SpawnTimer;                                       // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DynTeam1SpawnTimer;                                       // 0x0494(0x0004) (ZeroConstructor, IsPlainOldData)
	class APlayerSpawnPoint*                           DynSpawnPoint0;                                           // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerSpawnPoint*                           DynSpawnPoint1;                                           // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x04A8(0x0088) MISSED OFFSET
	class APavlov_GameLogic*                           CustomGameLogic;                                          // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0538(0x0008) MISSED OFFSET
	bool                                               bSwapSpawns;                                              // 0x0540(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFillWithBots;                                            // 0x0541(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoTeams;                                                 // 0x0542(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlwaysScore;                                             // 0x0543(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceNoScoring;                                          // 0x0544(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeamLocked;                                              // 0x0545(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState                                  RoundState;                                               // 0x0546(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGameDifficulty                                    Difficulty;                                               // 0x0547(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSecure;                                                  // 0x0548(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	class APavlovGameState*                            PavlovGameState;                                          // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPavlovGameModeType                                GameModeType;                                             // 0x0558(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class UClass*                                      BotControllerClass;                                       // 0x0560(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GhostClass;                                               // 0x0568(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  BotPersonalityTable;                                      // 0x0570(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  EquipmentCostTable;                                       // 0x0578(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaximumCash;                                              // 0x0584(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CashKillReward;                                           // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CashTeamKillPenalty;                                      // 0x058C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIncrementTeamScore;                                      // 0x0590(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoRespawn;                                             // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeepBodies;                                              // 0x0592(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeepPawnIfAlive;                                         // 0x0593(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnMaxDelay;                                          // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InactivityInterval;                                       // 0x0598(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InactivityThreashold;                                     // 0x059C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InactivityDormantThreashold;                              // 0x05A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDynamicSpawns;                                           // 0x05A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnGhostOnLogin;                                       // 0x05A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x05A6(0x0002) MISSED OFFSET
	int                                                RoundDuration;                                            // 0x05A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamLockDuration;                                         // 0x05AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowRoundDurationOverride;                              // 0x05B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowWeaponFilter;                                       // 0x05B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowCompetitive;                                        // 0x05B2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoKickOnTK;                                            // 0x05B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	class UClass*                                      BombClass;                                                // 0x05B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x05C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovGameMode"));
		return ptr;
	}


	void TerminateGameSession();
	void SwitchTeam(class AController* Controller);
	void Suicide(class AController* Controller);
	void StopReplayRecording();
	void StartReplayRecording();
	void SpawnPlayer(class AController* Controller);
	void SpawnAndPossesPawns();
	void ShuffleTeams();
	void SetTeamCash(int TeamID, int CashAmmount);
	void SetRoundState(EPavlovRoundState State);
	void SetPawnsInvulnerable(bool bEnabled);
	void SetMovement(bool bEnabled);
	void SetEveryoneCash(int CashAmmount);
	void SetAttackingTeam(int TeamID);
	void RotateMap();
	void ResetScore();
	void PunishTeamKiller(class APavlovPlayerState* TeamKiller);
	void PostRoundCleanUp();
	void PerformServerTravel();
	void OnSteamTicketValidation(const struct FString& SteamUserId, ESteamAuthResponse Response, const struct FString& OwnerSteamUserId);
	void OnRoundStateChanged(EPavlovRoundState OldState, EPavlovRoundState NewState);
	void OnPlayerSpawned(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn);
	void OnPlayerKilled(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn);
	void OnPawnKilled(class AActor* OwnerActor);
	void OnKillVolumeOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void MakeNavmeshStatic();
	void KickByStringId(const struct FString& ID, const struct FText& KickReason, bool bBan);
	bool IsTeamDead(int TeamID);
	void IncrementTeamScore(int TeamID, int Score);
	void IncrementPlayerScore(class APlayerState* PlayerState, int Score);
	void GiveTeamCash(int TeamID, int CashAmmount);
	void GiveItem(class APavlovPawn* Pawn, class UClass* ItemClass, float BlockDuration, bool bLoaded);
	void GiveEveryoneCash(int CashAmmount);
	void GetTeamStatus(int TeamID, int* Num, int* Casualties);
	int GetTeamRealPlayerCount(int TeamID);
	int GetRealPlayerCount();
	class AController* GetRandomController(int TeamFilter, bool bRealPlayer);
	void CreateDedicatedServerSession();
	void CleanUpItems();
	bool CanChangeScore();
	void AddExtraRoundTime(float ExtraTime);
	void AddAssist(class APavlovPlayerState* PlayerState);
};


// Class Pavlov.PavlovLobby
// 0x00D0 (0x01A0 - 0x00D0)
class UPavlovLobby : public USteamLobby
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00D0(0x0050) MISSED OFFSET
	class UPavlovGameInstance*                         GameInstance;                                             // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	ELobbyState                                        LocalState;                                               // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              HostLocallyTimer;                                         // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SanityTimer;                                              // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHostLocally;                                             // 0x0134(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	struct FServerSettings                             ServerSettings;                                           // 0x0138(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     GameMode;                                                 // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Map;                                                      // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapLabel;                                                 // 0x0188(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ELobbyState                                        State;                                                    // 0x0198(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EServerHostingType                                 HostingType;                                              // 0x0199(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFillWithBots;                                            // 0x019A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bConnecting;                                              // 0x019B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CompetitiveMode;                                          // 0x019C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovLobby"));
		return ptr;
	}


	void Start();
	void SetWantToStart(bool bEnabled);
	void SetServerSettings(const struct FServerSettings& NewServerSettings);
	void SetPin(const struct FString& Pin);
	void SetMap(const struct FString& MapName);
	void SetHostingType(EServerHostingType NewHostingType);
	void SetGameMode(const struct FString& NewGameMode);
	void SetFriendsOnly(bool bEnabled);
	void SetFillWithBots(bool bEnabled);
	void SetCompetitiveMode(int CompMode);
	void RequestTeam(int TeamID);
	void MuteMember(int Index, bool bEnabled);
	void KickAndBan(int MemberIndex);
	void Kick(int MemberIndex);
	bool IsPinProtected();
	bool IsMemberMuted(int Index);
	bool IsFriendsOnly();
	struct FString GetRegion();
	struct FString GetPin();
	int GetMemberTeam(int Index);
	int GetLocalUserIndex();
	bool DoesMemberWantsToStart(int Index);
};


// Class Pavlov.PavlovGameInstance
// 0x0340 (0x0430 - 0x00F0)
class UPavlovGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET
	class UClass*                                      PlayerEffectsClass;                                       // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0140(0x0068) MISSED OFFSET
	class UTutorial*                                   Tutorial;                                                 // 0x01A8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              OculusScale;                                              // 0x01B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x01B4(0x0024) MISSED OFFSET
	TArray<class APavlov_Ladder*>                      ProxyLadders;                                             // 0x01D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x18];                                      // 0x01E8(0x0018) MISSED OFFSET
	bool                                               bTV;                                                      // 0x0200(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	class UReplayManager*                              ReplayManager;                                            // 0x0208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x0210(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FString                                     MasterServerSessionId;                                    // 0x0218(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bStopFindingGameServer;                                   // 0x0228(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	TArray<struct FPavlovServerInfo>                   ServerList;                                               // 0x0230(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EMatchmakingState                                  MatchmakingState;                                         // 0x0240(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FString                                     MasterServerUrl;                                          // 0x0248(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	float                                              ServerQueryInterval;                                      // 0x0258(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMatchmakingStateChanged;                                // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuickmatchFailed;                                       // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyStateChanged;                                      // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyStatusMessage;                                     // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerListUpdated;                                      // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetMapListAdvancedResult;                               // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData09[0xE0];                                      // 0x02C0(0x00E0) MISSED OFFSET
	TMap<struct FName, class UPavlov_Map*>             MapDefinitions;                                           // 0x03A0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData10[0x1A];                                      // 0x03F0(0x001A) MISSED OFFSET
	EGameSessionState                                  GameSessionState;                                         // 0x040A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x5];                                       // 0x040B(0x0005) MISSED OFFSET
	class UWorkshop*                                   Workshop;                                                 // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPavlovAdvancedMap>                  AdvancedMapList;                                          // 0x0418(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovGameInstance"));
		return ptr;
	}


	void UpdateServerList(const struct FString& Map, const struct FString& GameMode, bool bFriendsOnly, bool bPrivateOnly);
	void SetMuted(class APavlovPlayerState* PlayerState, bool bEnabled);
	void SetMatchmakingState(EMatchmakingState NewState);
	void RetrieveMasterServerSessionId();
	void ResetTutorial();
	void ReportServerState();
	void QuickMatch();
	void QueryForGameSession();
	void OpenMap_Implementation();
	void OpenMap(const struct FString& Map, const struct FString& Options);
	void OnWorkshopSpecificQuery();
	void OnSteamLobbyListUpdated();
	void OnServerMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& ErrorString);
	void OnLeftLobby(ESteamLobbyChatMemberStateChange StateChange);
	void OnLadderOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnEnterLobby(bool bFailed);
	void OnClientMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnAuthSessionTicketResponse(bool bSucceed, const struct FString& HexAuthTicket);
	void JoinServer(const struct FPavlovServerInfo& ServerInfo);
	bool JoinPinProtectedServer(const struct FPavlovServerInfo& ServerInfo, const struct FString& Pin);
	bool IsMuted(class APavlovPlayerState* PlayerState);
	void InitClientProxies();
	bool HasGameSession();
	class UTutorial* GetTutorial();
	EOnlineRegion GetOnlineRegion();
	float GetOculusScale();
	void GetMapListAdvanced(const struct FPavlov_MapCompatibility& Compatibility);
	TArray<class UPavlov_Map*> GetMapList(const struct FPavlov_MapCompatibility& Compatibility);
	class UPavlov_Map* GetMap(const struct FString& UniqueId);
	void DisplayNetworkFailureMessage();
	void DisplayMessageImpl();
	void DisplayMessage(const struct FString& Message, bool bDeferredDelay);
	void CreateLobby();
	void CreateGameSession();
	void CheckPlacementStatus();
	void CancelServerFind();
	void CancelQuickmatch();
};


// Class Pavlov.PavlovHUD
// 0x0000 (0x0470 - 0x0470)
class APavlovHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovHUD"));
		return ptr;
	}

};


// Class Pavlov.PavlovInventory
// 0x0018 (0x04C0 - 0x04A8)
class APavlovInventory : public AVRInventory
{
public:
	class UStaticMeshComponent*                        AmmoPouchMesh;                                            // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundCue*                                   MagazineGrabSound;                                        // 0x04B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  MagazineGrabHaptic;                                       // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovInventory"));
		return ptr;
	}

};


// Class Pavlov.PavlovItemController
// 0x01B0 (0x0830 - 0x0680)
class APavlovItemController : public AVRItemController
{
public:
	class UWidgetComponent*                            UI;                                                       // 0x0680(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PointerMesh;                                              // 0x0688(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class AMainMenu*                                   MainMenu;                                                 // 0x0690(0x0008) (ZeroConstructor, IsPlainOldData)
	class AKillfeed*                                   Killfeed;                                                 // 0x0698(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06A0(0x0004) MISSED OFFSET
	float                                              SnapTurnTimer;                                            // 0x06A4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x06A8(0x0048) MISSED OFFSET
	struct FTransform                                  TwoHandReloadBasis;                                       // 0x06F0(0x0030) (Net, IsPlainOldData)
	class AGun*                                        TwoHandReloadRefGun;                                      // 0x0720(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGun*                                        TwoHandGripRefGun;                                        // 0x0728(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SelectionHandMesh;                                        // 0x0730(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0738(0x0014) MISSED OFFSET
	float                                              TouchPadXValue;                                           // 0x074C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TouchPadYValue;                                           // 0x0750(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0754(0x0004) MISSED OFFSET
	class AVRItem*                                     Selection;                                                // 0x0758(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDominant;                                                // 0x0760(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchPadLocomotion;                                      // 0x0761(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0762(0x0002) MISSED OFFSET
	struct FVector                                     TwoHandPickOffset;                                        // 0x0764(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     TwoHandDirection;                                         // 0x0770(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bMenuPressed;                                             // 0x077C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	class AUberWheel*                                  WheelInstance;                                            // 0x0780(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TalkHeadDistance;                                         // 0x0788(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FingerPointOffset;                                        // 0x078C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 TouchPadInputCurve;                                       // 0x0798(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SelectionOffset;                                          // 0x07A0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SelectionMaterial;                                        // 0x07D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SelectionObjectType;                                      // 0x07D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07D9(0x0003) MISSED OFFSET
	float                                              SelectionSphereRadius;                                    // 0x07DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 SelectionHandMeshAsset;                                   // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelectionHandMeshScale;                                   // 0x07E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	class USoundCue*                                   SelectionSoundCue;                                        // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SelectionHandLeftMaterial;                                // 0x07F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SelectionHandRightMaterial;                               // 0x0800(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WheelClass;                                               // 0x0808(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MainMenuClass;                                            // 0x0810(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      KillfeedClass;                                            // 0x0818(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSnapTurn;                                               // 0x0820(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovItemController"));
		return ptr;
	}


	void UpdateUIState();
	void SetWheelEnabled(bool bEnabled);
	void SetMenu(bool bEnabled);
	void SetKillfeed(bool bEnabled);
	void OnSelectionPicked(class AVRItem* Item);
	bool IsTwoHandReloadEnabled();
	bool IsTwoHandGripEnabled();
	bool IsMenuActive();
	class APavlovItemController* GetOppositeHandController();
	struct FVector GetFingerPointLocation();
	void ForceTwoHandGrip();
	void ClearWheelInstance();
};


// Class Pavlov.GhostItemController
// 0x0010 (0x0840 - 0x0830)
class AGhostItemController : public APavlovItemController
{
public:
	EGhostPointMode                                    PointMode;                                                // 0x0830(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0831(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.GhostItemController"));
		return ptr;
	}


	void OnPointModeChanged(EGhostPointMode OldPointMode);
	void ChangePointMode(EGhostPointMode NewPointMode);
};


// Class Pavlov.PavlovLevelScriptActor
// 0x0000 (0x0390 - 0x0390)
class APavlovLevelScriptActor : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovLevelScriptActor"));
		return ptr;
	}

};


// Class Pavlov.PavlovLocalPlayer
// 0x0000 (0x01B8 - 0x01B8)
class UPavlovLocalPlayer : public USteamworksLocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovLocalPlayer"));
		return ptr;
	}

};


// Class Pavlov.PavlovPhysicsCollisionHandler
// 0x0000 (0x0040 - 0x0040)
class UPavlovPhysicsCollisionHandler : public UPhysicsCollisionHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovPhysicsCollisionHandler"));
		return ptr;
	}

};


// Class Pavlov.PavlovPlayerCameraManager
// 0x0000 (0x19D0 - 0x19D0)
class APavlovPlayerCameraManager : public APlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovPlayerCameraManager"));
		return ptr;
	}

};


// Class Pavlov.PavlovPlayerController
// 0x00F8 (0x07C0 - 0x06C8)
class APavlovPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x06C8(0x0064) MISSED OFFSET
	float                                              AuthTimeout;                                              // 0x072C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class APavlovPawn*                                 PassengerPawn;                                            // 0x0730(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBuyingEnabled;                                           // 0x0738(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBoughtSomething;                                      // 0x0739(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x073A(0x0006) MISSED OFFSET
	struct FEquipmentSnapshot                          EquipmentSnapshot;                                        // 0x0740(0x0020) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bHasEquipmentSnapshot;                                    // 0x0760(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreEquipment;                                        // 0x0761(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0762(0x0006) MISSED OFFSET
	class UClass*                                      LastWeaponBuy;                                            // 0x0768(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LastSecondaryWeaponBuy;                                   // 0x0770(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          TeamKiller;                                               // 0x0778(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MessageClass;                                             // 0x0780(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  KillPingSound;                                            // 0x0788(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBuyingChanged;                                          // 0x0790(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamKilled;                                             // 0x07A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x07B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovPlayerController"));
		return ptr;
	}


	void UnBoardVehicle();
	void TryRestoreEquipmentBySnapshot();
	void TestTeamKill();
	void TakeEquipmentSnapshot();
	void SwitchToSpectator();
	void SwitchTeam();
	void SwapControllers();
	void Suicide();
	void SetServerTickRate(int Rate);
	void SetHeadMountedDisplayScale(float Scale);
	void SetBuyingEnabled(float ForDuration, float BuyZoneMaxDistance);
	void ServerVote(class AVote* Vote, bool bYes);
	void ServerUnBoardVehicle();
	void ServerTestTeamKill();
	void ServerSwitchTeam();
	void ServerSuicide();
	void ServerSetServerTickRate(int Rate);
	void ServerReportZombieBulletHit(const struct FClientZombieBulletHit& Hit);
	void ServerReportVirtualStockChange(bool bEnabled);
	void ServerReportTrigger(class AGun* Gun, bool bTrigger, TArray<unsigned char> GunState);
	void ServerReportShatter(class ADestructible* Destructible, const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location);
	void ServerReportBulletHit(const struct FClientBulletHit& Hit);
	void ServerInstigateVote(class UClass* VoteClass, const struct FString& Param1, int Param2);
	void ServerEnterDigit(class ABomb* Bomb, int Index);
	void ServerBuy(const struct FName& EquipmentName);
	void ServerBoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat);
	void ServerAuthenticate(const struct FString& HexTicket);
	void ServerAbstainToVote();
	void PunishTeamKiller();
	void OnAuthTimedout();
	void OnAuthTicketReceived(bool bSucceed, const struct FString& HexAuthTicket);
	void MulticastDebugPoint(const struct FVector& Location, const struct FString& Text);
	void ForgiveTeamKiller();
	void ClientVoiceChat(class USteamVoiceComponent* VoiceComponent, const struct FSteamworksVoicePacket& VoicePacket);
	void ClientSetBuying(bool bEnabled);
	void ClientReportMatchEnd();
	void ClientPlayKillPing();
	void ClientOnTeamKilled(class APavlovPlayerState* CulpritTeamKiller);
	void ClientInstigateFlash(float Seconds);
	void ClientDisplayMessage(const struct FString& Message);
	void ClientAuthenticate();
	void Buy(const struct FName& EquipmentName);
	void BoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat);
};


// Class Pavlov.PavlovPlayerState
// 0x0048 (0x0460 - 0x0418)
class APavlovPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0420(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0424(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x0428(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x042C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // 0x0430(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x0434(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Progress;                                                 // 0x0438(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x043C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDev;                                                     // 0x043D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x043E(0x0002) MISSED OFFSET
	int                                                RespawnCountdown;                                         // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              PlayerHeight;                                             // 0x0444(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x0448(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bVirtualStock;                                            // 0x0449(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanVote;                                                 // 0x044A(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bAuthenticated;                                           // 0x044B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LifeTeamKillCount;                                        // 0x044C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtraRespawnCountdown;                                    // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnGhost;                                              // 0x0454(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0455(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovPlayerState"));
		return ptr;
	}


	void Reset();
};


// Class Pavlov.PavlovSpectatorPawn
// 0x0050 (0x0460 - 0x0410)
class APavlovSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0410(0x0040) MISSED OFFSET
	bool                                               bIsScrubing;                                              // 0x0450(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	class UPlayerCycler*                               Cycler;                                                   // 0x0458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovSpectatorPawn"));
		return ptr;
	}


	void ScrubToLive();
	void ScrubRelative(float Seconds);
	void ScrubNormalized(float NormalizedTime);
	void Scrub(float Time);
	void OnScrubChanged(bool bScrubing);
	void OnGotoTime(bool bWasSuccessful);
	void OnDemoPlaybackError(TEnumAsByte<EDemoPlayFailure> FailureType, const struct FString& ErrorString);
	float GetNormalizedScrubTime();
};


// Class Pavlov.PavlovStatics
// 0x0000 (0x0028 - 0x0028)
class UPavlovStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovStatics"));
		return ptr;
	}


	void STATIC_SwapHands(class UObject* WorldContextObject);
	void STATIC_SpawnLocalSound2DByPawn(class APawn* Pawn, class USoundBase* Sound);
	void STATIC_SpawnLocalSound2D(class APlayerController* Controller, class USoundBase* Sound);
	void STATIC_SetPlayerEffectsDisabled(class UObject* WorldContextObject, bool bDisabled);
	bool STATIC_IsReplay(class UObject* WorldContextObject);
	bool STATIC_IsPlayingOnlineGame(class UObject* WorldContextObject);
	bool STATIC_IsOculusTouch();
	bool STATIC_IsBombDropped(class UObject* WorldContextObject);
	class UWorkshop* STATIC_GetWorkshop(class UObject* WorldContextObject);
	class UTutorial* STATIC_GetTutorial(class UObject* WorldContextObject);
	class ASpectatorTVCamera* STATIC_GetSpectatorTVCamera(class UObject* WorldContextObject);
	void STATIC_GetPlayerEquipment(class APlayerState* PlayerState, struct FName* Primary, TArray<struct FName>* Secondary);
	class AGlobalPlayerEffects* STATIC_GetPlayerEffects(class UObject* WorldContextObject);
	class APavlovPawn* STATIC_GetPawnByPlayerState(class UObject* WorldContextObject, class APlayerState* PlayerState);
	class UPavlovLobby* STATIC_GetPavlovLobby(class UObject* WorldContextObject);
	class UPavlovGameUserSettings* STATIC_GetPavlovGameUserSettings();
	class APavlovPlayerState* STATIC_GetLocalPlayerState(class UObject* WorldContextObject);
	struct FTransform STATIC_GetLocalPlayerCameraTransform(class UObject* WorldContextObject);
	class ABomb* STATIC_GetBombInstance(class UObject* WorldContextObject);
	class ABombPlantSpot* STATIC_FindClosestBombPlantSpot(class UObject* WorldContextObject, const struct FVector& RefLocation);
	bool STATIC_ArePawnsHostile(class UObject* WorldContextObject, class APawn* A, class APawn* B);
};


// Class Pavlov.PavlovVehicleAnimInstance
// 0x0000 (0x0750 - 0x0750)
class UPavlovVehicleAnimInstance : public UVehicleAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovVehicleAnimInstance"));
		return ptr;
	}

};


// Class Pavlov.PavlovVoiceComponent
// 0x0000 (0x0630 - 0x0630)
class UPavlovVoiceComponent : public USteamVoiceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovVoiceComponent"));
		return ptr;
	}

};


// Class Pavlov.PavlovWheeledVehicle
// 0x0058 (0x0450 - 0x03F8)
class APavlovWheeledVehicle : public AWheeledVehicle
{
public:
	class UAudioComponent*                             EngineAudio;                                              // 0x03F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             RollingAudio;                                             // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0408(0x0018) MISSED OFFSET
	class USoundCue*                                   EngineSound;                                              // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineStartSound;                                         // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineOffSound;                                           // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineReverseSound;                                       // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EngineSocket;                                             // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RollingSound;                                             // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PavlovWheeledVehicle"));
		return ptr;
	}


	void SetSteeringInput(float Input);
};


// Class Pavlov.PivotComponent
// 0x0010 (0x0310 - 0x0300)
class UPivotComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PivotComponent"));
		return ptr;
	}

};


// Class Pavlov.PlayerCycler
// 0x0020 (0x0048 - 0x0028)
class UPlayerCycler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PlayerCycler"));
		return ptr;
	}


	void GetNext(class APavlovPlayerState** PlayerState, class APavlovPawn** Pawn);
};


// Class Pavlov.PlayerSpawnPoint
// 0x0020 (0x03D8 - 0x03B8)
class APlayerSpawnPoint : public APlayerStart
{
public:
	int                                                TeamID;                                                   // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamic;                                                 // 0x03BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyTeam;                                                // 0x03BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUnStack;                                             // 0x03BE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03BF(0x0001) MISSED OFFSET
	struct FVector                                     CountHalfExtent;                                          // 0x03C0(0x000C) (Edit, IsPlainOldData)
	int                                                SpawnCount;                                               // 0x03CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VisibilityCountTeam0;                                     // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VisibilityCountTeam1;                                     // 0x03D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PlayerSpawnPoint"));
		return ptr;
	}

};


// Class Pavlov.Pliers
// 0x0040 (0x0570 - 0x0530)
class APliers : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	EPliersState                                       State;                                                    // 0x0538(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0539(0x0003) MISSED OFFSET
	float                                              CutDelay;                                                 // 0x053C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReleaseDelay;                                             // 0x0540(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	class USoundCue*                                   CutSound;                                                 // 0x0548(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CuttingSound;                                             // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ReleaseSound;                                             // 0x0558(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CutLocationSocket;                                        // 0x0560(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0568(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Pliers"));
		return ptr;
	}


	void ServerReportCut(class ABomb* Bomb, int WireIndex);
	void MulticastOnCut();
};


// Class Pavlov.RadioToggleComponent
// 0x0020 (0x0760 - 0x0740)
class URadioToggleComponent : public UBoxComponent
{
public:
	class UHapticFeedbackEffect_Base*                  ToggleHaptic;                                             // 0x0740(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ToggleSound;                                              // 0x0748(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RogerSound;                                               // 0x0750(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0758(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.RadioToggleComponent"));
		return ptr;
	}

};


// Class Pavlov.Rat
// 0x0020 (0x07C0 - 0x07A0)
class ARat : public ACharacter
{
public:
	class UVHealthComponent*                           HealthComponent;                                          // 0x07A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07A8(0x0004) MISSED OFFSET
	float                                              ImpactWeight;                                             // 0x07AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ImpactCurve;                                              // 0x07B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Rat"));
		return ptr;
	}


	void OnRevive(class AActor* ActorOwner);
	void OnKill(class AActor* ActorOwner);
	void ApplyImpact();
};


// Class Pavlov.RatAIController
// 0x0018 (0x0498 - 0x0480)
class ARatAIController : public AAIController
{
public:
	class AVRPawn*                                     TargetPawn;                                               // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0488(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.RatAIController"));
		return ptr;
	}

};


// Class Pavlov.RatAnimInstance
// 0x0050 (0x03A8 - 0x0358)
class URatAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0358(0x0018) MISSED OFFSET
	float                                              MovingSpeedReference;                                     // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingSpeed;                                              // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PelvisRotation;                                           // 0x0378(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    SpineRotation;                                            // 0x0384(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              SpineLerpExp;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMoving;                                                  // 0x0394(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFalling;                                                 // 0x0395(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLookAt;                                                  // 0x0396(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0397(0x0001) MISSED OFFSET
	struct FVector                                     LookAtLocation;                                           // 0x0398(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.RatAnimInstance"));
		return ptr;
	}

};


// Class Pavlov.ReplayManager
// 0x0040 (0x0068 - 0x0028)
class UReplayManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<struct FReplayInfo>                         ReplayList;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnReplayListUpdated;                                      // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReplayPlay;                                             // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ReplayManager"));
		return ptr;
	}


	void PlayReplay(const struct FString& ReplayId);
	void OnCustomMapDownloaded(bool bSucceed, const struct FString& ID);
	void Find(const struct FString& GameMode, bool bCompetitive);
};


// Class Pavlov.ReplayPawn
// 0x0000 (0x03E8 - 0x03E8)
class AReplayPawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ReplayPawn"));
		return ptr;
	}

};


// Class Pavlov.ReplayPlayerController
// 0x0000 (0x06C8 - 0x06C8)
class AReplayPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ReplayPlayerController"));
		return ptr;
	}

};


// Class Pavlov.RevolverGunState
// 0x0018 (0x0178 - 0x0160)
class URevolverGunState : public UVRGunState
{
public:
	bool                                               bCylinderOpen;                                            // 0x0160(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRevolverCylinderChanged;                                // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.RevolverGunState"));
		return ptr;
	}


	void SetCylinder(bool bOpen);
};


// Class Pavlov.SkinAsset
// 0x0028 (0x0050 - 0x0028)
class USkinAsset : public UDataAsset
{
public:
	int                                                DefinitionId;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UClass*                                      For;                                                      // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSimplified;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaterialOverrideIndex;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.SkinAsset"));
		return ptr;
	}

};


// Class Pavlov.SkinComponent
// 0x0018 (0x0108 - 0x00F0)
class USkinComponent : public UActorComponent
{
public:
	class USkinAsset*                                  Skin;                                                     // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSkinChanged;                                            // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.SkinComponent"));
		return ptr;
	}


	void RequestSkin(class USkinAsset* RequestedSkin);
	void OnRep_Skin();
};


// Class Pavlov.SpectatorTag
// 0x0060 (0x03E8 - 0x0388)
class ASpectatorTag : public AActor
{
public:
	class USceneComponent*                             Pivot;                                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             NamePivot;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        VerticalLine;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET
	bool                                               bRaised;                                                  // 0x03B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFadingOut;                                               // 0x03B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03B2(0x0002) MISSED OFFSET
	float                                              RaiseTime;                                                // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RaiseDuration;                                            // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RaiseHeight;                                              // 0x03BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineGirth;                                                // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class UCurveVector*                                RaiseCurve;                                               // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FadeOutCurve;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RaiseSound;                                               // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.SpectatorTag"));
		return ptr;
	}


	void OnFadeOut();
	class APavlovPlayerState* GetPlayerState();
};


// Class Pavlov.SpectatorTV
// 0x0000 (0x0388 - 0x0388)
class ASpectatorTV : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.SpectatorTV"));
		return ptr;
	}

};


// Class Pavlov.SpectatorTVCamera
// 0x0030 (0x03B8 - 0x0388)
class ASpectatorTVCamera : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	class USceneCaptureComponent2D*                    SceneCapture;                                             // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	class APavlovPawn*                                 FocusedPawn;                                              // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x03A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamOnly;                                                // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCycle;                                               // 0x03AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	float                                              YawExp;                                                   // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoCycleRate;                                            // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.SpectatorTVCamera"));
		return ptr;
	}


	void OnAttachedToFocusedPawn();
	class USceneCaptureComponent2D* GetSceneCapture();
	void Cycle();
	void AddYawInput(float Value);
};


// Class Pavlov.StereoOverlay
// 0x0028 (0x03B0 - 0x0388)
class AStereoOverlay : public AActor
{
public:
	EStereoOverlayMode                                 Mode;                                                     // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              Distance;                                                 // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Height;                                                   // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tilt;                                                     // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForce;                                                   // 0x039C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDominant;                                                // 0x039D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	float                                              SidearmLength;                                            // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SidearmHeight;                                            // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SidearmSmoothRatio;                                       // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.StereoOverlay"));
		return ptr;
	}

};


// Class Pavlov.Killfeed
// 0x0020 (0x03D0 - 0x03B0)
class AKillfeed : public AStereoOverlay
{
public:
	bool                                               bDisplayInArm;                                            // 0x03B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bKillfeedVisible;                                         // 0x03B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03B2(0x0002) MISSED OFFSET
	float                                              FadeRatio;                                                // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeSpeed;                                                // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x03BC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              KillfeedTilt;                                             // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Killfeed"));
		return ptr;
	}


	void Show();
	void OnDisplayModeUpdated();
	void Hide();
};


// Class Pavlov.PostMatchSummary
// 0x0000 (0x03B0 - 0x03B0)
class APostMatchSummary : public AStereoOverlay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.PostMatchSummary"));
		return ptr;
	}

};


// Class Pavlov.StereoMessage
// 0x0010 (0x03C0 - 0x03B0)
class AStereoMessage : public AStereoOverlay
{
public:
	struct FString                                     Message;                                                  // 0x03B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.StereoMessage"));
		return ptr;
	}

};


// Class Pavlov.Vote
// 0x00B8 (0x0468 - 0x03B0)
class AVote : public AStereoOverlay
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03B0(0x0050) MISSED OFFSET
	unsigned char                                      YesVotes;                                                 // 0x0400(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NoVotes;                                                  // 0x0401(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TimeLeft;                                                 // 0x0402(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EVoteState                                         State;                                                    // 0x0403(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CensusNum;                                                // 0x0404(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	struct FString                                     VoteInstigatorName;                                       // 0x0410(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	uint64_t                                           VoteInstigator;                                           // 0x0420(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param1;                                                   // 0x0428(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                Param2;                                                   // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              VoteTimer;                                                // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Percentage;                                               // 0x0440(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeamVote;                                                // 0x0444(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	float                                              VoteDuration;                                             // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x044C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GraceDuration;                                            // 0x0450(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVoteEnd;                                                // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Vote"));
		return ptr;
	}


	void OnVoteEnded(bool bSucceeded);
	void MulticastOnVoteEnded(bool bSucceeded);
};


// Class Pavlov.TextureWidgetComponent
// 0x0000 (0x0950 - 0x0950)
class UTextureWidgetComponent : public UWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.TextureWidgetComponent"));
		return ptr;
	}

};


// Class Pavlov.Watch
// 0x0040 (0x0990 - 0x0950)
class UWatch : public UTextureWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0950(0x000C) MISSED OFFSET
	float                                              Health;                                                   // 0x095C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Armor;                                                    // 0x0960(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasHelmet;                                               // 0x0964(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	class UTexture2D*                                  VictimAvatar;                                             // 0x0968(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KillConfirmationOpacity;                                  // 0x0970(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KillConfirmationDuration;                                 // 0x0974(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillConfirmationFadeSpeed;                                // 0x0978(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	class USoundCue*                                   KillConfirmationSound;                                    // 0x0980(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  KillConfirmationFailoverAvatar;                           // 0x0988(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Watch"));
		return ptr;
	}


	void OnKillfeedEntry(const struct FKillfeedEntry& NewEntry);
	void OnKillConfirmationPush(class APavlovPlayerState* Victim);
	class USceneComponent* GetWatchAttachComponent();
};


// Class Pavlov.ToolTip
// 0x0050 (0x03D8 - 0x0388)
class AToolTip : public AActor
{
public:
	class UObject*                                     Context;                                                  // 0x0388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContextLocation;                                          // 0x0390(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	EToolTipState                                      State;                                                    // 0x039C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // 0x039D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	float                                              Timer;                                                    // 0x03A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	struct FName                                       ID;                                                       // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInsist;                                                  // 0x03B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ShowSound;                                                // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TerminateSound;                                           // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TerminateCompletedSound;                                  // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoAttach;                                              // 0x03D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              SelfDestroyDuration;                                      // 0x03D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ToolTip"));
		return ptr;
	}


	float GetFadeScalar();
};


// Class Pavlov.TrailComponent
// 0x0040 (0x0860 - 0x0820)
class UTrailComponent : public UCustomMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0820(0x0028) MISSED OFFSET
	float                                              PointLifeSpan;                                            // 0x0848(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointRate;                                                // 0x084C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointDistance;                                            // 0x0850(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailGirth;                                               // 0x0854(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopped;                                                 // 0x0858(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0859(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.TrailComponent"));
		return ptr;
	}

};


// Class Pavlov.Tutorial
// 0x00C0 (0x00E8 - 0x0028)
class UTutorial : public UObject
{
public:
	TArray<struct FName>                               ToolTipsCompleted;                                        // 0x0028(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0038(0x00A0) MISSED OFFSET
	class UPavlovGameInstance*                         Instance;                                                 // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObjectLibrary*                              ToolTipLibrary;                                           // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Tutorial"));
		return ptr;
	}


	void TerminateToolTip(const struct FName& ID);
	void ShowToolTip(const struct FName& ID, class UObject* Context, const struct FVector& ContextLocation);
	void Reset();
	void MarkToolTipAsComplete(const struct FName& ID);
	bool IsToolTipCompleted(const struct FName& ID);
	int GetToolTipInstanceCount();
};


// Class Pavlov.TwoHandGripComponent
// 0x0000 (0x0740 - 0x0740)
class UTwoHandGripComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.TwoHandGripComponent"));
		return ptr;
	}

};


// Class Pavlov.UberWheel
// 0x0078 (0x0400 - 0x0388)
class AUberWheel : public AActor
{
public:
	class UWidgetComponent*                            WidgetComponent;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	float                                              CenterRadius;                                             // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class USoundBase*                                  EnableSound;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CommitSound;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SelectSound;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ToggleCurve;                                              // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ToggleDuration;                                           // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	TArray<struct FWheelSegment>                       Segments;                                                 // 0x03C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Selected;                                                 // 0x03D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchPressed;                                            // 0x03DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTouched;                                                 // 0x03DD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03DE(0x0002) MISSED OFFSET
	struct FVector2D                                   TouchPosition;                                            // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              TouchAngle;                                               // 0x03E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWheelUpdate;                                            // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.UberWheel"));
		return ptr;
	}


	void UpdateSegments(TArray<struct FWheelSegment> NewSegments);
	void SetEnabled(bool bEnabled);
	void OnUpdateSegment(class UUserWidget* Instance, class UUserWidget* ContentInstance, struct FWheelSegment* Segment);
	void OnEnabled();
	void OnCommit(int Selection, const struct FWheelSegment& Segment);
	bool IsEnabled();
};


// Class Pavlov.Waypoint
// 0x0028 (0x03B0 - 0x0388)
class AWaypoint : public AActor
{
public:
	TArray<struct FWaypointInfo>                       WaypointInfos;                                            // 0x0388(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	class AWaypoint*                                   NextA;                                                    // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AWaypoint*                                   NextB;                                                    // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Waypoint"));
		return ptr;
	}


	class AWaypoint* GetNextWaypointTo(class AWaypoint* TargetWaypoint, int Seed);
	class AWaypoint* STATIC_GetClosestWaypoint(class UObject* WorldContextObject, const struct FVector& Location, bool bOnlyLeaf, bool bUseNavMesh);
};


// Class Pavlov.Workshop
// 0x03C8 (0x03F0 - 0x0028)
class UWorkshop : public UObject
{
public:
	unsigned char                                      UnknownData00[0x208];                                     // 0x0028(0x0208) MISSED OFFSET
	TMap<struct FName, class UTexture2D*>              MapPreviews;                                              // 0x0230(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0280(0x0070) MISSED OFFSET
	bool                                               bQueryingCustomMaps;                                      // 0x02F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	TArray<struct FWorkshopItem>                       CustomMaps;                                               // 0x02F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bSteamServerConnected;                                    // 0x0308(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0309(0x0007) MISSED OFFSET
	class UPavlovGameInstance*                         Instance;                                                 // 0x0310(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0318(0x0050) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCustomMapDownloadCompleted;                             // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpecificCustomMapQueryCompleted;                        // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCustomMapQueryCompleted;                                // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSubscriptionChanged;                                    // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDownloadBegin;                                          // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDownloadProgress;                                       // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreviewLoaded;                                          // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestUserVote;                                        // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Workshop"));
		return ptr;
	}


	void Vote(const struct FName& ID, bool bUp);
	void Unsubscribe(const struct FName& ID);
	void SubscribeTo(const struct FName& ID);
	void RequestUserVote(const struct FName& ID);
	void QueryForSpecificCustomMaps(TArray<struct FName> UniqueIds);
	void QueryForCustomMaps(EWorkshopQueryType QueryType);
	int QueryDownloadProgress();
	void OnCustomMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnAfterMount();
	bool IsSubscribedTo(const struct FName& ID);
	bool IsCustomMapId(const struct FString& CustomMapId);
	class UTexture2D* GetPreviewTexture(const struct FName& ID);
	struct FName GetCurrentDownloadId();
	void DownloadTest();
	void DownloadCustomMap(const struct FString& ID);
	void CheckForDownload();
};


// Class Pavlov.Zombie
// 0x00B0 (0x0850 - 0x07A0)
class AZombie : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x07A0(0x0060) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            WoundMaterials;                                           // 0x0800(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      Health;                                                   // 0x0810(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x0811(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0812(0x0002) MISSED OFFSET
	int                                                WoundIndex;                                               // 0x0814(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0818(0x0010) MISSED OFFSET
	struct FName                                       HeadBoneName;                                             // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxWounds;                                                // 0x0830(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	TArray<class UZombieWound*>                        WoundTypes;                                               // 0x0838(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0848(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.Zombie"));
		return ptr;
	}


	void Revive();
	void OnRep_Health();
	void OnRep_Dead();
	void Kill();
	bool IsDead();
	void AddWound(EZombieWoundType Type, const struct FName& RefBone, const struct FVector& Location, float Scale);
};


// Class Pavlov.ZombieAIController
// 0x0000 (0x0480 - 0x0480)
class AZombieAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ZombieAIController"));
		return ptr;
	}

};


// Class Pavlov.ZombieAnimInstance
// 0x0030 (0x0388 - 0x0358)
class UZombieAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0358(0x0018) MISSED OFFSET
	float                                              MovingSpeedReference;                                     // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingSpeed;                                              // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMoving;                                                  // 0x0378(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFalling;                                                 // 0x0379(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x037A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLookAt;                                                  // 0x037B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x037C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ZombieAnimInstance"));
		return ptr;
	}

};


// Class Pavlov.ZombieSkeletalMeshComponent
// 0x0030 (0x0F30 - 0x0F00)
class UZombieSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0F00(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ZombieSkeletalMeshComponent"));
		return ptr;
	}

};


// Class Pavlov.ZombieWound
// 0x0070 (0x0098 - 0x0028)
class UZombieWound : public UDataAsset
{
public:
	EZombieWoundType                                   Type;                                                     // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0028(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       DismemberBone;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               SecondaryMesh;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EllipsoidCenter;                                          // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              EllipsoidScale;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    EllipsoidRotation;                                        // 0x0058(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EllipsoidSize;                                            // 0x0064(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WoundSound;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PrimaryParticle;                                          // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PrimaryParticleSocket;                                    // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SecondaryParticle;                                        // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SecondaryParticleSocket;                                  // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Pavlov.ZombieWound"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
