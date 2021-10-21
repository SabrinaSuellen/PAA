#ifndef ORDENADORES_HPP
#define ORDENADORES_HPP

#include "estruturas.hpp"

void quicksort (long long int* vector, long long int n);
void quicksort_ordenada (long long int* vector, long long int esq, long long int dir);
void quicksort_particao (long long int* vector, long long int esq, long long int dir, long long int *i, long long int* j);

#endif