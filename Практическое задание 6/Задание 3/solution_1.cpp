#include <iostream>
#include <string>

using namespace std;

int main() {
  int x, n;
  cin >> x >> n;

  string s = to_string(x);

  for (int step = 1; step < n; step++) {
    string next = "";
    int count = 1;

    for (int i = 1; i < s.size(); i++) {
      if (s[i] == s[i - 1]) {
        count++;
      } else {
        next += to_string(count);
        next += s[i - 1];
        count = 1;
      }
    }
    next += to_string(count);
    next += s.back();

    s = next;
  }

  cout << s << endl;
}
