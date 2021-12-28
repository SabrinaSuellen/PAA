#include <iostream>
#include <string>
#include <fstream>
#include "utils.h"
#include "conjIndep.h"

using namespace std;



int main(){


    string arquive;
    int **matrix;
    int dimension;
    ifstream fileName;

    cout << "Digite o nome do arquivo sem extensão: ";
    cin >> arquive;
    arquive.append(".txt");

    readArq(arquive, fileName, dimension);
    matrix = new int*[dimension];
    cout << dimension << endl;

    createMatrix(fileName, matrix, dimension);
        
    //printMatrix(matrix, dimension);

    Arest_type* graph;
    graph = new Arest_type[dimension];
    createGraph(matrix, graph, dimension);
    printGraph(graph, dimension);
    conjIndependente(graph, dimension);


    deleteMatrix(matrix, dimension);
    //delete graph;
    fileName.close();

    return 0;
}