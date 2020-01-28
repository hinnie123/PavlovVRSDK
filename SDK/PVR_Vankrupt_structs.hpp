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

// Enum Vankrupt.EVHitEffect
enum class EVHitEffect : uint8_t
{
	None                           = 0,
	Slow                           = 1,
	Demoralize                     = 2,
	InstantKill                    = 3,
	Bleed                          = 4,
	Custom1                        = 5,
	Custom2                        = 6,
	Custom3                        = 7,
	Custom4                        = 8,
	EVHitEffect_MAX                = 9
};


// Enum Vankrupt.EVLobbyMode
enum class EVLobbyMode : uint8_t
{
	Browser                        = 0,
	Lobby                          = 1,
	LobbyDedicated                 = 2,
	LobbyClient                    = 3,
	EVLobbyMode_MAX                = 4
};


// Enum Vankrupt.EVMenuPopupType
enum class EVMenuPopupType : uint8_t
{
	None                           = 0,
	Spinner                        = 1,
	Prompt                         = 2,
	Alert                          = 3,
	EVMenuPopupType_MAX            = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Vankrupt.VTriangleBSP
// 0x0024
struct FVTriangleBSP
{
	struct FVector                                     V0;                                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     v1;                                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     v2;                                                       // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Vankrupt.VGlobalStyle
// 0x0668 (0x0670 - 0x0008)
struct FVGlobalStyle : public FSlateWidgetStyle
{
	class USlateBrushAsset*                            BackgroundBrush;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                ButtonHoverEffect;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FButtonStyle                                ButtonStyle;                                              // 0x0018(0x0278) (Edit)
	struct FTextBlockStyle                             ButtonTextStyle;                                          // 0x0290(0x01E8) (Edit)
	struct FTextBlockStyle                             PopupTextStyle;                                           // 0x0478(0x01E8) (Edit)
	class USlateBrushAsset*                            PopupBorderBrush;                                         // 0x0660(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateBrushAsset*                            SpinnerBrush;                                             // 0x0668(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Vankrupt.VKillData
// 0x0028
struct FVKillData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Vankrupt.VHitboxInfo
// 0x0038 (0x0040 - 0x0008)
struct FVHitboxInfo : public FTableRowBase
{
	bool                                               bProcessArmor;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Multiplier;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EVHitEffect                                        Effect;                                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0011(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Vankrupt.VHitboxInfo.HitSound
};

// ScriptStruct Vankrupt.VLobbySettings
// 0x0010
struct FVLobbySettings
{
	class UVGameOptions*                               Options;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFriendsOnly;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MapIndex;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Vankrupt.VLobbyStyle
// 0x0FF8 (0x1000 - 0x0008)
struct FVLobbyStyle : public FSlateWidgetStyle
{
	class USlateBrushAsset*                            Background;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x0010(0x01E8) (Edit)
	struct FTextBlockStyle                             TextStyle;                                                // 0x01F8(0x01E8) (Edit)
	struct FTextBlockStyle                             InfoTextStyle;                                            // 0x03E0(0x01E8) (Edit)
	struct FTextBlockStyle                             ButtonTextStyle;                                          // 0x05C8(0x01E8) (Edit)
	struct FTextBlockStyle                             ButtonSmallTextStyle;                                     // 0x07B0(0x01E8) (Edit)
	struct FButtonStyle                                ButtonStyle;                                              // 0x0998(0x0278) (Edit)
	class USlateBrushAsset*                            SlotBrush;                                                // 0x0C10(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateBrushAsset*                            SlotAvatarBrush;                                          // 0x0C18(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateBrushAsset*                            MapOverlayBrush;                                          // 0x0C20(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0C28(0x03D8) (Edit)
};

// ScriptStruct Vankrupt.VSpawnPointDistance
// 0x0008
struct FVSpawnPointDistance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Vankrupt.VSpawnParams
// 0x0003
struct FVSpawnParams
{
	bool                                               bWithAIController;                                        // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOccluded;                                                // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClossest;                                                // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Vankrupt.VNewsArticle
// 0x0030
struct FVNewsArticle
{
	struct FString                                     Title;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Date;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Body;                                                     // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
