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

// AnimBlueprintGeneratedClass AutoSniper_AnimBlueprint.AutoSniper_AnimBlueprint_C
// 0x0328 (0x0758 - 0x0430)
class UAutoSniper_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_859FD7954F9441F658CFC1BA7F484A78;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_807EA31A40E0C8C338F031BE07869AC5;// 0x0480(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_85638B5E4E7F1FBAB1C5D480A5AA560E;// 0x04C8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_32B60F644CE4CD9F7FE1DBBE0CDE0495;// 0x0500(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B896502447C23605BEF8BBA90082E230;// 0x05B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_086E0A2A4B7C42D0B6F0AA953D487D84;// 0x05F8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10B1A90B4AD8E865017A74AB925195D3;// 0x06A8(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AutoSniper_AnimBlueprint.AutoSniper_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AutoSniper_AnimBlueprint_AnimGraphNode_ModifyBone_10B1A90B4AD8E865017A74AB925195D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AutoSniper_AnimBlueprint_AnimGraphNode_ModifyBone_086E0A2A4B7C42D0B6F0AA953D487D84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AutoSniper_AnimBlueprint_AnimGraphNode_ModifyBone_32B60F644CE4CD9F7FE1DBBE0CDE0495();
	void ExecuteUbergraph_AutoSniper_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
