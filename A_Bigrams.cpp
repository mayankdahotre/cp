#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin >> n;

    int x = 0;
    bool ok = false;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        // debug(i);

        if(a >= 2) x++;

        // debug(x);

        if(a >= 3 || x > 1){
            ok = true;
            // break;
        }
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;

    // cout<<endl;
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