#include <iostream>
using namespace std;

int main() {
  int n, m, w, r, c;
  cin >> n >> m >> w;
  int a[100][100] = {0};

  while (w--) {
    cin >> r >> c;
    r--;
    c--;
    a[r][c] = 10;

    for (int di = -1; di <= 1; di++)
      for (int dj = -1; dj <= 1; dj++) {

        if (di == 0 && dj == 0)
          continue;

        int ni = r + di, nj = c + dj;

        if (ni < 0 || ni >= n || nj < 0 || nj >= m)
          continue;

        if (a[ni][nj] != 10)
          a[ni][nj]++;
      }
  }

  for (int i = 0; i < n; i++, cout << endl)
    for (int j = 0; j < m; j++)
      cout << (a[i][j] >= 10 ? '*' : char('0' + a[i][j]));
}
