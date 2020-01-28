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
		static auto ptr = UObject::FindClass("Class Pavlov.ActionGunState");
		return ptr;
	}


	void SetAction(float NewValue);
	void OpenAction();
	void CloseAction();
};


// Class Pavlov.AirplaneRoyale
// 0x0020 (0x0348 - 0x0328)
class AAirplaneRoyale : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0328(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x032C(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Traveled;                                                 // 0x0338(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTraveling;                                               // 0x033C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	float                                              TravelSpeed;                                              // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AirplaneRoyale");
		return ptr;
	}


	void StartTravel();
	void SetAsBase(class APavlovPawn* Pawn);
	void OnRep_Traveled();
	void ClearBase(class APavlovPawn* Pawn);
};


// Class Pavlov.AmmoBox
// 0x0010 (0x04E0 - 0x04D0)
class AAmmoBox : public AVRItem
{
public:
	int                                                AmmoCount;                                                // 0x04D0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x04D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AmmoBox");
		return ptr;
	}


	void SetAmmoCount(int NewAmmoCount);
	void OnRep_AmmoCount();
	void OnAmmoCountChanged();
};


// Class Pavlov.AmmoPouchComponent
// 0x0020 (0x0610 - 0x05F0)
class UAmmoPouchComponent : public UStaticMeshComponent
{
public:
	class UHapticFeedbackEffect_Base*                  GrabHaptic;                                               // 0x05F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GrabSound;                                                // 0x05F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  LastMagazineHaptic;                                       // 0x0600(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  EmptyGrabHaptic;                                          // 0x0608(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AmmoPouchComponent");
		return ptr;
	}

};


// Class Pavlov.Attachment
// 0x0030 (0x0500 - 0x04D0)
class AAttachment : public AVRItem
{
public:
	bool                                               bGunTickActive;                                           // 0x04D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedsGunTick;                                            // 0x04D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocalGunTickOnly;                                        // 0x04D2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04D3(0x0001) MISSED OFFSET
	struct FVector                                     AttachOffset;                                             // 0x04D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Compatibility;                                            // 0x04E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	class USoundCue*                                   AttachSound;                                              // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DettachSound;                                             // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Attachment");
		return ptr;
	}


	void OnGunTickChanged(bool bEnabled);
	void GunTick(float DeltaTime);
};


// Class Pavlov.AttachmentGrip
// 0x0040 (0x0540 - 0x0500)
class AAttachmentGrip : public AAttachment
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0500(0x0030) MISSED OFFSET
	float                                              VerticalRecoilMul;                                        // 0x0530(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SideToSideRecoilMul;                                      // 0x0534(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               GripSequence;                                             // 0x0538(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentGrip");
		return ptr;
	}

};


// Class Pavlov.AttachmentSight
// 0x0060 (0x0560 - 0x0500)
class AAttachmentSight : public AAttachment
{
public:
	class UMaterialInstanceDynamic*                    ZeroMaterial;                                             // 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class UShowOnlyComponent*                          ShowOnlyComp;                                             // 0x0508(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bCaptureScene;                                            // 0x0510(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideGunOnCapture;                                        // 0x0511(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideSelfOnCapture;                                       // 0x0512(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0513(0x0005) MISSED OFFSET
	class UTextureRenderTarget2D*                      CaptureTexture;                                           // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CaptureOffset;                                            // 0x0520(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LenseOffset;                                              // 0x052C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivateDist;                                             // 0x0538(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivateDistLine;                                         // 0x053C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseFOV;                                                  // 0x0540(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MulFOV;                                                   // 0x0544(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DivFOV;                                                   // 0x0548(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bZeroMaterial;                                            // 0x054C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	struct FName                                       ZeroParamName;                                            // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ZeroingTable;                                             // 0x0558(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentSight");
		return ptr;
	}


	class UMeshComponent* GetLenseMesh(int* MaterialIndex);
	void ApplyZeroing(float Delta);
};


// Class Pavlov.AttachmentSuppressor
// 0x0000 (0x0500 - 0x0500)
class AAttachmentSuppressor : public AAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AttachmentSuppressor");
		return ptr;
	}

};


// Class Pavlov.AvatarSkin
// 0x0070 (0x0160 - 0x00F0)
class UAvatarSkin : public UActorComponent
{
public:
	TArray<class UActorComponent*>                     UsedComponents;                                           // 0x00F0(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UWoundComponent*                             WoundComponent;                                           // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	class USkeletalMesh*                               BaseMesh;                                                 // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               HandMesh;                                                 // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 AmmoPouchMesh;                                            // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FlyingHelmetClass;                                        // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PelvisZOffset;                                            // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class UAnimSequence*                               EyeLidSequence;                                           // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WoundClass;                                               // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SkullSocket;                                              // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMeshComponent*>                      MeshComponents;                                           // 0x0150(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AvatarSkin");
		return ptr;
	}


	void Update();
	void SetStencilValue(unsigned char Value);
	void SetRenderToCustomDepth(bool bEnabled);
	void RemoveUsedComponent(class UActorComponent* Component);
	class APavlovPawn* GetPawn();
	class USkeletalMeshComponent* GetBaseMeshComponent();
	class USkeletalMeshComponent* CreateChildSkeletalMeshComponent(class USkeletalMesh* SkeletalMesh);
	void AddUsedComponent(class UActorComponent* Component);
};


// Class Pavlov.AzureGameMode
// 0x0000 (0x0410 - 0x0410)
class AAzureGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AzureGameMode");
		return ptr;
	}


	void Travel();
};


// Class Pavlov.AzureGameState
// 0x0000 (0x0388 - 0x0388)
class AAzureGameState : public AGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AzureGameState");
		return ptr;
	}

};


// Class Pavlov.AzureServer
// 0x00C0 (0x00E8 - 0x0028)
class UAzureServer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	float                                              NoPlayersTimer;                                           // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EndGraceTimer;                                            // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	bool                                               bReady;                                                   // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchOver;                                               // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FString                                     SessionId;                                                // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Region;                                                   // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     IPV4Address;                                              // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SessionCookie;                                            // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     QueueName;                                                // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TravelURL;                                                // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxWaitTime;                                              // 0x00B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TickRate;                                                 // 0x00BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBackfillEnabled;                                         // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchmakingServer;                                       // 0x00C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x16];                                      // 0x00C2(0x0016) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReady;                                                  // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.AzureServer");
		return ptr;
	}


	void SoftTick();
};


// Class Pavlov.PavlovGameMode
// 0x0178 (0x0588 - 0x0410)
class APavlovGameMode : public ASteamworksGameMode
{
public:
	TArray<class AAIController*>                       Bots;                                                     // 0x0410(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0420(0x0018) MISSED OFFSET
	TArray<struct FAIPersonality>                      BotPersonalities;                                         // 0x0438(0x0010) (ZeroConstructor)
	float                                              DynTeam0SpawnTimer;                                       // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DynTeam1SpawnTimer;                                       // 0x044C(0x0004) (ZeroConstructor, IsPlainOldData)
	class APlayerSpawnPoint*                           DynSpawnPoint0;                                           // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerSpawnPoint*                           DynSpawnPoint1;                                           // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0460(0x0090) MISSED OFFSET
	class AVoiceManager*                               VoiceManager;                                             // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NameCounter;                                              // 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSwapSpawns;                                              // 0x04FC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFillWithBots;                                            // 0x04FD(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoTeams;                                                 // 0x04FE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlwaysScore;                                             // 0x04FF(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceNoScoring;                                          // 0x0500(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceNoBots;                                             // 0x0501(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeamLocked;                                              // 0x0502(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState                                  RoundState;                                               // 0x0503(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGameDifficulty                                    Difficulty;                                               // 0x0504(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSecure;                                                  // 0x0505(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0506(0x0002) MISSED OFFSET
	class APavlovGameState*                            PavlovGameState;                                          // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPavlovGameModeType                                GameModeType;                                             // 0x0510(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	class UClass*                                      BotControllerClass;                                       // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GhostClass;                                               // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  BotPersonalityTable;                                      // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  EquipmentCostTable;                                       // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x0538(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaximumCash;                                              // 0x053C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CashKillReward;                                           // 0x0540(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CashTeamKillPenalty;                                      // 0x0544(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIncrementTeamScore;                                      // 0x0548(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoRespawn;                                             // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeepBodies;                                              // 0x054A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeepPawnIfAlive;                                         // 0x054B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BodyPool;                                                 // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnMaxDelay;                                          // 0x0550(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InactivityInterval;                                       // 0x0554(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InactivityThreashold;                                     // 0x0558(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InactivityDormantThreashold;                              // 0x055C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDynamicSpawns;                                           // 0x0560(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnGhostOnLogin;                                       // 0x0561(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0562(0x0002) MISSED OFFSET
	int                                                RoundDuration;                                            // 0x0564(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamLockDuration;                                         // 0x0568(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowRoundDurationOverride;                              // 0x056C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowWeaponFilter;                                       // 0x056D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowCompetitive;                                        // 0x056E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoKickOnTK;                                            // 0x056F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BombClass;                                                // 0x0570(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0578(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovGameMode");
		return ptr;
	}


	void TerminateGameSession();
	void SwitchTeam(class AController* Controller);
	void Suicide(class AController* Controller);
	void StopReplayRecording();
	void StartReplayRecording();
	void SpawnPlayer(class AController* Controller);
	class APavlovPawn* SpawnPavlovPawn(class AController* Controller, const struct FTransform& Transform);
	void SpawnAndPossesPawns();
	void ShuffleTeams();
	void SetTeamCash(int TeamId, int CashAmmount);
	void SetRoundState(EPavlovRoundState State);
	void SetPawnsInvulnerable(bool bEnabled);
	void SetMovement(bool bEnabled);
	void SetEveryoneCash(int CashAmmount);
	void SetAttackingTeam(int TeamId);
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
	void KickByPlayerState(class APavlovPlayerState* PlayerState, const struct FText& KickReason, bool bBan);
	bool IsTeamDead(int TeamId);
	void IncrementTeamScore(int TeamId, int Score);
	void IncrementPlayerScore(class APlayerState* PlayerState, int Score);
	void GiveTeamCash(int TeamId, int CashAmmount);
	void GiveItem(class APavlovPawn* Pawn, class UClass* ItemClass, float BlockDuration, bool bLoaded);
	void GiveEveryoneCash(int CashAmmount);
	void GetTeamStatus(int TeamId, int* Num, int* Casualties);
	int GetTeamRealPlayerCount(int TeamId);
	struct FString GetSteamAudioGun();
	int GetRealPlayerCount();
	class AController* GetRandomController(int TeamFilter, bool bRealPlayer);
	int GetMaxPlayerCount();
	int GetKillReward(class APavlovPlayerState* Killer, class APavlovPlayerState* Victim, const struct FDamageTrackInfo& LastHitInfo);
	class APlayerSpawnPoint* GetDynamicSpawnPointForTeam(int TeamId);
	class APlayerSpawnPoint* GetDynamicOccludedSpawnPoint(int TeamId);
	void DestroyBot(class AController* Controller);
	void CreateDedicatedServerSession();
	class AController* CreateBot(int TeamId);
	void CleanUpItems();
	bool CanChangeScore();
	void AssignPlayerSkin(class APavlovPlayerState* PlayerState, class APavlovPawn* Pawn);
	void AddExtraRoundTime(float ExtraTime);
	void AddAssist(class APavlovPlayerState* PlayerState);
};


// Class Pavlov.BattlegroundsGameMode
// 0x0028 (0x05B0 - 0x0588)
class ABattlegroundsGameMode : public APavlovGameMode
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0588(0x0011) MISSED OFFSET
	EBattlegroundsServerType                           ServerType;                                               // 0x0599(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x059A(0x0006) MISSED OFFSET
	struct FString                                     MasterServerUrl;                                          // 0x05A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BattlegroundsGameMode");
		return ptr;
	}


	void PerformWaitingHeartBeat();
	void PerformGameHeartBeat();
};


// Class Pavlov.BeltFedGunState
// 0x0000 (0x0160 - 0x0160)
class UBeltFedGunState : public UVRGunState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BeltFedGunState");
		return ptr;
	}

};


// Class Pavlov.BloodPuddle
// 0x0050 (0x0378 - 0x0328)
class ABloodPuddle : public AActor
{
public:
	class UDecalComponent*                             DecalComponent;                                           // 0x0328(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0330(0x0014) MISSED OFFSET
	float                                              Threashold;                                               // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PoolNum;                                                  // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // 0x0358(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZBias;                                                    // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLifeSpan;                                              // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x036C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeepAlive;                                               // 0x0370(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0371(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BloodPuddle");
		return ptr;
	}


	void OnPour(const struct FTransform& Transform);
	void OnOwnerEndPlay(class AActor* OwnerActor, TEnumAsByte<EEndPlayReason> Reason);
};


// Class Pavlov.BloodSplat
// 0x0008 (0x0330 - 0x0328)
class ABloodSplat : public AActor
{
public:
	float                                              MaxProjection;                                            // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BloodSplat");
		return ptr;
	}

};


// Class Pavlov.BloodSplatGeometry
// 0x0038 (0x0368 - 0x0330)
class ABloodSplatGeometry : public ABloodSplat
{
public:
	class UStaticMeshComponent*                        Decal;                                                    // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DecalPivot;                                               // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             ImpactEffect;                                             // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Sound;                                                    // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0350(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Scale;                                                    // 0x0360(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Depth;                                                    // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BloodSplatGeometry");
		return ptr;
	}

};


