#include <iostream>
#include <vector>
#include <math.h>

#define PHI ( ( 1 + pow(5, 0.5) ) / 2)

using std::vector;
using std::cout;

int fibonacci(int it) {
  float  fn = ( pow(PHI, it) - pow(-PHI, -it) ) / pow(5, 0.5);
  cout << it << ": " << fn << "\n";
  return 0;
}

int main() {
  int it = 1;
  while (it <= 15) {
    fibonacci(it);
    ++it;  
  }
  return 0;
}
