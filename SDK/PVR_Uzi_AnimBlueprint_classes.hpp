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

// AnimBlueprintGeneratedClass Uzi_AnimBlueprint.Uzi_AnimBlueprint_C
// 0x05B8 (0x09E8 - 0x0430)
class UUzi_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_152652F04D2758871011BB91FFD97937;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_50D0A8EE494F63C2DE990DAF74E07719;// 0x0480(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2CF4EF6844F6FD935A13DF9FDE3A6F6B;// 0x04C8(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5D9E447648140E2FFAD929A8116638CA;// 0x0500(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_24BE26A745227A37EB7BAA8A1EC6A31B;// 0x0548(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5962E4904DE903D990969EA7F4225A58;// 0x05F8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EC232BE844E351746D936C84EBAFE158;// 0x06A8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_64D4266145CA816D535AEDA2994A989E;// 0x0758(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2A6CB1384DC4F566EE3ECF8F9AB4E87F;// 0x0800(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5925C0B3479BF53594831290E3709935;// 0x0848(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_19772CC742C49AA7F916E991203B273C;// 0x0890(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7DE8E26746C91A6691AB9A95AD84C37A;// 0x08C8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0648C99B41D3A9F8607593A462EF72CD;// 0x0998(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass Uzi_AnimBlueprint.Uzi_AnimBlueprint_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Uzi_AnimBlueprint_AnimGraphNode_BlendListByBool_7DE8E26746C91A6691AB9A95AD84C37A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Uzi_AnimBlueprint_AnimGraphNode_ModifyBone_5962E4904DE903D990969EA7F4225A58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Uzi_AnimBlueprint_AnimGraphNode_ModifyBone_24BE26A745227A37EB7BAA8A1EC6A31B();
	void ExecuteUbergraph_Uzi_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
