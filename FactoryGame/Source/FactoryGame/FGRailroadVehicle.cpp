// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadVehicle.h"

void AFGRailroadVehicle::GetLifetimeReplicatedProps( TArray< FLifetimeProperty >& OutLifetimeProps ) const{ }
bool AFGRailroadVehicle::IsNetRelevantFor( const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation ) const{ return bool(); }
bool AFGRailroadVehicle::IsVehicleNetRelevantFor( const  AFGRailroadVehicle* vehicle, const FVector& SrcLocation ) const{ return bool(); }
AFGRailroadVehicle::AFGRailroadVehicle(){ }
void AFGRailroadVehicle::Serialize( FArchive& ar ){ }
void AFGRailroadVehicle::PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion ){ }
bool AFGRailroadVehicle::CanDismantle_Implementation() const{ return bool(); }
void AFGRailroadVehicle::UpdateAnimation(){ }
UFGRailroadVehicleMovementComponent* AFGRailroadVehicle::GetRailroadVehicleMovementComponent() const{ return nullptr; }
void AFGRailroadVehicle::SetMultipleUnitMaster(  AFGLocomotive* locomotive ){ }
void AFGRailroadVehicle::DisplayDebug(  UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos ){ }
void AFGRailroadVehicle::DestroyVehicle(){ }
void AFGRailroadVehicle::CoupleVehicleAt( AFGRailroadVehicle* vehicle, ERailroadVehicleCoupler coupler ){ }
void AFGRailroadVehicle::DecoupleVehicleAt( ERailroadVehicleCoupler coupler ){ }
