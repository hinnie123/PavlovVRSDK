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

// AnimBlueprintGeneratedClass Pepe_AnimBlueprint.Pepe_AnimBlueprint_C
// 0x04A8 (0x08E8 - 0x0440)
class UPepe_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6102A90F4B61E6BD6789FCBE6EE4CB06;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EE3D2F59427BFFB8CA47FF85D96FC5C0;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_FB48F31044A7F91DA16FC6AB2A0E4657;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0361CDA7406BDD8C43045B90CA2F9A8D;// 0x0500(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B313C6244205997E39BC4C82512E6169;// 0x0638(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_78268D504129AD69D273D1A55DAA556E;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BB2D55D94EA8D4D14AB722B8A0AC045A;// 0x07B0(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pepe_AnimBlueprint.Pepe_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Pepe_AnimBlueprint_AnimGraphNode_ModifyBone_BB2D55D94EA8D4D14AB722B8A0AC045A();
	void ExecuteUbergraph_Pepe_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
