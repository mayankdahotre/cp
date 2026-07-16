#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    vector<int> dp(n+1,0);
    dp[0]=max(a[0], b[0]);

    for(int i=1; i<n; i++){
        dp[i]=max(a[i]-dp[i-1], dp[i-1]-b[i]);
    }

    cout<<dp[n-1]<<endl;
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