// Class Pavlov.Bomb
// 0x0230 (0x0700 - 0x04D0)
class ABomb : public AVRItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x128];                                     // 0x04E0(0x0128) MISSED OFFSET
	bool                                               bOccluded;                                                // 0x0608(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EBombState                                         State;                                                    // 0x0609(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x060A(0x0002) MISSED OFFSET
	int                                                Timer;                                                    // 0x060C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                NextDigit;                                                // 0x0610(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	struct FString                                     code;                                                     // 0x0618(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              DetonatorDelay;                                           // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GraceDuration;                                            // 0x062C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DefuseSound;                                              // 0x0630(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GraceSound;                                               // 0x0638(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   PlantedSound;                                             // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DetonationSound;                                          // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BeepSiteASound;                                           // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BeepSiteBSound;                                           // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BeepIntervalCurve;                                        // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DigitExpireDelay;                                         // 0x0668(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KeyPadOffset;                                             // 0x066C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KeyDistance;                                              // 0x0678(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	class USoundCue*                                   KeySound;                                                 // 0x0680(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ErrorSound;                                               // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SuccessSound;                                             // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<bool>                                       WireStates;                                               // 0x06A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FName>                               Wires;                                                    // 0x06B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CutMaxDist;                                               // 0x06C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x06D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowUseByAnyone;                                        // 0x06D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x06DA(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBombDetonation;                                         // 0x06E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBombDefused;                                            // 0x06F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Bomb");
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
// 0x0030 (0x0390 - 0x0360)
class UBombAnimInstance : public UAnimInstance
{
public:
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
		static auto ptr = UObject::FindClass("Class Pavlov.BombAnimInstance");
		return ptr;
	}

};


// Class Pavlov.BombPlantSpot
// 0x0030 (0x0500 - 0x04D0)
class ABombPlantSpot : public AVRItem
{
public:
	class UBoxComponent*                               Collision;                                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bIsB;                                                     // 0x04E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bPlantedHere;                                             // 0x04E1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSpotEnabled;                                             // 0x04E2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x04E3(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBombPlanted;                                            // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BombPlantSpot");
		return ptr;
	}


	void UpdateEnabledState();
	void SetSpotEnabled(bool bEnabled);
	void ResetSpot();
	void OnRep_PlantedHere();
	void MulticastOnPlantStateChanged(bool bPlanted);
};


// Class Pavlov.Bullet
// 0x0038 (0x04E0 - 0x04A8)
class ABullet : public AVRBullet
{
public:
	float                                              TimeSpawned;                                              // 0x04A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Latency;                                                  // 0x04AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArmourDamage;                                             // 0x04B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArmourPenetration;                                        // 0x04B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HelmetDamage;                                             // 0x04B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HelmetBleed;                                              // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x04C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 HeadshotProbability;                                      // 0x04C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WoundScale;                                               // 0x04D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      WoundRate;                                                // 0x04D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	class UCurveFloat*                                 WoundRateByDistance;                                      // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Bullet");
		return ptr;
	}

};


// Class Pavlov.BulletHoleManager
// 0x0030 (0x0358 - 0x0328)
class ABulletHoleManager : public AActor
{
public:
	TArray<class UInstancedStaticMeshComponent*>       MeshInstances;                                            // 0x0328(0x0010) (ExportObject, ZeroConstructor)
	TArray<int>                                        Needles;                                                  // 0x0338(0x0010) (ZeroConstructor)
	int                                                MaxHoles;                                                 // 0x0348(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DecalScale;                                               // 0x034C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DepthOffset;                                              // 0x0350(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BulletHoleManager");
		return ptr;
	}

};


// Class Pavlov.BuyZone
// 0x0000 (0x0360 - 0x0360)
class ABuyZone : public ATriggerVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.BuyZone");
		return ptr;
	}

};


// Class Pavlov.ChamberComponent
// 0x0080 (0x04C0 - 0x0440)
class UChamberComponent : public UPhysicsConstraintComponent
{
public:
	class UStaticMeshComponent*                        ConstrainedMesh;                                          // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Volume;                                                   // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGun*                                        Gun;                                                      // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	class UVRGunState*                                 GunState;                                                 // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0460(0x0008) MISSED OFFSET
	bool                                               bRemoving;                                                // 0x0468(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRemoval;                                            // 0x0469(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x046A(0x0002) MISSED OFFSET
	int                                                ChamberIndex;                                             // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LiveRound;                                                // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 EmptyShell;                                               // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0480(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleLength;                                            // 0x0484(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CapsuleOffset;                                            // 0x0488(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConstraintLimit;                                          // 0x0494(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConstraintOffset;                                         // 0x0498(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	class USoundCue*                                   RemoveSound;                                              // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   InsertSound;                                              // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  InsertHaptic;                                             // 0x04B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ChamberComponent");
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
		static auto ptr = UObject::FindClass("Class Pavlov.DamageTrackerComponent");
		return ptr;
	}


	void ResetTracking();
	bool GetLastHit(struct FDamageTrackInfo* LastHit);
	void GatherAssists(TArray<struct FDamageTrackInfo>* Assists);
};


// Class Pavlov.DecorationSkeletalMeshComponent
// 0x0000 (0x0B30 - 0x0B30)
class UDecorationSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DecorationSkeletalMeshComponent");
		return ptr;
	}

};


// Class Pavlov.DedicatedServer
// 0x0160 (0x0188 - 0x0028)
class UDedicatedServer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE4];                                      // 0x0028(0x00E4) MISSED OFFSET
	bool                                               bInitialized;                                             // 0x010C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x010D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	struct FString                                     ServerName;                                               // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	TArray<struct FRotatedMap>                         MapRotation;                                              // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     Password;                                                 // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                MaxPlayers;                                               // 0x0140(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                TickRate;                                                 // 0x0144(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSecured;                                                 // 0x0148(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	int                                                TimeLimit;                                                // 0x014C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRotating;                                                // 0x0150(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	int                                                RotationIndex;                                            // 0x0154(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FString>                             Blacklist;                                                // 0x0158(0x0010) (ZeroConstructor, Transient)
	TArray<struct FString>                             ModList;                                                  // 0x0168(0x0010) (ZeroConstructor, Transient)
	TArray<struct FString>                             WhiteList;                                                // 0x0178(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DedicatedServer");
		return ptr;
	}


	void TravelNextTick();
	void OnMapDownloaded(bool bSucceed, const struct FString& ID);
};


// Class Pavlov.Destructible
// 0x0000 (0x0328 - 0x0328)
class ADestructible : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Destructible");
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
		static auto ptr = UObject::FindClass("Class Pavlov.DoubleBarrelGunState");
		return ptr;
	}


	void SetBarrel(bool bOpen);
};


// Class Pavlov.FlyingHelmet
// 0x0020 (0x0348 - 0x0328)
class AFlyingHelmet : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              ImpulsePower;                                             // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseOffset;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.FlyingHelmet");
		return ptr;
	}


	void ApplyImpulse();
};


// Class Pavlov.FootstepAnimNotify
// 0x0000 (0x0038 - 0x0038)
class UFootstepAnimNotify : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.FootstepAnimNotify");
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
		static auto ptr = UObject::FindClass("Class Pavlov.GestureComponent");
		return ptr;
	}


	void RegisterGesture(const struct FGestureSetup& Setup);
};


// Class Pavlov.PavlovItemController
// 0x0210 (0x0860 - 0x0650)
class APavlovItemController : public AVRItemController
{
public:
	class UWidgetComponent*                            UI;                                                       // 0x0650(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PointerMesh;                                              // 0x0658(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class AMainMenu*                                   MainMenu;                                                 // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData)
	class AKillfeed*                                   Killfeed;                                                 // 0x0668(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0670(0x0050) MISSED OFFSET
	struct FTransform                                  TwoHandReloadBasis;                                       // 0x06C0(0x0030) (Net, IsPlainOldData)
	class AGun*                                        TwoHandReloadRefGun;                                      // 0x06F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGun*                                        TwoHandGripRefGun;                                        // 0x06F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SelectionHandMesh;                                        // 0x0700(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0708(0x0040) MISSED OFFSET
	TArray<class AZombie*>                             KnockZombies;                                             // 0x0748(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0758(0x0001) MISSED OFFSET
	bool                                               bBypassMovement;                                          // 0x0759(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x075A(0x0002) MISSED OFFSET
	float                                              TouchPadXValue;                                           // 0x075C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TouchPadYValue;                                           // 0x0760(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	class AVRItem*                                     Selection;                                                // 0x0768(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDominant;                                                // 0x0770(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchPadLocomotion;                                      // 0x0771(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0772(0x0002) MISSED OFFSET
	struct FVector                                     TwoHandPickOffset;                                        // 0x0774(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TwoHandDirection;                                         // 0x0780(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMenuPressed;                                             // 0x078C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x078D(0x0003) MISSED OFFSET
	class AUberWheel*                                  WheelInstance;                                            // 0x0790(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TalkHeadDistance;                                         // 0x0798(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FingerPointOffset;                                        // 0x079C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x07A8(0x0008) MISSED OFFSET
	struct FTransform                                  SelectionOffset;                                          // 0x07B0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SelectionMaterial;                                        // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SelectionObjectType;                                      // 0x07E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x07E9(0x0003) MISSED OFFSET
	float                                              SelectionSphereRadius;                                    // 0x07EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 SelectionHandMeshAsset;                                   // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelectionHandMeshScale;                                   // 0x07F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET
	class USoundCue*                                   SelectionSoundCue;                                        // 0x0800(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SelectionHandLeftMaterial;                                // 0x0808(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SelectionHandRightMaterial;                               // 0x0810(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashCooldown;                                             // 0x0818(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashAcumMomentumDuration;                                 // 0x081C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashDistanceThreashold;                                   // 0x0820(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashBeginRadius;                                          // 0x0824(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashVolumeRadius;                                         // 0x0828(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BashPulsationInterval;                                    // 0x082C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BashSound;                                                // 0x0830(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WheelClass;                                               // 0x0838(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MainMenuClass;                                            // 0x0840(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      KillfeedClass;                                            // 0x0848(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSnapTurn;                                               // 0x0850(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovItemController");
		return ptr;
	}


	void UpdateUIState();
	void SetWheelEnabled(bool bEnabled);
	void SetMenu(bool bEnabled);
	void SetKillfeed(bool bEnabled);
	void OnTeamIdChanged(int TeamId);
	void OnSelectionPicked(class AVRItem* Item);
	bool IsWheelEnabled();
	bool IsTwoHandReloadEnabled();
	bool IsTwoHandGripEnabled();
	bool IsMenuActive();
	class APavlovItemController* GetOppositeHandController();
	struct FVector GetFingerPointLocation();
	void ForceTwoHandGrip();
	void ClearWheelInstance();
};


// Class Pavlov.GhostItemController
// 0x0010 (0x0870 - 0x0860)
class AGhostItemController : public APavlovItemController
{
public:
	EGhostPointMode                                    PointMode;                                                // 0x0860(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0861(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GhostItemController");
		return ptr;
	}


	void OnPointModeChanged(EGhostPointMode OldPointMode);
	void ChangePointMode(EGhostPointMode NewPointMode);
};


// Class Pavlov.PavlovPawnBase
// 0x0000 (0x0AE0 - 0x0AE0)
class APavlovPawnBase : public AVRPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPawnBase");
		return ptr;
	}


	class APavlovItemController* GetNonDominantController();
	class APavlovItemController* GetDominantController();
};


// Class Pavlov.GhostPawn
// 0x0050 (0x0B30 - 0x0AE0)
class AGhostPawn : public APavlovPawnBase
{
public:
	TArray<class ASpectatorTag*>                       SpectatorTags;                                            // 0x0AE0(0x0010) (ZeroConstructor)
	float                                              FreeViewSpeedMul;                                         // 0x0AF0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AF4(0x0004) MISSED OFFSET
	class UClass*                                      KillCamClass;                                             // 0x0AF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKillCam*                                    KillCam;                                                  // 0x0B00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInSpectatorRoom;                                         // 0x0B08(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnGrace;                                               // 0x0B09(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0B0A(0x0006) MISSED OFFSET
	class UClass*                                      SpectatorTVCameraClass;                                   // 0x0B10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpectatorTagClass;                                        // 0x0B18(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GraceDuration;                                            // 0x0B20(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeViewSpeed;                                            // 0x0B24(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAttenuation*                           VoiceChatAttenuation;                                     // 0x0B28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GhostPawn");
		return ptr;
	}


	void SpawnTags();
	void OnTraveledToSpectatorRoom();
	void OnTeamIdChanged(int TeamId);
	void OnGraceTimeEnded();
	void EndGraceTime();
	void CreateVoiceComponent();
	void ClientTravelToSpectatorRoom();
	void ClientSpawnKillCam(const struct FKillInfo& KillInfo);
	void ClearTags();
};


// Class Pavlov.GlobalPlayerEffects
// 0x0090 (0x03B8 - 0x0328)
class AGlobalPlayerEffects : public AInfo
{
public:
	class UMaterialInstanceDynamic*                    FlashedMaterialInstance;                                  // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SupressedMaterialInstance;                                // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          PostProcess;                                              // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0340(0x0018) MISSED OFFSET
	class UAudioComponent*                             BuzzingSound;                                             // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WindSound;                                                // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x0368(0x0009) MISSED OFFSET
	EPlayerEffectState                                 State;                                                    // 0x0371(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	float                                              Time;                                                     // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // 0x0378(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UMaterial*                                   GhostMaterial;                                            // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   GhostSoundMix;                                            // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   FlashedMaterial;                                          // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   FlashedSoundMix;                                          // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FlashedOpacityCurve;                                      // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   SupressedMaterial;                                        // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   SupressedSoundMix;                                        // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GlobalPlayerEffects");
		return ptr;
	}


	void SwitchState(EPlayerEffectState NewState);
	void InstigateFlash(float Duration, const struct FVector& Location);
};


