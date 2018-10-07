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

// AnimBlueprintGeneratedClass AutoShotgun_AnimBlueprint.AutoShotgun_AnimBlueprint_C
// 0x0328 (0x0758 - 0x0430)
class UAutoShotgun_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_343AE10748908FB49E9AB4B0697B8784;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EFC8FC144327B8D3A85E6B8628372D69;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7554A1DF4721C071DA8EDE989BD321EF;// 0x04C8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_525A4E9F4192F35790D9979ACE1EBCD0;// 0x0578(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B6D556394D51C266AA66C999AC540899;// 0x05C0(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6F0A1A1249D0102ECD46F19B48EEC3C7;// 0x0670(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_69DD60C043163645E487BCAE07080519;// 0x06A8(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AutoShotgun_AnimBlueprint.AutoShotgun_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AutoShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_69DD60C043163645E487BCAE07080519();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AutoShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_B6D556394D51C266AA66C999AC540899();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AutoShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_7554A1DF4721C071DA8EDE989BD321EF();
	void ExecuteUbergraph_AutoShotgun_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
