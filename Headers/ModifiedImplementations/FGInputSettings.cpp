// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGInputSettings.h"

#if WITH_EDITOR
EDataValidationResult UFGInputSettings::IsDataValid( FDataValidationContext& Context){ return EDataValidationResult::Valid; }
void UFGInputSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent){ Super::PostEditChangeProperty(PropertyChangedEvent); }
#endif 
#if WITH_EDITOR
void UFGInputSettings::Validate(){ }
#endif 
#if WITH_EDITORONLY_DATA
#endif 
UFGInputSettings::UFGInputSettings(){ }
FName UFGInputSettings::GetCategoryName() const{ return FName(); }
UInputAction* UFGInputSettings::GetInputActionForTag(const FGameplayTag& Tag) const{ return nullptr; }
void UFGInputSettings::PostInitProperties(){ Super::PostInitProperties(); }
void UFGInputSettings::RefreshInputActionBindingArray(){ }
void UFGInputSettings::OnAssetAdded(const FAssetData& AssetData){ }
void UFGInputSettings::OnAssetRemoved(const FAssetData& AssetData){ }
void UFGInputSettings::CreateActionTagBinding(const FAssetData& InputActionAssetData){ }