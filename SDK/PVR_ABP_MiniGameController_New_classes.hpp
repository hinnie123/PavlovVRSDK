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

// AnimBlueprintGeneratedClass ABP_MiniGameController_New.ABP_MiniGameController_New_C
// 0x09A4 (0x0D04 - 0x0360)
class UABP_MiniGameController_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B345110E410B7DD83C11659F3B8AECBB;      // 0x0368(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7E33E8B644441CC04FEF3B9399E1494C;// 0x03A8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1C4E6E7D4635C75A3D34F59A41CE3C1F;// 0x04E0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0C6DDCFF4B08FC8EFD0B85BF0B30E073;// 0x0618(0x0138)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_972D0D124BF65F36453D49BD63556E15;// 0x0750(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_933129C8475CA843E0A1848743207FD6;// 0x0788(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2EBD06F94B4F6CE0AC61849F1FC67D40;// 0x07C8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C495CD294B5B301CF8412BB5DB0F3AE7;// 0x0900(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3A336AD04F363F0C9779F1B436992267;// 0x0A38(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4BEE49214FA69B717D202EAA7FE1AAC8;// 0x0B70(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_25F9F5324BF1C93852B158AA7C1E62C0;// 0x0CA8(0x0040)
	float                                              btn_01;                                                   // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_02;                                                   // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_03;                                                   // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_04;                                                   // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_05;                                                   // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_06;                                                   // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_07;                                                   // 0x0D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGameController_New.ABP_MiniGameController_New_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_MiniGameController_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
