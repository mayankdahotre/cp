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

    int ans=0;
    
    int i=0;
    while(i<n){
        if(v[i]>0){
            ans+=v[i];
            i++;
            continue;
        }

        int x=0;
        bool neg = v[i]<0;

        while(v[i]<0){
            x+=v[i];
            i++;
            // debug(x);
        }

        if(neg) ans=abs(ans+x);
        // debug(ans);

        // debug(ans);
    }

    ans=abs(ans);

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