// Class Pavlov.DamageType_Explotion
// 0x0000 (0x0040 - 0x0040)
class UDamageType_Explotion : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_Explotion");
		return ptr;
	}

};


// Class Pavlov.Grenade
// 0x0090 (0x0560 - 0x04D0)
class AGrenade : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	class AGrenadeTrailProxy*                          TrailProxy;                                               // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UVRHandleComponent*                          PinHandleComponent;                                       // 0x04F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AController*                                 DetonationInstigator;                                     // 0x04F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGrenadeState                                      State;                                                    // 0x0500(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectileActive;                                        // 0x0501(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0502(0x0002) MISSED OFFSET
	float                                              ProjectileThreashold;                                     // 0x0504(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMul;                                       // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PinPullRatio;                                             // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DetonatorDelay;                                           // 0x0510(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetonatedLifeSpan;                                        // 0x0514(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideOnDetonation;                                        // 0x0518(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisablePhysics;                                          // 0x0519(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x051A(0x0006) MISSED OFFSET
	class USoundCue*                                   FuseIgniteSound;                                          // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   LeverReleaseSound;                                        // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DryLeverReleaseSound;                                     // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SafetyPinRemovedSound;                                    // 0x0538(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DetonationSound;                                          // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDealDamage;                                              // 0x0548(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	float                                              Damage;                                                   // 0x054C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x0550(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // 0x0554(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // 0x0558(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x055C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Grenade");
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


// Class Pavlov.GrenadeAnimInstance
// 0x0040 (0x0410 - 0x03D0)
class UGrenadeAnimInstance : public UVRControllerAnimInstance
{
public:
	EGrenadeState                                      GrenadeState;                                             // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              PinPullRatio;                                             // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PullPinVectorTarget;                                      // 0x03D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSimulateRing;                                      // 0x03E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGrabbedByPin;                                            // 0x03E5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	struct FVector                                     PullPinVector;                                            // 0x03E8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PinScale;                                                 // 0x03F4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeverScale;                                               // 0x0400(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x040C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GrenadeAnimInstance");
		return ptr;
	}

};


// Class Pavlov.GrenadeTrailProxy
// 0x0020 (0x0348 - 0x0328)
class AGrenadeTrailProxy : public AActor
{
public:
	class UTrailComponent*                             Trail;                                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInstanceConstant*                   Team0Material;                                            // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   Team1Material;                                            // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.GrenadeTrailProxy");
		return ptr;
	}

};


// Class Pavlov.Gun
// 0x0230 (0x0AA0 - 0x0870)
class AGun : public AVRGun
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0870(0x001C) MISSED OFFSET
	struct FVector                                     GripRefLocation;                                          // 0x088C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasLegacyGrip;                                           // 0x0898(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5F];                                      // 0x0899(0x005F) MISSED OFFSET
	class UInstancedSourceBusComponent*                SourceBusComp;                                            // 0x08F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APavlov_AudioVolume*                         AudioVolume;                                              // 0x0900(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USoundSubmix*                                ReverbSubmix;                                             // 0x0908(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0910(0x0020) MISSED OFFSET
	struct FVector                                     LastTwoHandDirection;                                     // 0x0930(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TwoHandPickOffset;                                        // 0x093C(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0948(0x0002) MISSED OFFSET
	bool                                               bKeepTwoHand;                                             // 0x094A(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x094B(0x0001) MISSED OFFSET
	struct FVector                                     AdditionalHandOffset;                                     // 0x094C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSideGun;                                                 // 0x0958(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGenerateMagBoltReleaseEvents;                            // 0x0959(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCustomCocking;                                           // 0x095A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeltaCocking;                                            // 0x095B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeedsTwoHands;                                           // 0x095C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x095D(0x0003) MISSED OFFSET
	float                                              StockDuration;                                            // 0x0960(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTwoHandSupportOnly;                                      // 0x0964(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTwoHandReload;                                           // 0x0965(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0966(0x0002) MISSED OFFSET
	class USoundCue*                                   TwoHandGripSound;                                         // 0x0968(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDropByRecoil;                                            // 0x0970(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsAutoUngrip;                                      // 0x0971(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsMagRelease;                                      // 0x0972(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSingleShotDrop;                                          // 0x0973(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTwoHandGripDistance;                                   // 0x0974(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GripOffset;                                               // 0x0978(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagneticGripDistance;                                     // 0x0984(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               MagneticGripSequence;                                     // 0x0988(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerAngle;                                             // 0x0990(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsteadyRecoilAngleMul;                                   // 0x0994(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsteadyRecoilTraslationMul;                              // 0x0998(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsteadySpraySpreadMul;                                   // 0x099C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUngrippedRecoil;                                       // 0x09A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUngrippedDuration;                                     // 0x09A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrippedCounterRecoilLimitMul;                             // 0x09A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	class USoundBase*                                  ExploitSound;                                             // 0x09B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FShotConcurrencyQuality                     ShotConcurrencyQuality;                                   // 0x09C0(0x0028) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             HitSurfaceFX;                                             // 0x09E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RattlePoints;                                             // 0x09F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedModifier;                                            // 0x09F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchAcuracy;                                            // 0x09F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandingAcuracy;                                          // 0x09FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingAcuracy;                                            // 0x0A00(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0A04(0x0004) MISSED OFFSET
	class UCurveVector*                                BobCurve;                                                 // 0x0A08(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed;                                                 // 0x0A10(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobMultiplier;                                            // 0x0A14(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobBlendSpeed;                                            // 0x0A18(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x0A1C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafingMultiplier;                                       // 0x0A20(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSideRecoilMul;                                      // 0x0A24(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAttachmentSuppressor*                       Suppresor;                                                // 0x0A28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AAttachmentSight*                            Sight;                                                    // 0x0A30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AAttachmentGrip*                             Grip;                                                     // 0x0A38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PicatinnySocket;                                          // 0x0A40(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PicatinnyLength;                                          // 0x0A48(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SightCompatibility;                                       // 0x0A4C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0A4D(0x0003) MISSED OFFSET
	struct FName                                       GripSocket;                                               // 0x0A50(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      GripCompatibility;                                        // 0x0A58(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0A59(0x0007) MISSED OFFSET
	struct FName                                       SuppressorSocket;                                         // 0x0A60(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SuppressorCompatibility;                                  // 0x0A68(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0A69(0x0007) MISSED OFFSET
	struct FGunAttachmentSetup                         DefaultAttachments;                                       // 0x0A70(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnMagBoltRelease;                                         // 0x0A90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Gun");
		return ptr;
	}


	bool SupportsSuppressorAttachments();
	bool SupportsSightAttachments();
	bool SupportsGripAttachments();
	bool SupportsAttachments();
	void RecoilDrop();
	void OnUnderExploitChanged(bool bUnderExploit);
	void OnTwoHandGripChanged(bool bEnabled);
	void OnSpawnUnloaded();
	void OnSliderUngrabbed();
	void OnSliderInputReceived(const struct FVector& Input, const struct FVector& InputDelta);
	void OnSliderGrabbed();
	void OnRecoilDropCooldown();
	void OnAttachmentChanged();
	void MulticastOnRecoilDrop();
	bool IsBeingGrippedBy(class APavlovItemController* ByController);
	bool IsBeingGripped();
	bool STATIC_IsAttachmentCompatible(class UClass* GunClass, class UClass* AttachmentClass);
	bool HasAttachment(class UClass* AttachmentClass);
	TArray<class AAttachment*> GetAttachmentList();
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
		static auto ptr = UObject::FindClass("Class Pavlov.HitBoxProxyComponent");
		return ptr;
	}


	void OnBulletOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Pavlov.HolsterComponent
// 0x0030 (0x05B0 - 0x0580)
class UHolsterComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0580(0x0008) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0588(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AllowedClasses;                                           // 0x0590(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDisabled;                                                // 0x05A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMirrorable;                                              // 0x05A1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x05A2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x05A3(0x0005) MISSED OFFSET
	class AVRItem*                                     HolsteredItem;                                            // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.HolsterComponent");
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


// Class Pavlov.ImpairInterface
// 0x0000 (0x0028 - 0x0028)
class UImpairInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ImpairInterface");
		return ptr;
	}


	void MarkAsImpaired(EImpairedType Type, class AActor* EventActor, class AController* Instigator);
	void GetImpairedEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
};


// Class Pavlov.InstancedSourceBusComponent
// 0x0090 (0x02D0 - 0x0240)
class UInstancedSourceBusComponent : public USceneComponent
{
public:
	class UAudioComponent*                             AudioComp;                                                // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<class USoundBase*, class USoundBase*>         SoundCache;                                               // 0x0248(0x0050) (ZeroConstructor)
	TArray<class UAudioComponent*>                     PlayingAudioComponents;                                   // 0x0298(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET
	class USoundSourceBus*                             SourceBus;                                                // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SilenceDelay;                                             // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoSilencing;                                             // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowAttenuation;                                        // 0x02BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02BE(0x0002) MISSED OFFSET
	class USoundConcurrency*                           ConcurrencyOverride;                                      // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.InstancedSourceBusComponent");
		return ptr;
	}


	void SilenceAudioComponent();
	class UAudioComponent* Play(class USoundBase* Sound, bool bForceNoOcclusion);
	void OnSourceBusAudioFinished(class UAudioComponent* Comp);
	void OnAudioFinished(class UAudioComponent* Comp);
	class UAudioComponent* GetAudioComponent();
};


// Class Pavlov.KillCam
// 0x00B0 (0x03D8 - 0x0328)
class AKillCam : public AActor
{
public:
	class UStaticMeshComponent*                        BulletTrace;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ImpactPoint;                                              // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            KillerInfo;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FKillInfo                                   KillInfo;                                                 // 0x0340(0x0070) (BlueprintVisible, BlueprintReadOnly)
	float                                              TraceScaleMul;                                            // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinInfoDistance;                                          // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FactorScale;                                              // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScale;                                                 // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RefInfoScale;                                             // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InfoOffset;                                               // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.KillCam");
		return ptr;
	}

};


// Class Pavlov.StereoOverlay
// 0x0028 (0x0350 - 0x0328)
class AStereoOverlay : public AActor
{
public:
	EStereoOverlayMode                                 Mode;                                                     // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              Distance;                                                 // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Height;                                                   // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tilt;                                                     // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForce;                                                   // 0x033C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDominant;                                                // 0x033D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x033E(0x0002) MISSED OFFSET
	float                                              SidearmLength;                                            // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SidearmHeight;                                            // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SidearmSmoothRatio;                                       // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.StereoOverlay");
		return ptr;
	}

};


// Class Pavlov.Killfeed
// 0x0020 (0x0370 - 0x0350)
class AKillfeed : public AStereoOverlay
{
public:
	bool                                               bDisplayInArm;                                            // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bKillfeedVisible;                                         // 0x0351(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              FadeRatio;                                                // 0x0354(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeSpeed;                                                // 0x0358(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x035C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillfeedTilt;                                             // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Killfeed");
		return ptr;
	}


	void Show();
	void OnDisplayModeUpdated();
	void Hide();
};


// Class Pavlov.DamageType_Knife
// 0x0000 (0x0040 - 0x0040)
class UDamageType_Knife : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.DamageType_Knife");
		return ptr;
	}

};


// Class Pavlov.Knife
// 0x0070 (0x0540 - 0x04D0)
class AKnife : public AVRItem
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BladeProxy;                                               // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET
	class AController*                                 LatestInstigator;                                         // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bBloody;                                                  // 0x04F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	struct FVector                                     BladeVelocity;                                            // 0x04FC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamage;                                                // 0x050C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamage;                                                // 0x0510(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedReference;                                           // 0x0514(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   StabSound;                                                // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             StabParticle;                                             // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleOffset;                                           // 0x0528(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0534(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Knife");
		return ptr;
	}


	void SetBloody(bool bEnabled);
	void OnRep_Bloody();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBloodyChanged(bool bNewBloody);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void MulticastOnStab();
	void EnableTicking();
};


// Class Pavlov.LootSpawner
// 0x0008 (0x0330 - 0x0328)
class ALootSpawner : public AActor
{
public:
	unsigned char                                      LootIndex;                                                // 0x0328(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.LootSpawner");
		return ptr;
	}


	void SetLootIndexByName(const struct FName& Name, bool bNetUpdate);
	void OnRep_LootIndex();
	void OnLootChanged(unsigned char Index, const struct FName& Name);
	void NetworkUpdate();
	bool IsClear();
	struct FName GetLootNameByIndex(unsigned char Index);
	struct FName GetLootName();
	unsigned char GetLootIndexByName(const struct FName& Name);
	void ClearLoot();
};


// Class Pavlov.Magazine
// 0x0010 (0x0510 - 0x0500)
class AMagazine : public AVRMagazine
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0500(0x0008) MISSED OFFSET
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Magazine");
		return ptr;
	}

};


// Class Pavlov.MainMenu
// 0x0020 (0x0348 - 0x0328)
class AMainMenu : public AActor
{
public:
	class UWidgetComponent*                            UI;                                                       // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ShowSound;                                                // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HideSound;                                                // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bScoreboard;                                              // 0x0340(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MainMenu");
		return ptr;
	}

};


