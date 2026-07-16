// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;


// // class DSU{
// // public:
// //     vector<int> par, sz;

// //     DSU(int n){
// //         par.resize(n);
// //         sz.resize(n,1);

// //         for(int i=0; i<n; i++) par[i]=i;
    
// //     }

// //     int find(int u){
// //         if(par[u]==u) return u;
// //         return par[u]=find(par[u]);
// //     }

// //     void unite(int u, int v){
// //         u = find(u);
// //         v = find(v);

// //         if(u==v) return;

// //         if(sz[u]<sz[v]) swap(u,v);

// //         par[v]=u;
// //         sz[u]+=sz[v];
// //     }
// // };


// void solve() {
//     int n;
//     cin>>n;

//     vector<int> p(n+1), d(n+1);
//     for(int i=1; i<=n; i++) cin>>p[i];
//     for(int i=1; i<=n; i++) cin>>d[i];

//     vector<int> ans(n+1,0);

//     // debugv(p);
//     // debugv(d);

//     vector<int> vis(n+1,0);
//     for(int i=1; i<=n; i++){
//         if(!vis[d[i]]){
//             int c=0;

//             int u = d[i];
//             while(!vis[u]){
//                 vis[u]=1;
//                 u=p[u];
//             }

//             // debugv(vis);

//             for(int i=1; i<=n; i++) if(vis[i]) c++;
//             ans[i]=c;
//         }
//         else ans[i]=ans[i-1];
//     }

//     for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
//     cout<<endl;

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





#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n;
    cin>>n;

    vector<int> p(n+1), d(n+1);
    for(int i=1; i<=n; i++) cin>>p[i];
    for(int i=1; i<=n; i++) cin>>d[i];

    vector<bool> vis(n+1, false);
    int cnt = 0;  

    vector<int> ans(n+1,0);

    for(int i=1; i<=n; i++) {
        int u = d[i];
        while(!vis[u]){
            vis[u] = true;
            cnt++;
            u = p[u];
        }

        ans[i]=cnt;
    }

    for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
    cout<<endl;

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