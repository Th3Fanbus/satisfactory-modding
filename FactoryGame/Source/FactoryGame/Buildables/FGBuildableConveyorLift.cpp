// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableConveyorLift.h"

AFGBuildableConveyorLift::AFGBuildableConveyorLift(){ }
void AFGBuildableConveyorLift::GetLifetimeReplicatedProps( TArray< FLifetimeProperty >& OutLifetimeProps ) const{ }
void AFGBuildableConveyorLift::BeginPlay(){ }
void AFGBuildableConveyorLift::TickItemTransforms( float dt ){ }
//template< typename MeshConstructor >
//void AFGBuildableConveyorLift::BuildStaticMeshes(
//		USceneComponent* parent,
//		const FTransform& endTransform,
//		UStaticMesh* bottomMesh,
//		UStaticMesh* midMesh,
//		UStaticMesh* topMesh,
//		float stepHeight,
//		TArray< UStaticMeshComponent* >& meshPool,
//		MeshConstructor meshConstructor ){ }
FBoxCenterAndExtent AFGBuildableConveyorLift::FitClearance(
		const FTransform& endTransform,
		float stepHeight,
		const FVector2D& extend2D,
		const FVector& extentBias ){ return FBoxCenterAndExtent(); }
