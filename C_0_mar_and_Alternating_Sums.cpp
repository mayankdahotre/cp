#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

int mod = 1e9 + 7;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,int> mp;
    for(int i=0; i<n; i++) mp[v[i]]++;

    int ans=1;
    for(auto p: mp){
        int f = p.second;
        ans*=(1<<(f-1))%mod;
    }

    v.erase(unique(v.begin(), v.end()), v.end());

    vector<pair<int,int>> vp;
    for(int i=0; i<v.size()-1; i++) if(v[i]-v[i+1]==-1) vp.push_back({v[i], v[i+1]});

    if(mp[-1]!=0) ans*=(vp.size()+1)%mod;
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