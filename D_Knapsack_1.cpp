#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, W;
    cin >> n >> W;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    vector<int> dp(W + 1, 0);  // dp[w] = max value with weight <= w

    for(int i = 0; i < n; i++) {
        // iterate from high to low for 0/1 knapsack
        for(int w = W; w >= a[i]; w--) {
            dp[w] = max(dp[w], dp[w - a[i]] + b[i]);
        }
    }

    cout << dp[W] << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
