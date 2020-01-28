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

// BlueprintGeneratedClass BPFL_Loot.BPFL_Loot_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_Loot_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Loot.BPFL_Loot_C");
		return ptr;
	}


	void STATIC_GetGunName(class AVRItem* Item, class UObject* __WorldContext, bool* Found, struct FString* ItemName);
	void STATIC_GetLeaderboardLoot(class APavlovPawn* PavPawn, class UObject* __WorldContext, struct FString* LeaderboardWep);
	void STATIC_SetupAttachment(class AGun_Base_C* AttachTo, class AVRItem* Attachment, class UObject* __WorldContext, bool* Successful_);
	void STATIC_GetAttachmentSocket(class AGun_Base_C* GunBase, class UClass* VRItem, class UObject* __WorldContext, struct FName* SocketName, int* Type);
	void STATIC_Loot_Server(const struct FName& Item, class ABP_PavlovPawn_C* PavPawn, bool Dominant, class UObject* __WorldContext, bool* Successful_, bool* NeedSpawnAttachment_, class UClass** AttachmentClass, struct FTransform* SpawnTransform, class AGun_Base_C** AttachTo);
	void STATIC_IsAttachment(const struct FName& Item, class UObject* __WorldContext, bool* IsAttachment_);
	void STATIC_CanLoot_Client(const struct FName& Loot, class ABP_PavlovPawn_C* PavPawn, class UObject* __WorldContext, bool* CanLoot_);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
