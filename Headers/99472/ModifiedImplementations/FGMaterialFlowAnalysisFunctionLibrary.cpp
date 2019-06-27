// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGMaterialFlowAnalysisFunctionLibrary.h"

int32 FMaterialFlowGraph::GetDepth() const{ return int32(); }
TArray< struct FMaterialFlowNode* > FMaterialFlowGraph::GetNodes( int32 depth ) const{ return TArray<struct FMaterialFlowNode* >(); }
void FMaterialFlowGraph::SortNodes(){ }
void FMaterialFlowGraph::UpdateTotals(){ }
FMaterialFlowConnection::FMaterialFlowConnection(){ }
FMaterialFlowNode::FMaterialFlowNode(){ }
FMaterialFlowGraph UFGMaterialFlowAnalysisFunctionLibrary::PerformMaterialFlowAnalysis( TArray< TSubclassOf< UFGRecipe > > recipes,  AFGRecipeManager* recipeManager ){ return FMaterialFlowGraph(); }
TArray< FMaterialFlowNode > UFGMaterialFlowAnalysisFunctionLibrary::GetGraphNodes( const FMaterialFlowGraph& graph, int32 depth ){ return TArray<FMaterialFlowNode>(); }
void UFGMaterialFlowAnalysisFunctionLibrary::MaterialFlowAnalysisToLog( const TArray< FString >& recipeNames,  AFGRecipeManager* recipeManager ){ }
void UFGMaterialFlowAnalysisFunctionLibrary::MaterialLookupToLog( const FString& itemName,  AFGRecipeManager* recipeManager ){ }
