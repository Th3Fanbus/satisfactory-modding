// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGInventoryComponent.h"

FInventoryItem::FInventoryItem(){ }
FInventoryItem::FInventoryItem(TSubclassOf<  UFGItemDescriptor > itemClass){ }
bool FInventoryItem::Serialize(FArchive& ar){ return bool(); }
void FInventoryItem::SetItemClass(TSubclassOf<  UFGItemDescriptor > NewItemClass){ }
const FInventoryItem FInventoryItem::NullInventoryItem = FInventoryItem();
FInventoryStack::FInventoryStack(){ }
FInventoryStack::FInventoryStack(const FInventoryItem& item){ }
FInventoryStack::FInventoryStack(int32 numItems, TSubclassOf<  UFGItemDescriptor > itemClass){ }
void UFGInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void UFGInventoryComponent::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void UFGInventoryComponent::PreNetReceive(){ }
UFGInventoryComponent::UFGInventoryComponent(){ }
void UFGInventoryComponent::Serialize(FArchive& ar){ Super::Serialize(ar); }
void UFGInventoryComponent::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGInventoryComponent::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGInventoryComponent::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGInventoryComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGInventoryComponent::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGInventoryComponent::NeedTransform_Implementation(){ return bool(); }
bool UFGInventoryComponent::ShouldSave_Implementation() const{ return bool(); }
void UFGInventoryComponent::BeginPlay(){ }
void UFGInventoryComponent::SetDefaultSize(int32 defaultSize){ }
void UFGInventoryComponent::Resize(int32 newSize){ }
void UFGInventoryComponent::SortInventory(){ }
void UFGInventoryComponent::Server_SortInventory_Implementation(){ }
bool UFGInventoryComponent::Server_SortInventory_Validate(){ return bool(); }
bool UFGInventoryComponent::HasAuthority() const{ return bool(); }
bool UFGInventoryComponent::IsItemAllowed(const TSubclassOf< UFGItemDescriptor > itemClass, const int32 idx) const{ return bool(); }
int32 UFGInventoryComponent::FindEmptyIndex() const{ return int32(); }
int32 UFGInventoryComponent::GetFirstIndexWithItem(int32 StartIndex) const{ return int32(); }
int32 UFGInventoryComponent::FindFirstIndexWithItemType(TSubclassOf<UFGItemDescriptor> itemDescriptor, int32 startIndex) const{ return int32(); }
int32 UFGInventoryComponent::AddStack(const FInventoryStack& stack, const bool allowPartialAdd){ return int32(); }
void UFGInventoryComponent::AddStacks(const TArray< FInventoryStack >& stacks){ }
int32 UFGInventoryComponent::AddStackToIndex(const int32 idx, const FInventoryStack& stack, const bool allowPartialAdd){ return int32(); }
bool UFGInventoryComponent::GetStackFromIndex(const int32 idx, FInventoryStack& out_stack) const{ return bool(); }
void UFGInventoryComponent::Remove(TSubclassOf< UFGItemDescriptor > itemClass, int32 num){ }
void UFGInventoryComponent::RemoveFromIndex(int32 idx, int32 num){ }
void UFGInventoryComponent::RemoveAllFromIndex(int32 idx){ }
void UFGInventoryComponent::Empty(){ }
bool UFGInventoryComponent::HasItems(TSubclassOf< UFGItemDescriptor > itemClass, int32 num) const{ return bool(); }
int32 UFGInventoryComponent::GetNumItems(TSubclassOf< UFGItemDescriptor > itemClass) const{ return int32(); }
bool UFGInventoryComponent::HasEnoughSpaceForStacks(const TArray< FInventoryStack >& stacks) const{ return bool(); }
bool UFGInventoryComponent::HasEnoughSpaceForStack(const FInventoryStack& stack) const{ return bool(); }
void UFGInventoryComponent::SetStateOnIndex(int32 index, const FSharedInventoryStatePtr& itemState){ }
int32 UFGInventoryComponent::GetFullestStackIndex(){ return int32(); }
void UFGInventoryComponent::GetInventoryStacks(TArray< FInventoryStack >& out_stacks, const bool getEmptyStacks) const{ }
TArray<int32> UFGInventoryComponent::GetRelevantStackIndexes(TArray< TSubclassOf<  UFGItemDescriptor > > relevantClasses, int32 stackLimit , bool sortResult){ return TArray<int32>(); }
void UFGInventoryComponent::AddArbitrarySlotSize(int32 index, int32 arbitrarySlotSize){ }
void UFGInventoryComponent::RemoveArbitrarySlotSize(int32 index){ }
int32 UFGInventoryComponent::GetSlotSize(int32 index, TSubclassOf< UFGItemDescriptor > itemDesc) const{ return int32(); }
int32 UFGInventoryComponent::GetSlotSizeForItem(int32 index, TSubclassOf< UFGItemDescriptor > itemDesc , const FInventoryItem* Item) const{ return int32(); }
TSubclassOf< UFGItemDescriptor > UFGInventoryComponent::GetAllowedItemOnIndex(int32 idx){ return TSubclassOf<UFGItemDescriptor>(); }
void UFGInventoryComponent::SetAllowedItemOnIndex(int32 idx, TSubclassOf< UFGItemDescriptor > allowedItemClass){ }
bool UFGInventoryComponent::CanSplitStackAtIdx(int32 idx){ return bool(); }
void UFGInventoryComponent::SplitStackAtIdx(int32 idx, int32 numItemsToMove){ }
void UFGInventoryComponent::SetCanBeRearranged(bool canBeRearranged){ }
void UFGInventoryComponent::CopyFromOtherComponent(UFGInventoryComponent* otherComponent){ }
AFGEquipment* UFGInventoryComponent::GetStackEquipmentActorAtIdx(const int32 index) const{ return nullptr; }
void UFGInventoryComponent::CopyInTheseItemStacks(const TArray<FInventoryStack>& itemsStacks){ }
bool UFGInventoryComponent::GetNoBuildCost() const{ return bool(); }
void UFGInventoryComponent::OnRep_InventoryStacks(){ }
void UFGInventoryComponent::OnRep_AllowedItemDescriptors(TArray< TSubclassOf < UFGItemDescriptor > > previousAllowedItems){ }
void UFGInventoryComponent::OnItemsAdded(int32 idx, int32 num){ }
void UFGInventoryComponent::OnItemsRemoved(int32 idx, int32 num, FInventoryItem item){ }
FInventoryStack& UFGInventoryComponent::GetStackFromIndex(int32 idx){ return *(new FInventoryStack); }
const FInventoryStack& UFGInventoryComponent::GetStackFromIndex(int32 idx) const{ return *(new FInventoryStack); }
void UFGInventoryComponent::UpdateRadioactivity(int32 idx, TSubclassOf<UFGItemDescriptor> itemClass){ }
