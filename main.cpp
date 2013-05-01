#include <iostream> // For IO
#include <math.h> // For exponents

// Define the folden ratio in the preprocessor
#define PHI ( ( 1 + pow(5, 0.5) ) / 2)

using std::cout;
using std::cin;

int fibonacci(int it) {
  /* Define the Nth Fibonacci number as the result of the binet formula
     with the iterator as the argument */
  float  fn = ( pow(PHI, it) - pow(-PHI, -it) ) / pow(5, 0.5);
  // Output the term count and the term's value
  cout << it << ": " << fn << "\n";
  return 0;
}

int main() {
  // Start at the first number
  int it = 1;
  int limit;
  cout << "How many numbers would you like to view? ";
  cin >> limit;
  while (it <= limit) {
    // Call the Fibonacci function
    fibonacci(it);
    // Progress the iterator.
    ++it;  
  }
  return 0;
}
