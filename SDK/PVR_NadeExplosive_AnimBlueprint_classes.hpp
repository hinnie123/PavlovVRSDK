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

// AnimBlueprintGeneratedClass NadeExplosive_AnimBlueprint.NadeExplosive_AnimBlueprint_C
// 0x0C10 (0x1020 - 0x0410)
class UNadeExplosive_AnimBlueprint_C : public UGrenadeAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_116BE0004EE2E03EA0FEF7A15077BC4B;      // 0x0418(0x0040)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EE5915BD46E2F1A0DB4BD695D3D761CE;// 0x0460(0x03A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FA00EDD241FFD9F4E555698BB0B44634;// 0x0800(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EF88B68F4730A12026AF5B8E665A6B52;// 0x0840(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_148CCECC4A697DD6D73120A92DAA377F;// 0x0978(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FF61FD4D45A95820CC7769BCFD5A06BE;// 0x0AB0(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_57D0D4C149E9C4B0F5781C9FB3C620F3;// 0x0AF0(0x00D8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_64C7CA354841D85000AF259134335269;// 0x0BC8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B9BC8993470A68FEBADFA2B269C55D9B;// 0x0BF8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_AFE021104299BBCFEEFC37A77A93403E;// 0x0C40(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_41DAFD2E4BF1A01B17A01E9EFF6BC616;// 0x0C78(0x00F8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_11F602B74F498D688701008D958E2B63;// 0x0D70(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D285194F4D82635BDC958FA32C0BF9F3;// 0x0DB0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F4331E5C442BC6931C7B0C90E0ACC8B5;// 0x0EE8(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass NadeExplosive_AnimBlueprint.NadeExplosive_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_NadeExplosive_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
