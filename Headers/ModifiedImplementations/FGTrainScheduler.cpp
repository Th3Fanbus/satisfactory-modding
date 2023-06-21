// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGTrainScheduler.h"

FTrainSchedulerInfo::FTrainSchedulerInfo(){ }
FTrainSchedulerInfo::~FTrainSchedulerInfo(){ }
void FTrainSchedulerInfo::AddReservation(TWeakPtr< FFGRailroadBlockReservation >& handle){ }
void FTrainSchedulerInfo::CancelReservations(){ }
bool FTrainSchedulerInfo::HaveReservation(TWeakPtr< FFGRailroadSignalBlock > block){ return bool(); }
AFGTrainScheduler::AFGTrainScheduler(){ }
void AFGTrainScheduler::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGTrainScheduler::AddTrain( AFGTrain* train){ }
void AFGTrainScheduler::RemoveTrain( AFGTrain* train){ }
void AFGTrainScheduler::TickScheduler(){ }
void AFGTrainScheduler::Debug_EnableBlackBox(bool isEnabled, int32 numRecordsToKeep){ }
void AFGTrainScheduler::Debug_DumpBlackBox(){ }
void AFGTrainScheduler::UpdateProgressOnApprovedReservations(){ }
void AFGTrainScheduler::MakeNewReservations(){ }
void AFGTrainScheduler::UpdateOverlapsAndDependencies(){ }
void AFGTrainScheduler::UpdatePrioritiesAndSort(){ }
void AFGTrainScheduler::ApproveReservations(){ }
uint32 AFGTrainScheduler::GetReservationNumber() const{ return uint32(); }
uint32 AFGTrainScheduler::GetNextReservationNumber(){ return uint32(); }
void AFGTrainScheduler::Debug_UpdateBlackBox(){ }
TTuple< AFGTrain*, AFGTrain* > AFGTrainScheduler::CheckForDeadlock() const{ return TTuple<AFGTrain*,AFGTrain*>(); }
TArray< AFGTrain* > AFGTrainScheduler::CheckForDerailments() const{ return TArray<AFGTrain*>(); }
