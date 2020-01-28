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

// BlueprintGeneratedClass BP_ZAICharacter.BP_ZAICharacter_C
// 0x0010 (0x0830 - 0x0820)
class ABP_ZAICharacter_C : public AZAICharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZAICharacter.BP_ZAICharacter_C");
		return ptr;
	}


	void GetMeshAndAnimInstance(int* Index, class USkeletalMesh** SkeletalMesh, class UClass** AnimInstance);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ServerKillAI();
	void KillThisAI();
	void ExecuteUbergraph_BP_ZAICharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
