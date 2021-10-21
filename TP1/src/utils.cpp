#include <cstdlib>
#include <iostream>

#include "utils.hpp"
using namespace std;

void gerador (long long int* vector, long long int n, int situacao) {
  
  switch (situacao) {
    case 1: {
      // preenche o vetor de forma crescente
      for (int i=1; i<=n; i++)
        vector[i] = i;
    } break;

    case 2: {
      // preenche o vetor de forma decrescente
      for (int i=n; i>=1; i++)
        vector[i] = i;
    } break;

    case 3: {
      // preenche o vetor com numeros aleatorios
      for (int i=0; i<n; i++)
        vector[i] = rand()%n;
    } break;
  }
  return;
}

// A utility function to print an array
void printVector(long long int arr[], long long int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout<<endl;
}

void ClonarVetor(long long int* ar, long long int* ar2, long long int tam){
  /*
  cout << "vetor ar: " <<endl;
  printVector(ar, tam);
  cout << "vetor ar2: " <<endl;
  printVector(ar2, tam);
  */


  for(int i = 0; i < tam; i++){
    ar2[i] = ar[i];
  }
  /*
  cout << "vetor ar: " <<endl;
  printVector(ar, tam);
  cout << "vetor ar2: " <<endl;
  printVector(ar2, tam);
  */
}