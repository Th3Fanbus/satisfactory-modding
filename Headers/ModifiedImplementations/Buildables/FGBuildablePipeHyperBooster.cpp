// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipeHyperBooster.h"

AFGBuildablePipeHyperBooster::AFGBuildablePipeHyperBooster(){ }
bool AFGBuildablePipeHyperBooster::CanProduce_Implementation() const{ return bool(); }
void AFGBuildablePipeHyperBooster::Factory_TickProducing(float dt){ }
float AFGBuildablePipeHyperBooster::GetProducingPowerConsumptionBase() const{ return float(); }
TArray<TPair<UFGPipeConnectionComponentBase*, float>> AFGBuildablePipeHyperBooster::GetPossibleConnectionsToTransitionThrough(AFGCharacterPlayer* charPlayer, UFGPipeConnectionComponentBase* connectionEnteredThrough) const{ return TArray<TPair<UFGPipeConnectionComponentBase*,float>>(); }
EPipeHyperEnterResult AFGBuildablePipeHyperBooster::OnPipeEnterReal(AFGCharacterPlayer* charPlayer, UFGPipeConnectionComponentBase* connectionEnteredThrough, TStructOnScope<FFGPipeHyperBasePipeData>& outPipeData){ return EPipeHyperEnterResult(); }
float AFGBuildablePipeHyperBooster::GetLengthAlongPipe(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData){ return float(); }
void AFGBuildablePipeHyperBooster::GetLocationAndRotationAlongPipe(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData, float distance, FVector& outLocation, FVector& outDirection){ }
UFGPipeConnectionComponentBase* AFGBuildablePipeHyperBooster::GetConnectionToTransitThrough(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData, float distance, float& outExitOffset){ return nullptr; }
void AFGBuildablePipeHyperBooster::OnPipeExitReal(AFGCharacterPlayer* charPlayer, TStructOnScope<FFGPipeHyperBasePipeData>& pipeData){ }
void AFGBuildablePipeHyperBooster::OnPipeMoveStep(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData, float stepLength, const FPlayerPipeHyperData& pipeTravelData, float& pipeVelocityReal, float& pipeTempMinSpeed){ }
void AFGBuildablePipeHyperBooster::UpdateTargetConsumption(){ }