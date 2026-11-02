#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string toBinary(long long n) {
  if (n == 0)
    return "0";
  string res = "";
  while (n > 0) {
    res = char('0' + n % 2) + res;
    n /= 2;
  }
  return res;
}

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");

  string s;
  getline(in, s);

  int i = 0;
  while (i < (int)s.size()) {
    if (s[i] >= '0' && s[i] <= '9') {

      long long num = 0;
      while (i < (int)s.size() && s[i] >= '0' && s[i] <= '9') {
        num = num * 10 + (s[i] - '0');
        i++;
      }
      out << toBinary(num);
    } else {
      out << s[i];
      i++;
    }
  }

  in.close();
  out.close();
  return 0;
}
