#include <iostream>
using namespace std;

void f(int n, int from, int to, int oth) {
  if (n == 0)
    return;

  f(n - 1, from, oth, to);

  cout << "Ingredient " << n << " move from " << from << " to " << to << "\n";

  f(n - 1, oth, to, from);
}

int main() {
  int n;
  cin >> n;
  f(n, 1, 3, 2);
  return 0;
}
