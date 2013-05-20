#include <math.h>   // pow
#include <string.h> // std::string
#include <stdlib.h> // exit, EXIT_FAILURE
#include <stdio.h>  // printf
#include <iostream> // std::cout
// usings
using namespace std;
// constants
const double phi = ((1 + pow(5, 0.5))/2);
// user-defined functions
bool IsNumber(const std::string& s){
    string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}
// exit with example
void Crash() {
  char example[] = "Usage: fibonacci [limit] [options]...\n\n"
                   "Options:\n"
                   "  -e\tshow that number exclusively\n";
  printf("%s", example);
  exit(EXIT_FAILURE);
}
// Define the Nth Fibonacci number as the result of the Binet formula
// with the iterator as the argument
int fibonacci(int it) {
  int fibo;
  fibo  = ( pow(phi, it) - pow(-phi, -it) ) / pow(5, 0.5);
  printf("%d: %d\n", it, fibo);
  return 0;
}
// main
int main(int argc, char* argv[])
{
  int state;
  int limit;
  if (argc == 1) {
    Crash();
  } else if (argc == 2) {
    if (IsNumber(argv[1])) {
      limit = atoi(argv[1]);
      state = 1;
    } else {
      Crash();
    }
  } else if (argc == 3) {
    if (IsNumber(argv[1]) && strcmp(argv[2], "-e") == 0) {
      state = 0;
      limit = atoi(argv[1]);
    } else {
      Crash();
    }
  } else {
    Crash();
  }
  for (int it = 1; it <= limit; it++) {
    if (state==1 || it == limit) { fibonacci(it); }
  }
  return 0;
}
