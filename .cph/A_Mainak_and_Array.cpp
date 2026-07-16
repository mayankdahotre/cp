#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    
    int minn=LLONG_MAX, maxn = LLONG_MIN;
    for(int i=0; i<n; i++){
        if(minn>v[i]) minn=v[i];
        if(maxn<v[i]) maxn=v[i];
    }

    int maxs=0;
    for(int i=0; i<n-1; i++){
        maxs=max(v[i]-v[i+1],maxs);
    }

    cout<<max(max(maxn-v[0],v[n-1]-minn),maxs)<<endl;
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