#include "hypotenuse.h"
#include <cmath>

Hypotenuse::Hypotenuse(double a, double b) : a_(a), b_(b) {}

double Hypotenuse::calculate() const {
  return std::sqrt(std::pow(a_, 2) + std::pow(b_, 2));
}
