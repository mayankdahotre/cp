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

    if(is_sorted(v.begin(), v.end())){
        cout<<0<<endl;
        return;
    }

    vector<int> v2=v;
    sort(v2.begin(), v2.end());
    
    int x=n-1;
    for(int i=n-1; i>=0; i--){
        if(v2[i]!=v[i]){
            x=i;
            break;
        }
    }

    int px = 63 - __builtin_clzll(x);
    int ans = 1<<px;

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