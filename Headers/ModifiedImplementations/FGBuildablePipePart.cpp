// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipePart.h"

#if WITH_EDITOR
void AFGBuildablePipePart::OnConstruction(const FTransform& transform){ }
#endif 
AFGBuildablePipePart::AFGBuildablePipePart(){ }
void AFGBuildablePipePart::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipePart::BeginPlay(){ }
void AFGBuildablePipePart::SetSupportLength(float length){ }
void AFGBuildablePipePart::SetupConnectionComponent(){ }
const FName AFGBuildablePipePart::SupportMeshName = FName();
float AFGBuildablePipeHyperPart::GetPipeProgressOfConnection_Implementation(const UFGPipeConnectionComponentBase* connectionEnteredThrough){ return float(); }
void AFGBuildablePipeHyperPart::OnPipeMove_Implementation(UFGCharacterMovementComponent* charMove, float deltaTime){ }
bool AFGBuildablePipeHyperPart::OnPipeEnter_Implementation(UFGCharacterMovementComponent* charMove, const UFGPipeConnectionComponentBase* connectionEnteredThrough , const AActor* fromPipe){ return bool(); }