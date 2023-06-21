// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameRulesSubsystem.h"

void UFGGameRulesRemoteCallObject::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
UFGGameRulesRemoteCallObject* UFGGameRulesRemoteCallObject::Get(UWorld* world){ return nullptr; }
void UFGGameRulesRemoteCallObject::Server_UnlockInstantAltRecipes_Implementation(bool enabled){ }
void UFGGameRulesRemoteCallObject::Server_UnlockAllMileStoneSchematics_Implementation(){ }
void UFGGameRulesRemoteCallObject::Server_UnlockAllResourceSinkSchematics_Implementation(){ }
void UFGGameRulesRemoteCallObject::Server_UnlockAllResearchSchematics_Implementation(){ }
void UFGGameRulesRemoteCallObject::Server_SetNoUnlockCost_Implementation(bool enabled){ }
void UFGGameRulesRemoteCallObject::Server_SetNoPower_Implementation(bool enabled){ }
void UFGGameRulesRemoteCallObject::Server_SetArachnidCreaturesDisabled_Implementation(bool disabled){ }
void UFGGameRulesRemoteCallObject::Server_SetGamePhase_Implementation(int32 gamePhase){ }
void AFGGameRulesSubsystem::BeginPlay(){ }
void AFGGameRulesSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
AFGGameRulesSubsystem* AFGGameRulesSubsystem::Get(UWorld* world){ return nullptr; }
AFGGameRulesSubsystem* AFGGameRulesSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGGameRulesSubsystem::UnlockAllMileStoneSchematics(){ }
void AFGGameRulesSubsystem::UnlockAllResourceSinkSchematics(){ }
void AFGGameRulesSubsystem::UnlockAllResearchSchematics(){ }
void AFGGameRulesSubsystem::UnlockInstantAltRecipes(bool enabled){ }
void AFGGameRulesSubsystem::SetNoUnlockCost(bool enabled){ }
void AFGGameRulesSubsystem::SetNoPower(bool enabled){ }
void AFGGameRulesSubsystem::SetArachnidCreaturesDisabled(bool disabled){ }
void AFGGameRulesSubsystem::SetGamePhase(int32 gamePhase){ }
void AFGGameRulesSubsystem::GetDebugOverlayData(TArray<FString>& out_debugOverlayData) const{ }
void AFGGameRulesSubsystem::OnRep_GameRules(){ }
void AFGGameRulesSubsystem::OnRep_NoUnlockCost(){ }
void AFGGameRulesSubsystem::SetupGameRules(){ }
void AFGGameRulesSubsystem::InitializeGameRules(){ }
void AFGGameRulesSubsystem::SetupBindings(){ }
void AFGGameRulesSubsystem::PushGameRulesToAdvancedGameSettings(){ }
void AFGGameRulesSubsystem::PushGameRuleToAdvancedGameSettings(const FString& StrID, FVariant value){ }
AFGGameState* AFGGameRulesSubsystem::GetGameState() const{ return nullptr; }
