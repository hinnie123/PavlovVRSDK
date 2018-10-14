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

// AnimBlueprintGeneratedClass AK47_V2_AnimBlueprint.AK47_V2_AnimBlueprint_C
// 0x0328 (0x0758 - 0x0430)
class UAK47_V2_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C2981A5C44936BCE5A0238976BDC2F4D;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C8DBAF6940EDB784A66E31B43DA75982;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5D6187C94307D790C381ADADD9671108;// 0x04C8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_127A825140364C1846D54D8E7FA166FB;// 0x0578(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C040E472449EA5E9871E3C85A43274AD;// 0x05C0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20DC16094DC81ADBA6693C8C02ACF964;// 0x0670(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9295BA784B7DEF1F10F5C790ACFE21A4;// 0x0720(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AK47_V2_AnimBlueprint.AK47_V2_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK47_V2_AnimBlueprint_AnimGraphNode_ModifyBone_20DC16094DC81ADBA6693C8C02ACF964();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK47_V2_AnimBlueprint_AnimGraphNode_ModifyBone_C040E472449EA5E9871E3C85A43274AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AK47_V2_AnimBlueprint_AnimGraphNode_ModifyBone_5D6187C94307D790C381ADADD9671108();
	void ExecuteUbergraph_AK47_V2_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
