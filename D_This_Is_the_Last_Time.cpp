#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n,k;
    cin>>n>>k;

    vector<pair<pair<int,int>,int>> vpp(n);
    for(int i=0; i<n; i++) cin>>vpp[i].first.first>>vpp[i].first.second>>vpp[i].second;

    sort(vpp.begin(), vpp.end());

    int i=0;

    while(i<n) {
        if(vpp[i].first.first>k) break;
        k=max(k, vpp[i].second);
        i++;
    }

    cout << k << endl;
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