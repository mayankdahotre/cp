#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> d = {1,2,3,4,5,6};

    vector<int> dp(n+1,0);
    dp[0] = 1;

    for(int j = 1; j <= n; j++){
        for(int i = 0; i < 6; i++){
            if(j - d[i] >= 0){
                dp[j] += dp[j - d[i]];
            }
        }
    }

    cout << dp[n] << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}