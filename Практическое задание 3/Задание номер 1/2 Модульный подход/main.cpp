#include <cmath>
#include <iostream>

double hypotenuse(double a, double b) {
  return std::sqrt(std::pow(a, 2) + std::pow(b, 2));
}

int main() {
  double a, b;
  std::cin >> a;
  std::cin >> b;

  std::cout << hypotenuse(a, b) << std::endl;
}
