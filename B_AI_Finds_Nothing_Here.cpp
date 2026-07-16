#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n,m,r,c;
    cin>>n>>m>>r>>c;

    int ans=(n-r+1)*(m-c+1);

    // if(r%2) ans*=(r+1)/2;
    // else ans*=1<<(r/2);

    // if(c%2) ans*=(c+1)/2;
    // else ans*=1<<(c/2);

    ans*=1<<(max((r*c)-1,0LL));

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