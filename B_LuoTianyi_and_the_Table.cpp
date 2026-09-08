#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int> v(n*m);
    for(int i=0; i<n*m; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int mnx = min(n,m);

    int ans1=(v.back()-v[0])*((n*m)-mnx)+(v.back()-v[1])*(mnx-1);
    int ans2=(v.back()-v[0])*((n*m)-mnx)+(v[n*m-2]-v[0])*(mnx-1);

    cout<<max(ans1,ans2)<<endl;
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