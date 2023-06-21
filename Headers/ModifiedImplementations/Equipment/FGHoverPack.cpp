// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGHoverPack.h"

AFGHoverPack::AFGHoverPack(){ }
void AFGHoverPack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGHoverPack::BeginPlay(){ }
void AFGHoverPack::Tick(float deltaTime){ }
void AFGHoverPack::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGHoverPack::Equip( AFGCharacterPlayer* character){ }
void AFGHoverPack::UnEquip(){ }
void AFGHoverPack::OnCharacterMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode, EMovementMode NewMovementMode, uint8 NewCustomMode){ }
void AFGHoverPack::AddEquipmentActionBindings(){ }
float AFGHoverPack::GetCharacterUseDistanceOverride() const{ return float(); }
float AFGHoverPack::GetMaxSpeed(bool IsSprinting) const{ return float(); }
float AFGHoverPack::GetHoverSpeed(bool IsSprinting) const{ return float(); }
float AFGHoverPack::GetHoverAccelerationSpeed(bool IsSprinting) const{ return float(); }
float AFGHoverPack::GetNormalizedDistanceFromConnection() const{ return float(); }
float AFGHoverPack::GetDistanceFromCurrentConnection() const{ return float(); }
float AFGHoverPack::GetMaxDistanceFromCurrentConnection() const{ return float(); }
float AFGHoverPack::GetHeightAboveCurrentConnection() const{ return float(); }
void AFGHoverPack::SetHoverMode(EHoverPackMode HoverMode, bool UpdateMovementMode){ }
void AFGHoverPack::ConnectToNearestPowerConnection(){ }
EHoverConnectionStatus AFGHoverPack::GetPowerConnectionStatus( UFGPowerConnectionComponent* Connection) const{ return EHoverConnectionStatus(); }
bool AFGHoverPack::IsPowerConnectionValid( UFGPowerConnectionComponent* Connection, bool CheckDistance) const{ return bool(); }
bool AFGHoverPack::IsRailroadTrackValid( AFGBuildableRailroadTrack* RailroadTrack, bool CheckDistance) const{ return bool(); }
void AFGHoverPack::OnHoverModeChanged_Implementation(EHoverPackMode NewMode){ }
void AFGHoverPack::OnPowerConnectionLocationUpdated_Implementation(const FVector& NewLocation){ }
void AFGHoverPack::OnConnectionStatusUpdated_Implementation(const bool HasConnection){ }
void AFGHoverPack::OnRangeWarningToggle_Implementation(const bool ShouldDisplayWarning){ }
void AFGHoverPack::HandlePowerConnection(const float DeltaTime){ }
void AFGHoverPack::ConnectToPowerConnection( UFGPowerConnectionComponent* Connection){ }
void AFGHoverPack::DisconnectFromCurrentPowerConnection(){ }
void AFGHoverPack::ConnectToRailroadTrack( AFGBuildableRailroadTrack* RailroadTrack){ }
void AFGHoverPack::SetCharacterHoverMovementMode() const{ }
void AFGHoverPack::PlayerStopHover_Server_Implementation(){ }
bool AFGHoverPack::PlayerStopHover_Server_Validate(){ return bool(); }
void AFGHoverPack::PlayerStopHover(){ }
bool AFGHoverPack::PlayerIsInHoverMovementMode() const{ return bool(); }
void AFGHoverPack::MakeActiveNoise(){ }
void AFGHoverPack::Input_Crouch(const FInputActionValue& actionValue){ }
void AFGHoverPack::OnRep_HasConnection(){ }
void AFGHoverPack::OnRep_CurrentHoverMode(){ }
void AFGHoverPack::OnRep_CurrentConnectionLocation(){ }
AFGHoverPackAttachment::AFGHoverPackAttachment(){ }
void AFGHoverPackAttachment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGHoverPackAttachment::SetCurrentHoverMode(EHoverPackMode NewMode){ }
void AFGHoverPackAttachment::SetConnectionStatus(bool HasConnection){ }
void AFGHoverPackAttachment::SetCurrentRailroadTrack( AFGBuildableRailroadTrack* RailroadTrack){ }
void AFGHoverPackAttachment::SetConnectionLocation(const FVector& NewLocation){ }
void AFGHoverPackAttachment::OnRep_CurrentHoverMode(){ }
void AFGHoverPackAttachment::OnRep_HasConnection(){ }
void AFGHoverPackAttachment::OnRep_CurrentConnectionLocation(){ }
