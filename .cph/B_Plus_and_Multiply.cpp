#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if (a == 1) {
        // Special case: a^k = 1 always; we just need to check (n - 1) divisible by b
        if ((n - 1) % b == 0) cout << "Yes\n";
        else cout << "No\n";
        return;
    }

    int power = 1;
    while (power <= n) {
        if ((n - power) % b == 0) {
            cout << "Yes\n";
            return;
        }
        power *= a;
    }

    cout << "No\n";
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
