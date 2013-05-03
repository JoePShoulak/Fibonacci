#include <iostream> // For IO
#include <math.h> // For exponents
#include <string.h>
#include <stdlib.h>

// Define the folden ratio in the preprocessor
#define PHI ( ( 1 + pow(5, 0.5) ) / 2)
#define EXCLUSIVE 0
#define INCLUSIVE 1

using std::cout;
using std::cin;

int fibonacci(int it)
{
  /* Define the Nth Fibonacci number as the result of the Binet formula
     with the iterator as the argument */
  float *pFibo;
  pFibo = new float;
  *pFibo  = ( pow(PHI, it) - pow(-PHI, -it) ) / pow(5, 0.5);
  // Output the term count and the term's value
  cout << it << ": " << *pFibo << "\n";
  delete pFibo;
  return 0;
}

int state;

int main(int argc, char* argv[])
{
  int limit;
  if (argc == 2)
      limit = atoi(argv[1]);
  // Start at the first number
  for (int it = 1; it <= limit; it++)
  {
    // Call the Fibonacci function
    fibonacci(it);
  }
  return 0;
}
