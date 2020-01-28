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

// BlueprintGeneratedClass BP_TargetLibrary.BP_TargetLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_TargetLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TargetLibrary.BP_TargetLibrary_C");
		return ptr;
	}


	void STATIC_UseTarget_(TEnumAsByte<E_MiniGameType> CurrentMGType, TEnumAsByte<E_MiniGameType> TargetMGType, class UObject* __WorldContext, bool* UseTarget);
	void STATIC_EnumToTargetText(TEnumAsByte<E_MiniGameType> MiniGameType, class UObject* __WorldContext, struct FText* Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
