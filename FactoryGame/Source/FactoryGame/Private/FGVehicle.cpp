// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGVehicle.h"
#include "FGHealthComponent.h"
#include "Components/SkeletalMeshComponent.h"

FVehicleSeat::FVehicleSeat(){ }
void AFGVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
bool AFGVehicle::IsRelevancyOwnerFor(const AActor* Actor, const AActor* Owner, const AActor* ConnectionActor) const{ return bool(); }
AFGVehicle::AFGVehicle() : Super() {
	this->mDisplayName = INVTEXT("");
	this->mDescription = INVTEXT("");
	this->mHologramClass = nullptr;
	this->mMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleMesh"));
	this->mHealthComponent = CreateDefaultSubobject<UFGHealthComponent>(TEXT("HealthComponent"));
	this->mDisabledByWaterLocations.Emplace();
	this->mDisabledByWaterLocations[0].X = 0.0;
	this->mDisabledByWaterLocations[0].Y = 0.0;
	this->mDisabledByWaterLocations[0].Z = 0.0;
	this->mCustomizationData.SwatchDesc = nullptr;
	this->mCustomizationData.PatternDesc = nullptr;
	this->mCustomizationData.MaterialDesc = nullptr;
	this->mCustomizationData.OverrideColorData.PrimaryColor.R = 0.0;
	this->mCustomizationData.OverrideColorData.PrimaryColor.G = 0.0;
	this->mCustomizationData.OverrideColorData.PrimaryColor.B = 0.0;
	this->mCustomizationData.OverrideColorData.PrimaryColor.A = 1.0;
	this->mCustomizationData.OverrideColorData.SecondaryColor.R = 0.0;
	this->mCustomizationData.OverrideColorData.SecondaryColor.G = 0.0;
	this->mCustomizationData.OverrideColorData.SecondaryColor.B = 0.0;
	this->mCustomizationData.OverrideColorData.SecondaryColor.A = 1.0;
	this->mCustomizationData.OverrideColorData.Metallic = 0.0;
	this->mCustomizationData.OverrideColorData.Roughness = 0.0;
	this->mCustomizationData.PatternRotation = 0;
	this->mCustomizationData.ColorSlot = 0;
	this->mCustomizationData.HasPower = 0;
	this->mBuiltWithRecipe = nullptr;
	this->mIsSelfDriving = false;
	this->mSelfDrivingController = nullptr;
	this->mConstructSound = nullptr;
	this->mIsDestructible = false;
	this->mIsSubmergedInWater = false;
	this->mSubmergedAngularDamping = 6.0;
	this->mSubmergedLinearDamping = 15.0;
	this->mSubmergedBouyantForce = 1000.0;
	this->mGasDamageType = nullptr;
	this->mJumpPadForceMultiplier = 1.0;
	this->mIsSimulated = false;
	this->mAddToSignificanceManager = true;
	this->mSignificanceRange = 20000.0;
	this->mSimulationDistance = 20000.0;
	this->mActorRepresentationTexture = nullptr;
	this->mMapText = INVTEXT("");
	this->AutoPossessAI = EAutoPossessAI::Disabled;
	this->AIControllerClass = nullptr;
	this->bNetLoadOnClient = false;
	this->RootComponent = mMesh;
}
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
void AFGVehicle::StartIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter, bool isValid){ }
void AFGVehicle::StopIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter){ }
bool AFGVehicle::CanDock_Implementation(EDockStationType atStation) const{ return bool(); }
UFGInventoryComponent* AFGVehicle::GetDockInventory_Implementation() const{ return nullptr; }
UFGInventoryComponent* AFGVehicle::GetDockFuelInventory_Implementation() const{ return nullptr; }
void AFGVehicle::WasDocked_Implementation( AFGBuildableDockingStation* atStation){ }
void AFGVehicle::WasUndocked_Implementation(){ }
void AFGVehicle::OnBeginLoadVehicle_Implementation(){ }
void AFGVehicle::OnBeginUnloadVehicle_Implementation(){ }
void AFGVehicle::OnTransferComplete_Implementation(){ }
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
void AFGVehicle::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
FVector AFGVehicle::GetRefundSpawnLocationAndArea_Implementation(const FVector& aimHitLocation, float& out_radius) const{ return FVector(); }
void AFGVehicle::PreUpgrade_Implementation(){ }
void AFGVehicle::Upgrade_Implementation(AActor* newActor){ }
void AFGVehicle::Dismantle_Implementation(){ }
void AFGVehicle::StartIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter){ }
void AFGVehicle::StopIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter){ }
void AFGVehicle::GetChildDismantleActors_Implementation(TArray< AActor* >& out_ChildDismantleActors) const{ }
void AFGVehicle::RegisterIncomingAttacker_Implementation( AFGEnemyController* forController){ }
void AFGVehicle::UnregisterAttacker_Implementation( AFGEnemyController* forController){ }
AActor* AFGVehicle::GetActor_Implementation(){ return nullptr; }
float AFGVehicle::GetEnemyTargetDesirability_Implementation( AFGEnemyController* forController){ return float(); }
bool AFGVehicle::ShouldAutoregisterAsTargetable_Implementation() const{ return bool(); }
UPrimitiveComponent* AFGVehicle::GetTargetComponent_Implementation(){ return nullptr; }
bool AFGVehicle::IsAlive_Implementation() const{ return bool(); }
FVector AFGVehicle::GetAttackLocation_Implementation() const{ return FVector(); }
bool AFGVehicle::AddAsRepresentation(){ return bool(); }
bool AFGVehicle::UpdateRepresentation(){ return bool(); }
bool AFGVehicle::RemoveAsRepresentation(){ return bool(); }
bool AFGVehicle::IsActorStatic(){ return bool(); }
FVector AFGVehicle::GetRealActorLocation(){ return FVector(); }
FRotator AFGVehicle::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGVehicle::GetActorRepresentationTexture(){ return nullptr; }
FText AFGVehicle::GetActorRepresentationText(){ return FText(); }
void AFGVehicle::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGVehicle::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGVehicle::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGVehicle::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGVehicle::GetActorShouldShowInCompass(){ return bool(); }
bool AFGVehicle::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGVehicle::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGVehicle::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGVehicle::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGVehicle::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
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
