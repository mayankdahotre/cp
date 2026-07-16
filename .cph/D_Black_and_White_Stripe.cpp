#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cw = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') cw++;
    }

    int minn = cw;

    for (int i = k; i < n; i++) {
        if (s[i - k] == 'W') cw--;
        if (s[i] == 'W') cw++;
        minn = min(minn, cw);
    }

    cout << minn << endl;
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
