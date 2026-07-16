#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int xor_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        xor_sum ^= a[i];
    }
    if (xor_sum == 0) {
        cout << 0 << endl;
    } else {
        if (n % 2 == 1) cout << xor_sum << endl;
        else cout << -1 << endl;
    }
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
