// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPillarHologram.h"

AFGPillarHologram::AFGPillarHologram(){ }
void AFGPillarHologram::BeginPlay(){ }
void AFGPillarHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool AFGPillarHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPillarHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGPillarHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGPillarHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
AActor* AFGPillarHologram::Construct(TArray<AActor*>& out_children, FNetConstructionID constructionID){ return nullptr; }
void AFGPillarHologram::SetMaterial( UMaterialInterface* material){ }
int32 AFGPillarHologram::GetBaseCostMultiplier() const{ return int32(); }
void AFGPillarHologram::GetSupportedBuildModes_Implementation(TArray<TSubclassOf<UFGBuildGunModeDescriptor>>& out_buildmodes) const{ }
void AFGPillarHologram::OnBuildModeChanged(TSubclassOf<UFGHologramBuildModeDescriptor> buildMode){ }
bool AFGPillarHologram::CanBeZooped() const{ return bool(); }
void AFGPillarHologram::AdjustForGround(FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
void AFGPillarHologram::FilterAttachmentPoints(TArray< const FFGAttachmentPoint* >& Points, AFGBuildable* pBuildable, const FHitResult& HitResult) const{ }
void AFGPillarHologram::CreateAttachmentPointTransform(FTransform& out_transformResult, const FHitResult& HitResult, AFGBuildable* pBuildable, const FFGAttachmentPoint& BuildablePoint, const FFGAttachmentPoint& LocalPoint){ }
void AFGPillarHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGPillarHologram::OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram){ }
void AFGPillarHologram::CheckValidPlacement(){ }
bool AFGPillarHologram::IsHologramIdenticalToActor(AActor* actor, const FVector& hologramLocationOffset) const{ return bool(); }
void AFGPillarHologram::OnRep_CurrentZoop(){ }
