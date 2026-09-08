#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    vector<int> dir(n,1);
    for(int i=0; i<n; i++) if(a[i]>b[i]) dir[i]=-1;
    
    vector<pair<int,int>> vi, vd;
    for(int i=0; i<n; i++){
        if(dir[i]==1) vi.push_back({a[i], b[i]});
        else vd.push_back({b[i], a[i]});
    }

    sort(vi.begin(), vi.end());
    sort(vd.begin(), vd.end());

    int ans=0;
    for(int i=0; i<vi.size(); i++){
        ans+=lower_bound(vd.begin(), vd.end(), v[i].first)-vd.begin();
    }

    vector<int> di;
    for(int i=0; i<n; i++) di[i].push_back(vi[i].second);

    sort(di.begin(), di.end());

    for(int i=0; i<vi.size(); i++){
        ans+=lower_bound(di.begin(), di.end(), vi[i].first);
    }

    vector<int> dd;
    for(int i=0; i<n; i++) dd[i].push_back(vd[i].first);

    sort(dd.begin(), dd.end());

    for(int i=0; i<vd.size(); i++){
        ans+=lower_bound(dd.begin(), dd.end(), vd[i].second);
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