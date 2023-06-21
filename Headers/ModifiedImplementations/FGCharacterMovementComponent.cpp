// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCharacterMovementComponent.h"

FFGPipeHyperDynamicPipeData::FFGPipeHyperDynamicPipeData(){ }
FFGPipeHyperDynamicPipeData::FFGPipeHyperDynamicPipeData(const FFGPipeHyperDynamicPipeData& Other){ }
FFGPipeHyperDynamicPipeData::FFGPipeHyperDynamicPipeData(FFGPipeHyperDynamicPipeData&& Other){ }
FFGPipeHyperDynamicPipeData& FFGPipeHyperDynamicPipeData::operator=(const FFGPipeHyperDynamicPipeData& Other){ return *(this); }
FFGPipeHyperDynamicPipeData& FFGPipeHyperDynamicPipeData::operator=(FFGPipeHyperDynamicPipeData&& Other){ return *(this); }
bool FFGPipeHyperDynamicPipeData::Serialize(FArchive& Ar){ return bool(); }
void FFGPipeHyperDynamicPipeData::AddStructReferencedObjects( FReferenceCollector& Collector){ }
UFGCharacterMovementComponent::UFGCharacterMovementComponent(){ }
void UFGCharacterMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction){ }
FNetworkPredictionData_Client* UFGCharacterMovementComponent::GetPredictionData_Client() const{ return nullptr; }
bool UFGCharacterMovementComponent::DoJump(bool isReplayingMoves){ return bool(); }
void UFGCharacterMovementComponent::CalcVelocity(float dt, float friction, bool isFluid, float brakingDeceleration){ }
float UFGCharacterMovementComponent::GetMaxSpeed() const{ return float(); }
void UFGCharacterMovementComponent::StartNewPhysics(float deltaTime, int32 Iterations){ }
void UFGCharacterMovementComponent::SetDefaultMovementMode(){ }
float UFGCharacterMovementComponent::GetMaxJumpZVelocity() const{ return float(); }
bool UFGCharacterMovementComponent::CanCrouchInCurrentState() const{ return bool(); }
void UFGCharacterMovementComponent::SmoothClientPosition(float DeltaSeconds){ }
float UFGCharacterMovementComponent::ImmersionDepth() const{ return float(); }
void UFGCharacterMovementComponent::ServerSetHookLocation_Implementation(const FVector& hookLocation){ }
bool UFGCharacterMovementComponent::ServerSetHookLocation_Validate(const FVector& hookLocation){ return bool(); }
void UFGCharacterMovementComponent::SetHookLocation(const FVector& hookLocation){ }
void UFGCharacterMovementComponent::ToggleWantsToSprintAndSetHoldSprint(const bool isHoldSprintOn){ }
void UFGCharacterMovementComponent::SetWantsToSprintAndHoldSprint(const bool wantsToSprint, const bool isHoldSprintOn){ }
bool UFGCharacterMovementComponent::CanGrabLadder(const  UFGLadderComponent* ladder) const{ return bool(); }
void UFGCharacterMovementComponent::StartClimbLadder( UFGLadderComponent* ladder){ }
void UFGCharacterMovementComponent::StopClimbLadder(){ }
void UFGCharacterMovementComponent::JumpOffLadder(){ }
UFGLadderComponent* UFGCharacterMovementComponent::GetOnLadder() const{ return nullptr; }
bool UFGCharacterMovementComponent::EnterPipeHyper( AFGPipeHyperStart* pipe){ return bool(); }
bool UFGCharacterMovementComponent::EnterPipeHyperDirect(UFGPipeConnectionComponentBase* connectionEnteredThrough, const float InitialMinSpeedFactor){ return bool(); }
bool UFGCharacterMovementComponent::EnterPipeHyperInternal(UFGPipeConnectionComponentBase* connectionEnteredThrough, const float initialPipeVelocity, const float initialPipeProgress, const float accumulatedDeltaTime){ return bool(); }
FVector UFGCharacterMovementComponent::GetPipeTravelDirectionWorld() const{ return FVector(); }
FRotator UFGCharacterMovementComponent::GetPipeCharacterTransform(const FVector& cameraForwardAxis) const{ return FRotator(); }
void UFGCharacterMovementComponent::PipeHyperForceExit(const bool bRagdollCharacter){ }
bool UFGCharacterMovementComponent::WantsToSlide() const{ return bool(); }
void UFGCharacterMovementComponent::UpdateSlideStatus(){ }
bool UFGCharacterMovementComponent::AttemptLedgeClimb(){ return bool(); }
void UFGCharacterMovementComponent::OnLedgeClimbFinished(){ }
void UFGCharacterMovementComponent::UpdateZiplineEffects() const{ }
void UFGCharacterMovementComponent::UpdatePendingJunctionInfo(){ }
const USceneComponent* UFGCharacterMovementComponent::GetUpdateComponent() const{ return nullptr; }
float UFGCharacterMovementComponent::GetZiplineSpeed() const{ return float(); }
void UFGCharacterMovementComponent::StopZiplineMovement(const FVector& exitForce){ }
void UFGCharacterMovementComponent::StartZiplineMovement(AActor* ziplineActor, const FVector& point1, const FVector& point2, const FVector& actorForward){ }
void UFGCharacterMovementComponent::UpdateFromCompressedFlags(uint8 flags){ }
void UFGCharacterMovementComponent::OnMovementUpdated(float deltaSeconds, const FVector & oldLocation, const FVector & oldVelocity){ }
void UFGCharacterMovementComponent::OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode){ }
void UFGCharacterMovementComponent::PhysCustom(float deltaTime, int32 Iterations){ }
void UFGCharacterMovementComponent::ExecuteDeferredCollisionChange(){ }
void UFGCharacterMovementComponent::SetOnLadder( UFGLadderComponent* ladder){ }
void UFGCharacterMovementComponent::PhysFlying(float deltaTime, int32 iterations){ }
void UFGCharacterMovementComponent::Server_LandSafelyFromFlyingState_Implementation(AFGCharacterPlayer* characterPlayer){ }
void UFGCharacterMovementComponent::LandSafelyFromFlyingState(AFGCharacterPlayer* characterPlayer){ }
void UFGCharacterMovementComponent::PhysLadder(const float deltaTime, int32 iterations){ }
void UFGCharacterMovementComponent::PhysPipe(const float deltaTime){ }
void UFGCharacterMovementComponent::PhysZipline(const float deltaTime){ }
void UFGCharacterMovementComponent::PhysHover(const float deltaTime){ }
void UFGCharacterMovementComponent::PhysParachute(const float deltaTime, int32 iterations){ }
void UFGCharacterMovementComponent::UpdateJetPack(float deltaSeconds){ }
void UFGCharacterMovementComponent::UpdateHookshot(const float deltaSeconds, const FVector& oldLocation){ }
void UFGCharacterMovementComponent::UpdateSprintStatus(){ }
bool UFGCharacterMovementComponent::CanSprint() const{ return bool(); }
bool UFGCharacterMovementComponent::CanSlide() const{ return bool(); }
bool UFGCharacterMovementComponent::CanStartSlide() const{ return bool(); }
AFGJetPack* UFGCharacterMovementComponent::GetCachedJetPack(){ return nullptr; }
AFGHookshot* UFGCharacterMovementComponent::GetCachedHookshot(){ return nullptr; }
AFGJumpingStilts* UFGCharacterMovementComponent::GetCachedJumpingStilts(){ return nullptr; }
AFGHoverPack* UFGCharacterMovementComponent::GetCachedHoverPack(){ return nullptr; }
const AFGParachute* UFGCharacterMovementComponent::GetActiveParachute() const{ return nullptr; }
void UFGCharacterMovementComponent::TickSlide(const float delta){ }
bool UFGCharacterMovementComponent::StartLedgeClimb(const float duration, const float speed){ return bool(); }
void UFGCharacterMovementComponent::StopLedgeClimb(const bool interrupt){ }
void FSavedMove_FGMovement::Clear(){ }
uint8 FSavedMove_FGMovement::GetCompressedFlags() const{ return uint8(); }
bool FSavedMove_FGMovement::CanCombineWith(const FSavedMovePtr& newMove, ACharacter* character, float maxDelta) const{ return bool(); }
void FSavedMove_FGMovement::SetMoveFor(ACharacter* character, float inDeltaTime, FVector const& newAccel,  FNetworkPredictionData_Client_Character & clientData){ }
void FSavedMove_FGMovement::PrepMoveFor( ACharacter* character){ }
FNetworkPredictionData_Client_FGMovement::FNetworkPredictionData_Client_FGMovement(const UCharacterMovementComponent& clientMovement) : FNetworkPredictionData_Client_Character(clientMovement) { }
FSavedMovePtr FNetworkPredictionData_Client_FGMovement::AllocateNewMove(){ return FSavedMovePtr(); }
