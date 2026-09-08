#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k,q;
    cin>>n>>k>>q;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int x=0;
    int ans=0;
    for(int i=0; i<n; i++){
        if(v[i]<=q) x++;
        else{
            int c=max(x-k+1,0LL);
            ans+=c*(c+1)/2;
            x=0;
        }
    }
    int c=max(x-k+1,0LL);
    ans+=c*(c+1)/2;
    x=0;

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