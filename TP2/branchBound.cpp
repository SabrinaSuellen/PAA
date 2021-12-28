#include "branchBound.h"


void BOotimizacao(vector, int, Arest_Type* graph){
    if(eCompleta())

}

bool eCompleta();

bool ePromissora(Arest_Type*, vector);

bool eConsistente(Arest_Type*, vector);

vector initialSolution(Arest_Type* graph, int size){
    vector<int> small;

    for(int j = 0; j < 100; j++){
        small.push_back(j);
    }

    for(int i = 0; i < size; i++){
        if(graph[i].vertices.size() < small.size()){
            for(auto it = graph[i].vertices.begin(); it != graph[i].vertices.end(); it++){
                small.clear();
                small.push_back(*it);
            }
                
        }
    }
}