// Class Pavlov.Matchmaking
// 0x00C0 (0x00E8 - 0x0028)
class UMatchmaking : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
	EMatchmakingStatus                                 Status;                                                   // 0x00C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	class UAzureServer*                                AzureServer;                                              // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStatusChanged;                                          // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Matchmaking");
		return ptr;
	}


	bool Queue(const struct FMatchSettings& Settings);
	void PollTicket();
	bool IsInQueue();
	void DelayedConnect();
	void Cancel();
};


// Class Pavlov.MenuUniverse
// 0x0070 (0x0398 - 0x0328)
class AMenuUniverse : public AActor
{
public:
	class USceneComponent*                             Facing;                                                   // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                          // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              HiddenActors;                                             // 0x0338(0x0010) (ZeroConstructor)
	TArray<class AMenuUniverseView*>                   Views;                                                    // 0x0348(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0358(0x0005) MISSED OFFSET
	bool                                               bCanBeClosed;                                             // 0x035D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x035E(0x0002) MISSED OFFSET
	float                                              HeightOffset;                                             // 0x0360(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Distance;                                                 // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 PointerMesh;                                              // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 PointerLineMesh;                                          // 0x0378(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointerScale;                                             // 0x0380(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointerLineScale;                                         // 0x0384(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointerPitch;                                             // 0x0388(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointerDistance;                                          // 0x038C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     PointerChannel;                                           // 0x0390(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugPointer;                                            // 0x0391(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0392(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MenuUniverse");
		return ptr;
	}


	void SetEnabled(bool bEnabled);
	void OnViewTargetChangingFrom(class AActor* ViewTarget);
	void OnHeadsetScaleChanged(float NewScale);
	void OnEnableChanged(bool bEnabled);
	bool IsEnabled();
	class AMenuUniverseView* CreateView(class UClass* ViewClass, class UClass* WidgetClass);
	void AdjustFacingPivot();
};


// Class Pavlov.MenuUniverseController
// 0x0010 (0x0620 - 0x0610)
class UMenuUniverseController : public UMotionControllerComponent
{
public:
	class UVRStickComponent*                           Stick;                                                    // 0x0610(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MenuUniverseController");
		return ptr;
	}


	void OnTriggerReleased();
	void OnTriggerPressed();
	void OnTouchpadY(float Value);
	void OnTouchpadX(float Value);
	void OnMenuReleased();
	void OnMenuPressed();
};


// Class Pavlov.MenuUniverseView
// 0x0030 (0x0358 - 0x0328)
class AMenuUniverseView : public AActor
{
public:
	class UMaterial*                                   WidgetMaterial;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetComponent*                            WidgetComp;                                               // 0x0330(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DrawSize;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SortPriority;                                             // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MenuUniverseView");
		return ptr;
	}


	class AMenuUniverse* GetMenuUniverse();
	void CreateWidgetComponent();
};


// Class Pavlov.Modal
// 0x0030 (0x0058 - 0x0028)
class UModal : public UObject
{
public:
	class AModalView*                                  View;                                                     // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ViewClass;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowContent;                                            // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCommit;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Modal");
		return ptr;
	}


	void Commit(const struct FModalCommitParams& Params);
};


// Class Pavlov.ModalMessageBox
// 0x0020 (0x0078 - 0x0058)
class UModalMessageBox : public UModal
{
public:
	EModalMessageBoxType                               Type;                                                     // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FText                                       Message;                                                  // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ModalMessageBox");
		return ptr;
	}

};


// Class Pavlov.ModalView
// 0x0000 (0x0358 - 0x0358)
class AModalView : public AMenuUniverseView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ModalView");
		return ptr;
	}

};


// Class Pavlov.MuzzleExploitBlocker
// 0x0000 (0x0330 - 0x0330)
class AMuzzleExploitBlocker : public ATriggerBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.MuzzleExploitBlocker");
		return ptr;
	}

};


// Class Pavlov.OculusInputBinding
// 0x0000 (0x0028 - 0x0028)
class UOculusInputBinding : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.OculusInputBinding");
		return ptr;
	}


	void STATIC_ApplyEmulated(class UObject* WorldContext);
};


// Class Pavlov.PavlovAIController
// 0x00D8 (0x0510 - 0x0438)
class APavlovAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0438(0x0040) MISSED OFFSET
	struct FVector                                     LastKnownAimTarget;                                       // 0x0478(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0484(0x0024) MISSED OFFSET
	TArray<struct FVector>                             SuppresionSources;                                        // 0x04A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bTargetVisible;                                           // 0x04B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              TargetDistance;                                           // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanEngage;                                               // 0x04C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAIEngageState                                     EngageState;                                              // 0x04C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04C2(0x0002) MISSED OFFSET
	float                                              SkillRatio;                                               // 0x04C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkillMultiplier;                                          // 0x04C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FAIPersonality                              Personality;                                              // 0x04D0(0x0028) (BlueprintVisible)
	float                                              SwitchTargetCooldown;                                     // 0x04F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibilityCheckInterval;                                  // 0x04FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuppresedThreashold;                                      // 0x0500(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuppresionCleanUpInterval;                                // 0x0504(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReactionDelay;                                            // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutOfSightShootingDuration;                               // 0x050C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovAIController");
		return ptr;
	}


	void SetTargetPawn(class APavlovPawn* TargetPawn);
	void OnPawnCollisionBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsSuppressed();
	class APavlovPawn* GetTargetPawn();
};


// Class Pavlov.PavlovAvatarAnimInstance
// 0x0090 (0x0530 - 0x04A0)
class UPavlovAvatarAnimInstance : public UVRAvatarAnimInstance
{
public:
	struct FRotator                                    MovingRotationTarget;                                     // 0x04A0(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              MovingRotationLerpRatio;                                  // 0x04AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSprinting;                                               // 0x04B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	struct FRotator                                    MovingRotation;                                           // 0x04B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointPickup;                                              // 0x04C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointGun;                                                 // 0x04CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointGunGripped;                                          // 0x04D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HandBlendExp;                                             // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FingerLerpExp;                                            // 0x04E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x04EC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGrippingGun;                                           // 0x04ED(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPickupRight;                                          // 0x04EE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasGunRight;                                             // 0x04EF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPickupLeft;                                           // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasGunLeft;                                              // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04F2(0x0002) MISSED OFFSET
	float                                              HandBlendLeft;                                            // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HandBlendRight;                                           // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR0;                                                     // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR1;                                                     // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR2;                                                     // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR3;                                                     // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTR4;                                                     // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL0;                                                     // 0x0510(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL1;                                                     // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL2;                                                     // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL3;                                                     // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HTL4;                                                     // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportsFingerTracking;                                  // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0525(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovAvatarAnimInstance");
		return ptr;
	}


	float GetFingerBlend(bool bRight, EFinger Finger);
};


// Class Pavlov.PavlovCustomGameMode
// 0x0058 (0x05E0 - 0x0588)
class APavlovCustomGameMode : public APavlovGameMode
{
public:
	class APavlov_GameLogic*                           CustomGameLogic;                                          // 0x0588(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UClass*>                  PlayerSkins;                                              // 0x0590(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovCustomGameMode");
		return ptr;
	}

};


// Class Pavlov.PavlovGameInstance
// 0x0398 (0x0438 - 0x00A0)
class UPavlovGameInstance : public UGameInstance
{
public:
	class USteamworksManager*                          SteamworksManager;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00A8(0x0048) MISSED OFFSET
	class UClass*                                      PlayerEffectsClass;                                       // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x00F8(0x0038) MISSED OFFSET
	class UTutorial*                                   Tutorial;                                                 // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServerBrowser*                              ServerBrowser;                                            // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              OculusScale;                                              // 0x0140(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0144(0x003C) MISSED OFFSET
	class USoundSubmix*                                ReverbSubmixGarage;                                       // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                ReverbSubmixWarehouse;                                    // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                ReverbSubmixTunnel;                                       // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUIManager*                                  UIManager;                                                // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET
	bool                                               bTV;                                                      // 0x01B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
	class UReplayManager*                              ReplayManager;                                            // 0x01B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x01C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	class UDedicatedServer*                            DedicatedServer;                                          // 0x01C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFirstBoot;                                               // 0x01D0(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	struct FString                                     MasterServerSessionId;                                    // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bStopFindingGameServer;                                   // 0x01E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	TArray<struct FPavlovServerInfo>                   ServerList;                                               // 0x01F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EMatchmakingState                                  MatchmakingState;                                         // 0x0200(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	struct FString                                     MasterServerUrl;                                          // 0x0208(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	float                                              ServerQueryInterval;                                      // 0x0218(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	TArray<struct FString>                             DevList;                                                  // 0x0220(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FScriptMulticastDelegate                    OnMenuUniverseChanged;                                    // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchmakingStateChanged;                                // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuickmatchFailed;                                       // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyStateChanged;                                      // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyStatusMessage;                                     // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerListUpdated;                                      // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetMapListAdvancedResult;                               // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData10[0x108];                                     // 0x02A0(0x0108) MISSED OFFSET
	TMap<struct FName, class UPavlov_Map*>             MapDefinitions;                                           // 0x03A8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData11[0x1A];                                      // 0x03F8(0x001A) MISSED OFFSET
	EGameSessionState                                  GameSessionState;                                         // 0x0412(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x5];                                       // 0x0413(0x0005) MISSED OFFSET
	class UWorkshop*                                   Workshop;                                                 // 0x0418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMatchmaking*                                Matchmaking;                                              // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPavlovAdvancedMap>                  AdvancedMapList;                                          // 0x0428(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovGameInstance");
		return ptr;
	}


	void UpdateServerList(const struct FString& Map, const struct FString& GameMode, bool bFriendsOnly, bool bPrivateOnly);
	void TickServerConnect();
	void TestServerConnect(const struct FString& ConnectURL, const struct FString& MapId, float Delay);
	void SetMuted(class APavlovPlayerState* PlayerState, bool bEnabled);
	void SetMatchmakingState(EMatchmakingState NewState);
	void SetItemRotation(float Roll, float Pitch, float Yaw);
	void ServerConnect(const struct FServerConnectParams& Params);
	void RetrieveMasterServerSessionId();
	void ResumeShaderPreCompilation();
	void ResetTutorial();
	void ResetPhononScene();
	void ReportServerState();
	void QuickMatch();
	void QueryForGameSession();
	void OpenMap_Implementation();
	void OpenMap(const struct FString& Map, const struct FString& Options);
	void OnWorkshopSpecificQuery();
	void OnSteamServersConnected();
	void OnSteamLobbyListUpdated();
	void OnServerMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnServerConnectMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& ErrorString);
	void OnLeftLobby(ESteamLobbyChatMemberStateChange StateChange);
	void OnEnterLobby(bool bFailed);
	void OnClientMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnAuthSessionTicketResponse(bool bSucceed, const struct FString& HexAuthTicket);
	void JoinServer(const struct FPavlovServerInfo& ServerInfo);
	bool JoinPinProtectedServer(const struct FPavlovServerInfo& ServerInfo, const struct FString& Pin);
	bool IsMuted(class APavlovPlayerState* PlayerState);
	void InitClientProxies();
	bool HasGameSession();
	class UUIManager* GetUIManager();
	class UTutorial* GetTutorial();
	class UServerBrowser* GetServerBrowser();
	EOnlineRegion GetOnlineRegion();
	float GetOculusScale();
	void GetMapListAdvanced(int Compatibility, bool bFavoriteOnly);
	TArray<class UPavlov_Map*> GetMapList(int Compatibility);
	class UPavlov_Map* GetMap(const struct FString& UniqueId);
	void DumpLobbyData();
	void DisplayNetworkFailureMessage();
	void DisplayMessageImpl();
	void DisplayMessage(const struct FString& Message, bool bDeferredDelay);
	void CreateLobby();
	void CreateGameSession();
	void CreateCoopLobby();
	void CheckPlacementStatus();
	void CancelServerFind();
	void CancelQuickmatch();
	void ApplyOculusBindings();
};


// Class Pavlov.PavlovGameState
// 0x00B0 (0x0438 - 0x0388)
class APavlovGameState : public AGameState
{
public:
	TArray<class APavlovPlayerState*>                  TempPlayerArray;                                          // 0x0388(0x0010) (ZeroConstructor, Transient)
	struct FServerSettings                             Settings;                                                 // 0x0398(0x0030) (BlueprintVisible, BlueprintReadOnly, Net)
	bool                                               bNoTeams;                                                 // 0x03C8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bMovementDisabled;                                        // 0x03C9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bNoFallDamage;                                            // 0x03CA(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitedAmmo;                                             // 0x03CB(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                Team0Score;                                               // 0x03CC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                Team1Score;                                               // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundDuration;                                            // 0x03D4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundTime;                                                // 0x03D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AttackingTeam;                                            // 0x03DC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                RoundWinner;                                              // 0x03E0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchTimePaused;                                         // 0x03E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	float                                              MatchTime;                                                // 0x03E8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class UDataTable*                                  EquipmentCosts;                                           // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	ECompetitiveMode                                   CompetitiveMode;                                          // 0x03F8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	class UDataTable*                                  EquipmentTable;                                           // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               EquipmentIndexCache;                                      // 0x0408(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FKillfeedEntry>                      Killfeed;                                                 // 0x0418(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnKillfeedEntry;                                          // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovGameState");
		return ptr;
	}


	void UnpauseMatchTime();
	void ResetMatchTime(bool bPause);
	void PauseMatchTime();
	void MulticastOnKillfeedEntry(const struct FKillfeedEntry& NewEntry);
	int GetTeamScore(int TeamId);
	void GetTeamArray(int TeamId, TArray<class APavlovPlayerState*>* TeamArray);
	void GetSortedPlayerArray(int FilterByTeamId, TArray<class APavlovPlayerState*>* SortedPlayerArray);
	struct FString GetPlayerStringId(class APavlovPlayerState* PlayerState);
	class APavlovPlayerState* GetPlayerStateByStringId(const struct FString& StringId);
	class APavlovPlayerState* GetPlayerByScore(int Index, int TeamId);
	EMatchResult GetMatchResult();
	struct FName GetEquipmentNameByIndex(int Index);
	struct FName GetEquipmentNameByClass(class UClass* ItemClass);
	int GetEquipmentKillBonus(const struct FName& EquipmentName);
	int GetEquipmentIndexByName(const struct FName& EquipmentName);
	struct FEquipmentData GetEquipmentDataByClass(class UClass* ItemClass, bool* bSuccess);
	struct FEquipmentData GetEquipmentData(const struct FName& EquipmentName, bool* bSuccess);
	int GetEquipmentCost(const struct FName& EquipmentName);
	class UClass* GetEquipmentClassByName(const struct FName& EquipmentName);
	void DisplayMatchStateOverlay(class UClass* OverlayClass);
	bool ArePlayersEnemies(class APlayerState* A, class APlayerState* B);
};


