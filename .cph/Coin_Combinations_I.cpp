#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> dp(x + 1, 0);
    dp[0] = 1;

    for(int i=0; i<n; i++){
        dp[v[i]]++;
    }

    for (int i = 0; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (i - v[j] >= 0) {
                dp[i] = (dp[i] + dp[i - v[j]]) % MOD;
            }
        }
    }

    cout << dp[x] << endl;
    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
