// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// int dfs(int u, vector<int> f, vector<int> dp){
//     if(dp[u]) return dp[u];
//     if(find(f.begin(), f.end(), u)!=f.end()) return dp[u]=1;

//     dp[u]=1e5;
//     for(int i=2; i*i<=u; i++){
//         if(u%i==0){
//             dp[u]=min(dfs(u/i, f, dp)+1, dp[u]); // fix
//             dp[u]=min(dfs(i, f, dp)+1, dp[u]);   // fix
//         }
//     }

//     return dp[u];
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     vector<int> f(n+1,0);
//     for(int i=0; i<v.size(); i++) f[v[i]]=1;

//     vector<int> dp(n+1,0);
//     for(int i=1; i<=n; i++){
//         int m = dfs(i, f, dp);
//         if(m==1e5) dp[i]=-1;
//     }

//     for(int i=1; i<=n; i++) cout<<dp[i]<<" ";
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


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {

//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for(int i=0; i<n; i++) cin >> a[i];

//     const int INF = 1e9;
//     vector<int> dp(n + 1, INF);

//     for(auto x : a) dp[x] = 1;

//     for(int x = 1; x <= n; x++) {
//         for(int y = 2; y * y <= x; y++) {
//             if(x % y == 0) {
//                 int d1 = y;
//                 int d2 = x / y;

//                 if(dp[d1] != INF && dp[d2] != INF) {
//                     dp[x] = min(dp[x], dp[d1] + dp[d2]);
//                 }
//             }
//         }
//     }

//     for(int i = 1; i <= n; i++) {
//         if(dp[i] == INF) dp[i] = -1;

//         cout << dp[i] << " ";
//     }

//     cout << endl;
//     return;
// }

// int32_t main() {

//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;

//     while(T--) {
//         solve();
//     }
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define debugv(v) cout<<#v<<" = "; for(auto it:v) cout<<it<<' '; cout<<endl;

int dfs(int u, vector<int> &f, vector<int> &dp, vector<int> &vis){
    if(vis[u]) return dp[u];
    vis[u]=1;
    if(f[u]) return dp[u]=1;

    for(int i=2; i*i<=u; i++){
        if(u%i==0){
            int a=dfs(i,f,dp,vis);
            int b=dfs(u/i,f,dp,vis);

            if(a!=-1 && b!=-1) dp[u]=min(dp[u],a+b);
        }
    }

    if(dp[u]==1e9) dp[u]=-1;

    return dp[u];
}

void solve(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> f(n+1,0);
    for(int i=0; i<v.size(); i++) f[v[i]]=1;

    vector<int> dp(n+1,1e9);
    vector<int> vis(n+1,0);

    for(int i=1; i<=n; i++){
        dfs(i,f,dp,vis);
    }

    for(int i=1; i<=n; i++) cout<<dp[i]<<" ";
    cout<<endl;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;

    while(T--){
        solve();
    }

    return 0;
}