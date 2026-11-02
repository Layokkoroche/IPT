#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

bool isBad(char c) {

  c = static_cast<char>(tolower(static_cast<unsigned char>(c)));

  string bad = "useragmnt";

  for (int i = 0; i < (int)bad.size(); i++) {
    if (bad[i] == c)
      return true;
  }

  return false;
}

int main() {
  ifstream in("input.txt");   // чтение
  ofstream out("output.txt"); // запись

  string s;
  getline(in, s); // засовываем всё в s

  for (int i = 0; i < (int)s.size(); i++) {
    if (!isBad(s[i])) {
      out << s[i];
    }
  }

  in.close();
  out.close();
  return 0;
}
