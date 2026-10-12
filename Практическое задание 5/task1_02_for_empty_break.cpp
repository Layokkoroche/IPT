#include <iostream>
using namespace std;

int main() {
  double X, Y;
  cin >> X >> Y;

  int day = 1;
  double sum = X;

  for (;;) {
    if (sum >= Y)
      break;
    sum *= 1.1;
    day++;
  }

  cout << day << endl;
  return 0;
}
