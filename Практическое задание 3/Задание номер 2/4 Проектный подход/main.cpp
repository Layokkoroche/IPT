#include "tens.h"
#include <iostream>

int main() {
  long long a;
  std::cin >> a;

  Tens t(a);
  std::cout << t.value() << std::endl;

  return 0;
}
