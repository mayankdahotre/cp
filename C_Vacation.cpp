// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n), c(n);
//     for(int i=0; i<n; i++) cin>>a[i]>>b[i]>>c[i];

//     vector<vector<int>> dp(3, vector<int>(n, 0));

//     dp[0][0] = a[0];
//     dp[1][0] = b[0];
//     dp[2][0] = c[0];

//     for(int i=1; i<n; i++) {
//         dp[0][i] = a[i] + max(dp[1][i-1], dp[2][i-1]);
//         dp[1][i] = b[i] + max(dp[0][i-1], dp[2][i-1]);
//         dp[2][i] = c[i] + max(dp[0][i-1], dp[1][i-1]);
//     }

//     cout<<max({dp[0][n-1], dp[1][n-1], dp[2][n-1]})<<endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n), c(n);
    for(int i=0; i<n; i++) cin>>a[i]>>b[i]>>c[i];

    vector<vector<int>> dp(n, vector<int>(3,0));

    for(int i=0; i<n; i++){
        dp[i][0] = a[i]+max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = b[i]+max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = c[i]+max(dp[i-1][1], dp[i-1][0]);
    }

    int mx = max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]));
    cout<<mx<<endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}

