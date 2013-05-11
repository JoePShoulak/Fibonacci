#include <iostream> // std::out
#include <math.h>   // pow
#include <string.h> // std::string
#include <stdlib.h> // exit, EXIT_FAILURE

// Define the folden ratio in the preprocessor
#define PHI ( ( 1 + pow(5, 0.5) ) / 2)
#define EXCLUSIVE 0
#define INCLUSIVE 1

using std::cout;
using std::string;

bool is_number(const std::string& s)
{
    string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int fibonacci(int it)
{
  /* Define the Nth Fibonacci number as the result of the Binet formula
     with the iterator as the argument */
  float fibo;
  fibo  = ( pow(PHI, it) - pow(-PHI, -it) ) / pow(5, 0.5);
  cout << it << ": " << fibo << "\n";
  return 0;
}

int state;
char example[] =  "Eg: 'fibonacci 12' for a list of the first 12 Fibonacci numbers\n    'fibonacci 12 -e' for only the 12th Fibonacci number\n";

int main(int argc, char* argv[])
{
  int limit;
  if (argc == 1)
  {
    cout << "Enter a limit\n" << example;
    exit(EXIT_FAILURE);
  }
  if (argc == 2)
    if (is_number(argv[1]))
    {
      limit = atoi(argv[1]);
      state = INCLUSIVE;
    }
    else
    {
      cout << "That is not a number\n" << example;
      exit(EXIT_FAILURE);
    }
  if (argc == 3)
  {
    if (is_number(argv[1]) && strcmp(argv[2], "-e") == 0)
    {
      state = EXCLUSIVE;
      limit = atoi(argv[1]);
    }
    else
    {
      cout << "Invalid arguments\n" << example;
      exit(EXIT_FAILURE);
    }
  }
  if (argc > 3)
  {
    cout << "Too many arguments\n" << example;
    exit(EXIT_FAILURE);
  }
  for (int it = 1; it <= limit; it++)
  {
    if (state==INCLUSIVE || it == limit)
      fibonacci(it);
  }
  return 0;
}
