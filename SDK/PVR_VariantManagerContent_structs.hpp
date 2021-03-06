#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	Generic                        = 0,
	RelativeLocation               = 1,
	RelativeRotation               = 2,
	RelativeScale3D                = 3,
	bVisible                       = 4,
	Material                       = 5,
	EPropertyValueCategory_MAX     = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
