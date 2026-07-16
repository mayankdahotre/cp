// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long
// // #define debug(x) cout << #x << " = " << x << endl;
// // #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// // #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// // void solve() {
// //     int n, m;
// //     cin>>n>>m;

// //     vector<int> a(n), b(n);
// //     for(int i=0; i<n; i++) cin>>a[i];
// //     for(int i=0; i<n; i++) cin>>b[i];

// //     vector<vector<int>> dp(n, vector<int>(n,INT_MAX));

// //     for(int i=0; i<n; i++){
// //         for(int j=i+1; j<n; j++){
// //             dp[j][i]=min(dp[j][i], (j-i-1)*b[i]+a[i]);
// //         }
// //     }

// //     vector<int> v(n, INT_MAX);
// //     for(int i=n-1; i>=0; i--){
// //         for(int j=n-1; j>i; j--){
// //             v[i]=min(v[i], dp[j][i]+v[j]);
// //         }
// //     }

// //     int ans=INT_MAX;
// //     for(int i=0; i<m; i++) ans=min(ans, v[i]);

// //     cout<<ans<<endl;
// //     return;
// // }

// // int32_t main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// //     int T;
// //     cin >> T;

// //     while (T--) {
// //         solve();
// //     }

// //     return 0;
// // }





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> a(n), b(n);

//     for(int i = 0; i < n; i++) cin >> a[i];
//     for(int i = 0; i < n; i++) cin >> b[i];

//     const int INF = 100;

//     vector<vector<int>> dp(n, vector<int>(n, INF));

//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             dp[j][i] = (j - i - 1) * b[i] + a[i];
//         }
//     }

//     debugvv(dp);

//     vector<int> v(n, INF);

//     v[n - 1] = 0;

//     for(int i = n - 2; i >= 0; i--) {
//         for(int j = i + 1; j < n; j++) {
//             if(dp[j][i] == INF || v[j] == INF) continue;
//             v[i] = min(v[i], dp[j][i] + v[j]);
//         }
//     }

//     debugv(v);

//     int ans = INF;

//     for(int i = 0; i < min(n, m); i++) {
//         ans = min(ans, v[i]);
//     }

//     cout << ans << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;

//     while(T--) {
//         solve();
//     }

//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n, m;
    cin>>n>>m;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    vector<int> suf(n+1,0);
    for(int i=n-1; i>=0; i--) suf[i]=suf[i+1]+min(a[i], b[i]);

    int ans = LLONG_MAX;
    for(int i=0; i<m; i++) ans=min(ans, a[i]+suf[i+1]);

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