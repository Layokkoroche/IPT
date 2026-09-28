#include "tens.h"

Tens::Tens(long long a) : a_(a) {}

int Tens::value() const { return static_cast<int>(a_ / 10 % 10); }
