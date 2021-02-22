// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRecipe.h"

#if WITH_EDITOR
void UFGRecipe::SetProduct(TSubclassOf< UFGRecipe > recipe, TArray< FItemAmount > product) {
	if(recipe)
		recipe.GetDefaultObject()->mProduct = product;
}
#endif 
UFGRecipe::UFGRecipe(){ }
FText UFGRecipe::GetRecipeName(TSubclassOf< UFGRecipe > inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mDisplayName;
	else
		return FText();
}
TArray< FItemAmount > UFGRecipe::GetIngredients(TSubclassOf< UFGRecipe > inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mIngredients;
	else
		return TArray<FItemAmount>();
}
TArray< FItemAmount > UFGRecipe::GetProducts(TSubclassOf< UFGRecipe > inClass, bool allowChildRecipes) {
	if (inClass)
		return inClass.GetDefaultObject()->mProduct;
	else
		return TArray< FItemAmount >();
}
float UFGRecipe::GetManufacturingDuration(TSubclassOf< UFGRecipe > inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mManufactoringDuration;
	else
		return float();
}
float UFGRecipe::GetManualManufacturingDuration(TSubclassOf< UFGRecipe > inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mManualManufacturingMultiplier;
	else
		return float();
}
TArray< TSubclassOf< UObject > > UFGRecipe::GetProducedIn(TSubclassOf< UFGRecipe > inClass) {
	TArray<TSubclassOf<UObject>>   out;
	if (!inClass)
		return TArray< TSubclassOf< UObject > >();

	TArray<TSoftClassPtr<UObject>> In = inClass.GetDefaultObject()->mProducedIn;
	if (In.Num() > 0)
	{
		for (int j = 0; j < In.Num(); j++)
		{
			TSubclassOf<UObject> obj = In[j].LoadSynchronous();
			if(obj)
				out.Add(obj);
		}
		return out;
	}
	else
		return TArray<TSubclassOf<UObject>>();
}
bool UFGRecipe::HasAnyProducers(TSubclassOf< UFGRecipe > inClass){ return bool(); }
bool UFGRecipe::IsRecipeAffordable( AFGCharacterPlayer* player, TSubclassOf<  UFGRecipe > recipe){ return bool(); }
void UFGRecipe::SortByName(TArray< TSubclassOf< UFGRecipe > >& recipes){ }
TSubclassOf< class UFGItemDescriptor > UFGRecipe::GetDescriptorForRecipe(TSubclassOf<  UFGRecipe > recipe){ return TSubclassOf<class UFGItemDescriptor>(); }
TArray< EEvents > UFGRecipe::GetRelevantEvents(TSubclassOf< UFGRecipe > inClass){ return TArray<EEvents>(); }
FText UFGRecipe::GetDisplayName() const{ return FText(); }
void UFGRecipe::GetProducedIn(TArray< TSubclassOf< UObject > >& out_producedIn) const {
	out_producedIn = UFGRecipe::GetProducedIn(this->GetClass());
}
EHologramSplinePathMode UFGRecipe::GetLastSplineMode(){ return EHologramSplinePathMode(); }
void UFGRecipe::SetLastSplineMode(EHologramSplinePathMode mode){ }
