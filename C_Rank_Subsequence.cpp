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

    vector<pair<int,int>> v1(n), v2(n);
    for(int i=0; i<n; i++) cin>>v1[i].first>>v1[i].second>>v2[i].first>>v2[i].second;

    int ans=0;
    for(int m=1; m<=n; m++){
        int x=0;
        for(int j=0; j<n; j++){
            if((v1[j].first>x+1 || v1[j].second<x+1) && (v2[j].first>m-x || v2[j].second<m-x)) x++;
            if(x==m) break;
        }
        if(x==m) ans=m;
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