// Class Pavlov.PavlovGameUserSettings
// 0x0090 (0x01A8 - 0x0118)
class UPavlovGameUserSettings : public UGameUserSettings
{
public:
	float                                              PlayerHeight;                                             // 0x0118(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PlayerCrouchHeight;                                       // 0x011C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPlayerRightHanded;                                       // 0x0120(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCalibrated;                                              // 0x0121(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOOBLocomotion;                                           // 0x0122(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTwoHandToggle;                                           // 0x0123(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoUngrip;                                              // 0x0124(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLegacyGrip;                                              // 0x0125(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSnapTurnEnabled;                                         // 0x0126(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMountFriendly;                                           // 0x0127(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EOnlineRegion                                      PrimaryRegion;                                            // 0x0128(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceNoPostProcess;                                      // 0x0129(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoSwapHands;                                           // 0x012A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLeftEyeRendering;                                        // 0x012B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSwapControllers;                                         // 0x012C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bVirtualStock;                                            // 0x012D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGripMode                                          GripModeVive;                                             // 0x012E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGripMode                                          GripModeOculus;                                           // 0x012F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSmoothTurn;                                              // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              SmoothTurnRate;                                           // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	ECustomAction                                      MainHandAction;                                           // 0x0138(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ECustomAction                                      OffHandAction;                                            // 0x0139(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoSprint;                                              // 0x013A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLiteFootStepHaptics;                                     // 0x013B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLockInventory;                                           // 0x013C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bHeadLocomotion;                                          // 0x013D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bFreeSpectating;                                          // 0x013E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x013F(0x0001) MISSED OFFSET
	TArray<struct FSpectatorViews>                     SpectatorViews;                                           // 0x0140(0x0010) (ZeroConstructor, Config)
	bool                                               bInvertTouchpad;                                          // 0x0150(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bArmKillfeed;                                             // 0x0151(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0152(0x0006) MISSED OFFSET
	struct FString                                     VoiceDevice;                                              // 0x0158(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             FavoriteMaps;                                             // 0x0168(0x0010) (ZeroConstructor, Config)
	bool                                               bRealTimeReverb;                                          // 0x0178(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseAudioThread;                                          // 0x0179(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bNoAmbisonics;                                            // 0x017A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSwapMenuScoreboard;                                      // 0x017B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGripMode                                          GripMode;                                                 // 0x017C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EVRSmoothLocomotionMode                            SmoothLocomotionMode;                                     // 0x017D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGoreLevel                                         GoreLevel;                                                // 0x017E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x017F(0x0001) MISSED OFFSET
	float                                              GrabForceThreashold;                                      // 0x0180(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseGrabForce;                                            // 0x0184(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	struct FString                                     StartUpMap;                                               // 0x0188(0x0010) (ZeroConstructor, Config)
	TArray<uint64_t>                                   MutedPlayers;                                             // 0x0198(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovGameUserSettings");
		return ptr;
	}


	bool UseOOBLocomotion();
	bool UseGrabForce();
	bool ShouldSwapControllers();
	void SetVoiceDevice(const struct FString& DeviceURL);
	void SetVirtualStock(class UObject* WorldContextObject, bool bEnabled);
	void SetUseGrabForce(bool bEnabled);
	void SetUseAudioThread(bool bEnabled);
	void SetTwoHandToggle(bool bEnabled);
	void SetTouchpadInverted(bool bInverted);
	void SetSwapControllers(bool bEnabled);
	void SetStartUpMap(const struct FString& NewStartUpMap);
	void SetSnapTurn(bool bEnabled);
	void SetSmoothTurnRate(float Rate);
	void SetSmoothTurn(bool bEnabled);
	void SetSmoothLocomotionMode(EVRSmoothLocomotionMode NewMode);
	void SetResolutionQuality(float Quality);
	void SetRealTimeReverb(bool bEnabled);
	void SetPrimaryRegion(EOnlineRegion Region);
	void SetPlayerRightHanded(class UObject* WorldContextObject, bool bRightHanded);
	void SetPlayerHeight(float Height);
	void SetOOBLocomotion(bool bUse);
	void SetOffHandAction(ECustomAction Action);
	void SetNoAmbisonics(bool bEnabled);
	void SetMountFriendly(bool bFriendly);
	void SetMenuScoreboardSwaped(bool bEnabled);
	void SetMapAsFavorite(class UPavlov_Map* Map, bool bEnabled);
	void SetMainHandAction(ECustomAction Action);
	void SetLockInventory(bool bEnabled);
	void SetLiteFootStepHaptics(bool bEnabled);
	void SetLegacyGrip(bool bEnabled);
	void SetLeftEyeRendering(bool bEnabled);
	void SetHeadLocomotion(bool bEnabled);
	void SetGripMode(EGripMode NewGripMode);
	void SetGrabForceThreashold(float Value);
	void SetGoreLevel(EGoreLevel Level);
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
	bool IsSmoothTurnEnabled();
	bool IsPostProcessDisabled();
	bool IsPlayerRightHanded();
	bool IsMountFriendly();
	bool IsMenuScoreboardSwapped();
	bool IsLiteFootStepHapticsEnabled();
	bool IsLeftEyeRendering();
	bool IsHeadLocomotionEnabled();
	bool IsFreeSpectatingEnabled();
	bool IsFavoriteMap(class UPavlov_Map* Map);
	bool IsCalibrated();
	bool IsAutoUngripEnabled();
	bool IsAutoSwapHandsEnabled();
	bool IsAutoSprintEnabled();
	bool IsArmKillfeedEnabled();
	bool HasLegacyGrip();
	struct FString GetVoiceDevice();
	bool GetVirtualStock();
	bool GetUseAudioThread();
	struct FString GetStartUpMap();
	struct FTransform GetSpectatorView(class UObject* WorldContextObject, int Index);
	float GetSmoothTurnRate();
	EVRSmoothLocomotionMode GetSmoothLocomotionMode();
	bool GetRealTimeVoiceReverb();
	EOnlineRegion GetPrimaryRegion();
	float GetPlayerHeight();
	ECustomAction GetOffHandAction();
	bool GetNoAmbisonics();
	ECustomAction GetMainHandAction();
	bool GetLockInventory();
	EGripMode GetGripMode();
	float GetGrabForceThreashold();
	EGoreLevel GetGoreLevel();
	void ForceNoPostProcessing(bool bEnabled);
};


// Class Pavlov.PavlovHandAnimInstance
// 0x0080 (0x0450 - 0x03D0)
class UPavlovHandAnimInstance : public UVRControllerAnimInstance
{
public:
	float                                              IndexSafeTriggerTimer;                                    // 0x03D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x03D4(0x0054) MISSED OFFSET
	struct FVector                                     IKTriggerLocation;                                        // 0x0428(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIKTriggerAvailable;                                      // 0x0434(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	struct FRotator                                    TriggerFingerRotation;                                    // 0x0438(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bImmersiveMode;                                           // 0x0444(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	class UAnimSequence*                               DefaultImmersiveSequence;                                 // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovHandAnimInstance");
		return ptr;
	}


	float GetFingerBlend(EFinger Finger);
};


// Class Pavlov.PavlovHUD
// 0x0000 (0x0418 - 0x0418)
class APavlovHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovHUD");
		return ptr;
	}

};


// Class Pavlov.PavlovInventory
// 0x0018 (0x0460 - 0x0448)
class APavlovInventory : public AVRInventory
{
public:
	class UStaticMeshComponent*                        AmmoPouchMesh;                                            // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundCue*                                   MagazineGrabSound;                                        // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  MagazineGrabHaptic;                                       // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovInventory");
		return ptr;
	}

};


// Class Pavlov.PavlovLevelScriptActor
// 0x0000 (0x0330 - 0x0330)
class APavlovLevelScriptActor : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovLevelScriptActor");
		return ptr;
	}

};


// Class Pavlov.PavlovLobby
// 0x00D0 (0x0198 - 0x00C8)
class UPavlovLobby : public USteamLobby
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00C8(0x0050) MISSED OFFSET
	class UPavlovGameInstance*                         GameInstance;                                             // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	ELobbyState                                        LocalState;                                               // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              HostLocallyTimer;                                         // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SanityTimer;                                              // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHostLocally;                                             // 0x012C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	struct FServerSettings                             ServerSettings;                                           // 0x0130(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     GameMode;                                                 // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Map;                                                      // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapLabel;                                                 // 0x0180(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ELobbyState                                        State;                                                    // 0x0190(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EServerHostingType                                 HostingType;                                              // 0x0191(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFillWithBots;                                            // 0x0192(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bConnecting;                                              // 0x0193(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CompetitiveMode;                                          // 0x0194(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovLobby");
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
	void RequestTeam(int TeamId);
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


// Class Pavlov.PavlovLocalPlayer
// 0x0000 (0x01C8 - 0x01C8)
class UPavlovLocalPlayer : public USteamworksLocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovLocalPlayer");
		return ptr;
	}

};


// Class Pavlov.FallDamageType
// 0x0000 (0x0040 - 0x0040)
class UFallDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.FallDamageType");
		return ptr;
	}

};


// Class Pavlov.PavlovMovementComponent
// 0x0080 (0x07A0 - 0x0720)
class UPavlovMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x29];                                      // 0x0720(0x0029) MISSED OFFSET
	EParachuteState                                    ParachuteState;                                           // 0x0749(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x074A(0x0002) MISSED OFFSET
	float                                              FallDamage;                                               // 0x074C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyFallDamage;                                         // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	float                                              AiSpeedMultiplier;                                        // 0x0754(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRoomScaleLocomotion;                                     // 0x0758(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0759(0x0003) MISSED OFFSET
	float                                              FreeFallThreashold;                                       // 0x075C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallMaxLateralSpeed;                                  // 0x0760(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallAirControlBoost;                                  // 0x0764(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallDamagePerSecond;                                      // 0x0768(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumFallDamage;                                        // 0x076C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoParachuteAltitude;                                    // 0x0770(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteDeceleration;                                    // 0x0774(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteTerminalVelocity;                                // 0x0778(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteAirControlBoost;                                 // 0x077C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeploymentDuration;                                       // 0x0780(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	class USoundCue*                                   DeploymentSound;                                          // 0x0788(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintSpeedMultiplier;                                    // 0x0790(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintAccelerationMultiplier;                             // 0x0794(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x0798(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x079C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovMovementComponent");
		return ptr;
	}


	void ServerDeployParachute();
	void OnRep_PrachuteState();
	void MulticastOnParachuteDeployed();
};


