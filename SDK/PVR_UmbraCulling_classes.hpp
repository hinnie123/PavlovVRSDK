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

// Class UmbraCulling.UmbraPrecomputedData
// 0x0010 (0x0038 - 0x0028)
class UUmbraPrecomputedData : public UAssetUserData
{
public:
	TArray<uint32_t>                                   Data;                                                     // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UmbraCulling.UmbraPrecomputedData");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
