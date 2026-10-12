#include <iostream>
using namespace std;

int main() {
  double X, Y;
  cin >> X >> Y;

  int day;
  double sum;

  for (day = 1, sum = X; sum < Y;) {
    day++;
    sum *= 1.1;
  };

  cout << day << endl;
  return 0;
}
