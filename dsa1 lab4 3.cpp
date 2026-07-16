#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> topo;

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) dfs(v);
    }
    topo.push_back(u);
}

int main() {
    int n, m;
    cin >> n >> m; 

    adj.assign(n + 1, {});
    visited.assign(n + 1, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) dfs(i);
    }

    reverse(topo.begin(), topo.end());

    for (int x : topo) cout << x << " ";
    cout << "\n";
}
