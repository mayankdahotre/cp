#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int ans=0;
    for(int k=0; k<n-1; k++){
        // debug(k);
        int nn = v.size();
        int mni = min_element(v.begin(), v.end()) - v.begin();
        // debug(mni);
        // debug(v[mni]);
        ans+=min(max(v[mni],v[(mni-1+nn)%nn]), max(v[mni],v[(mni+1)%nn]));
        // debug(ans);
        // debugv(v);
        v.erase(v.begin()+mni);    
        // debugv(v);
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