#include "hypotenuse.h"
#include <cmath>

double hypotenuse(double a, double b) {
  return std::sqrt(std::pow(a, 2) + std::pow(b, 2));
}
