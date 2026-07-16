#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int node) {
    visited[node] = true;
    for (int nei : adj[node]) {
        if (!visited[nei]) {
            dfs(nei);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    adj.resize(n + 1);
    visited.assign(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> representatives;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            representatives.push_back(i);
            dfs(i);
        }
    }

    int k = representatives.size();

    cout << k - 1 << "\n";

    for (int i = 1; i < k; i++) {
        cout << representatives[i - 1] << " " << representatives[i] << "\n";
    }

    return 0;
}
