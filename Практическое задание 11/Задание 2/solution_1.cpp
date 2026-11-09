#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool canSplit(vector<int> &a, int D, int x) {
  int groups = 1;
  int start = 0;

  for (int i = 1; i < (int)a.size(); i++) {
    if (a[i] - a[start] > x) {
      groups++;
      start = i;
    }
  }
  return groups <= D;
}

int main() {
  int N, D;
  cin >> N >> D;

  vector<int> a(N);
  for (int i = 0; i < N; i++)
    cin >> a[i];

  sort(a.begin(), a.end());

  int left = 0;
  int right = a[N - 1] - a[0];
  int answer = right;

  while (left <= right) {
    int mid = (left + right) / 2;
    if (canSplit(a, D, mid)) {
      answer = mid;
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }

  cout << answer << "\n";
  return 0;
}
