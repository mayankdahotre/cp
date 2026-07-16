#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    
    int minn = 6;  
    int c4 = 0;

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        int rem = v % k;

        if (rem == 0) {
            cout << 0 << "\n";
            return;
        }
        minn = min(minn, k - rem);

        if (k == 4 && (v % 2 == 1)) c4++;
    }

    if (k == 4) {
        if (c4 >= 2) {
            cout << 0 << "\n";
        } else {
            cout << (2 - c4) << "\n";
        }
        return;
    }
    
    cout << minn << "\n";
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
