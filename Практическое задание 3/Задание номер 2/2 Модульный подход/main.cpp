#include <iostream>

int tens(long long a) { return a / 10 % 10; }

int main() {
  long long a;
  std::cin >> a;

  std::cout << tens(a) << std::endl;

  return 0;
}
