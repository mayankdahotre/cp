#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int &v : a) cin >> v;

    vector<int> x(q);
    for (int &y : x) cin >> y;

    vector<bool> done(31, false);

    for (int xi : x) {
        if (done[xi]) continue;
        done[xi] = true;

        int p = 1LL << xi;
        int add = 1LL << (xi - 1);

        for (int j = 0; j < n; j++) {
            if (a[j] % p == 0) a[j] += add;
        }
    }

    for (int v : a) cout << v << " ";
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
