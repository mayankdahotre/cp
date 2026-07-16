#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<vector<int>> h(n);
    for(int i=0; i<n; i++) cin>>h[0][i];
    for(int i=0; i<n; i++) cin>>h[1][i];

    int ans = 0;
    vector<int> dp[i][j];
    dp[0][0]=h[0][0];
    dp[0][1]=h[1][0];

    for(int i=1; i<n; i++){
        dp[i][0] = max(dp[i-1][0]+
    }

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