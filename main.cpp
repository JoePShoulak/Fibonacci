#include <iostream>
#include <vector>
using std::vector;

vector<int> fibonacci(int x, int y, int it) {
  int temp = x;
  x = y;
  y += temp;
  it = it + 1;
  std::cout << it << ": " << x << "\n";
  vector<int> result;
  result[1] = x;
  result[2] = y;
  result[3] = it;
  return result;
}

int main() {
  int it = 1; int x = 1; int y = 1;
  while (it < 15) {
    vector<int> result = fibonacci(x, y, it);
    x = result[1]; y = result[2]; it = result[3];
    }
  return 0;
}
