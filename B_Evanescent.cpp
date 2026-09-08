#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int red = 0;

    for (int i = 1; i < n - 1; i++) {
        if (s[i - 1] == s[i + 1] && s[i] != s[i - 1]) {
            red = max(red, 2LL);
        } else if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            red = max(red, 1LL);
        }
    }

    s.erase(unique(s.begin(), s.end()), s.end());
    cout << s.length() - red << endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}