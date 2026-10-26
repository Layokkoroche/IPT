#include <iostream>
using namespace std;

long long fastPowIter(long long base, long long exp) {
  long long result = 1;
  while (exp > 0) {
    if (exp % 2 == 0)
      result *= base;
    base *= base;
    exp /= 2;
  }
  return result;
}

int main() {
  long long a, n;
  cin >> a >> n;
  cout << fastPowIter(a, n) << endl;
  return 0;
}
