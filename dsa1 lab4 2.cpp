#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> parent;
vector<bool> visited;
vector<int> cycle;

bool dfs(int u, int p) {
    visited[u] = true;
    parent[u] = p;

    for (int v : adj[u]) {
        if (v == p) continue;
        if (visited[v]) {

            cycle.push_back(v);
            for (int x = u; x != v; x = parent[x]) {
                cycle.push_back(x);
            }
            cycle.push_back(v);
            reverse(cycle.begin(), cycle.end());
            return true;
        } else {
            if (dfs(v, u)) return true;
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

    for (int i = 1; i <= n; i++) {
        if (!visited[i] && dfs(i, -1)) {
            for (int x : cycle) cout << x << " ";
            cout << "\n";
            return 0;
        }
    }

    cout << "N\n";
}
