#include <iostream>
using namespace std;

int main() {
  int n, m, w, r, c;
  cin >> n >> m >> w;
  bool mine[100][100] = {false};

  for (int k = 0; k < w; k++) {
    cin >> r >> c;
    mine[r - 1][c - 1] = true;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mine[i][j]) {
        cout << '*';
        continue;
      }
      int cnt = 0;
      for (int di = -1; di <= 1; di++)
        for (int dj = -1; dj <= 1; dj++) {
          if (di == 0 && dj == 0)
            continue;
          int ni = i + di, nj = j + dj;
          if (ni < 0 || ni >= n || nj < 0 || nj >= m)
            continue;
          if (mine[ni][nj])
            cnt++;
        }
      cout << char('0' + cnt);
    }
    cout << endl;
  }
}
