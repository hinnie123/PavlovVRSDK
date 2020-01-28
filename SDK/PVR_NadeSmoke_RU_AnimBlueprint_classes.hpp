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

// AnimBlueprintGeneratedClass NadeSmoke_RU_AnimBlueprint.NadeSmoke_RU_AnimBlueprint_C
// 0x0D48 (0x1158 - 0x0410)
class UNadeSmoke_RU_AnimBlueprint_C : public UGrenadeAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_807072DE47DB1D146B9069880CEF5879;      // 0x0418(0x0040)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_33DCADA94C03C8489E47A4985929ADD3;// 0x0460(0x03A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E5EA240243CCC74F722CAEB8EED64857;// 0x0800(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D1BF8FA440BF209470EC75A34638B018;// 0x0840(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D9E59B174E6C36B7D83DEA83E41799E8;// 0x0978(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AED7877B496193001BAC218CFCAF61DD;// 0x0AB0(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8377D3814F337352819DBCAEE467E062;// 0x0AF0(0x00D8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_D8C5D4164891B5DC10855F91E3BFFABA;// 0x0BC8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6E705B474589EBE4FF82CCB931B3D75C;// 0x0BF8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_785163CF46EAE1BBA61AEEB3F033AF52;// 0x0C40(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_7DBDA9FA4B5A1E0297E91E9061603523;// 0x0C78(0x00F8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8953429142096114B9DC2CBB98BC4ACA;// 0x0D70(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8581AE0A4427D55F9F626F926D0D342B;// 0x0DB0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C224DAEB4951585BDFFDAFBBD89F8482;// 0x0EE8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5BDD9CE749098B21C23979ADB2489FCE;// 0x1020(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass NadeSmoke_RU_AnimBlueprint.NadeSmoke_RU_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_NadeSmoke_RU_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
