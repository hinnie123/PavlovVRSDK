// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Steamworks.SteamLobby.SetVoiceChat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void USteamLobby::SetVoiceChat(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.SetVoiceChat"));

	USteamLobby_SetVoiceChat_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamLobby.SetMemberData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void USteamLobby::SetMemberData(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.SetMemberData"));

	USteamLobby_SetMemberData_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamLobby.SetLobbyType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ESteamLobbyType>   Type                           (Parm, ZeroConstructor, IsPlainOldData)

void USteamLobby::SetLobbyType(TEnumAsByte<ESteamLobbyType> Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.SetLobbyType"));

	USteamLobby_SetLobbyType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamLobby.SetLobbyMemberLimit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MemberLimit                    (Parm, ZeroConstructor, IsPlainOldData)

void USteamLobby::SetLobbyMemberLimit(int MemberLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.SetLobbyMemberLimit"));

	USteamLobby_SetLobbyMemberLimit_Params params;
	params.MemberLimit = MemberLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamLobby.SetLobbyData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void USteamLobby::SetLobbyData(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.SetLobbyData"));

	USteamLobby_SetLobbyData_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamLobby.IsVoiceChatEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamLobby::IsVoiceChatEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.IsVoiceChatEnabled"));

	USteamLobby_IsVoiceChatEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamLobby.IsMemberTalking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamLobby::IsMemberTalking(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.IsMemberTalking"));

	USteamLobby_IsMemberTalking_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamLobby.IsLocalUserOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamLobby::IsLocalUserOwner()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.IsLocalUserOwner"));

	USteamLobby_IsLocalUserOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamLobby.InviteFriends
// (Final, Native, Public, BlueprintCallable)

void USteamLobby::InviteFriends()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.InviteFriends"));

	USteamLobby_InviteFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamLobby.GetNumLobbyMembers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USteamLobby::GetNumLobbyMembers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.GetNumLobbyMembers"));

	USteamLobby_GetNumLobbyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamLobby.GetMemberData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USteamLobby::GetMemberData(int Index, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.GetMemberData"));

	USteamLobby_GetMemberData_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamLobby.GetLobbyMemberLimit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USteamLobby::GetLobbyMemberLimit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.GetLobbyMemberLimit"));

	USteamLobby_GetLobbyMemberLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamLobby.GetLobbyData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USteamLobby::GetLobbyData(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamLobby.GetLobbyData"));

	USteamLobby_GetLobbyData_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamVoiceComponent.ToggleRadio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void USteamVoiceComponent::ToggleRadio(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.ToggleRadio"));

	USteamVoiceComponent_ToggleRadio_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamVoiceComponent.Talk
// (Final, Native, Public, BlueprintCallable)

void USteamVoiceComponent::Talk()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.Talk"));

	USteamVoiceComponent_Talk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamVoiceComponent.ShutUp
// (Final, Native, Public, BlueprintCallable)

void USteamVoiceComponent::ShutUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.ShutUp"));

	USteamVoiceComponent_ShutUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamVoiceComponent.SetRadio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void USteamVoiceComponent::SetRadio(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.SetRadio"));

	USteamVoiceComponent_SetRadio_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamVoiceComponent.ServerToggleRadio
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bToggled                       (Parm, ZeroConstructor, IsPlainOldData)

void USteamVoiceComponent::ServerToggleRadio(bool bToggled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.ServerToggleRadio"));

	USteamVoiceComponent_ServerToggleRadio_Params params;
	params.bToggled = bToggled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamVoiceComponent.ServerOnVoice
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FSteamworksVoicePacket  VoicePacket                    (ConstParm, Parm, ReferenceParm)

void USteamVoiceComponent::ServerOnVoice(const struct FSteamworksVoicePacket& VoicePacket)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.ServerOnVoice"));

	USteamVoiceComponent_ServerOnVoice_Params params;
	params.VoicePacket = VoicePacket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamVoiceComponent.OnVoiceFinished
// (Native, Protected)

void USteamVoiceComponent::OnVoiceFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.OnVoiceFinished"));

	USteamVoiceComponent_OnVoiceFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamVoiceComponent.OnRep_TalkingInRadio
// (Final, Native, Protected)

void USteamVoiceComponent::OnRep_TalkingInRadio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.OnRep_TalkingInRadio"));

	USteamVoiceComponent_OnRep_TalkingInRadio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamVoiceComponent.MulticastOnVoice
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FSteamworksVoicePacket  VoicePacket                    (ConstParm, Parm, ReferenceParm)

void USteamVoiceComponent::MulticastOnVoice(const struct FSteamworksVoicePacket& VoicePacket)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.MulticastOnVoice"));

	USteamVoiceComponent_MulticastOnVoice_Params params;
	params.VoicePacket = VoicePacket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamVoiceComponent.IsTalking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamVoiceComponent::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamVoiceComponent.IsTalking"));

	USteamVoiceComponent_IsTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamItem.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName USteamItem::GetType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamItem.GetType"));

	USteamItem_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamRadio.InitializePlaybackChannels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundCue*               ChannelCue                     (Parm, ZeroConstructor, IsPlainOldData)

void ASteamRadio::InitializePlaybackChannels(class USoundCue* ChannelCue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamRadio.InitializePlaybackChannels"));

	ASteamRadio_InitializePlaybackChannels_Params params;
	params.ChannelCue = ChannelCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.SetVoiceRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::SetVoiceRecording(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.SetVoiceRecording"));

	USteamworksManager_SetVoiceRecording_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.RequestLobbyList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWithData                      (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::RequestLobbyList(bool bWithData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.RequestLobbyList"));

	USteamworksManager_RequestLobbyList_Params params;
	params.bWithData = bWithData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.OnPublicIpAddressResolved
// (Final, Native, Public)
// Parameters:
// struct FString                 IpAddress                      (Parm, ZeroConstructor)

void USteamworksManager::OnPublicIpAddressResolved(const struct FString& IpAddress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.OnPublicIpAddressResolved"));

	USteamworksManager_OnPublicIpAddressResolved_Params params;
	params.IpAddress = IpAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.LeaveLobby
// (Final, Native, Public, BlueprintCallable)

void USteamworksManager::LeaveLobby()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.LeaveLobby"));

	USteamworksManager_LeaveLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.JoinLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamLobbyInfo         LobbyInfo                      (Parm)

void USteamworksManager::JoinLobby(const struct FSteamLobbyInfo& LobbyInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.JoinLobby"));

	USteamworksManager_JoinLobby_Params params;
	params.LobbyInfo = LobbyInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.IsRecordingVoice
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamworksManager::IsRecordingVoice()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.IsRecordingVoice"));

	USteamworksManager_IsRecordingVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.HasInstanceOf
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            DefinitionId                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USteamworksManager::HasInstanceOf(int DefinitionId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.HasInstanceOf"));

	USteamworksManager_HasInstanceOf_Params params;
	params.DefinitionId = DefinitionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.GetPlayerNameByStringId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StringId                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USteamworksManager::GetPlayerNameByStringId(const struct FString& StringId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.GetPlayerNameByStringId"));

	USteamworksManager_GetPlayerNameByStringId_Params params;
	params.StringId = StringId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.GetLobbyInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USteamLobby*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USteamLobby* USteamworksManager::GetLobbyInstance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.GetLobbyInstance"));

	USteamworksManager_GetLobbyInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.GetAvatarByStringId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StringId                       (Parm, ZeroConstructor)
// class UTexture2D*              FailoverTexture                (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* USteamworksManager::GetAvatarByStringId(const struct FString& StringId, class UTexture2D* FailoverTexture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.GetAvatarByStringId"));

	USteamworksManager_GetAvatarByStringId_Params params;
	params.StringId = StringId;
	params.FailoverTexture = FailoverTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.GetAvatar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FailoverTexture                (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* USteamworksManager::GetAvatar(class APlayerState* PlayerState, class UTexture2D* FailoverTexture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.GetAvatar"));

	USteamworksManager_GetAvatar_Params params;
	params.PlayerState = PlayerState;
	params.FailoverTexture = FailoverTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.GetAuthSessionTicket
// (Final, Native, Public, BlueprintCallable)

void USteamworksManager::GetAuthSessionTicket()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.GetAuthSessionTicket"));

	USteamworksManager_GetAuthSessionTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.GetAllInventoryItems
// (Final, Native, Public, BlueprintCallable)

void USteamworksManager::GetAllInventoryItems()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.GetAllInventoryItems"));

	USteamworksManager_GetAllInventoryItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USteamworksManager*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USteamworksManager* USteamworksManager::STATIC_Get(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.Get"));

	USteamworksManager_Get_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksManager.CreateLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LobbyMemberLimit               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPublic                        (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::CreateLobby(int LobbyMemberLimit, bool bPublic)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.CreateLobby"));

	USteamworksManager_CreateLobby_Params params;
	params.LobbyMemberLimit = LobbyMemberLimit;
	params.bPublic = bPublic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.CancelAuthTicket
// (Final, Native, Public, BlueprintCallable)

void USteamworksManager::CancelAuthTicket()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.CancelAuthTicket"));

	USteamworksManager_CancelAuthTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListStringFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 KeyToMatch                     (Parm, ZeroConstructor)
// struct FString                 ValueToMatch                   (Parm, ZeroConstructor)
// ESteamLobbyComparison          ComparisonType                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListStringFilter(const struct FString& KeyToMatch, const struct FString& ValueToMatch, ESteamLobbyComparison ComparisonType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.AddRequestLobbyListStringFilter"));

	USteamworksManager_AddRequestLobbyListStringFilter_Params params;
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListNumericalFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 KeyToMatch                     (Parm, ZeroConstructor)
// int                            ValueToMatch                   (Parm, ZeroConstructor, IsPlainOldData)
// ESteamLobbyComparison          ComparisonType                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListNumericalFilter(const struct FString& KeyToMatch, int ValueToMatch, ESteamLobbyComparison ComparisonType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.AddRequestLobbyListNumericalFilter"));

	USteamworksManager_AddRequestLobbyListNumericalFilter_Params params;
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListNearValueFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 KeyToMatch                     (Parm, ZeroConstructor)
// int                            ValueToBeCloseTo               (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListNearValueFilter(const struct FString& KeyToMatch, int ValueToBeCloseTo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.AddRequestLobbyListNearValueFilter"));

	USteamworksManager_AddRequestLobbyListNearValueFilter_Params params;
	params.KeyToMatch = KeyToMatch;
	params.ValueToBeCloseTo = ValueToBeCloseTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListFilterSlotsAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotsAvailable                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListFilterSlotsAvailable(int SlotsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.AddRequestLobbyListFilterSlotsAvailable"));

	USteamworksManager_AddRequestLobbyListFilterSlotsAvailable_Params params;
	params.SlotsAvailable = SlotsAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksManager.AddRequestLobbyListDistanceFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESteamLobbyDistanceFilter      DistanceFilter                 (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksManager::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter DistanceFilter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksManager.AddRequestLobbyListDistanceFilter"));

	USteamworksManager_AddRequestLobbyListDistanceFilter_Params params;
	params.DistanceFilter = DistanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksStatics.GetLocalSteamId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USteamworksStatics::STATIC_GetLocalSteamId(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksStatics.GetLocalSteamId"));

	USteamworksStatics_GetLocalSteamId_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steamworks.SteamworksStatics.FindLobbies
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksStatics::STATIC_FindLobbies(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksStatics.FindLobbies"));

	USteamworksStatics_FindLobbies_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steamworks.SteamworksStatics.CreateLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void USteamworksStatics::STATIC_CreateLobby(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Steamworks.SteamworksStatics.CreateLobby"));

	USteamworksStatics_CreateLobby_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
