#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int q;
    cin >> q;
    vector<pair<int, int>> vq(q);
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        vq[i] = {a, b}; 
    }

    for (int k = 0; k < q; k++) {
        int i = vq[k].first - 1;
        int j = vq[k].second - 1;
        bool found = false;

        while (i < j) {
            if (v[i] == v[j]) {
                i++;      
            } else {
                cout << i + 1 << " " << j + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << " " << -1 << endl;
        }
    }

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
