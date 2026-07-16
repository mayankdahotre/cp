#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<int> indeg;
vector<bool> used;

long long dfs(int taken) {
    if (taken == n) return 1;
    
    long long ways = 0;
    for (int u = 0; u < n; u++) {
        if (!used[u] && indeg[u] == 0) {
            used[u] = true;
            for (int v : adj[u]) indeg[v]--;

            ways += dfs(taken + 1);

            for (int v : adj[u]) indeg[v]++;
            used[u] = false;
        }
    }
    return ways;
}

int main() {
    cin >> n >> m;
    adj.assign(n, {});
    indeg.assign(n, 0);
    used.assign(n, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        adj[u].push_back(v);
        indeg[v]++;
    }

    cout << dfs(0) << "\n";
}
