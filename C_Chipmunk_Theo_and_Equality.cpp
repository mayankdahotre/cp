// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define yes cout << "YES" << endl; return;
// #define no cout << "NO" << endl; return;

// vector<int> dfs(int u, map<int, vector<int>> dp){
//     if(!dp[u].empty()) return dp[u];

//     int uu=u;

//     vector<int> t;
//     t.push_back(u);

//     while(u!=1){
//         if(u%2) u--;
//         else u/=2;

//         if(dp[u]){
//             t.insert(dp[u]);
//             break;
//         }
//     }

//     return dp[uu]=t;
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     vector<vector<int>> vv(n);
//     map<int,vector<int>> dp;
//     for(int i=0; i<n; i++) vv[i]=dfs(v[i]);

//     map<int,int> f;

//     for(int i=0; i<n; i++) for(int a: v[i]) f[a]++;

//     int ans=0;
//     for(auto p: f){
//         int x = p.first;
//         int y = p.second;

//         if(y==n){
//             int sum=0;
//             for(int i=0; i<n; i++){
//                 sum+=find(v.begin(), v.end(), x);
//             }
//             ans=min(sum, ans);
//         }
//     }

//     cout<<ans<<endl;
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
#define yes cout << "YES" << endl; return;
#define no cout << "NO" << endl; return;

map<int, vector<int>> dp;

vector<int> dfs(int u){

    if(!dp[u].empty()) return dp[u];

    int uu=u;

    vector<int> t;
    t.push_back(u);

    while(u!=1){

        if(u%2) u++;
        else u/=2;

        t.push_back(u);

        if(!dp[u].empty()){

            vector<int> temp = dp[u];

            for(int i=1; i<temp.size(); i++){
                t.push_back(temp[i]);
            }

            break;
        }
    }

    return dp[uu]=t;
}

void solve() {

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    vector<vector<int>> vv(n);

    for(int i=0; i<n; i++) vv[i]=dfs(v[i]);

    map<int,int> f;
    map<int,int> cost;

    vector<int> is2(n,0); 

    for(int i=0; i<n; i++){

        for(int j=0; j<vv[i].size(); j++){

            int a = vv[i][j];

            if(vv[i][j]==2 && !is2[i]) is2[i]=1;

            f[a]++;
            cost[a]+=j;
        }
    }

    int ans=0;

    for(auto vi: vv) ans+=vi.size();

   int a2=0;

    for(int i=0; i<n; i++){

        if(!is2[i]){
            a2 += vv[i].size();
        }
    }

    a2 += cost[2];

    ans=min(a2, ans);

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