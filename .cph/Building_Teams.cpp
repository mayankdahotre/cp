#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<int> color;
bool possible = true;

void dfs(int node, int c) {
    color[node] = c;
    for (int nei : adj[node]) {
        if (color[nei] == 0) {
            dfs(nei, 3 - c);
        } else if (color[nei] == c) {
            possible = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    adj.resize(n + 1);
    color.assign(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (color[i] == 0) {
            dfs(i, 1);
        }
    }

    if (!possible) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << color[i] << " ";
    }
    cout << "\n";

    return 0;
}
