#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ifstream in1("input1.txt");
  ifstream in2("input2.txt");
  ofstream out("output.txt");

  string X, Y;
  getline(in1, X);
  getline(in2, Y);

  bool found = false;
  int n = X.size();
  int m = Y.size();

  for (int i = 0; i + m <= n; i++) {
    bool ok = true;
    for (int j = 0; j < m; j++) {
      if (X[i + j] != Y[j]) {
        ok = false;
        break;
      }
    }
    if (ok) {
      found = true;
      break;
    }
  }

  if (found)
    out << "yes";
  else
    out << "no";

  in1.close();
  in2.close();
  out.close();
  return 0;
}
