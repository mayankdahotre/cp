#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int g1 = v[0], g2 = (n > 1 ? v[1] : 0);
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) g1 = __gcd(g1, v[i]);
        else g2 = __gcd(g2, v[i]);
    }

    bool good1 = true, good2 = true;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0 && v[i] % g2 == 0) good1 = false;
        if(i % 2 == 1 && v[i] % g1 == 0) good2 = false;
    }

    if(good1) cout << g2 << endl;
    else if(good2) cout << g1 << endl;
    else cout << 0 << endl;
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
