#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> v[i];
    }

    
    // Sort in descending order
    sort(v.rbegin(), v.rend());

    // Compute the alternating sum
    int a = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (i % 2 == 0) {
            a += v[i];
        } else {
            a -= v[i];
        }
    }

    cout << a << " "; 

    for (int i = 0; i < 2 * n; i++) {
        cout << v[i] << " ";
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
