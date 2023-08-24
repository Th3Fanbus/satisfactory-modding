// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameMode.h"

const TCHAR* AFGGameMode::StartLocationOption = TEXT("startloc");
const TCHAR* AFGGameMode::LoadGameOption = TEXT("loadgame");
const TCHAR* AFGGameMode::SkipOnboarding = TEXT("skiponboarding");
const TCHAR* AFGGameMode::AdvancedGameSettingsOption = TEXT("advancedGameSettings");
const TCHAR* AFGGameMode::EnableAdvancedGameSettingsOption = TEXT("enableAdvancedGameSettings");

AFGGameMode::AFGGameMode(){ }
void AFGGameMode::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGGameMode::BeginPlay(){ }
void AFGGameMode::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGGameMode::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameMode::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameMode::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameMode::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameMode::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGGameMode::NeedTransform_Implementation(){ return bool(); }
bool AFGGameMode::ShouldSave_Implementation() const{ return bool(); }
void AFGGameMode::FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation){ }
void AFGGameMode::InitGame(const FString& mapName, const FString& options, FString& out_errorMessage){ }
APawn* AFGGameMode::SpawnDefaultPawnAtTransform_Implementation(AController* newPlayer, const FTransform& spawnTransform){ return nullptr; }
void AFGGameMode::InitGameState(){ }
bool AFGGameMode::AllowCheats(APlayerController* p){ return bool(); }
AActor* AFGGameMode::ChoosePlayerStart_Implementation(AController* player){ return nullptr; }
void AFGGameMode::RestartPlayer(AController* newPlayer){ }
APlayerController* AFGGameMode::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage){ return nullptr; }
bool AFGGameMode::IsPaused() const{ return bool(); }
void AFGGameMode::PostLogin(APlayerController* newPlayer){ }
void AFGGameMode::Logout(AController* exiting){ }
bool AFGGameMode::FindInactivePlayer(APlayerController* PC){ return bool(); }
void AFGGameMode::GenericPlayerInitialization(AController* C){ }
void AFGGameMode::PostActorsInitialized(const UWorld::FActorsInitializedParams& inParams){ }
uint8 AFGGameMode::GenerateNextAutoSaveId(){ return uint8(); }
void AFGGameMode::SetSaveSessionName(const FString& name){ }
bool AFGGameMode::ShouldSetupSave() const{ return bool(); }
bool AFGGameMode::GetDefaultPlayerCapsuleSize(const UWorld* world, float& out_capsuleRadius, float& out_capsuleHalfHeight){ return bool(); }
bool AFGGameMode::RegisterRemoteCallObjectClass(const TSubclassOf< UFGRemoteCallObject > inClass){ return bool(); }
void AFGGameMode::RegisterCallObjectOnAllCurrentPlayers(const TSubclassOf<UFGRemoteCallObject> inClass){ }
void AFGGameMode::RebootSession(){ }
bool AFGGameMode::ShouldSkipOnboarding() const{ return bool(); }
void AFGGameMode::SetServerRestartWorldTime(const float worldTime){ }
void AFGGameMode::TriggerWorldSave(const FString& saveGameName){ }
void AFGGameMode::TriggerBundledWorldSave(const FString& saveGameName){ }
bool AFGGameMode::IsValidPawnToReclaim(APawn* pawn) const{ return bool(); }
void AFGGameMode::GetRestartSessionSaveName(FString& out_sessionName) const{ }
void AFGGameMode::BuildRestartSessionURL(const FString& saveName, FString& out_sessionUrl) const{ }
APlayerStart* AFGGameMode::CachePlayerStarts(TMap< FName, TArray< APlayerStart* > >& out_playerStarts){ return nullptr; }
void AFGGameMode::PartitionPlayerStartsByOccupancy(const TArray< APlayerStart* >& playerStarts,
		TSubclassOf< APawn > pawnClassToFit,
		TArray< APlayerStart* >& out_unOccupied,
		TArray< APlayerStart* >& out_occupied) const{ }
bool AFGGameMode::CompareUniqueNetIdBetweenOSS(const FUniqueNetIdRepl& newID, const FUniqueNetIdRepl& savedID){ return bool(); }
