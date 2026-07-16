// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<long long> h(n);
//     for (auto& x : h) cin >> x;
    
//     vector<long long> ans(n);
//     for (int i = 0; i < n; i++) {
//         vector<long long> cw(n), ccw(n);
        
//         long long cur = 0;
//         for (int k = 1; k < n; k++) {
//             cur = max(cur, h[(i + k - 1) % n]);
//             cw[(i + k) % n] = cur;
//         }
        
//         cur = 0;
//         for (int k = 1; k < n; k++) {
//             cur = max(cur, h[((i - k) % n + n) % n]);
//             ccw[((i - k) % n + n) % n] = cur;
//         }
        
//         long long total = 0;
//         for (int j = 0; j < n; j++) {
//             if (j != i) total += min(cw[j], ccw[j]);
//         }
//         ans[i] = total;
//     }
    
//     for (int i = 0; i < n; i++) cout << ans[i] << " \n"[i == n-1];
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;
//     while (t--) solve();
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }


void solve() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        vector<int> cw(n, 0), ccw(n, 0);

        int cur = 0;

        for (int k = 1; k < n; k++) {
            cur = max(cur, h[(i + k - 1) % n]);
            cw[(i + k) % n] = cur;
        }

        cur = 0;

        for (int k = 1; k < n; k++) {
            cur = max(cur, h[((i - k) % n + n) % n]);
            ccw[((i - k) % n + n) % n] = cur;
        }

        int sum = 0;

        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            sum += min(cw[j], ccw[j]);
        }

        ans[i] = sum;
    }

    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
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