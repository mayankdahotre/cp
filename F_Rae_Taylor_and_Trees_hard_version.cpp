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
        prefMin[0] = p[0];
        for (int i = 1; i < n; ++i) prefMin[i] = min(prefMin[i - 1], p[i]);
        suffMax[n - 1] = p[n - 1];
        for (int i = n - 2; i >= 0; --i) suffMax[i] = max(suffMax[i + 1], p[i]);

        bool ok = true;
        for (int i = 0; i < n - 1; ++i) {
            if (prefMin[i] > suffMax[i + 1]) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << "No\n";
            continue;
        }

        cout << "Yes\n";

        // Construct the tree
        vector<int> pos(n+1);
        for (int i = 0; i < n; ++i) pos[p[i]] = i;

        // monotonic stack to find nearest smaller to left
        vector<int> stack;
        vector<pair<int,int>> edges;
        stack.reserve(n);

        for (int i = 0; i < n; ++i) {
            int v = p[i];
            while (!stack.empty() && stack.back() > v) stack.pop_back();
            if (!stack.empty()) {
                // connect stack.back() -> v
                edges.push_back({stack.back(), v});
            }
            stack.push_back(v);
        }

        // output edges (should be n-1)
        for (auto &e : edges) {
            cout << e.first << " " << e.second << "\n";
        }
    }
}
