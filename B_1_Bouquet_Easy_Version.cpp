#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,int> mf;
    for(int i=0; i<n; i++) mf[v[i]]++;

    int ans=0;

    auto cost = [&](int u, int f, int f2) -> int{
        int temp = 0;
        for(int y=0; y<=f2; y++){
            int rem = m - y*(u+1);
            if(rem<0) break;

            int x = min(f, rem/u);
            temp = max(temp, x*u + y*(u+1));
        }

        return temp;
    };

    for(auto p: mf) {                              
        int u = p.first;
        int f = p.second;

        int f2=0;
        if(mf.count(u+1)) f2 = mf[u+1];    
        ans = max(ans, cost(u, f, f2));
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