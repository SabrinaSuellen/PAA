#ifndef BRANCHBOUND_H
#define BRANCHBOUND_H

#include "util.h"
#include <vector>

using namespace std;

void BOotimizacao(vector, int, Arest_Type*);

bool eCompleta();

bool ePromissora(Arest_Type*, vector);

bool eConsistente(Arest_Type*, vector);

vector initialSolution(Arest_Type*, int);

#endif