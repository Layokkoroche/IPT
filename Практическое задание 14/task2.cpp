#include <iostream>
#include <set>
#include <string>
using namespace std;

bool isUpperLat(char c) { return c >= 'A' && c <= 'Z'; }
bool isLowerLat(char c) { return c >= 'a' && c <= 'z'; }
bool isUpperRus(unsigned char c) { return c >= 0xC0 && c <= 0xDF; }
bool isLowerRus(unsigned char c) { return c >= 0xE0 && c <= 0xFF; }
bool isYo(unsigned char c) { return c == 0xA8 || c == 0xB8; } // ё и Ё

int main() {
  string line;
  getline(cin, line);

  string cleaned;
  for (char ch : line) {
    unsigned char c = (unsigned char)ch;

    if (isUpperLat(ch)) {
      cleaned += (char)(ch + ('a' - 'A'));
    } else if (isLowerLat(ch)) {
      cleaned += ch;
    } else if (isUpperRus(c)) {
      cleaned += (char)(c + 32);
    } else if (isLowerRus(c)) {
      cleaned += (char)c;
    } else if (isYo(c)) {
      cleaned += (char)(c + 16);
    } else if (ch == '-') {
      cleaned += '-';
    } else {
      cleaned += ' ';
    }
  }

  set<string> seen;
  string word = ""; // текущее собираемое слово

  for (int i = 0; i <= (int)cleaned.size(); i++) {
    char c = (i < (int)cleaned.size()) ? cleaned[i] : ' ';

    if (c != ' ') {
      word += c;
    } else {
      if (word != "") {
        if (seen.find(word) == seen.end()) {
          seen.insert(word); // запоминаем set новым словом если не встречалось
          cout << word << "\n";
        }
        word = "";
      }
    }
  }

  return 0;
}
