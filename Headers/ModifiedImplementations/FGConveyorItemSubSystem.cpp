// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGConveyorItemSubSystem.h"

void FInstanceLODs::UpdateVisibility(int32 NumInstances){ }
void FInstanceLODs::AddInstance_Internal(AActor* Outer){ }
void FConveyorBucketData::CreateComponent(AActor* Outer){ }
#if WITH_PIE_SUPPORT
#endif 
AFGConveyorItemSubsystem::AFGConveyorItemSubsystem(){ }
AFGConveyorItemSubsystem* AFGConveyorItemSubsystem::Get(UWorld* world){ return nullptr; }
void AFGConveyorItemSubsystem::Tick(float DeltaSeconds){ }
void AFGConveyorItemSubsystem::BeginPlay(){ }
void AFGConveyorItemSubsystem::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGConveyorItemSubsystem::InitializeConveyorItems(){ }
void AFGConveyorItemSubsystem::GatherTransformData_ISPC(const TArray<bool> DistancesToUpdate, FConveyorActorContainer< AFGBuildableConveyorBelt* >* Belt, FConveyorActorContainer< AFGBuildableConveyorLift* >* Lifts){ }
void AFGConveyorItemSubsystem::Cleanup(TArray< bool > LodsToUpdate){ }
TArray< bool > AFGConveyorItemSubsystem::UpdateTimers(float DeltaTime){ return TArray<bool>(); }
bool AFGConveyorItemSubsystem::mIsConveyorRendererActive = bool();
