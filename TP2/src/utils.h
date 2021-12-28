#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <fstream>
#include <stdio.h>
#include <iostream>
#include <vector>


using namespace std;

struct Arest_type{
    int index;
    vector<int> vertices;
    int tamVert;
};

void readArq(string, ifstream&, int&);

void createMatrix(ifstream&, int**, int);

void printMatrix (int**, int);

void deleteMatrix(int**, int);

void createGraph(int**, Arest_type*, int);

void printGraph(Arest_type*, int);


#endif