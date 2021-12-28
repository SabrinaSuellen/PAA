#include "utils.h"

void readArq(string arq, ifstream& text, int& dimension){
    text.open(arq.c_str());
    text >> dimension;
}

void createMatrix(ifstream& graph, int** matrix, int dimension){
    for(int i = 0; i < dimension; i++){
        matrix[i] = new int[dimension];
    }

    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            graph >> matrix[i][j];
        }
    }

}

void printMatrix (int** matrix, int dimension){
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
 
            // Print the values of
            // memory blocks created
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void deleteMatrix(int** matrix, int dimension){
    for (int i = 0; i < dimension; ++i)
        delete [] matrix[i];
    delete [] matrix;

    cout << "[DELETED MATRIX]" << endl;
}

void createGraph(int** matrix, Arest_type* graph, int size){    
    for (int i = 0; i < size; i++){
        graph[i].index = i + 1;
        for (int j = 0; j < size; j++){
            if(matrix[i][j] == 1){
                graph[i].vertices.push_back(j + 1);
            }
            graph[i].tamVert = graph[i].vertices.size();
        }
    }
}

void printGraph(Arest_type* graph, int size){
    for(int i = 0; i < size; i++){
        cout << graph[i].index;
        for(auto it = graph[i].vertices.begin(); it != graph[i].vertices.end(); it++)
            cout << " -> " << *it;
        cout << endl << endl;
    }
}