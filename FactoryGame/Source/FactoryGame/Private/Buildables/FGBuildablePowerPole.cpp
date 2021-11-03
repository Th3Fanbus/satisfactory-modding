// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePowerPole.h"
#include "FGColoredInstanceMeshProxy.h"
#include "Hologram/FGBuildableHologram.h"
#include "Components/SceneComponent.h"

AFGBuildablePowerPole::AFGBuildablePowerPole() : Super() {
	this->mConnectionsWidgetComponent = nullptr;
	this->mConnectionWidgetClass = nullptr;
	this->mMeshComponentProxy = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("PoleMeshProxy"));
	this->mPowerPoleType = EPowerPoleType::PPT_POLE;
	this->mHasPower = false;
	this->mHologramClass = AFGBuildableHologram::StaticClass();
	this->mMeshComponentProxy->SetupAttachment(RootComponent);
}
void AFGBuildablePowerPole::BeginPlay(){ }
void AFGBuildablePowerPole::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePowerPole::StartIsLookedAtForConnection( AFGCharacterPlayer* byCharacter,  UFGCircuitConnectionComponent* overlappingConnection){ }
void AFGBuildablePowerPole::StopIsLookedAtForConnection( AFGCharacterPlayer* byCharacter){ }
void AFGBuildablePowerPole::ShowConnectionFeedback( UFGCircuitConnectionComponent* overlappingConnection){ }
void AFGBuildablePowerPole::HideConnectionFeedback(){ }
void AFGBuildablePowerPole::Dismantle_Implementation(){ }
void AFGBuildablePowerPole::OnBuildEffectFinished(){ }
UFGPowerCircuit* AFGBuildablePowerPole::GetPowerCircuit() const{ return nullptr; }
void AFGBuildablePowerPole::OnPowerConnectionChanged( UFGCircuitConnectionComponent* connection){ }
void AFGBuildablePowerPole::MarkConnectionsDirty(){ }
void AFGBuildablePowerPole::SetHasPower(bool hasPower){ }
void AFGBuildablePowerPole::OnConnectionHasPowerChanged(bool hasPower){ }
void AFGBuildablePowerPole::OnRep_HasPower() const{ }
