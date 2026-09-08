#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0;
    int i = 0, j = 0;

    while (k > 0) {
        if (j == n) {
            ans += k;
            break;
        }
        
        int diff = v[j] - i;
        int active = n - j;

        if (diff > 0) {
            if (k <= active * diff) {
                ans += k;
                break;
            }
            ans += active * diff;
            k -= active * diff;
            i = v[j];
        }

        while (j < n && v[j] <= i) {
            ans++; // Add 1 wasted press for each empty machine
            j++;
        }
    }
    
    cout << ans << endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}