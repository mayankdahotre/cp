#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, x;
    cin >> n >> x;

    vector<int> a(n), b(n);
    for(auto &v : a) cin >> v;
    for(auto &v : b) cin >> v;

    int low = b[0], high = a[0];
    int ans = 0;

    for(int i=1; i<n; i++){
        low = max(b[i], low - x);
        high = min(a[i], high + x);

        if(low > high){
            cout << -1 << '\n';
            return;
        }
    }

    low = b[n-1], high = a[n-1];

    for(int i=n-2; i>=0; i--){
        low = max(b[i], low - x);
        high = min(a[i], high + x);
    }

    for(int i=0; i<n; i++){
        low = max(b[i], low);
        high = min(a[i], a[i]);
        ans += (a[i] - min(high, a[i]));
    }

    cout << ans << '\n';
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
}
