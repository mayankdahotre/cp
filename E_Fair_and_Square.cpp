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

    vector<vector<int>> adj(n);
    for(int i=0; i<n-1; i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int ans=0;
    
    for(int i=0; i<n; i++){
        long long x = sqrtl(v[i]);
        if (x * x == v[i]) {
            if(adj[i].size()==1) continue;
            if(adj[i].size()==2) ans+=(n-1)*(n-2)/2;
            if(adj[i].size()>2) ans+=(n-1)*(n-2)/2 + (n-1)*(n-2)*(n-3)/6;
        }
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


