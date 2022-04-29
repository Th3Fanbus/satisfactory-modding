// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGTargetPoint.h"

#ifdef DEBUG_SELF_DRIVING
void AFGTargetPoint::Tick(float DeltaSeconds){ }
#endif 
AFGTargetPoint::AFGTargetPoint(){ }
void AFGTargetPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGTargetPoint::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGTargetPoint::ShouldSave_Implementation() const{ return bool(); }
void AFGTargetPoint::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGTargetPoint::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGTargetPoint::SetVisibility(bool isVisible){ }
float AFGTargetPoint::GetWaitTime(){ return float(); }
void AFGTargetPoint::IncreaseWaitTime(float addedWaitTime){ }
void AFGTargetPoint::SetWaitTime(float newWaitTime){ }
bool AFGTargetPoint::IsTargetSpeedStill() const{ return bool(); }
void AFGTargetPoint::SetTargetSpeed(int32 newSpeed){ }
void AFGTargetPoint::SetIsLoopTarget(bool isLoopTarget){ }
void AFGTargetPoint::SetIsDockingTarget(bool isDockingTarget){ }
void AFGTargetPoint::SetHostStation( AFGDockingStationInfo* hostStation){ }
bool AFGTargetPoint::IsTemporary() const{ return bool(); }
void AFGTargetPoint::NotifyIsTemporaryChanged(){ }
void AFGTargetPoint::SetNext(AFGTargetPoint* next){ }
FVector AFGTargetPoint::GetDebugPointLocation(float zOffset) const{ return FVector(); }
void AFGTargetPoint::SetOwningList( AFGDrivingTargetList* owningList){ }
bool AFGTargetPoint::TryClaim( AFGWheeledVehicleInfo* vehicle, TSet< TWeakObjectPtr<  AFGWheeledVehicleInfo > >& blockingVehicles, bool essentialsOnly){ return bool(); }
void AFGTargetPoint::ForceClaim( AFGWheeledVehicleInfo* vehicle, bool essentialsOnly){ }
void AFGTargetPoint::Claim( AFGWheeledVehicleInfo* vehicle, bool recursive, bool essentialsOnly){ }
void AFGTargetPoint::Unclaim( AFGWheeledVehicleInfo* vehicle){ }
void AFGTargetPoint::ForceUnclaim(){ }
void AFGTargetPoint::Unclaim( AFGWheeledVehicleInfo* vehicle, bool recursive){ }
bool AFGTargetPoint::IsLocked(const  AFGWheeledVehicleInfo* vehicle, TSet< TWeakObjectPtr<  AFGWheeledVehicleInfo > >& blockingVehicles) const{ return bool(); }
bool AFGTargetPoint::IsLockedByDocking(const  AFGWheeledVehicleInfo* vehicle) const{ return bool(); }
void AFGTargetPoint::DrawTargetDebug( AFGWheeledVehicleInfo* claimant, bool drawSearchPoints, bool drawSmall){ }
int AFGTargetPoint::GetDebugLevel() const{ return int(); }
void AFGTargetPoint::FindBlockingVehicles( AFGWheeledVehicleInfo* blockedVehicle, TSet< const  AFGWheeledVehicleInfo* >& blockingVehicles) const{ }
void AFGTargetPoint::BeginPlay(){ }
void AFGTargetPoint::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGTargetPoint::OnRep_IsLoopTarget(){ }
void AFGTargetPoint::OnRep_IsDockingTarget(){ }
void AFGTargetPoint::OnRep_TargetSpeed(){ }
void AFGTargetPoint::OnRep_HostStation(){ }
void AFGTargetPoint::UpdateDockingTarget(){ }
