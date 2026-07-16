// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int helper(int i, int l, int n, int cur, vector<int> p){
//     if(i==n) return cur;

//     int ans = 0;
//     for(int j=l; j<10; j+=l){
//         ans += helper(i+1, j, n, cur*p[j], p);
//     }

//     return ans;
// }

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     vector<vector<int>> v = {{1,1},{1,2},{1,3},{1,4},{1,5},{1,6},{1,7},{1,8},{1,9},{2,2},{2,4},{2,6},{2,8},{3,3},{3,6},{3,9},{4,4},{4,8},{5,5},{6,6},{7,7},{8,8},{9,9}};
    
//     vector<int> p = {0,9,4,3,2,1,1,1,1,1};

//     int res = helper(1, 1, n, 0, p);

//     cout<<res<<endl;
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

map<tuple<int,int,int>, int> dp;

int helper(int i, int l, int n, int cur, vector<int> &p){
    if(i==n) return cur;

    auto key = make_tuple(i,l,cur);
    if(dp.count(key)) return dp[key];

    int ans = 0;
    for(int j=l; j<10; j+=l){
        ans += helper(i+1, j, n, cur, p);
    }

    return dp[key] = ans;
}

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> p = {0,9,4,3,2,1,1,1,1,1};

    dp.clear();

    int res = helper(1, 1, n, 1, p);

    cout<<res<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}