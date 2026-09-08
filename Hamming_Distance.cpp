#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int x = 0;
        for (char c : s) {
            x = (x << 1) + (c - '0');
        }

        v[i] = x;
    }

    int ans = k;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = min(ans, (int)__builtin_popcount(v[i] ^ v[j]));
        }
    }

    cout << ans << endl;
    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}