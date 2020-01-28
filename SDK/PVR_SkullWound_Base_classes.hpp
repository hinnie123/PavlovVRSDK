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

// BlueprintGeneratedClass SkullWound_Base.SkullWound_Base_C
// 0x0010 (0x03C8 - 0x03B8)
class ASkullWound_Base_C : public AWoundAux
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SkullMesh;                                                // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SkullWound_Base.SkullWound_Base_C");
		return ptr;
	}


	struct FName GetAttachSocket();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SkullWound_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