// Class Pavlov.PavlovPawn
// 0x0470 (0x0F50 - 0x0AE0)
class APavlovPawn : public APavlovPawnBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0AE0(0x0018) MISSED OFFSET
	class UVRAvatarComponent*                          Avatar;                                                   // 0x0AF8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVHealthComponent*                           HealthComponent;                                          // 0x0B00(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            PlayerInfo;                                               // 0x0B08(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVRSelectionComponent*                       SelectionComponent;                                       // 0x0B10(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageTrackerComponent*                     DamageTracker;                                            // 0x0B18(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInstancedSourceBusComponent*                FootStepAudio;                                            // 0x0B20(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAvatarSkin*                                 AvatarSkin;                                               // 0x0B28(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0B30(0x0010) MISSED OFFSET
	struct FEquipmentDefinition                        EquipmentToLoad;                                          // 0x0B40(0x0048)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0B88(0x0018) MISSED OFFSET
	struct FFingerTracking                             FingerTrackingSent;                                       // 0x0BA0(0x0003) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0BA3(0x0005) MISSED OFFSET
	struct FKillInfo                                   LatestKillInfo;                                           // 0x0BA8(0x0070)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0C18(0x0008) MISSED OFFSET
	float                                              StopSprintTimer;                                          // 0x0C20(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlaySpaceExploitKillTimer;                                // 0x0C24(0x0004) (ZeroConstructor, IsPlainOldData)
	class UHolsterComponent*                           MainWeaponHolster;                                        // 0x0C28(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWatch*                                      WatchComponent;                                           // 0x0C30(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVoiceComponent*                             Voice;                                                    // 0x0C38(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0C40(0x0020) MISSED OFFSET
	TArray<struct FWoundInfo>                          DelayedWoundInfoList;                                     // 0x0C60(0x0010) (ZeroConstructor, Transient)
	TArray<class UParticleSystemComponent*>            HeadshotParticleInstances;                                // 0x0C70(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UAudioComponent*>                     HeadshotSoundInstances;                                   // 0x0C80(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0C90(0x0004) MISSED OFFSET
	struct FFingerTracking                             FingerTracking;                                           // 0x0C94(0x0003) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x0C97(0x0001) MISSED OFFSET
	class UClass*                                      AvatarSkinClass;                                          // 0x0C98(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              SlowTimer;                                                // 0x0CA0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              CorpseTime;                                               // 0x0CA4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bInvulnerable;                                            // 0x0CA8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RadioChannel;                                             // 0x0CA9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0CAA(0x0002) MISSED OFFSET
	int                                                Armour;                                                   // 0x0CAC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                HelmetArmour;                                             // 0x0CB0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // 0x0CB4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bVoiceActive;                                             // 0x0CB8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0CB9(0x0003) MISSED OFFSET
	float                                              ImpactWeight;                                             // 0x0CBC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ImpactCurve;                                              // 0x0CC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BloodSplatClass;                                          // 0x0CC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBloodSplats;                                           // 0x0CD0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0CD4(0x0004) MISSED OFFSET
	class UParticleSystem*                             HeadshotParticle;                                         // 0x0CD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HeadshotBleedParticle;                                    // 0x0CE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotBleedSound;                                       // 0x0CE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotSound;                                            // 0x0CF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotSound2D;                                          // 0x0CF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FallDamageSound;                                          // 0x0D00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadBoneName;                                             // 0x0D08(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ChestBoneName;                                            // 0x0D10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HelmetHitParticle;                                        // 0x0D18(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HelmetHitSound;                                           // 0x0D20(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnProtectionDuration;                                  // 0x0D28(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlaySpaceLimits;                                          // 0x0D2C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnderPlaySpaceExploit;                                   // 0x0D38(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0D39(0x0003) MISSED OFFSET
	float                                              PlaySpaceExploitKillDelay;                                // 0x0D3C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraClipProtectionEnabled;                             // 0x0D40(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0D41(0x0003) MISSED OFFSET
	float                                              CameraClipThreashold;                                     // 0x0D44(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraClipMaxDuration;                                    // 0x0D48(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0D4C(0x0004) MISSED OFFSET
	class USoundCue*                                   WearArmourSound;                                          // 0x0D50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WearHelmetSound;                                          // 0x0D58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSlowDuration;                                          // 0x0D60(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitSlowDuration;                                          // 0x0D64(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlowMultiplier;                                           // 0x0D68(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0D6C(0x0004) MISSED OFFSET
	TArray<struct FName>                               SlowBones;                                                // 0x0D70(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   HitSound;                                                 // 0x0D80(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HitSoundVictim;                                           // 0x0D88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HitSoundShooter;                                          // 0x0D90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ZombieHitSound;                                           // 0x0D98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitEffect;                                                // 0x0DA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitEffectVictim;                                          // 0x0DA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        HitMontages;                                              // 0x0DB0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   RogerSound;                                               // 0x0DC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WatchClass;                                               // 0x0DC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSZThreashold;                                           // 0x0DD0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0DD4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          XRayMaterialTeam0;                                        // 0x0DD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          XRayMaterialTeam1;                                        // 0x0DE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAttenuation*                           VoiceAttenuation;                                         // 0x0DE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundEffectSourcePresetChain*               VoiceEffectChain;                                         // 0x0DF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 VoiceVolumeCurve;                                         // 0x0DF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundSourceBus*                             RadioSourceBus;                                           // 0x0E00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPickDisableOnDead;                                       // 0x0E08(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bXRayEnabled;                                             // 0x0E09(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFirstPerson;                                        // 0x0E0A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x0E0B(0x0005) MISSED OFFSET
	TArray<class UClass*>                              DefaultAvatarSkins;                                       // 0x0E10(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnVoiceChanged;                                           // 0x0E20(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRadioToggle;                                            // 0x0E30(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAvatarSkinChanged;                                      // 0x0E40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAISlotManager*                              AISlotManager;                                            // 0x0E50(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              TimeSinceLastFootStep;                                    // 0x0E58(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FootStepTimer;                                            // 0x0E5C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SprintFootStepCount;                                      // 0x0E60(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bArmorRattlePlayed;                                       // 0x0E64(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0E65(0x0003) MISSED OFFSET
	class USurfaceFXAsset*                             FootStepSneak;                                            // 0x0E68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             FootStepWalk;                                             // 0x0E70(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             FootStepRun;                                              // 0x0E78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ArmorRattleSound;                                         // 0x0E80(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DefaultFootStepSound;                                     // 0x0E88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DefaultRunFootStepSound;                                  // 0x0E90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ConcreteFootStepSound;                                    // 0x0E98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ConcreteRunFootStepSound;                                 // 0x0EA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MetalFootStepSound;                                       // 0x0EA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MetalRunFootStepSound;                                    // 0x0EB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CarpetFootStepSound;                                      // 0x0EB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CarpetRunFootStepSound;                                   // 0x0EC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FabricFootStepSound;                                      // 0x0EC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FabricRunFootStepSound;                                   // 0x0ED0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WoodFootStepSound;                                        // 0x0ED8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WoodRunFootStepSound;                                     // 0x0EE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GlassFootStepSound;                                       // 0x0EE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GlassRunFootStepSound;                                    // 0x0EF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WaterFootStepSound;                                       // 0x0EF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WaterRunFootStepSound;                                    // 0x0F00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DirtFootStepSound;                                        // 0x0F08(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DirtRunFootStepSound;                                     // 0x0F10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  FootStepHaptic;                                           // 0x0F18(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootStepInterval;                                         // 0x0F20(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFootStepInterval;                                      // 0x0F24(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SneakSpeedMul;                                            // 0x0F28(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollMinDamping;                                        // 0x0F2C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollLifeDuration;                                      // 0x0F30(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollLife;                                              // 0x0F34(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FConstraintProfileProperties>        ConstraintDefaultProfiles;                                // 0x0F38(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData18[0x8];                                       // 0x0F48(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPawn");
		return ptr;
	}


	void WearKevlar(bool bWithHelmet);
	void WearHelmet();
	void UpdateLocomotion();
	void ToggleRadio(bool bEnabled);
	void TakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	class UAudioComponent* SpawnHitFeedbackSound(EHitFeedbackType Type);
	void SpawnHeadshotEffect(class APlayerState* Killer, const struct FVector& HitLocation, const struct FVector& HitDirection, struct FVector* WorldHitLocation, struct FVector* WorldHitDirection);
	void SetupWatch(class UWatch* WatchComp);
	void SetTeamId(int NewTeamId);
	void SetAvatarSkin(class UClass* NewSkinClass);
	void ServerUpdateFingerTracking(const struct FFingerTracking& Data);
	void ServerSetRadioChannel(unsigned char Channel);
	void ServerReportFallDamage(float Damage);
	void ServerGiveMagazine(bool bOffHand);
	void ServerGive(const struct FName& EquipmentName, const struct FName& Skin);
	void ServerDeployParachute();
	void SanityCheck();
	void OnTeamIdChanged();
	void OnRevive(class AActor* OwnerActor);
	void OnRep_TeamId();
	void OnRep_RadioChannel();
	void OnRep_HelmetArmour();
	void OnRep_AvatarSkinClass();
	void OnRep_Armour();
	void OnKill(class AActor* OwnerActor);
	void OnImpactDamage(const struct FImpactDamage& ImpactDamage);
	void OnDismember(const struct FWoundInfo& WoundInfo, const struct FPreBakedWound& PreBakedWound);
	void OnCameraClipChanged(bool bClipping);
	void MulticastTeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	void MulticastResetPawn();
	void MulticastOnZombieHit();
	void MulticastOnWearArmour();
	void MulticastOnRadialDeath(const struct FVector_NetQuantize& Origin);
	void MulticastOnMagazineGrabbed(bool bDominant);
	void MulticastOnImpactDamage(const struct FImpactDamage& ImpactDamage);
	void MulticastOnHitSlow();
	void MulticastOnHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Normal, class APlayerState* Shooter, bool bOnArmor);
	void MulticastOnHelmetHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Direction);
	void MulticastOnHelmetBlownoff();
	void MulticastOnHeadshot(class APlayerState* Killer, const struct FVector& HitLocation, const struct FVector& HitDirection, unsigned char WoundRate);
	void MulticastOnFallDamage();
	void MulticastAdjustAvatarScale(float PlayerHeight);
	void LoadEquipment(const struct FEquipmentDefinition& definition);
	bool IsSprinting();
	bool IsDead();
	bool IsCameraClipping();
	class AVRItem* GiveItem(const struct FGiveItemParams& Params);
	void GiveBomb(class ABomb* Bomb);
	void Give(const struct FName& EquipmentName, const struct FName& Skin, bool bWithAmmo, bool bByBuyMenu);
	class UHolsterComponent* GetSideWeaponHolster();
	class UHolsterComponent* GetMainWeaponHolster();
	class UHolsterComponent* GetKnifeHolster();
	class AVRItem* GetItemOfClass(class UClass* ItemClass, bool bSkipHands, bool bSubClass);
	class AVRItem* GetHoldingItemByName(const struct FName& ItemName);
	float GetHealth();
	void GetHeadSpaceHitVectors(const struct FVector& HitLocation, const struct FVector& HitDirection, struct FVector* HeadSpaceHitLocation, struct FVector* HeadSpaceHitDirection);
	TArray<class UHolsterComponent*> GetGrenadeHolsters();
	bool GetEquipmentByName(const struct FName& EquipmentName, struct FEquipmentDefinition* definition);
	class UHolsterComponent* GetBombHolster();
	class UAvatarSkin* GetAvatarSkin();
	class UVRPocketComponent* GetAmmoPocket();
	void DropEquipment();
	void ClientSanityCheck();
	void ClientClearSoundMix();
	bool CanListenToRadio();
	void BlowHelmetOff();
	void ApplyDelayedWound();
	void AddHitSlow();
	void ActivateCameraClip();
};


// Class Pavlov.PavlovPhysicsCollisionHandler
// 0x0008 (0x0048 - 0x0040)
class UPavlovPhysicsCollisionHandler : public UPhysicsCollisionHandler
{
public:
	float                                              MaxDistance;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPhysicsCollisionHandler");
		return ptr;
	}

};


// Class Pavlov.PavlovPlayerCameraManager
// 0x0000 (0x2470 - 0x2470)
class APavlovPlayerCameraManager : public APlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPlayerCameraManager");
		return ptr;
	}

};


// Class Pavlov.PavlovPlayerController
// 0x0168 (0x07F0 - 0x0688)
class APavlovPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0688(0x005C) MISSED OFFSET
	float                                              AuthTimeout;                                              // 0x06E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET
	class AVoiceRouter*                                VoiceRouter;                                              // 0x06F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 PassengerPawn;                                            // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBuyingEnabled;                                           // 0x0700(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipHeadsetScale;                                        // 0x0701(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBoughtSomething;                                      // 0x0702(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0703(0x0005) MISSED OFFSET
	struct FEquipmentSnapshot                          EquipmentSnapshot;                                        // 0x0708(0x0070) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bHasEquipmentSnapshot;                                    // 0x0778(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreEquipment;                                        // 0x0779(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x077A(0x0006) MISSED OFFSET
	class UClass*                                      LastWeaponBuy;                                            // 0x0780(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LastSecondaryWeaponBuy;                                   // 0x0788(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          TeamKiller;                                               // 0x0790(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MessageClass;                                             // 0x0798(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  KillPingSound;                                            // 0x07A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RussianAvatarSkinClass;                                   // 0x07A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBuyingChanged;                                          // 0x07B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamKilled;                                             // 0x07C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHeadsetScaleChanged;                                    // 0x07D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x07E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPlayerController");
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
	void ServerReportKnifeDamage(const struct FClientKnifeDamage& Info);
	void ServerReportHandenessChange(bool bRightHanded);
	void ServerReportCorpseHit(class APavlovPawn* PawnCorpse, const struct FImpactDamage& ImpactDamage);
	void ServerReportBulletHit(const struct FClientBulletHit& Hit);
	void ServerProcessZombieDamage();
	void ServerKnockZombie(class AZAICharacter* Zombie, EZKnockBackDirection Direction, unsigned char Flags);
	void ServerInstigateVote(class UClass* VoteClass, const struct FString& Param1, int Param2);
	void ServerEnterDigit(class ABomb* Bomb, int Index);
	void ServerBuy(const struct FName& EquipmentName);
	void ServerBoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat);
	void ServerAuthenticate(const struct FString& HexTicket);
	void ServerAbstainToVote();
	void PunishTeamKiller();
	void OnZombieClientKnock(class AZAICharacter* Zombie, EZKnockBackDirection Direction, unsigned char Flags);
	void OnMenuUniverseChanged(bool bEnabled);
	void OnAuthTimedout();
	void OnAuthTicketReceived(bool bSucceed, const struct FString& HexAuthTicket);
	void MulticastDebugPoint(const struct FVector& Location, const struct FString& Text);
	float GetHeadMountedDisplayScale();
	void ForgiveTeamKiller();
	void ClientSetBuying(bool bEnabled);
	void ClientServerConnect(const struct FServerConnectParams& Params);
	void ClientReportMatchEnd();
	void ClientPlayKillPing();
	void ClientOnTeamKilled(class APavlovPlayerState* CulpritTeamKiller);
	void ClientInstigateFlash(float Seconds, const struct FVector& Location);
	void ClientDisplayMessage(const struct FString& Message);
	void ClientConnectTo(const struct FString& ConnectURL);
	void ClientAuthenticate();
	void Buy(const struct FName& EquipmentName);
	void BoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat);
	void ApplySkippedHeadMountedDisplayScale();
};


