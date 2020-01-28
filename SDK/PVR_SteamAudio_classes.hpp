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

// Class SteamAudio.PhononGeometryComponent
// 0x0010 (0x0100 - 0x00F0)
class UPhononGeometryComponent : public UActorComponent
{
public:
	bool                                               ExportAllChildren;                                        // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	uint32_t                                           NumVertices;                                              // 0x00F4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           NumTriangles;                                             // 0x00F8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.PhononGeometryComponent");
		return ptr;
	}

};


// Class SteamAudio.PhononMaterialComponent
// 0x0028 (0x0118 - 0x00F0)
class UPhononMaterialComponent : public UActorComponent
{
public:
	int                                                MaterialIndex;                                            // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	EPhononMaterial                                    MaterialPreset;                                           // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	float                                              LowFreqAbsorption;                                        // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MidFreqAbsorption;                                        // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighFreqAbsorption;                                       // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowFreqTransmission;                                      // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MidFreqTransmission;                                      // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighFreqTransmission;                                     // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scattering;                                               // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.PhononMaterialComponent");
		return ptr;
	}

};


// Class SteamAudio.PhononOcclusionSourceSettings
// 0x0010 (0x0038 - 0x0028)
class UPhononOcclusionSourceSettings : public UOcclusionPluginSourceSettingsBase
{
public:
	EIplDirectOcclusionMode                            DirectOcclusionMode;                                      // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EIplDirectOcclusionMethod                          DirectOcclusionMethod;                                    // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              DirectOcclusionSourceRadius;                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DirectAttenuation;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AirAbsorption;                                            // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.PhononOcclusionSourceSettings");
		return ptr;
	}

};


// Class SteamAudio.PhononProbeComponent
// 0x0030 (0x0270 - 0x0240)
class UPhononProbeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0240(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.PhononProbeComponent");
		return ptr;
	}

};


// Class SteamAudio.PhononProbeVolume
// 0x0050 (0x03B0 - 0x0360)
class APhononProbeVolume : public AVolume
{
public:
	EPhononProbePlacementStrategy                      PlacementStrategy;                                        // 0x0360(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              HorizontalSpacing;                                        // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightAboveFloor;                                         // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumProbes;                                                // 0x036C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ProbeDataSize;                                            // 0x0370(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	TArray<struct FBakedDataInfo>                      BakedDataInfo;                                            // 0x0378(0x0010) (Edit, ZeroConstructor, EditConst)
	class UPhononProbeComponent*                       PhononProbeComponent;                                     // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     ProbeBoxFileName;                                         // 0x0390(0x0010) (ZeroConstructor)
	struct FString                                     ProbeBatchFileName;                                       // 0x03A0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.PhononProbeVolume");
		return ptr;
	}

};


// Class SteamAudio.SubmixEffectReverbPluginPreset
// 0x0030 (0x0070 - 0x0040)
class USubmixEffectReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x29];                                      // 0x0040(0x0029) MISSED OFFSET
	struct FSubmixEffectReverbPluginSettings           Settings;                                                 // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.SubmixEffectReverbPluginPreset");
		return ptr;
	}

};


// Class SteamAudio.PhononReverbSourceSettings
// 0x0008 (0x0030 - 0x0028)
class UPhononReverbSourceSettings : public UReverbPluginSourceSettingsBase
{
public:
	EIplSimulationType                                 IndirectSimulationType;                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              IndirectContribution;                                     // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.PhononReverbSourceSettings");
		return ptr;
	}

};


// Class SteamAudio.PhononSourceComponent
// 0x0010 (0x0250 - 0x0240)
class UPhononSourceComponent : public USceneComponent
{
public:
	struct FName                                       UniqueIdentifier;                                         // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.PhononSourceComponent");
		return ptr;
	}

};


// Class SteamAudio.PhononSpatializationSourceSettings
// 0x0008 (0x0030 - 0x0028)
class UPhononSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	EIplSpatializationMethod                           SpatializationMethod;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EIplHrtfInterpolationMethod                        HrtfInterpolationMethod;                                  // 0x0029(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.PhononSpatializationSourceSettings");
		return ptr;
	}

};


// Class SteamAudio.SteamAudioSettings
// 0x00B0 (0x00D8 - 0x0028)
class USteamAudioSettings : public UObject
{
public:
	EIplAudioEngine                                    AudioEngine;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EIplConvolutionType                                ConvolutionType;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                MinComputeUnits;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxComputeUnits;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               ExportBSPGeometry;                                        // 0x0034(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               ExportLandscapeGeometry;                                  // 0x0035(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EPhononMaterial                                    StaticMeshMaterialPreset;                                 // 0x0036(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	float                                              StaticMeshLowFreqAbsorption;                              // 0x0038(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              StaticMeshMidFreqAbsorption;                              // 0x003C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              StaticMeshHighFreqAbsorption;                             // 0x0040(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              StaticMeshLowFreqTransmission;                            // 0x0044(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              StaticMeshMidFreqTransmission;                            // 0x0048(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              StaticMeshHighFreqTransmission;                           // 0x004C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              StaticMeshScattering;                                     // 0x0050(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EPhononMaterial                                    BSPMaterialPreset;                                        // 0x0054(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              BSPLowFreqAbsorption;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              BSPMidFreqAbsorption;                                     // 0x005C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              BSPHighFreqAbsorption;                                    // 0x0060(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              BSPLowFreqTransmission;                                   // 0x0064(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              BSPMidFreqTransmission;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              BSPHighFreqTransmission;                                  // 0x006C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              BSPScattering;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EPhononMaterial                                    LandscapeMaterialPreset;                                  // 0x0074(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	float                                              LandscapeLowFreqAbsorption;                               // 0x0078(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              LandscapeMidFreqAbsorption;                               // 0x007C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              LandscapeHighFreqAbsorption;                              // 0x0080(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              LandscapeLowFreqTransmission;                             // 0x0084(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              LandscapeMidFreqTransmission;                             // 0x0088(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              LandscapeHighFreqTransmission;                            // 0x008C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              LandscapeScattering;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                IndirectImpulseResponseOrder;                             // 0x0094(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              IndirectImpulseResponseDuration;                          // 0x0098(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EIplSpatializationMethod                           IndirectSpatializationMethod;                             // 0x009C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EIplSimulationType                                 ReverbSimulationType;                                     // 0x009D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	float                                              IndirectContribution;                                     // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	uint32_t                                           MaxSources;                                               // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                TANIndirectImpulseResponseOrder;                          // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TANIndirectImpulseResponseDuration;                       // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	uint32_t                                           TANMaxSources;                                            // 0x00B0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EQualitySettings                                   RealtimeQualityPreset;                                    // 0x00B4(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	int                                                RealtimeBounces;                                          // 0x00B8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                RealtimeRays;                                             // 0x00BC(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                RealtimeSecondaryRays;                                    // 0x00C0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EQualitySettings                                   BakedQualityPreset;                                       // 0x00C4(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	int                                                BakedBounces;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                BakedRays;                                                // 0x00CC(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                BakedSecondaryRays;                                       // 0x00D0(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamAudio.SteamAudioSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
