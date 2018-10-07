#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Skull.UI_Skull_C
// 0x0019 (0x0249 - 0x0230)
class UUI_Skull_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Avatar;                                                   // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class APavlovPlayerState*                          PlayerState;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Talking;                                                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass UI_Skull.UI_Skull_C"));
		return ptr;
	}


	ESlateVisibility GetVisibility_1();
	struct FSlateBrush Get_Avatar_Brush_1();
	struct FText Get_PlayerName_Text_1();
	struct FLinearColor GetColorAndOpacity_1();
	struct FSlateBrush GetBrush_1();
	void SetPlayerState(class APavlovPlayerState* PlayerState);
	void Construct();
	void UpdateInfo();
	void Destruct();
	void ExecuteUbergraph_UI_Skull(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
