#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> parent;
vector<bool> visited;

bool dfs(int u, int v) {
    visited[u] = true;
    if (u == v) return true;
    for (int nxt : adj[u]) {
        if (!visited[nxt]) {
            parent[nxt] = u;
            if (dfs(nxt, v)) return true;
        }
    }
    return false;
}

int main() {
    int n, m; 
    cin >> n >> m;  

    adj.assign(n + 1, {});
    parent.assign(n + 1, -1);
    visited.assign(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a); 
    }

    int u, v;
    cin >> u >> v;

    if (!dfs(u, v)) {
        cout << "N" << endl;
        return 0;
    }

    vector<int> path;
    for (int x = v; x != -1; x = parent[x]) {
        path.push_back(x);
    }
    reverse(path.begin(), path.end());

    for (int x : path) cout << x << " ";
    cout << endl;
}
