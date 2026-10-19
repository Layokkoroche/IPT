#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {

    for (int z = 0; z < n - i; z++)
      cout << "0 ";

    cout << "1 ";

    for (int t = 1; t < i; t++)
      cout << "2 ";

    cout << endl;
  }
  return 0;
}
