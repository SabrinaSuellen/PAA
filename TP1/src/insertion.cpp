#include "insertion.hpp"

void insertionsort ( long long int* vector, long long int n) {
  int i,j;

  for (i = n-2; i >= 0; i --) {
    vector[n] = vector[i];  
    j = i + 1;

    while (vector[n] > vector[j] ) {
      vector[j - 1] = vector[j];
      j ++;
    }
    
  vector[j - 1] = vector[n];
 }
}
