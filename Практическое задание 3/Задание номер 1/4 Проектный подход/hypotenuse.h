#pragma once

class Hypotenuse {
public:
  Hypotenuse(double a, double b);
  double calculate() const;

private:
  double a_;
  double b_;
};
