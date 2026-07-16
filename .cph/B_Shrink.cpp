#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int i = 1;
    int l = 0, r = n - 1;
    while (l <= r) {
        v[l] = i;
        if (l == r) break;
        v[r] = ++i;
        i++;
        l++;
        r--;
    }
    for (int x : v) cout << x << " ";
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
