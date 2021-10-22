#include "mergesort.hpp"
#include <iostream>

using namespace std;




// Ordena o vetor v [0..n -1]
void mergeSort (long long int* v , long long int n) {
	mergeSort_ordena (v , 0, n -1) ;
}

// Ordena o vetor v[ esq .. dir ]
void mergeSort_ordena (long long int *v, long long int esq, long long int dir) {
	if ( esq >= dir )
	return ;
	long long int meio = ( esq + dir ) / 2;
	mergeSort_ordena (v,esq,meio);
	mergeSort_ordena (v,meio+1,dir);
	mergeSort_intercala (v,esq,meio,dir);
}

// Intercala os vetores v[esq .. meio ] e v[ meio +1.. dir ]
void mergeSort_intercala (long long int* v ,long long int esq , long long int meio , long long int dir) {
	long long int i , j , k ;
	long long int a_tam = meio - esq +1;
	long long int b_tam = dir - meio ;
	long long int* a = new long long int [a_tam];
	long long int* b = new long long int [b_tam];

	for (i=0; i< a_tam ; i ++) 
		a[i] = v[i+ esq];
		for (i = 0; i < b_tam ; i ++)
			b[i] = v[i+meio+1];
			for (i=0, j=0 , k=esq; k<=dir ; k++) {
				if (i==a_tam) 
					v[k] = b[j++];
				else if (j == b_tam)
					v[k] = a[i++];
				else if (a[i] < b[j]) 
					v[k] = a[i++];
				else 
					v[k] = b[j++];
			}
	delete a; 
	delete b;
}