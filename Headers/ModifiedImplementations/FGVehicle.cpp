// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGVehicle.h"

FVehicleSeat::FVehicleSeat(){ }
void AFGVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
bool AFGVehicle::IsRelevancyOwnerFor(const AActor* Actor, const AActor* Owner, const AActor* ConnectionActor) const{ return bool(); }
AFGVehicle::AFGVehicle(){ }
void AFGVehicle::BeginPlay(){ }
void AFGVehicle::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGVehicle::Destroyed(){ }
void AFGVehicle::Tick(float dt){ }
float AFGVehicle::TakeDamage(float DamageAmount,  FDamageEvent const& DamageEvent,  AController* EventInstigator, AActor* DamageCauser){ return float(); }
void AFGVehicle::DisplayDebug( UCanvas* canvas, const FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
UPawnMovementComponent* AFGVehicle::GetMovementComponent() const{ return nullptr; }
void AFGVehicle::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGVehicle::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGVehicle::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGVehicle::GainedSignificance_Implementation(){ }
void AFGVehicle::LostSignificance_Implementation(){ }
float AFGVehicle::GetSignificanceRange(){ return float(); }
void AFGVehicle::SetCustomizationData_Native(const FFactoryCustomizationData& customizationData){ }
void AFGVehicle::SetCustomizationData_Implementation(const FFactoryCustomizationData& colorData){ }
void AFGVehicle::ApplyCustomizationData_Native(const FFactoryCustomizationData& customizationData){ }
TSubclassOf< UFGFactoryCustomizationDescriptor_Skin > AFGVehicle::GetActiveSkin_Native(){ return TSubclassOf<UFGFactoryCustomizationDescriptor_Skin>(); }
TSubclassOf< UFGFactoryCustomizationDescriptor_Skin > AFGVehicle::GetActiveSkin_Implementation(){ return TSubclassOf<UFGFactoryCustomizationDescriptor_Skin>(); }
void AFGVehicle::StartIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter, bool isValid){ }
void AFGVehicle::StopIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGVehicle::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGVehicle::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGVehicle::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGVehicle::IsUseable_Implementation() const{ return bool(); }
void AFGVehicle::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGVehicle::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGVehicle::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGVehicle::RegisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
void AFGVehicle::UnregisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
bool AFGVehicle::CanDismantle_Implementation() const{ return bool(); }
void AFGVehicle::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund, bool noBuildCostEnabled) const{ }
FVector AFGVehicle::GetRefundSpawnLocationAndArea_Implementation(const FVector& aimHitLocation, float& out_radius) const{ return FVector(); }
void AFGVehicle::PreUpgrade_Implementation(){ }
void AFGVehicle::Upgrade_Implementation(AActor* newActor){ }
void AFGVehicle::Dismantle_Implementation(){ }
void AFGVehicle::StartIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter){ }
void AFGVehicle::StopIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter){ }
void AFGVehicle::GetChildDismantleActors_Implementation(TArray< AActor* >& out_ChildDismantleActors) const{ }
TSubclassOf< class UFGItemDescriptor > AFGVehicle::GetBuiltWithDescriptor() const{ return TSubclassOf<class UFGItemDescriptor>(); }
bool AFGVehicle::CanBeSampled(){ return bool(); }
USkeletalMeshComponent* AFGVehicle::GetMesh() const{ return nullptr; }
bool AFGVehicle::DriverEnter( AFGCharacterPlayer* driver){ return bool(); }
bool AFGVehicle::DriverLeave(bool keepDriving){ return bool(); }
bool AFGVehicle::CanSelfDriverEnter( AAIController* ai) const{ return bool(); }
bool AFGVehicle::SelfDriverEnter( AAIController* ai){ return bool(); }
void AFGVehicle::KickAllPlayers(){ }
void AFGVehicle::Stat_Cost(TArray< FItemAmount >& out_amount) const{ }
void AFGVehicle::Stat_StockInventory(TArray< FItemAmount >& out_amount) const{ }
void AFGVehicle::SetForceRealMode(bool forceRealMode){ }
void AFGVehicle::SetForceSimulationMode(bool forceSimulationMode){ }
void AFGVehicle::SetSimulated(bool newIsSimulated){ }
void AFGVehicle::ApplyMeshPrimitiveData(const FFactoryCustomizationData& customizationData){ }
void AFGVehicle::ApplySkinData(TSubclassOf< UFGFactoryCustomizationDescriptor_Skin > newSkinDesc){ }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Swatch > AFGVehicle::GetDefaultSwatchCustomizationOverride(UObject* worldContext){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Swatch>(); }
void AFGVehicle::OnSkinCustomizationApplied_Implementation(TSubclassOf<  UFGFactoryCustomizationDescriptor_Skin > skin){ }
FVector AFGVehicle::GetVehicleRealActorLocation() const{ return FVector(); }
void AFGVehicle::OnCustomizationDataApplied(const FFactoryCustomizationData& customizationData){ }
void AFGVehicle::OnRep_IsSimulated(){ }
void AFGVehicle::OnTakeDamage(AActor* damagedActor, float damageAmount, const  UDamageType* damageType,  AController* instigatedBy, AActor* damageCauser){ }
void AFGVehicle::Died(AActor* thisActor){ }
void AFGVehicle::OnDrivingStatusChanged(){ }
void AFGVehicle::UpdateSubmergedInWater(float deltaTime){ }
void AFGVehicle::SubmergedInWaterUpdated(bool newIsSubmerged){ }
bool AFGVehicle::IsSubmergedInWater() const{ return bool(); }
void AFGVehicle::GetDismantleRefundReturns(TArray< FInventoryStack >& out_returns) const{ }
void AFGVehicle::GetDismantleInventoryReturns(TArray< FInventoryStack >& out_returns) const{ }
void AFGVehicle::DestroyVehicle(){ }
void AFGVehicle::ShowOutline(EOutlineColor color) const{ }
void AFGVehicle::HideOutline(){ }
void AFGVehicle::SetSelfDriving(bool newSelfDriving){ }
void AFGVehicle::UpdatePhysicsVolume(APhysicsVolume* physicsVolume){ }
void AFGVehicle::OnRep_CustomColorData(){ }
FName AFGVehicle::VehicleMeshComponentName = FName();
