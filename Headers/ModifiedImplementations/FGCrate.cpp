// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCrate.h"

AFGCrate::AFGCrate(){ }
void AFGCrate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGCrate::PostActorCreated(){ Super::PostActorCreated(); }
void AFGCrate::BeginPlay(){ }
void AFGCrate::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGCrate::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGCrate::AddAsRepresentation(){ return bool(); }
bool AFGCrate::UpdateRepresentation(){ return bool(); }
bool AFGCrate::RemoveAsRepresentation(){ return bool(); }
bool AFGCrate::IsActorStatic(){ return bool(); }
FVector AFGCrate::GetRealActorLocation(){ return FVector(); }
FRotator AFGCrate::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGCrate::GetActorRepresentationTexture(){ return nullptr; }
FText AFGCrate::GetActorRepresentationText(){ return FText(); }
void AFGCrate::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGCrate::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGCrate::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGCrate::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGCrate::GetActorShouldShowInCompass(){ return bool(); }
bool AFGCrate::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGCrate::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGCrate::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGCrate::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGCrate::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
bool AFGCrate::IsUseable_Implementation() const{ return bool(); }
void AFGCrate::RegisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
void AFGCrate::UnregisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
bool AFGCrate::FilterInventoryClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
void AFGCrate::SetIconType(EFGCrateIconType type){ }
void AFGCrate::SetAllowAddingItems(bool newAllowAddingItems){ }
void AFGCrate::OnInventoryItemRemoved(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numRemoved){ }