// Class Pavlov.PavlovPlayerState
// 0x0048 (0x0438 - 0x03F0)
class APavlovPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	int                                                TeamId;                                                   // 0x03F8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x03FC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x0400(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x0404(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // 0x0408(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x040C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                Progress;                                                 // 0x0410(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x0414(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDev;                                                     // 0x0415(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerFlair                                       Flair;                                                    // 0x0416(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0417(0x0001) MISSED OFFSET
	int                                                RespawnCountdown;                                         // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              PlayerHeight;                                             // 0x041C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x0420(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bVirtualStock;                                            // 0x0421(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanVote;                                                 // 0x0422(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bAuthenticated;                                           // 0x0423(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LifeTeamKillCount;                                        // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtraRespawnCountdown;                                    // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DeadTime;                                                 // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnGhost;                                              // 0x0430(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0431(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovPlayerState");
		return ptr;
	}


	void Reset();
	void OnRep_Flair();
};


// Class Pavlov.PavlovSpectatorPawn
// 0x0020 (0x03D0 - 0x03B0)
class APavlovSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
	bool                                               bIsScrubing;                                              // 0x03C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UPlayerCycler*                               Cycler;                                                   // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovSpectatorPawn");
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
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovStatics");
		return ptr;
	}


	void STATIC_SwapHands(class UObject* WorldContextObject);
	bool STATIC_SupportsGripForce();
	void STATIC_SpawnLocalSound2DByPawn(class APawn* Pawn, class USoundBase* Sound);
	void STATIC_SpawnLocalSound2D(class APlayerController* Controller, class USoundBase* Sound);
	void STATIC_SpawnHitFeedbackSound(class UObject* WorldContextObject, EHitFeedbackType Type);
	void STATIC_SetPlayerEffectsDisabled(class UObject* WorldContextObject, bool bDisabled);
	void STATIC_SetActorNetDormancy(class AActor* Actor, TEnumAsByte<ENetDormancy> Dormancy);
	void STATIC_OpenPavlovMapById(class UObject* WorldContextObject, const struct FString& ID, const struct FString& Options, bool bNoDelay);
	bool STATIC_IsReplay(class UObject* WorldContextObject);
	bool STATIC_IsQuestServer();
	bool STATIC_IsQuest();
	bool STATIC_IsPlayingOnlineGame(class UObject* WorldContextObject);
	bool STATIC_IsOculusTouch();
	bool STATIC_IsBombDropped(class UObject* WorldContextObject);
	void STATIC_GoToStartUpMap(class UObject* WorldContextObject);
	class UWorkshop* STATIC_GetWorkshop(class UObject* WorldContextObject);
	struct FString STATIC_GetUserId(class UObject* WorldContextObject);
	class UUIManager* STATIC_GetUIManager(class UObject* WorldContextObject);
	class UTutorial* STATIC_GetTutorial(class UObject* WorldContextObject);
	class ASpectatorTVCamera* STATIC_GetSpectatorTVCamera(class UObject* WorldContextObject);
	struct FTransform STATIC_GetRefPoseBoneTransform(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneName);
	void STATIC_GetPlayerEquipment(class APlayerState* PlayerState, struct FName* Primary, TArray<struct FName>* Secondary);
	class AGlobalPlayerEffects* STATIC_GetPlayerEffects(class UObject* WorldContextObject);
	class APavlovPawn* STATIC_GetPawnByPlayerState(class UObject* WorldContextObject, class APlayerState* PlayerState);
	class UPavlovLobby* STATIC_GetPavlovLobby(class UObject* WorldContextObject);
	class UPavlovGameUserSettings* STATIC_GetPavlovGameUserSettings();
	class UPavlovGameInstance* STATIC_GetPavlovGameInstance(class UObject* WorldContextObject);
	class AMenuUniverse* STATIC_GetMenuUniverseInstance(class UObject* WorldContextObject);
	class APavlovPlayerState* STATIC_GetLocalPlayerState(class UObject* WorldContextObject);
	struct FTransform STATIC_GetLocalPlayerCameraTransform(class UObject* WorldContextObject);
	class UObject* STATIC_GetDefaultObject(class UClass* ObjectClass);
	class AController* STATIC_GetControllerByPlayerState(class APlayerState* PlayerState);
	struct FTransform STATIC_GetBoneTransform(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneName);
	class ABomb* STATIC_GetBombInstance(class UObject* WorldContextObject);
	void STATIC_ForceNoSoundOcclusion(class UAudioComponent* AudioComp);
	void STATIC_FlushActorNetDormancy(class AActor* Actor);
	class ABombPlantSpot* STATIC_FindClosestBombPlantSpot(class UObject* WorldContextObject, const struct FVector& RefLocation);
	bool STATIC_ArePawnsHostile(class UObject* WorldContextObject, class APawn* A, class APawn* B);
};


// Class Pavlov.PavlovVehicleAnimInstance
// 0x0000 (0x0900 - 0x0900)
class UPavlovVehicleAnimInstance : public UVehicleAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVehicleAnimInstance");
		return ptr;
	}

};


// Class Pavlov.PavlovVoiceComponent
// 0x0010 (0x06D0 - 0x06C0)
class UPavlovVoiceComponent : public USteamVoiceComponent
{
public:
	bool                                               bTeamOnly;                                                // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeadOnly;                                                // 0x06C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x06C2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVoiceComponent");
		return ptr;
	}

};


// Class Pavlov.PavlovVOIPTalker
// 0x0010 (0x0138 - 0x0128)
class UPavlovVOIPTalker : public UVOIPTalker
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	class USoundSourceBus*                             RadioSourceBus;                                           // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovVOIPTalker");
		return ptr;
	}

};


// Class Pavlov.PavlovWheeledVehicle
// 0x0058 (0x03F0 - 0x0398)
class APavlovWheeledVehicle : public AWheeledVehicle
{
public:
	class UAudioComponent*                             EngineAudio;                                              // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             RollingAudio;                                             // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET
	class USoundCue*                                   EngineSound;                                              // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineStartSound;                                         // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineOffSound;                                           // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EngineReverseSound;                                       // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EngineSocket;                                             // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RollingSound;                                             // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PavlovWheeledVehicle");
		return ptr;
	}


	void SetSteeringInput(float Input);
};


// Class Pavlov.PivotComponent
// 0x0000 (0x0240 - 0x0240)
class UPivotComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PivotComponent");
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
		static auto ptr = UObject::FindClass("Class Pavlov.PlayerCycler");
		return ptr;
	}


	void GetNext(class APavlovPlayerState** PlayerState, class APavlovPawn** Pawn);
};


// Class Pavlov.PlayerSpawnPoint
// 0x0020 (0x0378 - 0x0358)
class APlayerSpawnPoint : public APlayerStart
{
public:
	int                                                TeamId;                                                   // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamic;                                                 // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyTeam;                                                // 0x035D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUnStack;                                             // 0x035E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x035F(0x0001) MISSED OFFSET
	struct FVector                                     CountHalfExtent;                                          // 0x0360(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpawnCount;                                               // 0x036C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VisibilityCountTeam0;                                     // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VisibilityCountTeam1;                                     // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PlayerSpawnPoint");
		return ptr;
	}

};


// Class Pavlov.Pliers
// 0x0040 (0x0510 - 0x04D0)
class APliers : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	EPliersState                                       State;                                                    // 0x04D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              CutDelay;                                                 // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReleaseDelay;                                             // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class USoundCue*                                   CutSound;                                                 // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CuttingSound;                                             // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ReleaseSound;                                             // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CutLocationSocket;                                        // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0508(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Pliers");
		return ptr;
	}


	void ServerReportCut(class ABomb* Bomb, int WireIndex);
	void MulticastOnCut();
};


// Class Pavlov.PostMatchSummary
// 0x0000 (0x0350 - 0x0350)
class APostMatchSummary : public AStereoOverlay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.PostMatchSummary");
		return ptr;
	}

};


// Class Pavlov.RadioToggleComponent
// 0x0020 (0x05A0 - 0x0580)
class URadioToggleComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0580(0x0008) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  ToggleHaptic;                                             // 0x0588(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ToggleSound;                                              // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RogerSound;                                               // 0x0598(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RadioToggleComponent");
		return ptr;
	}

};


// Class Pavlov.Rat
// 0x0010 (0x0750 - 0x0740)
class ARat : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0740(0x0004) MISSED OFFSET
	float                                              ImpactWeight;                                             // 0x0744(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ImpactCurve;                                              // 0x0748(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Rat");
		return ptr;
	}


	void OnRevive(class AActor* ActorOwner);
	void OnKill(class AActor* ActorOwner);
	void ApplyImpact();
};


// Class Pavlov.RatAIController
// 0x0018 (0x0450 - 0x0438)
class ARatAIController : public AAIController
{
public:
	class AVRPawn*                                     TargetPawn;                                               // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0440(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RatAIController");
		return ptr;
	}

};


// Class Pavlov.RatAnimInstance
// 0x0050 (0x03B0 - 0x0360)
class URatAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET
	float                                              MovingSpeedReference;                                     // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingSpeed;                                              // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PelvisRotation;                                           // 0x0378(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpineRotation;                                            // 0x0384(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpineLerpExp;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMoving;                                                  // 0x0394(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFalling;                                                 // 0x0395(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLookAt;                                                  // 0x0396(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0397(0x0001) MISSED OFFSET
	struct FVector                                     LookAtLocation;                                           // 0x0398(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x03A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RatAnimInstance");
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
		static auto ptr = UObject::FindClass("Class Pavlov.ReplayManager");
		return ptr;
	}


	void PlayReplay(const struct FString& ReplayId);
	void OnCustomMapDownloaded(bool bSucceed, const struct FString& ID);
	void Find(const struct FString& GameMode, bool bCompetitive);
};


// Class Pavlov.ReplayPawn
// 0x0000 (0x0388 - 0x0388)
class AReplayPawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ReplayPawn");
		return ptr;
	}

};


// Class Pavlov.ReplayPlayerController
// 0x0000 (0x0688 - 0x0688)
class AReplayPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ReplayPlayerController");
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
		static auto ptr = UObject::FindClass("Class Pavlov.RevolverGunState");
		return ptr;
	}


	void SetCylinder(bool bOpen);
};


// Class Pavlov.RifleGunState
// 0x0000 (0x0198 - 0x0198)
class URifleGunState : public UActionGunState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.RifleGunState");
		return ptr;
	}

};


// Class Pavlov.ServerBrowser
// 0x0030 (0x0058 - 0x0028)
class UServerBrowser : public UObject
{
public:
	class UPingIP*                                     Pinger;                                                   // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	bool                                               bUpdating;                                                // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNotFull;                                                 // 0x0035(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNotEmpty;                                                // 0x0036(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoPassword;                                              // 0x0037(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FServerDetails>                      ServerList;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnUpdate;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ServerBrowser");
		return ptr;
	}


	void Update(bool bUpdatePings);
	void OnPingFailure(class UPingIP* PingOperation, const struct FString& Hostname);
	void OnPingComplete(class UPingIP* PingOperation, const struct FString& Hostname, int TimeMS);
};


// Class Pavlov.Shell
// 0x0008 (0x0330 - 0x0328)
class AShell : public AActor
{
public:
	class USurfaceFXAsset*                             SurfaceFX;                                                // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Shell");
		return ptr;
	}


	void SpawnHitEffect(const struct FHitResult& HitResult);
};


// Class Pavlov.ShowOnlyComponent
// 0x0018 (0x0108 - 0x00F0)
class UShowOnlyComponent : public UActorComponent
{
public:
	class APavlovPlayerController*                     PlayerController;                                         // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ShowOnlyComponent");
		return ptr;
	}

};


// Class Pavlov.SkinAsset
// 0x0028 (0x0058 - 0x0030)
class USkinAsset : public UDataAsset
{
public:
	int                                                DefinitionId;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UClass*                                      For;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSimplified;                                              // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaterialOverrideIndex;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SkinAsset");
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
		static auto ptr = UObject::FindClass("Class Pavlov.SkinComponent");
		return ptr;
	}


	void RequestSkin(class USkinAsset* RequestedSkin);
	void OnRep_Skin();
};


// Class Pavlov.SoldierSkin
// 0x0028 (0x0188 - 0x0160)
class USoldierSkin : public UAvatarSkin
{
public:
	class USkeletalMeshComponent*                      ArmorMeshComp;                                            // 0x0160(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	class USkeletalMesh*                               Vest;                                                     // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Helmet;                                                   // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Combined;                                                 // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SoldierSkin");
		return ptr;
	}

};


// Class Pavlov.SpectatorTag
// 0x0060 (0x0388 - 0x0328)
class ASpectatorTag : public AActor
{
public:
	class USceneComponent*                             Pivot;                                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             NamePivot;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        VerticalLine;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET
	bool                                               bRaised;                                                  // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFadingOut;                                               // 0x0351(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              RaiseTime;                                                // 0x0354(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RaiseDuration;                                            // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RaiseHeight;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineGirth;                                                // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UCurveVector*                                RaiseCurve;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FadeOutCurve;                                             // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   RaiseSound;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SpectatorTag");
		return ptr;
	}


	void OnFadeOut();
	class APavlovPlayerState* GetPlayerState();
};


// Class Pavlov.SpectatorTV
// 0x0000 (0x0328 - 0x0328)
class ASpectatorTV : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SpectatorTV");
		return ptr;
	}

};


