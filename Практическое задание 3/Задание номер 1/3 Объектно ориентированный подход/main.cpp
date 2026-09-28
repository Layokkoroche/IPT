#include "hypotenuse.h"
#include <iostream>

int main() {
  double a, b;
  std::cin >> a;
  std::cin >> b;

  std::cout << hypotenuse(a, b) << std::endl;
}
