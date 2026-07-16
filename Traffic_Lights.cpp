#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int x, n;
    cin >> x >> n;

    vector<int> positions(n);
    for (int i = 0; i < n; i++) {
        cin >> positions[i];
    }

    set<int> lights = {0, x}; 
    multiset<int> gaps = {x};  

    for (int p : positions) {
        auto it = lights.upper_bound(p); 
        int right = *it;
        int left = *prev(it);

        gaps.erase(gaps.find(right - left));

        gaps.insert(p - left);
        gaps.insert(right - p);

        lights.insert(p);

        cout << *gaps.rbegin() << " ";
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
