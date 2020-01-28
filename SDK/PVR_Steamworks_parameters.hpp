#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Steamworks.SteamItem.GetType
struct USteamItem_GetType_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamLobby.SetVoiceChat
struct USteamLobby_SetVoiceChat_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamLobby.SetMemberData
struct USteamLobby_SetMemberData_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Steamworks.SteamLobby.SetLobbyType
struct USteamLobby_SetLobbyType_Params
{
	TEnumAsByte<ESteamLobbyType>                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamLobby.SetLobbyMemberLimit
struct USteamLobby_SetLobbyMemberLimit_Params
{
	int                                                MemberLimit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamLobby.SetLobbyData
struct USteamLobby_SetLobbyData_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Steamworks.SteamLobby.IsVoiceChatEnabled
struct USteamLobby_IsVoiceChatEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamLobby.IsMemberTalking
struct USteamLobby_IsMemberTalking_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamLobby.IsLocalUserOwner
struct USteamLobby_IsLocalUserOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamLobby.InviteFriends
struct USteamLobby_InviteFriends_Params
{
};

// Function Steamworks.SteamLobby.GetNumLobbyMembers
struct USteamLobby_GetNumLobbyMembers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamLobby.GetMemberData
struct USteamLobby_GetMemberData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Steamworks.SteamLobby.GetLobbyMemberLimit
struct USteamLobby_GetLobbyMemberLimit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamLobby.GetLobbyData
struct USteamLobby_GetLobbyData_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Steamworks.SteamRadio.InitializePlaybackChannels
struct ASteamRadio_InitializePlaybackChannels_Params
{
	class USoundCue*                                   ChannelCue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamVoiceComponent.ToggleRadio
struct USteamVoiceComponent_ToggleRadio_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamVoiceComponent.Talk
struct USteamVoiceComponent_Talk_Params
{
};

// Function Steamworks.SteamVoiceComponent.ShutUp
struct USteamVoiceComponent_ShutUp_Params
{
};

// Function Steamworks.SteamVoiceComponent.SetRadio
struct USteamVoiceComponent_SetRadio_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamVoiceComponent.ServerToggleRadio
struct USteamVoiceComponent_ServerToggleRadio_Params
{
	bool                                               bToggled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamVoiceComponent.ServerOnVoice
struct USteamVoiceComponent_ServerOnVoice_Params
{
	struct FSteamworksVoicePacket                      VoicePacket;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Steamworks.SteamVoiceComponent.OnVoiceFinished
struct USteamVoiceComponent_OnVoiceFinished_Params
{
};

// Function Steamworks.SteamVoiceComponent.OnRep_TalkingInRadio
struct USteamVoiceComponent_OnRep_TalkingInRadio_Params
{
};

// Function Steamworks.SteamVoiceComponent.MulticastOnVoice
struct USteamVoiceComponent_MulticastOnVoice_Params
{
	struct FSteamworksVoicePacket                      VoicePacket;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Steamworks.SteamVoiceComponent.IsTalking
struct USteamVoiceComponent_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.SetVoiceRecording
struct USteamworksManager_SetVoiceRecording_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.RequestServerList
struct USteamworksManager_RequestServerList_Params
{
	TArray<struct FSteamServerListKeyValue>            Filter;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Steamworks.SteamworksManager.RequestLobbyList
struct USteamworksManager_RequestLobbyList_Params
{
	bool                                               bWithData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.RefreshServerList
struct USteamworksManager_RefreshServerList_Params
{
};

// Function Steamworks.SteamworksManager.OnPublicIpAddressResolved
struct USteamworksManager_OnPublicIpAddressResolved_Params
{
	struct FString                                     IpAddress;                                                // (Parm, ZeroConstructor)
};

// Function Steamworks.SteamworksManager.LeaveLobby
struct USteamworksManager_LeaveLobby_Params
{
};

// Function Steamworks.SteamworksManager.JoinLobby
struct USteamworksManager_JoinLobby_Params
{
	struct FSteamLobbyInfo                             LobbyInfo;                                                // (Parm)
};

// Function Steamworks.SteamworksManager.IsServerListActive
struct USteamworksManager_IsServerListActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.IsRefreshingServerList
struct USteamworksManager_IsRefreshingServerList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.IsRecordingVoice
struct USteamworksManager_IsRecordingVoice_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.HasInstanceOf
struct USteamworksManager_HasInstanceOf_Params
{
	int                                                DefinitionId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.GetServerInfo
struct USteamworksManager_GetServerInfo_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSteamServerInfo                            ServerInfo;                                               // (Parm, OutParm)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.GetServerCount
struct USteamworksManager_GetServerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.GetPlayerNameByStringId
struct USteamworksManager_GetPlayerNameByStringId_Params
{
	struct FString                                     StringId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Steamworks.SteamworksManager.GetLobbyInstance
struct USteamworksManager_GetLobbyInstance_Params
{
	class USteamLobby*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.GetAvatarByStringId
struct USteamworksManager_GetAvatarByStringId_Params
{
	struct FString                                     StringId;                                                 // (Parm, ZeroConstructor)
	class UTexture2D*                                  FailoverTexture;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.GetAvatar
struct USteamworksManager_GetAvatar_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FailoverTexture;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.GetAuthSessionTicket
struct USteamworksManager_GetAuthSessionTicket_Params
{
};

// Function Steamworks.SteamworksManager.GetAllInventoryItems
struct USteamworksManager_GetAllInventoryItems_Params
{
};

// Function Steamworks.SteamworksManager.Get
struct USteamworksManager_Get_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USteamworksManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.CreateLobby
struct USteamworksManager_CreateLobby_Params
{
	int                                                LobbyMemberLimit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPublic;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.CancelAuthTicket
struct USteamworksManager_CancelAuthTicket_Params
{
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListStringFilter
struct USteamworksManager_AddRequestLobbyListStringFilter_Params
{
	struct FString                                     KeyToMatch;                                               // (Parm, ZeroConstructor)
	struct FString                                     ValueToMatch;                                             // (Parm, ZeroConstructor)
	ESteamLobbyComparison                              ComparisonType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListNumericalFilter
struct USteamworksManager_AddRequestLobbyListNumericalFilter_Params
{
	struct FString                                     KeyToMatch;                                               // (Parm, ZeroConstructor)
	int                                                ValueToMatch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	ESteamLobbyComparison                              ComparisonType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListNearValueFilter
struct USteamworksManager_AddRequestLobbyListNearValueFilter_Params
{
	struct FString                                     KeyToMatch;                                               // (Parm, ZeroConstructor)
	int                                                ValueToBeCloseTo;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListFilterSlotsAvailable
struct USteamworksManager_AddRequestLobbyListFilterSlotsAvailable_Params
{
	int                                                SlotsAvailable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListDistanceFilter
struct USteamworksManager_AddRequestLobbyListDistanceFilter_Params
{
	ESteamLobbyDistanceFilter                          DistanceFilter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksStatics.GetSteamPersonaName
struct USteamworksStatics_GetSteamPersonaName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Steamworks.SteamworksStatics.GetLocalSteamId
struct USteamworksStatics_GetLocalSteamId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Steamworks.SteamworksStatics.FindLobbies
struct USteamworksStatics_FindLobbies_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steamworks.SteamworksStatics.CreateLobby
struct USteamworksStatics_CreateLobby_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
