#include "conjIndep.h"

void conjIndependente(Arest_type* graph, int size){
    int* vetInd = new int;
    int* arestDepend = new int;
    int sizeDep = 0;
    int sizeInd = 0;
    /*
    verifica qual aresta tem menos conexão
    int minIndex = graph[0].index;
    int sizeVert = graph[0].tamVert;
    for(int i = 1; i < size; i++){
        if(graph[i].tamVert < sizeVert){
            minIndex = graph[i].index;
            sizeVert = graph[i].tamVert;
        }
    }

    vetInd[0] = minIndex;
    for(int i = 0; i < graph[minIndex - 1].tamVert; i++){
        arestDepend[i] = graph[minIndex - 1].vertices[i];
        sizeDep++;
    }
    sizeInd++;
    */

    int i = 0;
    int aux = 0;
    int aux2 = 0;
    int indice = 0;
    while(i < size){
        for(int j = 0; j < sizeDep; j++){
            if(graph[i].index == arestDepend[j])
                aux = 1;
        }

        if (aux == 0){
            vetInd[indice] = graph[i].index;
            for(int k = sizeDep; k < (sizeDep + graph[i].tamVert); k++){
                arestDepend[k] = graph[i].vertices[aux2];
                aux2++;
            }
            sizeDep += graph[i].tamVert;
            sizeInd++;
            aux2 = 0;
            indice++;
        }
        i++;
        aux = 0;
    }
    cout << "Conjunto Independente: ";
    for(int m = 0; m < sizeInd; m++){
        cout << vetInd[m] << " ";
    }

    cout << endl << endl; 

    cout << "Conjunto Dependente: ";
    for(int m = 0; m < sizeDep; m++){
        cout << arestDepend[m] << " ";
    }

    delete vetInd;
    delete arestDepend;
}