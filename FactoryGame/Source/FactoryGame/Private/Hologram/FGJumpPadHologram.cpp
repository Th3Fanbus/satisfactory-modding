// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGJumpPadHologram.h"

AFGJumpPadHologram::AFGJumpPadHologram() : Super() {
	this->mTrajectorySearchRadius = 10000.0;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGJumpPadHologram::BeginPlay(){ }
void AFGJumpPadHologram::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGJumpPadHologram::Tick(float dt){ }
void AFGJumpPadHologram::DisplayNearbyJumpPadTrajectories(){ }
void AFGJumpPadHologram::OnTraceCompleted(const FTraceHandle& Handle, FOverlapDatum& Data){ }
