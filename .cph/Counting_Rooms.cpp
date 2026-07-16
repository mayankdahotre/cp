// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// vector<string> grid;
// vector<vector<bool>> visited;

// int dx[4] = {1, -1, 0, 0};
// int dy[4] = {0, 0, 1, -1};

// void dfs(int x, int y) {
//     visited[x][y] = true;

//     for (int i = 0; i < 4; i++) {
//         int nx = x + dx[i];
//         int ny = y + dy[i];

//         if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
//             if (!visited[nx][ny] && grid[nx][ny] == '.') {
//                 dfs(nx, ny);
//             }
//         }
//     }
// }

// int main() {
//     cin >> n >> m;
//     grid.resize(n);
//     visited.assign(n, vector<bool>(m, false));

//     for (int i = 0; i < n; i++) {
//         cin >> grid[i];
//     }

//     int rooms = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (grid[i][j] == '.' && !visited[i][j]) {
//                 rooms++;
//                 dfs(i, j);
//             }
//         }
//     }

//     cout << rooms << endl;
//     return 0;
// }












#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

// 4-direction movement: down, up, right, left
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int sx, int sy) {
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // Check boundaries
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                // Visit unvisited empty cells
                if (!visited[nx][ny] && grid[nx][ny] == '.') {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    int rooms = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                rooms++;
                bfs(i, j);
            }
        }
    }

    cout << rooms << "\n";
    return 0;
}
