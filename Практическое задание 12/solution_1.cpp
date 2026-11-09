#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N, M;
vector<string> maze;

vector<vector<int>> best;

bool canGo(int i, int j) {
  if (i < 0 || i >= N || j < 0 || j >= M)
    return false;
  if (maze[i][j] == '1')
    return false;
  return true;
}

int solve(int i, int j) {
  if (!canGo(i, j))
    return -1000000;
  if (best[i][j] != -1)
    return best[i][j];

  int here = (maze[i][j] == 'P') ? 1 : 0;

  if (maze[i][j] == 'E') {
    best[i][j] = here;
    return here;
  }

  int down = solve(i + 1, j);
  int right = solve(i, j + 1);
  int bestNext = max(down, right);

  best[i][j] = here + bestNext;
  return best[i][j];
}

int main() {
  cin >> N >> M;
  maze.resize(N);
  for (int i = 0; i < N; i++)
    cin >> maze[i];

  best.assign(N, vector<int>(M, -1));

  int si = 0, sj = 0;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      if (maze[i][j] == 'S') {
        si = i;
        sj = j;
      }

  int ans = solve(si, sj);

  if (ans < 0)
    ans = 0;
  cout << ans << "\n";

  return 0;
}
