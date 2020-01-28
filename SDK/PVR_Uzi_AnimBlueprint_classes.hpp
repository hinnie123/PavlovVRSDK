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

// AnimBlueprintGeneratedClass Uzi_AnimBlueprint.Uzi_AnimBlueprint_C
// 0x0750 (0x0B90 - 0x0440)
class UUzi_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_152652F04D2758871011BB91FFD97937;      // 0x0448(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_50D0A8EE494F63C2DE990DAF74E07719;// 0x0488(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2CF4EF6844F6FD935A13DF9FDE3A6F6B;// 0x04C8(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5D9E447648140E2FFAD929A8116638CA;// 0x0500(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_24BE26A745227A37EB7BAA8A1EC6A31B;// 0x0540(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5962E4904DE903D990969EA7F4225A58;// 0x0678(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EC232BE844E351746D936C84EBAFE158;// 0x07B0(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_64D4266145CA816D535AEDA2994A989E;// 0x08E8(0x00D8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2A6CB1384DC4F566EE3ECF8F9AB4E87F;// 0x09C0(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5925C0B3479BF53594831290E3709935;// 0x0A00(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_19772CC742C49AA7F916E991203B273C;// 0x0A40(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7DE8E26746C91A6691AB9A95AD84C37A;// 0x0A78(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0648C99B41D3A9F8607593A462EF72CD;// 0x0B48(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Uzi_AnimBlueprint.Uzi_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Uzi_AnimBlueprint_AnimGraphNode_ModifyBone_5962E4904DE903D990969EA7F4225A58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Uzi_AnimBlueprint_AnimGraphNode_ModifyBone_24BE26A745227A37EB7BAA8A1EC6A31B();
	void ExecuteUbergraph_Uzi_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
