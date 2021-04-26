#include <iostream>

// including the main header will ensure all required files are pulled in
#include "main.h"

int main() {
  int total = sum(5, 6);  // sum function defined in maths.h
  std::cout << "Sum = " << total << std::endl;
  int result = product(5,6);  //product function defined in maths.h
  std::cout << "Product = " << result << std::endl;
  int maximum = max(5, 6);  //max function defined in maths.h
  std::cout << "Max = " << maximum << std::endl;
  int minimum = min(5, 6);  //min function defined in maths.h
  std::cout << "Min = " << minimum << std :: endl;
  return 0;
}