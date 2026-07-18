#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n, q;
    cin>>n>>q;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<vector<int>> pre(n+1, vector<int> (3,0));
    for(int i=0; i<n; i++){
        for(int j=0; i<3; i++){
            pre[i+1][j]+=pre[i][j]+(v[i]==j);
        }
    }

    while(q--){
        int l,r;
        cin>>l>>r;

        cout<<pre[r][0]-pre[l-1][0]<<" "<<pre[r][1]-pre[l-1][1]<<" "<<pre[r][2]-pre[l-1][2]<<" ";
    }
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