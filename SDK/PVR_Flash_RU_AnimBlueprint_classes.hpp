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

// AnimBlueprintGeneratedClass Flash_RU_AnimBlueprint.Flash_RU_AnimBlueprint_C
// 0x0D48 (0x1158 - 0x0410)
class UFlash_RU_AnimBlueprint_C : public UGrenadeAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D2FE0A4E45DE57EC994939B985BFFB9B;      // 0x0418(0x0040)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_897E6FC24D72D67BD4D3329B9953A46D;// 0x0460(0x03A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_141B7A4943BF37A3240AB09C0BDEF643;// 0x0800(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E6B5C0B3467D02C15606DDA61FD5D594;// 0x0840(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A6B9A8A646F113A4CFDC8993255236CC;// 0x0978(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A279B842476BC67464524E99853D3B69;// 0x0AB0(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D4FE2E9640F8A6D78952FC9F36407317;// 0x0AF0(0x00D8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_623A95E84865229B5536E38D856CB45E;// 0x0BC8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39008BDE458E35A38E648D8545D8E86D;// 0x0BF8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_917AC0654A9537C96C8242834F5827E7;// 0x0C40(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_E64C6CE1449796F10FE582A5F6D60EEB;// 0x0C78(0x00F8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9F9FDF8947DA756F04C1E7B3B72B2FF3;// 0x0D70(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_84435D5B4A17E53BA0FAA793D8DE2017;// 0x0DB0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8844274A4C9F9B32F72A3FB18C83540D;// 0x0EE8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5B9E1B7B4CF0C5D73EFF2781A0229652;// 0x1020(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Flash_RU_AnimBlueprint.Flash_RU_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Flash_RU_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
