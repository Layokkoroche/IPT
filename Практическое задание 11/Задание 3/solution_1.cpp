#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int N, K, L;
  cin >> N >> K >> L;

  vector<int> cost(N);
  for (int i = 0; i < N; i++)
    cin >> cost[i];

  sort(cost.begin(), cost.end(), greater<int>());

  map<int, int> taken;
  int total = 0;
  int count = 0;

  for (int i = 0; i < N && count < K; i++) {
    int value = cost[i];
    if (taken[value] < L) {
      taken[value]++;
      total += value;
      count++;
    }
  }

  cout << total << "\n";
  return 0;
}
