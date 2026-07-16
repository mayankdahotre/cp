// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<vector<int>> adj(n + 1);
//     for (int i = 0; i < n - 1; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     vector<int> color(n + 1, -1);
//     queue<int> q;

//     // start BFS from node 1
//     q.push(1);
//     color[1] = 0;

//     int c0 = 1, c1 = 0;

//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();

//         for (auto it : adj[node]) {
//             if (color[it] == -1) {
//                 color[it] = color[node] ^ 1;

//                 if (color[it] == 0) c0++;
//                 else c1++;

//                 q.push(it);
//             }
//         }
//     }

//     int ans = c0 * c1 - (n - 1);

//     cout << ans << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<vector<int>> adj(n+1);
    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;
    q.push(0);

    int c0=1, c1=0;
    vector<int> c(n+1,-1);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v: adj[u]){
            if(c[v]==-1){
                c[v]=1^c[u];

                if(c[v]==1) c1++;
                else c0++;

                q.push(v);
            }
        }
    }

    int ans = c0*c1 - n+1;

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}