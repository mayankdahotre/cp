#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(),v.end());

    // int maxsum=0, sum=0;
    // for(int i=0; i<n; i++){
    //     sum=0;
    //     for(int j=0; j<n; j++){
    //         sum+=v[i]^v[j];
    //     }
    //     maxsum=max(maxsum,sum);
    // }

    int maxsum=0;
    for(int i=0; i<n; i++){
        maxsum+=v[n-1]^v[i];
    }

    cout<<maxsum<<endl;
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