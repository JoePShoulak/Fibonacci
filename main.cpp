#include <iostream>
#include <vector>
using std::vector;

vector<short> fibonacci(short x, short y, short it) {
  short temp = x;
  x = y;
  y += temp;
  it = it + 1;
  std::cout << it << ": " << x << "\n";
  vector<short> result;
  result[1] = x;
  result[2] = y;
  result[3] = it;
  return result;
}

int main() {
  short it = 1; short x = 1; short y = 1;
  while (it < 15) {
    vector<short> result = fibonacci(x, y, it);
    x = result[1]; y = result[2]; it = result[3];
    }
  return 0;
}
