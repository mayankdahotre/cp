#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, c;
    cin>>n>>c;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int l = 1, r = 1e9;

    while(l <= r) {
        int mid = (l + r) / 2;
        int sumall = 0;
        for(int i = 0; i < n; i++) {
            sumall += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(sumall > c) break;
        }

        if(sumall == c) {
            cout << mid << '\n';
            return;
        }

        if(sumall > c) r = mid - 1;
        else l = mid + 1;
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