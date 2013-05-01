#include <iostream>
#include <vector>
using std::vector;
using std::cout;

vector<int> fibonacci(int x, int y, int it) {
  int temp = x;
  x = y;
  y += temp;
  it = it + 1;
  cout << it << ": " << x << "\n";
  vector<int> result;
  result.push_back(x);
  result.push_back(y);
  result.push_back(it);
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
