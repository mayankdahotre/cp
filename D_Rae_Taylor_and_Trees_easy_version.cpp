#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) cin >> p[i];

        vector<int> prefMin(n), suffMax(n);

        // prefix minimums
        prefMin[0] = p[0];
        for (int i = 1; i < n; ++i) {
            prefMin[i] = min(prefMin[i - 1], p[i]);
        }

        // suffix maximums
        suffMax[n - 1] = p[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            suffMax[i] = max(suffMax[i + 1], p[i]);
        }

        bool ok = true;
        for (int k = 0; k < n - 1; ++k) {
            // prefix = [0..k], suffix = [k+1..n-1]
            if (prefMin[k] > suffMax[k + 1]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}
