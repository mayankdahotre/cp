#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k, x;
    cin>>n>>k>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end(), greater<int>());

    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i];
    for(int i=0; i<x; i++) sum-=2*v[i];

    int ans = sum;
    for(int i=0; i<k; i++){
        sum+=v[i];
        if(i+x<n) sum-=2*v[i+x];

        ans = max(sum, ans);
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