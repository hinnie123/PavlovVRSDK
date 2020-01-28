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

// Class Steamworks.SteamItem
// 0x0010 (0x0038 - 0x0028)
class USteamItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamItem");
		return ptr;
	}


	struct FName GetType();
};


// Class Steamworks.SteamLobby
// 0x00A0 (0x00C8 - 0x0028)
class USteamLobby : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TArray<struct FSteamLobbyVoiceBuffer>              VoiceBuffers;                                             // 0x0050(0x0010) (ZeroConstructor)
	float                                              LocalUserTalkTimer;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0064(0x0014) MISSED OFFSET
	TArray<struct FSteamLobbyMember>                   Members;                                                  // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSteamLobbyInfo                             Info;                                                     // 0x0088(0x0038) (BlueprintVisible, BlueprintReadOnly)
	float                                              VoiceVolume;                                              // 0x00C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLightModeEnabled;                                        // 0x00C4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamLobby");
		return ptr;
	}


	void SetVoiceChat(bool bEnabled);
	void SetMemberData(const struct FString& Key, const struct FString& Value);
	void SetLobbyType(TEnumAsByte<ESteamLobbyType> Type);
	void SetLobbyMemberLimit(int MemberLimit);
	void SetLobbyData(const struct FString& Key, const struct FString& Value);
	bool IsVoiceChatEnabled();
	bool IsMemberTalking(int Index);
	bool IsLocalUserOwner();
	void InviteFriends();
	int GetNumLobbyMembers();
	struct FString GetMemberData(int Index, const struct FString& Key);
	int GetLobbyMemberLimit();
	struct FString GetLobbyData(const struct FString& Key);
};


// Class Steamworks.SteamRadio
// 0x0010 (0x0338 - 0x0328)
class ASteamRadio : public AInfo
{
public:
	TArray<struct FSteamRadioPlaybackChannel>          PlaybackChannels;                                         // 0x0328(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamRadio");
		return ptr;
	}


	void InitializePlaybackChannels(class USoundCue* ChannelCue);
};


// Class Steamworks.SteamVoiceComponent
// 0x0070 (0x06C0 - 0x0650)
class USteamVoiceComponent : public UAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0650(0x0008) MISSED OFFSET
	class USoundWaveProcedural*                        SoundStreaming;                                           // 0x0658(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x11];                                      // 0x0660(0x0011) MISSED OFFSET
	bool                                               bVoiceActive;                                             // 0x0671(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x0672(0x000E) MISSED OFFSET
	class USteamworksManager*                          Manager;                                                  // 0x0680(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASteamRadio*                                 Radio;                                                    // 0x0688(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTalkingInRadio;                                          // 0x0690(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenMic;                                                 // 0x0691(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0692(0x0006) MISSED OFFSET
	class USoundCue*                                   RadioVoiceCue;                                            // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVoiceChanged;                                           // 0x06A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRadioToggle;                                            // 0x06B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamVoiceComponent");
		return ptr;
	}


	void ToggleRadio(bool bEnabled);
	void Talk();
	void ShutUp();
	void SetRadio(bool bEnabled);
	void ServerToggleRadio(bool bToggled);
	void ServerOnVoice(const struct FSteamworksVoicePacket& VoicePacket);
	void OnVoiceFinished();
	void OnRep_TalkingInRadio();
	void MulticastOnVoice(const struct FSteamworksVoicePacket& VoicePacket);
	bool IsTalking();
};


// Class Steamworks.SteamworksGameMode
// 0x0000 (0x0410 - 0x0410)
class ASteamworksGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamworksGameMode");
		return ptr;
	}

};


// Class Steamworks.SteamworksGameSession
// 0x0010 (0x0350 - 0x0340)
class ASteamworksGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamworksGameSession");
		return ptr;
	}

};


// Class Steamworks.SteamworksLocalPlayer
// 0x0000 (0x01C8 - 0x01C8)
class USteamworksLocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamworksLocalPlayer");
		return ptr;
	}

};


// Class Steamworks.SteamworksManager
// 0x06A8 (0x06D0 - 0x0028)
class USteamworksManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
	class UGameInstance*                               GameInstance;                                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<uint64_t, class UTexture2D*>                  Avatars;                                                  // 0x0108(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	TArray<class USteamItem*>                          Inventory;                                                // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PublicIpAddress;                                          // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnInventoryUpdate;                                        // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServersConnected;                                       // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USteamLobby*                                 LobbyInstance;                                            // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET
	TArray<struct FSteamLobbyInfo>                     LobbyList;                                                // 0x01C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      LobbyClass;                                               // 0x01D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLobbyListUpdated;                                       // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyUpdated;                                           // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnterLobby;                                             // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLeftLobby;                                              // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyCreated;                                           // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMembersUpdate;                                     // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAuthSessionTicketResponse;                              // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTicketValidation;                                       // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x410];                                     // 0x0260(0x0410) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnServerResponded;                                        // 0x0670(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerFailedToRespond;                                  // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerRefreshCompleted;                                 // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerListUpdated;                                      // 0x06A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FSteamServerInfo>                    ServerList;                                               // 0x06B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x06C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamworksManager");
		return ptr;
	}


	void SetVoiceRecording(bool bEnabled);
	void RequestServerList(TArray<struct FSteamServerListKeyValue> Filter);
	void RequestLobbyList(bool bWithData);
	void RefreshServerList();
	void OnPublicIpAddressResolved(const struct FString& IpAddress);
	void LeaveLobby();
	void JoinLobby(const struct FSteamLobbyInfo& LobbyInfo);
	bool IsServerListActive();
	bool IsRefreshingServerList();
	bool IsRecordingVoice();
	bool HasInstanceOf(int DefinitionId);
	void GetServerInfo(int Index, struct FSteamServerInfo* ServerInfo, bool* bSuccessful);
	int GetServerCount();
	struct FString GetPlayerNameByStringId(const struct FString& StringId);
	class USteamLobby* GetLobbyInstance();
	class UTexture2D* GetAvatarByStringId(const struct FString& StringId, class UTexture2D* FailoverTexture);
	class UTexture2D* GetAvatar(class APlayerState* PlayerState, class UTexture2D* FailoverTexture);
	void GetAuthSessionTicket();
	void GetAllInventoryItems();
	class USteamworksManager* STATIC_Get(class UObject* WorldContextObject);
	void CreateLobby(int LobbyMemberLimit, bool bPublic);
	void CancelAuthTicket();
	void AddRequestLobbyListStringFilter(const struct FString& KeyToMatch, const struct FString& ValueToMatch, ESteamLobbyComparison ComparisonType);
	void AddRequestLobbyListNumericalFilter(const struct FString& KeyToMatch, int ValueToMatch, ESteamLobbyComparison ComparisonType);
	void AddRequestLobbyListNearValueFilter(const struct FString& KeyToMatch, int ValueToBeCloseTo);
	void AddRequestLobbyListFilterSlotsAvailable(int SlotsAvailable);
	void AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter DistanceFilter);
};


// Class Steamworks.SteamworksStatics
// 0x0000 (0x0028 - 0x0028)
class USteamworksStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamworksStatics");
		return ptr;
	}


	struct FString STATIC_GetSteamPersonaName(class UObject* WorldContextObject);
	struct FString STATIC_GetLocalSteamId(class UObject* WorldContextObject);
	void STATIC_FindLobbies(class UObject* WorldContextObject);
	void STATIC_CreateLobby(class UObject* WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
