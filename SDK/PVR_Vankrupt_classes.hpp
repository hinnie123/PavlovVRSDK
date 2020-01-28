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

// Class Vankrupt.VCollisionEffectComponent
// 0x0038 (0x0128 - 0x00F0)
class UVCollisionEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	struct FVector                                     PrevHitLocation;                                          // 0x00F8(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanSpawnEffect;                                          // 0x0104(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	class UParticleSystem*                             VFX;                                                      // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX;                                                      // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LinearVelocityThreashold;                                 // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngularVelocityThreashold;                                // 0x011C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0120(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0124(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0125(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VCollisionEffectComponent");
		return ptr;
	}


	void ResetCooldown();
	void OnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Vankrupt.VDecalBSPProxy
// 0x0018 (0x0340 - 0x0328)
class AVDecalBSPProxy : public AInfo
{
public:
	bool                                               bUpdate;                                                  // 0x0328(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	TArray<struct FVTriangleBSP>                       Triangles;                                                // 0x0330(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VDecalBSPProxy");
		return ptr;
	}

};


// Class Vankrupt.VDecalComponent
// 0x0020 (0x0610 - 0x05F0)
class UVDecalComponent : public UProceduralMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05F0(0x0010) MISSED OFFSET
	float                                              DecalSize;                                                // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAsync;                                                   // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0605(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0606(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VDecalComponent");
		return ptr;
	}


	void Project();
	void CheckTaskCompletion();
};


// Class Vankrupt.VGameInstance
// 0x0018 (0x00B8 - 0x00A0)
class UVGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VGameInstance");
		return ptr;
	}

};


// Class Vankrupt.VGameOptions
// 0x0060 (0x0090 - 0x0030)
class UVGameOptions : public UDataAsset
{
public:
	struct FText                                       Label;                                                    // 0x0030(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0048(0x0018) (Edit)
	class UTexture2D*                                  ThumbnailOverlay;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Type;                                                     // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Mode;                                                     // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxPlayers;                                               // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<class UVMap*>                               Maps;                                                     // 0x0080(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VGameOptions");
		return ptr;
	}

};


// Class Vankrupt.VankruptGlobalStyle
// 0x0670 (0x06A0 - 0x0030)
class UVankruptGlobalStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FVGlobalStyle                               GlobalStyle;                                              // 0x0030(0x0670) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VankruptGlobalStyle");
		return ptr;
	}

};


// Class Vankrupt.VHealthComponent
// 0x0120 (0x0210 - 0x00F0)
class UVHealthComponent : public UActorComponent
{
public:
	struct FVKillData                                  KillData;                                                 // 0x00F0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	TMap<struct FName, struct FVHitboxInfo>            Hitboxes;                                                 // 0x0120(0x0050) (ZeroConstructor)
	float                                              KillImpulseMul;                                           // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class UCurveFloat*                                 KillImpulseMulCurve;                                      // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadLifeSpan;                                             // 0x0180(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseKillData;                                             // 0x0184(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	float                                              MaxHealth;                                                // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Health;                                                   // 0x018C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x0190(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	struct FVHitboxInfo                                DefaultHitboxInfo;                                        // 0x0198(0x0040) (Edit, DisableEditOnInstance)
	class UDataTable*                                  HitboxInfoTable;                                          // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnKill;                                                   // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRevive;                                                 // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHitEffect;                                              // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VHealthComponent");
		return ptr;
	}


	void Revive();
	void OnTakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	void OnTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnRep_Dead();
	void MulticastOnRevived();
	void MulticastOnKilledWithData(const struct FVKillData& Data);
	void MulticastOnKilled();
	void MulticastOnHitEffect(EVHitEffect Effect);
	void Kill();
	void ApplyKillImpulse();
};


// Class Vankrupt.VHealthInterface
// 0x0000 (0x0028 - 0x0028)
class UVHealthInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VHealthInterface");
		return ptr;
	}

};


