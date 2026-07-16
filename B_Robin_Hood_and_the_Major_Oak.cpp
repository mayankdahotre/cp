
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    int c = (n + 1) / 2;
    if (n >= k)
        c -= (n - k + 1) / 2;
    
    c %= 2;
    c ^= 1;
    
    cout << (c ? "YES" : "NO") << endl;
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
