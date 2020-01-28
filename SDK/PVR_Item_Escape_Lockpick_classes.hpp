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

// BlueprintGeneratedClass Item_Escape_Lockpick.Item_Escape_Lockpick_C
// 0x002C (0x0528 - 0x04FC)
class AItem_Escape_Lockpick_C : public AItem_Escape_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                                  OpenSound;                                                // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             OpenSoundCMP;                                             // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  CloseSound;                                               // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             CloseSoundCMP;                                            // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Escape_Lockpick.Item_Escape_Lockpick_C");
		return ptr;
	}


	void OpenLockpick(bool Open_);
	void TryGrabLock_Client(class UObject* Object);
	void Lockpick_Client(class ABP_Escape_Lock_C* EscapeLock, bool* Successful_);
	void PlayCloseSound();
	void PlayOpenSound();
	void TryUseItem(class UObject** Object, bool* PlayError);
	void UserConstructionScript();
	void Lockpick_Objective_Server(class ABP_Escape_Lock_C* Escape_Lock);
	void Use();
	void Used(bool* bJustPicked);
	void OnDrop();
	void Try_Lockpick_Objective(class UObject* Object);
	void OnPick(class AVRItemController** ByController);
	void ExecuteUbergraph_Item_Escape_Lockpick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
