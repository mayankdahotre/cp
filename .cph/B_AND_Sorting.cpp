#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    int ans = (1<<30) -1;
    vector<int> v(n);
    for(int i=0; i<n; i++){ 
        cin>>v[i];
        if(v[i]!=i) ans=ans&v[i];
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