#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> dp(n, INT_MAX);
    dp[0] = 0;

    for(int i=0; i<n; i++){
        for(int j=1; j<=k; j++){
            if(i+j<n) dp[i+j] = min(dp[i+j], dp[i]+ abs(v[i+j]-v[i]));
        }
    }

    cout<<dp[n-1]<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}