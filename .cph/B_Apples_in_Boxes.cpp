#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int cnt = 0;
    while (true) {
        sort(v.begin(), v.end());
        int maxn = v[n - 1];
        int minn = v[0];

        if (v[n-1]==1 && v[n-2]==0) {
            if (cnt % 2==0) {
                cout << "Tom" << endl;
            } else {
                cout << "Jerry" << endl;
            }
            return;
        }

        if (maxn - minn - 1 > k) {
            if (cnt % 2) {
                cout << "Tom" << endl;
            } else {
                cout << "Jerry" << endl;
            }
            return;
        }

        v[n - 1]--;
        cnt++;
    }
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