#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int m = *max_element(v.begin(), v.end());
    vector<int> sorted_v = v;
    sort(sorted_v.begin(), sorted_v.end());

    int count = sorted_v[n-1] - sorted_v[n-2];

    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
        if (v[i] != m) ans[i] = v[i]-m;
        else ans[i] = count;
    }

    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
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
