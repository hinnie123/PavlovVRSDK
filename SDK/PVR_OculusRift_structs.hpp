#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OculusRift.ETrackedDeviceType
enum class ETrackedDeviceType : uint8_t
{
	None                           = 0,
	HMD                            = 1,
	LTouch                         = 2,
	RTouch                         = 3,
	Touch                          = 4,
	All                            = 5,
	ETrackedDeviceType_MAX         = 6
};


// Enum OculusRift.EBoundaryType
enum class EBoundaryType : uint8_t
{
	Boundary_Outer                 = 0,
	Boundary_PlayArea              = 1,
	Boundary_MAX                   = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OculusRift.BoundaryTestResult
// 0x0020
struct FBoundaryTestResult
{
	bool                                               IsTriggering;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETrackedDeviceType                                 DeviceType;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ClosestDistance;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestPoint;                                             // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ClosestPointNormal;                                       // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
