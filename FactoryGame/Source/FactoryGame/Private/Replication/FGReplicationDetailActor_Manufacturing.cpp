// This file has been automatically generated by the Unreal Header Implementation tool

#include "Replication/FGReplicationDetailActor_Manufacturing.h"

AFGReplicationDetailActor_Manufacturing::AFGReplicationDetailActor_Manufacturing() : Super() {
	this->mInputInventory = nullptr;
	this->mOutputInventory = nullptr;
	this->mCurrentManufacturingProgress = 0.0;
}
void AFGReplicationDetailActor_Manufacturing::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGReplicationDetailActor_Manufacturing::InitReplicationDetailActor( AFGBuildable* owningActor){ }
void AFGReplicationDetailActor_Manufacturing::UpdateInternalReplicatedValues(){ }
void AFGReplicationDetailActor_Manufacturing::RemoveDetailActorFromOwner(){ }
void AFGReplicationDetailActor_Manufacturing::FlushReplicationActorStateToOwner(){ }
bool AFGReplicationDetailActor_Manufacturing::HasCompletedInitialReplication() const{ return bool(); }