// Class Vankrupt.VMenu
// 0x0058 (0x0380 - 0x0328)
class AVMenu : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0328(0x0028) MISSED OFFSET
	class USlateWidgetStyleAsset*                      GlobalStyle;                                              // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPopupCommit;                                            // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0368(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VMenu");
		return ptr;
	}


	void Show();
	void SetVisibility(bool bVisible);
	void Hide();
};


// Class Vankrupt.VLobby
// 0x0098 (0x0418 - 0x0380)
class AVLobby : public AVMenu
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0380(0x0048) MISSED OFFSET
	class USlateWidgetStyleAsset*                      LobbyStyle;                                               // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x03D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UVGameOptions*>                       AvailableOptions;                                         // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	EVLobbyMode                                        Mode;                                                     // 0x03F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FVLobbySettings                             Settings;                                                 // 0x0400(0x0010) (BlueprintVisible, Net)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0410(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VLobby");
		return ptr;
	}


	void StartGameImpl();
	void OnLeaveLobbyPrompt(int Result);
	void OnGoBack();
	void MulticastOnLeavingLobby();
	void MulticastOnGameStart();
	void LeaveLobbyImpl();
};


// Class Vankrupt.VLobbyGameMode
// 0x0000 (0x0410 - 0x0410)
class AVLobbyGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VLobbyGameMode");
		return ptr;
	}

};


// Class Vankrupt.VankruptLobbyStyle
// 0x1000 (0x1030 - 0x0030)
class UVankruptLobbyStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FVLobbyStyle                                LobbyStyle;                                               // 0x0030(0x1000) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VankruptLobbyStyle");
		return ptr;
	}

};


// Class Vankrupt.VMap
// 0x0040 (0x0070 - 0x0030)
class UVMap : public UDataAsset
{
public:
	struct FText                                       Title;                                                    // 0x0030(0x0018) (Edit)
	struct FText                                       Name;                                                     // 0x0048(0x0018) (Edit)
	struct FName                                       AbsolutePath;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Thumbnail;                                                // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VMap");
		return ptr;
	}

};


// Class Vankrupt.VSpawnManagerComponent
// 0x0070 (0x0160 - 0x00F0)
class UVSpawnManagerComponent : public UActorComponent
{
public:
	TArray<class AVSpawnPoint*>                        SpawnPoints;                                              // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FVSpawnPointDistance>                Distances;                                                // 0x0100(0x0010) (ZeroConstructor)
	struct FTransform                                  LastSpawnTransform;                                       // 0x0110(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ReferenceLocation;                                        // 0x0140(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClosestThreashold;                                        // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnPointCooldown;                                       // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0154(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VSpawnManagerComponent");
		return ptr;
	}


	class ACharacter* SpawnRandomly(class UClass* CharacterClass, const struct FVSpawnParams& Params);
	class ACharacter* SpawnAt(const struct FTransform& Transform, class UClass* CharacterClass, const struct FVSpawnParams& Params);
	class ACharacter* Spawn(class UClass* CharacterClass, const struct FVSpawnParams& Params);
	struct FTransform GetSpawnTransform(int AgentId, bool bOccluded, bool bClosest);
	struct FTransform GetRandomSpawnTransform();
};


// Class Vankrupt.VSpawnPoint
// 0x0020 (0x0348 - 0x0328)
class AVSpawnPoint : public AActor
{
public:
	class UCapsuleComponent*                           Collision;                                                // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Icon;                                                     // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LastSpawnAtSeconds;                                       // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VSpawnPoint");
		return ptr;
	}


	bool IsOccluded(int PlayerIndex);
};


// Class Vankrupt.VStatics
// 0x0000 (0x0028 - 0x0028)
class UVStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vankrupt.VStatics");
		return ptr;
	}


	void STATIC_RetrieveNews(class UObject* WorldContextObject, const struct FString& URL, const struct FScriptDelegate& Delegate);
	void STATIC_LeaveGame(class UObject* WorldContextObject);
	bool STATIC_IsPlayingOnline(class UObject* WorldContextObject);
	struct FString STATIC_FormatTime(class UObject* WorldContextObject, int Seconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
