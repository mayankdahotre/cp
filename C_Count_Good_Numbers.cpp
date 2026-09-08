#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

int f(int x){
    int ans = x;
    ans-=x/2+x/3+x/5+x/7;
    ans+=x/6+x/10+x/14+x/15+x/21+x/35;
    ans-=x/105+x/70+x/42+x/30;
    ans+=x/210;

    return ans;
}

void solve() {
    int l,r;
    cin>>l>>r;

    int ans = f(r)-f(l-1);

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