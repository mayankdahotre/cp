#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, c, d;
    cin >> n >> c >> d;

    vector<int> b(n * n);
    int sum = 0;
    int minn = LLONG_MAX;  // Fix: Initialize with a large value

    for (int i = 0; i < n * n; i++) { 
        cin >> b[i];
        sum += b[i];
        minn = min(minn, b[i]); // Fix: Correct min calculation
    }

    sort(b.begin(), b.end());

    vector<int> a(n * n);
    int idx = 0;
    for (int i = 0; i < n; i++) {
        int m = minn + (i * c);
        for (int j = 0; j < n; j++) {
            a[idx++] = m + (j * d);
        }
    }

    sort(a.begin(), a.end());

    if (a == b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
