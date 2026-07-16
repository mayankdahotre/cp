#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    map<int,int> mp;
    for(int i=0; i<n; i++) mp[v[i]]++;

    set<int> s;
    for(int i=0; i<n; i++) for(int j=i+1; j<n; j++) s.insert(v[i]+v[j]);

    int ans=0;
    for(auto i: s){
        int x=0;
        for(auto p: mp){
            int j = p.first;
            int f = p.second;

            if(mp.find(i-j)!=mp.end()){
                if(i==j) x+=f/2;
                else x+=min(mp[i-j],f);
            }
        }
        ans=max(ans, x);
    }
    ans/=2;

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