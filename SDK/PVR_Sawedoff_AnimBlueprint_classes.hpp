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

// AnimBlueprintGeneratedClass Sawedoff_AnimBlueprint.Sawedoff_AnimBlueprint_C
// 0x0708 (0x0B48 - 0x0440)
class USawedoff_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B92E532146C0566CF85C75AACB8153F6;// 0x0448(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_60D17341405BBA00A932C68DDB3D3426;// 0x0488(0x0138)
	struct FAnimNode_Root                              AnimGraphNode_Root_1730DD04429D93612F6DF8845DFB3450;      // 0x05C0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1FAADD7D446AA91F9C3394B461907D55;// 0x0600(0x0138)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_682D5BC541E8227923241B91645D2BC5;// 0x0738(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_88E0762E47697EF5B78C90B4159CE678;// 0x0808(0x00D8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4DA83DA14BEAA9E1042EF1BB78F897BC;// 0x08E0(0x0040)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_224B35C445EB0267218FFD9E17F3329F;// 0x0920(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4E5C7D6540B5F51C124AD49764504AF1;// 0x0950(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_598ABC0646D4FDD83128A3AE229C56BE;// 0x0998(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_048B87E94B113E02578A37802197B56B;// 0x09D0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_34BEA19B4297E4F40CA5998E4C597335;// 0x0A10(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sawedoff_AnimBlueprint.Sawedoff_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sawedoff_AnimBlueprint_AnimGraphNode_ModifyBone_60D17341405BBA00A932C68DDB3D3426();
	void ExecuteUbergraph_Sawedoff_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
