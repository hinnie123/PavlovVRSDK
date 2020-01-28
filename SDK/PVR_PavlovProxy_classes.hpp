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

// Class PavlovProxy.Pavlov_AudioInterface
// 0x0000 (0x0028 - 0x0028)
class UPavlov_AudioInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_AudioInterface");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_AudioVolume
// 0x0058 (0x03B8 - 0x0360)
class APavlov_AudioVolume : public AVolume
{
public:
	TMap<EPavlovReverbType, class USoundSubmix*>       ReverbSubmixes;                                           // 0x0360(0x0050) (ZeroConstructor, Transient)
	bool                                               bForceOutdoor;                                            // 0x03B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPavlovReverbType                                  ReverbType;                                               // 0x03B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_AudioVolume");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_BombSpot
// 0x0008 (0x0330 - 0x0328)
class APavlov_BombSpot : public AActor
{
public:
	bool                                               bIsB;                                                     // 0x0328(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_BombSpot");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_GameLogic
// 0x0008 (0x0330 - 0x0328)
class APavlov_GameLogic : public AInfo
{
public:
	class UPavlov_Map*                                 definition;                                               // 0x0328(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_GameLogic");
		return ptr;
	}


	void SpawnItem(const struct FPavlovItemSpawnParams& Params);
	void SpawnAndPosessPawns();
	void Spawn(class AController* Controller, const struct FTransform& Transform, bool bAsGhost, class APawn** Pawn);
	void SetTeamCash(int TeamId, int CashAmmount);
	void SetRoundState(EPavlovRoundState State);
	void SetPlayerVitality(class APlayerState* PlayerState, int Health, int Armour, int Helmet);
	void SetPlayerTeam(class APlayerState* PlayerState, int TeamId);
	void SetPlayerSkin(class APlayerState* PlayerState, const struct FName& SkinName);
	void SetPlayerGag(class APlayerState* PlayerState, bool bEnabled);
	void SetPlayerCash(class APlayerState* PlayerState, int CashAmmount);
	void SetPlayerBuyingEnabled(class APlayerState* PlayerState, float Duration, float BuyZoneMaxDistance);
	void SetMovementDisabled(bool bDisabled);
	void SetGameModeProperties(const struct FPavlovGameModeProperties& Properties);
	void SetFallDamage(bool bEnabled);
	void SetEveryoneCash(int CashAmmount);
	void PostRoundCleanUp();
	void OnRoundStateChanged(EPavlovRoundState OldState, EPavlovRoundState NewState);
	void OnRoundEnd();
	void OnRoundBegin();
	void OnPlayerSpawned(const struct FPavlovPlayerStatus& PlayerStatus);
	void OnPlayerLeftServer(const struct FPavlovPlayerStatus& PlayerStatus);
	void OnPlayerKilled(const struct FPavlovPlayerStatus& PlayerStatus, class APlayerState* Killer);
	void OnPlayerJoinedServer(const struct FPavlovPlayerStatus& PlayerStatus);
	void OnCustomGameModeInit();
	void OnAssignTeam(const struct FPavlovPlayerStatus& Status, int* TeamId);
	void MulticastOnRoundStateChanged(bool bStarting);
	void KickPlayer(class APlayerState* PlayerState, const struct FString& Reason, bool bBan);
	void IncrementTeamScore(int TeamId, int Score);
	void IncrementPlayerScore(class APlayerState* PlayerState, int Score);
	void GiveTeamCash(int TeamId, int CashAmmount);
	void GivePlayerCash(class APlayerState* PlayerState, int CashAmmount);
	void GiveEveryoneCash(int CashAmmount);
	void GetSpawnTransform(class AController* Controller, struct FTransform* Transform);
	void GetRoundState(EPavlovRoundState* State);
	class AActor* STATIC_GetPlayerHand(class APlayerState* PlayerState, bool bDominant);
	EPavlovGameModeType STATIC_GetPavlovGameModeType(class UObject* WorldContextObject);
	void GetGameModeProperties(struct FPavlovGameModeProperties* Properties);
};


// Class PavlovProxy.Pavlov_KillVolume
// 0x0000 (0x0360 - 0x0360)
class APavlov_KillVolume : public ATriggerVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_KillVolume");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Ladder
// 0x0010 (0x0338 - 0x0328)
class APavlov_Ladder : public AActor
{
public:
	class UBoxComponent*                               Volume;                                                   // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ClimbSpeed;                                               // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_Ladder");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Map
// 0x00B8 (0x00E8 - 0x0030)
class UPavlov_Map : public UDataAsset
{
public:
	struct FString                                     UniqueId;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Label;                                                    // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Thumbnail;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PavlovProxy.Pavlov_Map.Map
	unsigned char                                      UnknownData01[0x28];                                      // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PavlovProxy.Pavlov_Map.QuestMap
	bool                                               bHidden;                                                  // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                Compatibility;                                            // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomGameMode;                                          // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FString                                     CustomGameModeLabel;                                      // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapURL;                                                   // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bCustom;                                                  // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_Map");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Spawn
// 0x0008 (0x0360 - 0x0358)
class APavlov_Spawn : public APlayerStart
{
public:
	int                                                TeamId;                                                   // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamic;                                                 // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyTeam;                                                // 0x035D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecial;                                                 // 0x035E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x035F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_Spawn");
		return ptr;
	}

};


// Class PavlovProxy.PavlovProxyStatics
// 0x0000 (0x0028 - 0x0028)
class UPavlovProxyStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.PavlovProxyStatics");
		return ptr;
	}


	void STATIC_GetTeamScore(class UObject* WorldContextObject, int TeamId, int* Score);
	void STATIC_GetPavlovPlayerStatusByPawn(class APawn* Pawn, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded);
	void STATIC_GetPavlovPlayerStatus(class APlayerState* PlayerState, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
