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

// AnimBlueprintGeneratedClass SK_Touch_L_Skeleton_AnimBlueprint.SK_Touch_L_Skeleton_AnimBlueprint_C
// 0x0328 (0x06F8 - 0x03D0)
class USK_Touch_L_Skeleton_AnimBlueprint_C : public UVRControllerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B65409D54DBFFC725448BD8ABFF1A5C1;      // 0x03D8(0x0040)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_D24E1ECF42F5CE463930FCAF414CCFCD;// 0x0418(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8E9E56B24F05BA437BEBA58AB7907688;// 0x0448(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8857F0D549A4499C285ED3B5B93B6319;// 0x0580(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_194A6DE44BCE6CBB440B5B9BCC2C9CDB;// 0x05C0(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Touch_L_Skeleton_AnimBlueprint.SK_Touch_L_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Touch_L_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_194A6DE44BCE6CBB440B5B9BCC2C9CDB();
	void ExecuteUbergraph_SK_Touch_L_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
