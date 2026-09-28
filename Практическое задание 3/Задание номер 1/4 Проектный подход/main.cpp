#include "hypotenuse.h"
#include <iostream>

int main() {
  double a, b;
  std::cin >> a;
  std::cin >> b;

  Hypotenuse h(a, b);
  std::cout << h.calculate() << std::endl;
}
