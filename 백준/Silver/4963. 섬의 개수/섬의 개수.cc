#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int w, h;
vector<vector<bool>> visited;
vector<vector<int>> map;

void bfs(int x, int y) {
  queue<pair<int, int>> q;
  q.push({x, y});

  visited[x][y] = true;
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    vector<int> dx = {-1, 0, 1, 0, -1, -1, 1, 1};
    vector<int> dy = {0, 1, 0, -1, -1, 1, -1, 1};
    for (int i = 0; i < 8; i++) {
      int next_x = x + dx[i];
      int next_y = y + dy[i];

      if (0 <= next_x && next_x < h && 0 <= next_y && next_y < w && map[next_x][next_y] == 1 && !visited[next_x][next_y]) {
        q.push({next_x, next_y});
        visited[next_x][next_y] = true;
      }
    }
  }
}

int main() {
  while (1) {
    cin >> w >> h;
    if (w == 0 && h == 0) break;

    map.resize(h, vector<int>(w));
    visited.resize(h, vector<bool>(w));
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> map[i][j];
      }
    }

    int count = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (map[i][j] == 1 && !visited[i][j]) {
          bfs(i, j);
          count++;
        }
      }
    }

    cout << count << "\n";
    map.clear();
    visited.clear();
  }

  return 0;
}