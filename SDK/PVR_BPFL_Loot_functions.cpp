// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPFL_Loot.BPFL_Loot_C.GetGunName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVRItem*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemName                       (Parm, OutParm, ZeroConstructor)

void UBPFL_Loot_C::STATIC_GetGunName(class AVRItem* Item, class UObject* __WorldContext, bool* Found, struct FString* ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_Loot.BPFL_Loot_C.GetGunName");

	UBPFL_Loot_C_GetGunName_Params params;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
}


// Function BPFL_Loot.BPFL_Loot_C.GetLeaderboardLoot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LeaderboardWep                 (Parm, OutParm, ZeroConstructor)

void UBPFL_Loot_C::STATIC_GetLeaderboardLoot(class APavlovPawn* PavPawn, class UObject* __WorldContext, struct FString* LeaderboardWep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_Loot.BPFL_Loot_C.GetLeaderboardLoot");

	UBPFL_Loot_C_GetLeaderboardLoot_Params params;
	params.PavPawn = PavPawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeaderboardWep != nullptr)
		*LeaderboardWep = params.LeaderboardWep;
}


// Function BPFL_Loot.BPFL_Loot_C.SetupAttachment
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGun_Base_C*             AttachTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AVRItem*                 Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_Loot_C::STATIC_SetupAttachment(class AGun_Base_C* AttachTo, class AVRItem* Attachment, class UObject* __WorldContext, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_Loot.BPFL_Loot_C.SetupAttachment");

	UBPFL_Loot_C_SetupAttachment_Params params;
	params.AttachTo = AttachTo;
	params.Attachment = Attachment;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function BPFL_Loot.BPFL_Loot_C.GetAttachmentSocket
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGun_Base_C*             GunBase                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  VRItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_Loot_C::STATIC_GetAttachmentSocket(class AGun_Base_C* GunBase, class UClass* VRItem, class UObject* __WorldContext, struct FName* SocketName, int* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_Loot.BPFL_Loot_C.GetAttachmentSocket");

	UBPFL_Loot_C_GetAttachmentSocket_Params params;
	params.GunBase = GunBase;
	params.VRItem = VRItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketName != nullptr)
		*SocketName = params.SocketName;
	if (Type != nullptr)
		*Type = params.Type;
}


// Function BPFL_Loot.BPFL_Loot_C.Loot_Server
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Dominant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NeedSpawnAttachment_           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AttachmentClass                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (Parm, OutParm, IsPlainOldData)
// class AGun_Base_C*             AttachTo                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_Loot_C::STATIC_Loot_Server(const struct FName& Item, class ABP_PavlovPawn_C* PavPawn, bool Dominant, class UObject* __WorldContext, bool* Successful_, bool* NeedSpawnAttachment_, class UClass** AttachmentClass, struct FTransform* SpawnTransform, class AGun_Base_C** AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_Loot.BPFL_Loot_C.Loot_Server");

	UBPFL_Loot_C_Loot_Server_Params params;
	params.Item = Item;
	params.PavPawn = PavPawn;
	params.Dominant = Dominant;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
	if (NeedSpawnAttachment_ != nullptr)
		*NeedSpawnAttachment_ = params.NeedSpawnAttachment_;
	if (AttachmentClass != nullptr)
		*AttachmentClass = params.AttachmentClass;
	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;
	if (AttachTo != nullptr)
		*AttachTo = params.AttachTo;
}


// Function BPFL_Loot.BPFL_Loot_C.IsAttachment
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAttachment_                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_Loot_C::STATIC_IsAttachment(const struct FName& Item, class UObject* __WorldContext, bool* IsAttachment_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_Loot.BPFL_Loot_C.IsAttachment");

	UBPFL_Loot_C_IsAttachment_Params params;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttachment_ != nullptr)
		*IsAttachment_ = params.IsAttachment_;
}


// Function BPFL_Loot.BPFL_Loot_C.CanLoot_Client
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PavlovPawn_C*        PavPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanLoot_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_Loot_C::STATIC_CanLoot_Client(const struct FName& Loot, class ABP_PavlovPawn_C* PavPawn, class UObject* __WorldContext, bool* CanLoot_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_Loot.BPFL_Loot_C.CanLoot_Client");

	UBPFL_Loot_C_CanLoot_Client_Params params;
	params.Loot = Loot;
	params.PavPawn = PavPawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanLoot_ != nullptr)
		*CanLoot_ = params.CanLoot_;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
