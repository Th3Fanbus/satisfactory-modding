// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGEnemyController.h"

AFGEnemyController::AFGEnemyController( const FObjectInitializer& ObjectInitializer ) : Super(ObjectInitializer) { }
void AFGEnemyController::Possess( APawn* InPawn ){ }
void AFGEnemyController::UnPossess(){ }
void AFGEnemyController::StartPanic_Implementation(){ }
void AFGEnemyController::RemoveAggroEntryByTarget( TScriptInterface< IFGAggroTargetInterface > target ){ }
bool AFGEnemyController::IsOnIgnoreList( const TScriptInterface< IFGAggroTargetInterface > aggroTargetInterface ) const{ return bool(); }
bool AFGEnemyController::ShouldAddAggroTarget( const TScriptInterface< IFGAggroTargetInterface > aggroTargetInterface ) const{ return bool(); }
void AFGEnemyController::UpdateAggroTargets( float dt, bool fullCheck ){ }
void AFGEnemyController::RemoveInvalidAggroTargets(){ }
void AFGEnemyController::FindAndAssignTarget(){ }
void AFGEnemyController::SetCurrentAggroTarget( TScriptInterface< IFGAggroTargetInterface > newAggroTargetInterface ){ }
void AFGEnemyController::UpdateAggroTarget( TScriptInterface< IFGAggroTargetInterface > oldTarget, TScriptInterface< IFGAggroTargetInterface > newTarget ){ }
void AFGEnemyController::OnAggroTargetUpdated_Implementation(){ }
void AFGEnemyController::OnAggroTargetRemoved( const TScriptInterface< IFGAggroTargetInterface > oldTarget  ){ }
void AFGEnemyController::AddNewAggroTarget( const TScriptInterface< IFGAggroTargetInterface > target ){ }
void AFGEnemyController::AddToAggroByTarget( const TScriptInterface< IFGAggroTargetInterface > target, float damage ){ }
float AFGEnemyController::GetAggroThreshold(){ return float(); }
bool AFGEnemyController::ShouldSwitchTarget( TScriptInterface< IFGAggroTargetInterface > newTarget ){ return bool(); }
bool AFGEnemyController::IsValidTarget( TScriptInterface< IFGAggroTargetInterface > target ){ return bool(); }
bool AFGEnemyController::CareIfCanSeeActor( AActor* target ){ return bool(); }
bool AFGEnemyController::CanSeeActor( AActor* target ){ return bool(); }
float AFGEnemyController::GetTargetingDesire( TScriptInterface< IFGAggroTargetInterface > aggroTarget ){ return float(); }
void AFGEnemyController::SortMostDesirableAggroTargets(){ }
float AFGEnemyController::GetTargetingDesireFromAggroEntry( FAggroEntry outTarget ){ return float(); }
void AFGEnemyController::UpdateAggroTargetsAggro( float dt ){ }
void AFGEnemyController::UpdateAggroTargetsIgnored( float dt ){ }
void AFGEnemyController::UpdateAggroTargetsDistance(){ }
void AFGEnemyController::UpdateAggroTargetsDesirabilities(){ }
float AFGEnemyController::GetBaseTargetingDesire( int32 aggroTargetIndex ){ return float(); }
float AFGEnemyController::GetDistanceTargetingDesire( int32 aggroTargetIndex ){ return float(); }
float AFGEnemyController::GetAggroTargetingDesire( int32 aggroTargetIndex ){ return float(); }
TScriptInterface< IFGAggroTargetInterface > AFGEnemyController::FindMostDesirableAggroTarget(){ return TScriptInterface<IFGAggroTargetInterface>(); }
bool AFGEnemyController::IsIgnored( TScriptInterface< IFGAggroTargetInterface > target ){ return bool(); }
void AFGEnemyController::SetIgnore( TScriptInterface< IFGAggroTargetInterface > target, EIgnore ignoreType, float seconds, bool force ){ }
void AFGEnemyController::SetIgnoreByIndex( int32 index, EIgnore ignoreType, float seconds, bool force ){ }
EIgnore AFGEnemyController::GetIgnoreStatus( TScriptInterface< IFGAggroTargetInterface > target, int32 targetIndex ){ return EIgnore(); }
void AFGEnemyController::StartInitialAggroCollection(){ }
void AFGEnemyController::UpdateAggroAndFindAndAssignTarget(){ }
void AFGEnemyController::GatherAggroTargets(){ }
void AFGEnemyController::ClearAllAggroTargetsAndUpdate(){ }
void AFGEnemyController::UpdateAttackPattern(){ }
void AFGEnemyController::AggroTargetAdded( TScriptInterface< IFGAggroTargetInterface > aggroTarget ){ }
void AFGEnemyController::AggroTargetRemoved( TScriptInterface< IFGAggroTargetInterface > aggroTarget ){ }
void AFGEnemyController::SubscribeToPawnDamage(){ }
void AFGEnemyController::UnSubscribeToPawnDamage(){ }
void AFGEnemyController::OnPawnTakeDamage( AActor* damagedActor, float damageAmount, const  UDamageType* damageType,  AController* instigatedBy, AActor* damageCauser ){ }
bool AFGEnemyController::IsTargetAllowed( AActor* targetActor ){ return bool(); }
