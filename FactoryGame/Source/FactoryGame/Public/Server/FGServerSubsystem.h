// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IPAddress.h"
#include "Server/FGDedicatedServerTypes.h"
#include "FGSaveSystem.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Containers/Ticker.h"
#include "GameFramework/SaveGame.h"
#include "FGServerSubsystem.generated.h"

UCLASS()
class FACTORYGAME_API UFGServerSettings : public USaveGame
{
	friend class UFGServerSubsystem;
	GENERATED_BODY()
	public:

	private:
	/// Just a friendly name for this server. Can be used in UI dialogs to identify the server
	UPROPERTY( SaveGame )
	FString mServerName;

	/// If set, the most recent save from this session will be automatically loaded on server startup
	UPROPERTY( SaveGame )
	FString mAutoLoadSessionName;

	UPROPERTY( SaveGame )
	FString mAdminPassword;

	UPROPERTY( SaveGame )
	FString mClientPassword;

	UPROPERTY( SaveGame )
	FString mServerSecret;
};

/**
 * Server-side class that serves as the entry point for all dedicated server related operations. Also manages all server specific settings.
 */
UCLASS( config=ServerSettings, configdonotcheckdefaults )
class FACTORYGAME_API UFGServerSubsystem : public UGameInstanceSubsystem, public FTSTickerObjectBase
{
	GENERATED_BODY()
public:
	UFGServerSubsystem();
	UFGServerSubsystem( FVTableHelper& Helper );
	virtual ~UFGServerSubsystem() override;
	
	static const TCHAR* EnableAutomaticPauseCommand;
	static const TCHAR* DisableAutomaticPauseCommand;
	static const TCHAR* ShowAutomaticPauseCommand;
	static const TCHAR* EnableSaveOnPlayerLeaveCommand;
	static const TCHAR* DisableSaveOnPlayerLeaveCommand;
	static const TCHAR* ShowSaveOnPlayerLeaveCommand;

	static UFGServerSubsystem* Get( const UObject* WorldContext );
	static const TCHAR* EntryTicketOptionName;
	
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
	FString GetServerName() const;

	void SetServerName( const FString& ServerName );
	void SetAdminPassword( const FString& HashedPassword );
	void SetClientPassword( const FString& HashedPassword );
	void SetAutoLoadSessionName( const FString& SessionName );

	/// Checks if the password provided matches any of the set passwords and generates an authentication token, valid only for this player at this address
	FServerAuthenticationToken AuthenticatePlayer( const FString& HashedPassword, EPrivilegeLevel MinimumTargetPrivilege, FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr );

	/// If no admin password is set, an InitialAdmin privilege will be crated. Otherwise if there is an admin password but no join password is set,
	/// the player will be granted plain client privilege
	FServerAuthenticationToken AttemptPasswordlessLogin( FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr );

	/// Cryptographically verifies the authenticity of the provided authentication token. IE: If this token was generated by this server for this player at this address
	bool VerifyAuthToken( const FServerAuthenticationToken& Cookie, FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr );
	bool VerifyGameTicket( const FServerEntryToken& Ticket, FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr );

	/// Creates a new game with the provided Session name and start location.
	void StartGame( const FString& SessionName, const FString& StartLocation );

	/// Loads the save game that this header belongs to
	bool LoadGame( const FSaveHeader& header, TMap<FString, FString> Options );

	/// Looks for an existing save game and loads it. Takes into account mAutoLoadSessionName if it's set
	bool AutoStart();

	/// Creates a ticket that may be used to join the game. The ticket expires after 1 minute and another one must be generated.
	FServerEntryToken IssueTicket(FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr, EPrivilegeLevel Privilege);

	bool ShouldAutoPause() const;
	bool ShouldSaveOnDisconnect() const
	{
		return mAutoSaveOnDisconnect;
	}

	FString GetAutoLoadSessionName() const
	{
		return mSettings ? mSettings->mAutoLoadSessionName : FString{};
	}
	
	FServerGameState GetServerGameState() const;

	void SetAutoPause( bool AutoPause );
	void SetAutoSaveOnDisconnect( bool AutoSaveOnDisconnect );

	bool Tick(float DeltaTime) override;

	int16 GetGamePort() const
	{
		return mGamePort;
	}
	
private:
	void OnPreLoadMap( const FString &MapName );
	void OnPostLoadMap( UWorld* World );
	void PlayerLeaving(AGameModeBase* /*GameMode*/, AController* /*Exiting*/) const;
	void SaveSettings() const;
	void LoadSettings();
	
	/// Adds salt to a text (ie: password salting)
	FString SeasonText(const FString& HashedText) const;
	FString GenerateFingerprint( FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr, EPrivilegeLevel Privilege, TOptional<FDateTime> IssueDate = {} );
	
	UPROPERTY( Config )
	bool mAutoPause = true;

	UPROPERTY( Config )
	bool mAutoSaveOnDisconnect = true;

	UPROPERTY( Config )
	bool mUsePacketRouting = true;

	UPROPERTY()
	class UFGServerSocket* mServerSocket = nullptr;
	
	UPROPERTY()
	UFGServerSettings *mSettings = nullptr;

	UPROPERTY()
	class AFGServerBeaconHostObject* mBeaconHostObject = nullptr;

	FString mCredentialsFile;

	int16 mBeaconPort = 0;
	int16 mGamePort = 0;
	EServerState mState = EServerState::Offline;
	float mAverageTickRate = 0.f;
};

