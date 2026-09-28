#pragma once

class Tens {
public:
  explicit Tens(long long a);
  int value() const;

private:
  long long a_;
};
