// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableControlPanelHost.h"

AFGBuildableControlPanelHost::AFGBuildableControlPanelHost() : Super() {
	this->mDownstreamConnection = nullptr;
	this->mControlledBuildableType = nullptr;
}
void AFGBuildableControlPanelHost::BeginPlay(){ }
TArray< AFGBuildable* >& AFGBuildableControlPanelHost::GetControlledBuildables(TSubclassOf< AFGBuildable > outputType){ return *(new TArray< AFGBuildable* >); }
void AFGBuildableControlPanelHost::OnCircuitsRebuilt(){ }
void AFGBuildableControlPanelHost::SearchDownstreamCircuit(){ }
