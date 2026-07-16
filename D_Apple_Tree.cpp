// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int bfsleafs(int a, vector<vector<int>> adj){
//     queue<int> q;
//     q.push(a);

//     int ans = 0;
//     while(!q.empty()){
//         int sz = q.size();
//         for(int i=0; i<sz; i++){
//             int u = q.front(); q.pop();
//             if(!adj[u].size()){
//                 ans++;
//                 continue;
//             }
//             for(auto v: adj[u]){
//                 q.push(v);
//             }
//         }
//     }

//     return ans;
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<vector<int>> adj(n);
//     for(int i=0; i<n; i++){
//         int a,b;
//         cin>>a>>b;

//         adj[min(a,b)].push_back(max(a,b));
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int a,b;
//         cin>>a>>b;

//         int la = bfsleafs(a, adj);
//         int lb = bfsleafs(b, adj);

//         cout<<la*lb<<endl;
//         continue;
//     }

//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }
//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// vector<vector<int>> tree;

// int bfsleafs(int a){
//     queue<int> q;
//     q.push(a);

//     int ans = 0;

//     while(!q.empty()){
//         int u = q.front();
//         q.pop();

//         if(tree[u].empty()){
//             ans++;
//             continue;
//         }

//         for(auto v : tree[u]){
//             q.push(v);
//         }
//     }

//     return ans;
// }

// void solve() {
//     int n;
//     cin >> n;

//     vector<vector<int>> adj(n + 1);
    
//     for(int i = 0; i < n - 1; i++){
//         int a, b;
//         cin >> a >> b;

//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }

//     // build rooted tree
//     tree.assign(n + 1, {});

//     queue<int> q;
//     vector<int> vis(n + 1, 0);

//     q.push(1);
//     vis[1] = 1;

//     while(!q.empty()){
//         int u = q.front();
//         q.pop();

//         for(auto v : adj[u]){
//             if(vis[v]) continue;

//             vis[v] = 1;
//             tree[u].push_back(v);
//             q.push(v);
//         }
//     }

//     vector<int> dp(n+1,0);
//     for(int i=1; i<=n; i++) dp[i]=bfsleafs(i);

//     int qq;
//     cin >> qq;

//     while(qq--){
//         int a, b;
//         cin >> a >> b;

//         cout << dp[a]*dp[b] << endl;
//     }
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;

//     while(T--){
//         solve();
//     }

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>> tree;
vector<int> dp;

int dfs(int u){
    if(tree[u].size()==0){
        return dp[u]=1;
    }

    int ans = 0;

    for(auto v: tree[u]){
        ans+=dfs(v);
    }

    return dp[u]=ans;
}

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);
    
    for(int i=0; i<n-1; i++){
        int a,b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    tree.assign(n + 1, {});

    queue<int> q;
    vector<int> vis(n + 1, 0);

    q.push(1);
    vis[1] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : adj[u]){
            if(vis[v]) continue;

            vis[v] = 1;
            tree[u].push_back(v);
            q.push(v);
        }
    }

    dp.assign(n+1,0);
    dfs(1);

    int qq;
    cin >> qq;

    while(qq--){
        int a,b;
        cin>>a>>b;

        cout<<dp[a]*dp[b]<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}