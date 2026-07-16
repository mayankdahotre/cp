#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];

    int pd = -1, ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        int cd = (x - sum >= 0) ? (x - sum) / (i + 1) : -1;
        ans += (i + 1) * (cd - pd);
        pd = cd;
        sum -= a[i];
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
