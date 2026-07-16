#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    
    int l = ceil(k/n);
    int s = m - l;
    int ans = ceil(l/(s+1))+1;
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