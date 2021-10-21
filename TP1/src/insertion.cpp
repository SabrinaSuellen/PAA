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
/*
// Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
      //Move elements of arr[0..i-1], that are
      //greater than key, to one position ahead
      //of their current position 

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
*/