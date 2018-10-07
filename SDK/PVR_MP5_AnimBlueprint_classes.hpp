#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MP5_AnimBlueprint.MP5_AnimBlueprint_C
// 0x03D8 (0x0808 - 0x0430)
class UMP5_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_09511BAB4DECD1E5A090429D82C0183B;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6F5ED3384B96BC99C99B2F9F586EBA2E;// 0x0480(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E29B31E047FA127559814BB2A0489CFC;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E15733D145DB9B26E8DE2E9986483E24;// 0x0500(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E369B6EC4A0F5D51E47584A598A26056;// 0x05B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_34B80EDE4EB26D4A1C2D45A026353FB8;// 0x05F8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_342901BC4179BE96F45E87918C95D10F;// 0x06A8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9FE0006F4F45BA927332BBB822A12C26;// 0x0758(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass MP5_AnimBlueprint.MP5_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_MP5_AnimBlueprint_AnimGraphNode_ModifyBone_9FE0006F4F45BA927332BBB822A12C26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MP5_AnimBlueprint_AnimGraphNode_ModifyBone_342901BC4179BE96F45E87918C95D10F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MP5_AnimBlueprint_AnimGraphNode_ModifyBone_34B80EDE4EB26D4A1C2D45A026353FB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MP5_AnimBlueprint_AnimGraphNode_ModifyBone_E15733D145DB9B26E8DE2E9986483E24();
	void ExecuteUbergraph_MP5_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
