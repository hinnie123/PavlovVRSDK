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

// Class Steamworks.SteamworksGameMode
// 0x0000 (0x0458 - 0x0458)
class ASteamworksGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamworksGameMode");
		return ptr;
	}

};


// Class Steamworks.SteamLobby
// 0x00A8 (0x00D0 - 0x0028)
class USteamLobby : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TArray<struct FSteamLobbyVoiceBuffer>              VoiceBuffers;                                             // 0x0050(0x0010) (ZeroConstructor)
	float                                              LocalUserTalkTimer;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0064(0x001C) MISSED OFFSET
	TArray<struct FSteamLobbyMember>                   Members;                                                  // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSteamLobbyInfo                             Info;                                                     // 0x0090(0x0038) (BlueprintVisible, BlueprintReadOnly)
	float                                              VoiceVolume;                                              // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLightModeEnabled;                                        // 0x00CC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET

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


// Class Steamworks.SteamworksLocalPlayer
// 0x0000 (0x01B8 - 0x01B8)
class USteamworksLocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamworksLocalPlayer");
		return ptr;
	}

};


// Class Steamworks.SteamVoiceComponent
// 0x0080 (0x0630 - 0x05B0)
class USteamVoiceComponent : public UAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05B0(0x0010) MISSED OFFSET
	class USoundWaveProcedural*                        SoundStreaming;                                           // 0x05C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x11];                                      // 0x05C8(0x0011) MISSED OFFSET
	bool                                               bVoiceActive;                                             // 0x05D9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x05DA(0x000E) MISSED OFFSET
	class USteamworksManager*                          Manager;                                                  // 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASteamRadio*                                 Radio;                                                    // 0x05F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTalkingInRadio;                                          // 0x05F8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenMic;                                                 // 0x05F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x05FA(0x0006) MISSED OFFSET
	class USoundCue*                                   RadioVoiceCue;                                            // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVoiceChanged;                                           // 0x0608(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRadioToggle;                                            // 0x0618(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0628(0x0008) MISSED OFFSET

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


// Class Steamworks.SteamRadio
// 0x0010 (0x0398 - 0x0388)
class ASteamRadio : public AInfo
{
public:
	TArray<struct FSteamRadioPlaybackChannel>          PlaybackChannels;                                         // 0x0388(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamRadio");
		return ptr;
	}


	void InitializePlaybackChannels(class USoundCue* ChannelCue);
};


// Class Steamworks.SteamworksGameSession
// 0x0010 (0x03B0 - 0x03A0)
class ASteamworksGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamworksGameSession");
		return ptr;
	}

};


// Class Steamworks.SteamworksManager
// 0x0210 (0x0238 - 0x0028)
class USteamworksManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET
	class UGameInstance*                               GameInstance;                                             // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<uint64_t, class UTexture2D*>                  Avatars;                                                  // 0x00E0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	TArray<class USteamItem*>                          Inventory;                                                // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PublicIpAddress;                                          // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnInventoryUpdate;                                        // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USteamLobby*                                 LobbyInstance;                                            // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0170(0x0020) MISSED OFFSET
	TArray<struct FSteamLobbyInfo>                     LobbyList;                                                // 0x0190(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      LobbyClass;                                               // 0x01A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLobbyListUpdated;                                       // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyUpdated;                                           // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnterLobby;                                             // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLeftLobby;                                              // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyCreated;                                           // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMembersUpdate;                                     // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAuthSessionTicketResponse;                              // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTicketValidation;                                       // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0228(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Steamworks.SteamworksManager");
		return ptr;
	}


	void SetVoiceRecording(bool bEnabled);
	void RequestLobbyList(bool bWithData);
	void OnPublicIpAddressResolved(const struct FString& IpAddress);
	void LeaveLobby();
	void JoinLobby(const struct FSteamLobbyInfo& LobbyInfo);
	bool IsRecordingVoice();
	bool HasInstanceOf(int DefinitionId);
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


	struct FString STATIC_GetLocalSteamId(class UObject* WorldContextObject);
	void STATIC_FindLobbies(class UObject* WorldContextObject);
	void STATIC_CreateLobby(class UObject* WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
