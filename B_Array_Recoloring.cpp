#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(k==1){
        int ans=0;
        for(int i=0; i<n; i++){
            int y=0;
            if(i!=0) y=max(y, v[0]);
            if(i!=n-1) y=max(y, v[n-1]);
            ans=max(ans, y+v[i]);
        }

        cout<<ans<<endl;
        return;
    }

    vector<pair<int,int>> vp(n);
    for(int i=0; i<n; i++) vp[i]={v[i], i};

    sort(vp.begin(), vp.end());

    int ans=0;
    for(int i=n-1; i>=n-k; i--) ans+=vp[i].first;

    if(vp[n-k-1].second==0 || vp[n-k-1].second==n-1){
        ans+=vp[n-k-1].first;
        cout<<ans<<endl;
        return;
    }

    bool lok = false, rok = false;
    for(int i=n-k; i<=n-1; i++){
        if(vp[i].second==0) lok = true;
        if(vp[i].second==n-1) rok=true;
    }

    int x = 0;
    if(!lok) x = max(x, v[0]);
    if(!rok) x = max(x, v[n-1]);
    x = max(x, vp[n-k-1].first);

    ans+=x;

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