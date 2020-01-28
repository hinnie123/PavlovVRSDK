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

// BlueprintGeneratedClass BP_Escape_Vent.BP_Escape_Vent_C
// 0x0008 (0x03B0 - 0x03A8)
class ABP_Escape_Vent_C : public ABP_EscapeObjective_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Escape_Vent.BP_Escape_Vent_C");
		return ptr;
	}


	void TryDestroyObjective_Server(class UObject** Object, bool* Destroyed);
	void CanDestroyObjective(class AVRItem** VRItem, bool* CanDestroy);
	void UserConstructionScript();
	void SetRepairMeshVis(bool* Visible);
	void ExecuteUbergraph_BP_Escape_Vent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
