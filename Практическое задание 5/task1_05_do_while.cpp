#include <iostream>
using namespace std;

int main() {
  double X, Y;
  cin >> X >> Y;

  int day = 1;
  double sum = X;

  if (sum < Y) {
    do {
      sum *= 1.1;
      day++;
    } while (sum < Y);
  }

  cout << day << endl;
  return 0;
}
