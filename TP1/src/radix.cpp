#include "radix.hpp"
// C++ implementation of Radix Sort

// A utility function to get maximum value in arr[]
int getMax(long long int* vector, long long int n)
{
    int max = vector[0];
    for (int i=1; i<n; i++)
        if (vector[i] > max)
            max = vector[i];
    return max;
}
 
// Using counting sort to sort the elements in the basis of significant places
void countingSort(long long int* array, long long int size, long long int place) {
  const int max = 10;
  long long int output[size];
  long long int count[max];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  // Calculate count of elements
  for (int i = 0; i < size; i++)
    count[(array[i] / place) % 10]++;

  // Calculate cumulative count
  for (int i = 1; i < max; i++)
    count[i] += count[i - 1];

  // Place the elements in sorted order
  for (int i = size - 1; i >= 0; i--) {
    output[count[(array[i] / place) % 10] - 1] = array[i];
    count[(array[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    array[i] = output[i];
}

// Main function to implement radix sort
void radixsort(long long int* array, long long int size) {
  // Get maximum element
  long long int max = getMax(array, size);

  // Apply counting sort to sort elements based on place value.
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(array, size, place);
}
