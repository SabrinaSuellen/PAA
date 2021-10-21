#ifndef MERGESORT_HPP
#define MERGESORT_HPP


/*
void merge(long long int *, long long int, long long int, long long int );
void merge_sort(long long int *arr, long long int low, long long int high);
*/

void mergeSort (long long int* v , long long int n);
void mergeSort_ordena (long long int *v, long long int esq, long long int dir);
void mergeSort_intercala (long long int* v , long long int esq , long long int meio , long long int dir);

#endif