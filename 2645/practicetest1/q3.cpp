#include "q3.h"
#include <limits>
// Add any required libraries above

// API: returns the lowest value in an array
int min_array_value(int array[], int n) {
  // initialise comparison value to largest possible int
  // this ensures that we will find a smaller value in the array
  int min = std::numeric_limits<int>::max();
  // loop through array
  for (int i = 0; i < n; i++) {
    // if find a value smaller than current smallest value,
    // update the minimum value
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}