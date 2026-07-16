#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int> x(n), y(n);
    for(int i=0; i<n; i++) cin>>x[i];
    for(int i=0; i<n; i++) cin>>y[i];

    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ans = max(ans, abs(x[i]-x[j])*abs(x[i]-x[j]) + abs(y[i]-y[j])*abs(y[i]-y[j]));
        }
    }

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}