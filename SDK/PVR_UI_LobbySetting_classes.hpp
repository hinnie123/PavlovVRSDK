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

// WidgetBlueprintGeneratedClass UI_LobbySetting.UI_LobbySetting_C
// 0x0058 (0x0288 - 0x0230)
class UUI_LobbySetting_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UComboBoxString*                             Combo;                                                    // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Label;                                                    // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               Editable;                                                 // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	TArray<struct FString>                             Options;                                                  // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               ByPass;                                                   // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	TArray<struct FString>                             OptionsValues;                                            // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LobbySetting.UI_LobbySetting_C");
		return ptr;
	}


	void SetSelectionByIndex(int Index);
	void GetSelectionIndex(int* Index);
	void GetSelectedValue(struct FString* Value);
	void SetSelectionByValue(const struct FString& String);
	class UWidget* On_Combo_GenerateWidget_1(const struct FString& Item);
	void BuildCombo();
	void SetSelection(const struct FString& Value);
	ESlateVisibility Get_GameModeCombo_Visibility_1();
	ESlateVisibility GetVisibility_1();
	void Construct();
	void BndEvt__Combo_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__Combo_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature();
	void ExecuteUbergraph_UI_LobbySetting(int EntryPoint);
	void OnSelectionChanged__DelegateSignature(const struct FString& Selection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