// Class Pavlov.SpectatorTVCamera
// 0x0030 (0x0358 - 0x0328)
class ASpectatorTVCamera : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class USceneCaptureComponent2D*                    SceneCapture;                                             // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	class APavlovPawn*                                 FocusedPawn;                                              // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // 0x0348(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamOnly;                                                // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCycle;                                               // 0x034D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x034E(0x0002) MISSED OFFSET
	float                                              YawExp;                                                   // 0x0350(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoCycleRate;                                            // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SpectatorTVCamera");
		return ptr;
	}


	void OnAttachedToFocusedPawn();
	class USceneCaptureComponent2D* GetSceneCapture();
	void Cycle();
	void AddYawInput(float Value);
};


// Class Pavlov.StereoMessage
// 0x0010 (0x0360 - 0x0350)
class AStereoMessage : public AStereoOverlay
{
public:
	struct FString                                     Message;                                                  // 0x0350(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.StereoMessage");
		return ptr;
	}

};


// Class Pavlov.SurfaceFXAsset
// 0x0090 (0x00C0 - 0x0030)
class USurfaceFXAsset : public UDataAsset
{
public:
	class USoundCue*                                   DefaultSound;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ConcreteSound;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   MetalSound;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CarpetSound;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FabricSound;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WoodSound;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GlassSound;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   WaterSound;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DirtSound;                                                // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DefaultParticle;                                          // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ConcreteParticle;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MetalParticle;                                            // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CarpetParticle;                                           // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FabricParticle;                                           // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WoodParticle;                                             // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GlassParticle;                                            // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WaterParticle;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DirtParticle;                                             // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SurfaceFXAsset");
		return ptr;
	}


	class USoundCue* GetSoundBySurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType);
	class UParticleSystem* GetParticleBySurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType);
};


// Class Pavlov.SurfaceFXInterface
// 0x0000 (0x0028 - 0x0028)
class USurfaceFXInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.SurfaceFXInterface");
		return ptr;
	}

};


// Class Pavlov.TextureWidgetComponent
// 0x0000 (0x06A0 - 0x06A0)
class UTextureWidgetComponent : public UWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TextureWidgetComponent");
		return ptr;
	}

};


// Class Pavlov.ToolTip
// 0x0050 (0x0378 - 0x0328)
class AToolTip : public AActor
{
public:
	class UObject*                                     Context;                                                  // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContextLocation;                                          // 0x0330(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EToolTipState                                      State;                                                    // 0x033C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // 0x033D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033E(0x0002) MISSED OFFSET
	float                                              Timer;                                                    // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FName                                       ID;                                                       // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInsist;                                                  // 0x0350(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ShowSound;                                                // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TerminateSound;                                           // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TerminateCompletedSound;                                  // 0x0368(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoAttach;                                              // 0x0370(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              SelfDestroyDuration;                                      // 0x0374(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ToolTip");
		return ptr;
	}


	float GetFadeScalar();
};


// Class Pavlov.TrailComponent
// 0x0040 (0x05D0 - 0x0590)
class UTrailComponent : public UCustomMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0590(0x0028) MISSED OFFSET
	float                                              PointLifeSpan;                                            // 0x05B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointRate;                                                // 0x05BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointDistance;                                            // 0x05C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailGirth;                                               // 0x05C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopped;                                                 // 0x05C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TrailComponent");
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
		static auto ptr = UObject::FindClass("Class Pavlov.Tutorial");
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
// 0x0010 (0x0590 - 0x0580)
class UTwoHandGripComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0580(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.TwoHandGripComponent");
		return ptr;
	}

};


// Class Pavlov.UberWheel
// 0x0078 (0x03A0 - 0x0328)
class AUberWheel : public AActor
{
public:
	class UWidgetComponent*                            WidgetComponent;                                          // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	float                                              CenterRadius;                                             // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	class USoundBase*                                  EnableSound;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CommitSound;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SelectSound;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ToggleCurve;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ToggleDuration;                                           // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<struct FWheelSegment>                       Segments;                                                 // 0x0368(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Selected;                                                 // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchPressed;                                            // 0x037C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTouched;                                                 // 0x037D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x037E(0x0002) MISSED OFFSET
	struct FVector2D                                   TouchPosition;                                            // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TouchAngle;                                               // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWheelUpdate;                                            // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.UberWheel");
		return ptr;
	}


	void UpdateSegments(TArray<struct FWheelSegment> NewSegments);
	void SetEnabled(bool bEnabled);
	void OnUpdateSegment(class UUserWidget* Instance, class UUserWidget* ContentInstance, struct FWheelSegment* Segment);
	void OnEnabled();
	void OnCommit(int Selection, const struct FWheelSegment& Segment);
	bool IsEnabled();
};


// Class Pavlov.UIManager
// 0x0028 (0x0050 - 0x0028)
class UUIManager : public UObject
{
public:
	class UModal*                                      ModalInstance;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UClass*                                      MenuUniverseClass;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bMenuUniverseEnabled;                                     // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowMOTD;                                                // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.UIManager");
		return ptr;
	}


	void ShowMenuUniverse();
	void SetMenuUniverse(bool bEnabled);
	void HideMenuUniverse();
	class UModal* GetModalInstance();
	class AMenuUniverse* GetMenuUniverse();
	void DismissMOTD();
	class UModal* CreateModalMessageBox(const struct FText& Message, EModalMessageBoxType Type);
	class UModal* CreateModal(class UClass* ModalClass, class UClass* ModalContent, bool bCreateView);
	void ClearModalInstance();
};


// Class Pavlov.VoiceComponent
// 0x0040 (0x0280 - 0x0240)
class UVoiceComponent : public USceneComponent
{
public:
	class USoundWaveProcedural*                        Sound;                                                    // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0248(0x0004) MISSED OFFSET
	bool                                               bTalking;                                                 // 0x024C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	float                                              IdleTime;                                                 // 0x0250(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0254(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                        // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VoiceComponent");
		return ptr;
	}


	void OnEnvelopeValue(class USoundWave* PlayingSoundWave, float Value);
};


// Class Pavlov.VoiceManager
// 0x0050 (0x0378 - 0x0328)
class AVoiceManager : public AActor
{
public:
	TMap<class APlayerState*, struct FPavlovVoicePacket> VoicePackets;                                             // 0x0328(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VoiceManager");
		return ptr;
	}

};


// Class Pavlov.VoiceRouter
// 0x0028 (0x0350 - 0x0328)
class AVoiceRouter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0328(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.VoiceRouter");
		return ptr;
	}


	void ServerOnVoice(const struct FPavlovVoicePacket& VoicePacket);
	void ClientOnVoiceBunch(const struct FVoicePacketBunch& VoiceBunch);
};


// Class Pavlov.Vote
// 0x00B8 (0x0408 - 0x0350)
class AVote : public AStereoOverlay
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0350(0x0050) MISSED OFFSET
	unsigned char                                      YesVotes;                                                 // 0x03A0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NoVotes;                                                  // 0x03A1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TimeLeft;                                                 // 0x03A2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EVoteState                                         State;                                                    // 0x03A3(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CensusNum;                                                // 0x03A4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	int                                                TeamId;                                                   // 0x03A8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FString                                     VoteInstigatorName;                                       // 0x03B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	uint64_t                                           VoteInstigator;                                           // 0x03C0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param1;                                                   // 0x03C8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                Param2;                                                   // 0x03D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              VoteTimer;                                                // 0x03DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Percentage;                                               // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeamVote;                                                // 0x03E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	float                                              VoteDuration;                                             // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GraceDuration;                                            // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVoteEnd;                                                // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Vote");
		return ptr;
	}


	void OnVoteEnded(bool bSucceeded);
	void MulticastOnVoteEnded(bool bSucceeded);
};


// Class Pavlov.Watch
// 0x0050 (0x06F0 - 0x06A0)
class UWatch : public UTextureWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x06A0(0x0014) MISSED OFFSET
	float                                              Health;                                                   // 0x06B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Armor;                                                    // 0x06B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasHelmet;                                               // 0x06BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET
	class UTexture2D*                                  VictimAvatar;                                             // 0x06C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KillConfirmationOpacity;                                  // 0x06C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KillConfirmationDuration;                                 // 0x06CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillConfirmationFadeSpeed;                                // 0x06D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	class USoundCue*                                   KillConfirmationSound;                                    // 0x06D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  KillConfirmationFailoverAvatar;                           // 0x06E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Watch");
		return ptr;
	}


	void OnKillfeedEntry(const struct FKillfeedEntry& NewEntry);
	void OnKillConfirmationPush(class APavlovPlayerState* Victim);
	class USceneComponent* GetWatchAttachComponent();
};


// Class Pavlov.Waypoint
// 0x0028 (0x0350 - 0x0328)
class AWaypoint : public AActor
{
public:
	TArray<struct FWaypointInfo>                       WaypointInfos;                                            // 0x0328(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	class AWaypoint*                                   NextA;                                                    // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AWaypoint*                                   NextB;                                                    // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Waypoint");
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
		static auto ptr = UObject::FindClass("Class Pavlov.Workshop");
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


// Class Pavlov.WoundAux
// 0x0090 (0x03B8 - 0x0328)
class AWoundAux : public AActor
{
public:
	struct FWoundInfo                                  WoundInfo;                                                // 0x0328(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       PreBakedName;                                             // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FPreBakedWound                              PreBakedData;                                             // 0x0360(0x0050) (BlueprintVisible, BlueprintReadOnly)
	class UWoundComponent*                             WoundComponent;                                           // 0x03B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.WoundAux");
		return ptr;
	}


	class UAvatarSkin* GetAvatarSkin();
	struct FName GetAttachSocket();
};


// Class Pavlov.WoundComponent
// 0x01F8 (0x02E8 - 0x00F0)
class UWoundComponent : public UActorComponent
{
public:
	class USkeletalMeshComponent*                      GoreMeshComp;                                             // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SkullMeshComp;                                            // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class AWoundAux*>                           WoundAuxs;                                                // 0x0100(0x0010) (ZeroConstructor, Transient)
	TMap<struct FName, struct FWoundBoneState>         BoneStates;                                               // 0x0110(0x0050) (ZeroConstructor, Transient)
	EWoundMaterialType                                 MaterialType;                                             // 0x0160(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	TMap<int, struct FVector4>                         MinorWounds;                                              // 0x0168(0x0050) (ZeroConstructor, Transient)
	TMap<int, struct FPreBakedWound>                   MajorWounds;                                              // 0x01B8(0x0050) (ZeroConstructor, Transient)
	class USkeletalMeshComponent*                      MasterPoseComponent;                                      // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FWoundMeshInstance>                  Instances;                                                // 0x0210(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MinorHitCount;                                            // 0x0220(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxMinorHits;                                             // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinorWoundScale;                                          // 0x0228(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MajorHitCount;                                            // 0x022C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxMajorHits;                                             // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMajorHitRecycle;                                    // 0x0234(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowDynamicLookup;                                      // 0x0235(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0236(0x0002) MISSED OFFSET
	TMap<class UMaterialInterface*, struct FWoundMaterialSet> MaterialMap;                                              // 0x0238(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      BloodPuddleClass;                                         // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  PreBakedWounds;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadBoneName;                                             // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               GoreMesh;                                                 // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DismemberSound;                                           // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DismemberParticle;                                        // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FMemberFX>                           MemberFXSetup;                                            // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnDismember;                                              // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMaterialCreated;                                        // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.WoundComponent");
		return ptr;
	}


	void SetMasterPoseComponent(class USkeletalMeshComponent* MeshComponent);
	void ResetWounds();
	void ReportHit(const struct FWoundInfo& WoundInfo);
	struct FWoundBoneState GetBoneState(const struct FName& BoneName);
	void ApplyInheritedCustomDepthValues(class UMeshComponent* MeshComponent);
	void AddMesh(class USkeletalMeshComponent* MeshComponent);
};


// Class Pavlov.Zombie
// 0x0100 (0x0920 - 0x0820)
class AZombie : public AZAICharacter
{
public:
	class UWoundComponent*                             WoundComponent;                                           // 0x0820(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0828(0x0048) MISSED OFFSET
	float                                              Health;                                                   // 0x0870(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0874(0x0004) MISSED OFFSET
	struct FZombieHitInfo                              LastHitInfo;                                              // 0x0878(0x0038) (Net)
	class UDataTable*                                  BalanceTable;                                             // 0x08B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x08B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	class USoundCue*                                   HitSound;                                                 // 0x08C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HitSoundShooter;                                          // 0x08C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitEffect;                                                // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotSound;                                            // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HeadshotSound2D;                                          // 0x08E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ThirdPersonKnockBackSound;                                // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HeadshotParticle;                                         // 0x08F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             SprintFootStepFX;                                         // 0x08F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             JockeyFootStepFX;                                         // 0x0900(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             WalkFootStepFX;                                           // 0x0908(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USurfaceFXAsset*                             LandedFX;                                                 // 0x0910(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WoundClass;                                               // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.Zombie");
		return ptr;
	}


	void OnWoundMaterialCreated(class UMaterialInstanceDynamic* MaterialInstance);
	void MulticastOnHit(const struct FZombieHitInfo& HitInfo);
	class UWoundComponent* GetWoundComponent();
	void ApplyLastHitEffect();
};


// Class Pavlov.ZombieAIController
// 0x0000 (0x0438 - 0x0438)
class AZombieAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ZombieAIController");
		return ptr;
	}

};


// Class Pavlov.ZombieAnimInstance
// 0x0000 (0x0360 - 0x0360)
class UZombieAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ZombieAnimInstance");
		return ptr;
	}

};


// Class Pavlov.ZombieSkeletalMeshComponent
// 0x0030 (0x0B60 - 0x0B30)
class UZombieSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0B30(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Pavlov.ZombieSkeletalMeshComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
