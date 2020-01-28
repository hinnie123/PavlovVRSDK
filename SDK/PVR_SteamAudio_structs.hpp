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

// Enum SteamAudio.EIplAudioEngine
enum class EIplAudioEngine : uint8_t
{
	UNREAL                         = 0,
	EIplAudioEngine_MAX            = 1
};


// Enum SteamAudio.EIplConvolutionType
enum class EIplConvolutionType : uint8_t
{
	PHONON                         = 0,
	TRUEAUDIONEXT                  = 1,
	EIplConvolutionType_MAX        = 2
};


// Enum SteamAudio.EIplSimulationType
enum class EIplSimulationType : uint8_t
{
	REALTIME                       = 0,
	BAKED                          = 1,
	DISABLED                       = 2,
	EIplSimulationType_MAX         = 3
};


// Enum SteamAudio.EIplDirectOcclusionMode
enum class EIplDirectOcclusionMode : uint8_t
{
	NONE                           = 0,
	DIRECTOCCLUSION_NOTRANSMISSION = 1,
	DIRECTOCCLUSION_TRANSMISSIONBYVOLUME = 2,
	DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY = 3,
	EIplDirectOcclusionMode_MAX    = 4
};


// Enum SteamAudio.EIplDirectOcclusionMethod
enum class EIplDirectOcclusionMethod : uint8_t
{
	RAYCAST                        = 0,
	VOLUMETRIC                     = 1,
	EIplDirectOcclusionMethod_MAX  = 2
};


// Enum SteamAudio.EIplHrtfInterpolationMethod
enum class EIplHrtfInterpolationMethod : uint8_t
{
	NEAREST                        = 0,
	BILINEAR                       = 1,
	EIplHrtfInterpolationMethod_MAX = 2
};


// Enum SteamAudio.EIplSpatializationMethod
enum class EIplSpatializationMethod : uint8_t
{
	PANNING                        = 0,
	HRTF                           = 1,
	EIplSpatializationMethod_MAX   = 2
};


// Enum SteamAudio.EQualitySettings
enum class EQualitySettings : uint8_t
{
	LOW                            = 0,
	MEDIUM                         = 1,
	HIGH                           = 2,
	CUSTOM                         = 3,
	EQualitySettings_MAX           = 4
};


// Enum SteamAudio.EPhononMaterial
enum class EPhononMaterial : uint8_t
{
	GENERIC                        = 0,
	BRICK                          = 1,
	CONCRETE                       = 2,
	CERAMIC                        = 3,
	GRAVEL                         = 4,
	CARPET                         = 5,
	GLASS                          = 6,
	PLASTER                        = 7,
	WOOD                           = 8,
	METAL                          = 9,
	ROCK                           = 10,
	CUSTOM                         = 11,
	EPhononMaterial_MAX            = 12
};


// Enum SteamAudio.EPhononProbeMobility
enum class EPhononProbeMobility : uint8_t
{
	STATIC                         = 0,
	DYNAMIC                        = 1,
	EPhononProbeMobility_MAX       = 2
};


// Enum SteamAudio.EPhononProbePlacementStrategy
enum class EPhononProbePlacementStrategy : uint8_t
{
	CENTROID                       = 0,
	UNIFORM_FLOOR                  = 1,
	EPhononProbePlacementStrategy_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SteamAudio.BakedDataInfo
// 0x0010
struct FBakedDataInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct SteamAudio.SubmixEffectReverbPluginSettings
// 0x0001
struct FSubmixEffectReverbPluginSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
