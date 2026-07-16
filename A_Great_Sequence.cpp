#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, x;
    cin >> n >> x;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        m[a]++;
    }
    
    for (auto it = m.begin(); it != m.end(); ++it) {
        int key = it->first;
        if (m[key] > 0 && m[key * x] > 0) {
            int pairs = min(m[key], m[key * x]);
            m[key] -= pairs;
            m[key * x] -= pairs;
        }
    }
    
    int num = 0;
    for (auto i : m) {
        num += i.second;
    }
    
    cout << num << endl;
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
