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

// BlueprintGeneratedClass Bullet_Taser.Bullet_Taser_C
// 0x0008 (0x0520 - 0x0518)
class ABullet_Taser_C : public ABullet_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bullet_Taser.Bullet_Taser_C");
		return ptr;
	}


	void TryTasePlayer(const struct FHitResult& Hit);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnImpact(struct FHitResult* Hit);
	void ExecuteUbergraph_Bullet_Taser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
