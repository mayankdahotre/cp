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

    vector<int> deg(n,0);

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        u--;
        v--;

        deg[u]++;
        deg[v]++;
    }

    sort(deg.begin(), deg.end(), greater<int>());

    cout<<deg[0]<<" "<<deg[1]-1<<endl;
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