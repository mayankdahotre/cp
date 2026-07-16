#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    char w;
    cin >> s >> w;

    if (w == '0') {
        for (int i = 1; i < n; i++) {
            if (s[i] == '0') {
                cout << -1 << endl;
                return;
            }
        }
        if (s[0] == '1')
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return;
    }

    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
