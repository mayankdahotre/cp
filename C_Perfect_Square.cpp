#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<vector<char>> v(n, vector<char>(n));
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>v[i][j];

    int ans=0;

    for(int i=0; i<n/2; i++){
        for(int j=0; j<n/2; j++){
            char u = max({v[i][j], v[j][n-1-i], v[n-1-i][n-1-j], v[n-1-j][i]});
            ans+=abs(u-v[i][j])+abs(u-v[j][n-1-i])+abs(u-v[n-1-i][n-1-j])+abs(u-v[n-1-j][i]);
        }
    }

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