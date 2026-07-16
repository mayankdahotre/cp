#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int j = 0; j < m; j++) {
        int w = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i][j] == 'o') {
                w = i - 1;
            } else if (a[i][j] == '*') {
                a[i][j] = '.';
                a[w][j] = '*';
                w--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
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
