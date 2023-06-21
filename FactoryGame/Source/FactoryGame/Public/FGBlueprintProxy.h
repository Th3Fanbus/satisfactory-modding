// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "FGDismantleInterface.h"
#include "FGSaveInterface.h"
#include "GameFramework/Actor.h"
#include "FGBlueprintProxy.generated.h"

/** Actor representing a spawned blueprint, with references to each building inside of it. Will automatically destroy when all buildings are gone. */
UCLASS()
class FACTORYGAME_API AFGBlueprintProxy : public AActor, public IFGSaveInterface, public IFGDismantleInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFGBlueprintProxy();

	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps( TArray< FLifetimeProperty >& OutLifetimeProps ) const override;

	/** Used by the buildables in postload to register themselves to their blueprint proxy, so we can reference them through the proxy. */
	void RegisterBuildable( class AFGBuildable* buildable );

	/** Used by buildables to unregister themselves from the blueprint proxy. Should only happen when the buildable is no longer considered part of the blueprint. */
	void UnregisterBuildable( class AFGBuildable* buildable );

	UFUNCTION( BlueprintPure, Category = "BlueprintProxy" )
	class UBoxComponent* GetBoundingBox() const { return mBoundingBox; }

	/** Gets the buildables which are part of this blueprint. */
	UFUNCTION( BlueprintPure, Category = "BlueprintProxy" )
	const TArray< class AFGBuildable* >& GetBuildables() const { return mBuildables; }

	/** Appends the buildables that belong to this blueprint to the specified array, returns the amount of buildables added. */
	UFUNCTION( BlueprintPure, Category = "BlueprintProxy" )
	int32 CollectBuildables( TArray< class AFGBuildable* >& out_buildables ) const;

	/** Gets the blueprint descriptor which was used to construct this blueprint. */
	UFUNCTION( BlueprintPure, Category = "BlueprintProxy" )
	FORCEINLINE class UFGBlueprintDescriptor* GetBlueprintDescriptor() const { return mBlueprintDescriptor; }

	/** Gets the name of the descriptor this blueprint was built with. */
	UFUNCTION( BlueprintPure, Category = "BlueprintProxy" )
	const FText& GetBlueprintName() const { return mBlueprintName; }

	// Begin IFGSaveInterface
	virtual void PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion ) override;
	virtual void PostSaveGame_Implementation( int32 saveVersion, int32 gameVersion ) override;
	virtual void PreLoadGame_Implementation( int32 saveVersion, int32 gameVersion ) override;
	virtual void PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion ) override;
	virtual void GatherDependencies_Implementation( TArray< UObject* >& out_dependentObjects ) override;
	virtual bool NeedTransform_Implementation() override;
	virtual bool ShouldSave_Implementation() const override;
	// End IFSaveInterface

	//~ Begin IFGDismantleInterface
	virtual bool CanDismantle_Implementation() const override;
	virtual void GetDismantleRefund_Implementation( TArray< FInventoryStack >& out_refund, bool noBuildCostEnabled ) const override;
	virtual FVector GetRefundSpawnLocationAndArea_Implementation( const FVector& aimHitLocation, float& out_radius ) const override;
	virtual void PreUpgrade_Implementation() override;
	virtual void Upgrade_Implementation( AActor* newActor ) override;
	virtual void Dismantle_Implementation() override;
	virtual void StartIsLookedAtForDismantle_Implementation( class AFGCharacterPlayer* byCharacter ) override;
	virtual void StopIsLookedAtForDismantle_Implementation( class AFGCharacterPlayer* byCharacter ) override;
	virtual void GetChildDismantleActors_Implementation( TArray< AActor* >& out_ChildDismantleActors ) const override;
	//~ End IFGDismantleInterface

private:
	UFUNCTION()
	void OnRep_BlueprintName();

	UFUNCTION()
	void OnRep_LocalBounds();
	
	void AssignBuildables( const TArray< class AFGBuildable* >& buildables );

#if !UE_BUILD_SHIPPING
	virtual void DisplayDebug( UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos ) override;
#endif

private:
	/** The name of this blueprint, used to get the BlueprintDescriptor. */
	UPROPERTY( ReplicatedUsing = OnRep_BlueprintName, SaveGame )
	FText mBlueprintName;

	/** The bounds of this blueprint, in local space. */
	UPROPERTY( ReplicatedUsing = OnRep_LocalBounds, SaveGame)
	FBox mLocalBounds;
	
	/** The buildables which are part of this blueprint. The buildables will register themselves on PostLoad. */
	UPROPERTY( Replicated )
	TArray< class AFGBuildable* > mBuildables;

	/** Cached reference to the blueprint descriptor. */
	UPROPERTY()
	class UFGBlueprintDescriptor* mBlueprintDescriptor;

	/** Bounding box of the blueprint. */
	UPROPERTY()
	class UBoxComponent* mBoundingBox;

private:
	friend class AFGBlueprintHologram;
};
