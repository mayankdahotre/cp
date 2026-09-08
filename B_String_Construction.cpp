#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n, k;
    cin >> n >> k;

    int mx = n - 2;

    if (k > mx) {
        cout << -1 << endl;
        return;
    }
    else {
        int len0 = k / 2 + 1;
        int len1 = (k - k / 2) + 1;

        string s = string(len0, '0') + string(len1, '1');

        int x = 0;
        while (s.length() < n) {
            if (x % 2 == 0) s += '0';
            else s += '1';
            x++;
        }

        cout << s << endl;
        return;
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