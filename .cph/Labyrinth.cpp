#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;
vector<vector<char>> parent;

// Directions: Down, Up, Right, Left
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
char dir[4] = {'D', 'U', 'R', 'L'};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));
    parent.assign(n, vector<char>(m, 0));

    pair<int, int> start, end;

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'A') start = {i, j};
            if (grid[i][j] == 'B') end = {i, j};
        }
    }

    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visited[nx][ny] && grid[nx][ny] != '#') {
                    visited[nx][ny] = true;
                    parent[nx][ny] = dir[i];
                    q.push({nx, ny});
                }
            }
        }
    }

    if (!visited[end.first][end.second]) {
        cout << "NO\n";
        return 0;
    }

    // Reconstruct path
    string path;
    int x = end.first, y = end.second;

    while (make_pair(x, y) != start) {
        char d = parent[x][y];
        path.push_back(d);

        if (d == 'U') x += 1;
        else if (d == 'D') x -= 1;
        else if (d == 'L') y += 1;
        else if (d == 'R') y -= 1;
    }

    reverse(path.begin(), path.end());

    cout << "YES\n";
    cout << path.size() << "\n";
    cout << path << "\n";

    return 0;
}
