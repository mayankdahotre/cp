#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    // Step 1: find MEX of whole array
    set<int> s(a.begin(), a.end());
    int m = 0;
    while (s.count(m)) m++;

    // Step 2: greedy cut when current segment achieves MEX = m
    vector<pair<int,int>> segs;
    vector<int> freq(n+1, 0);
    int have = 0; // how many of {0..m-1} are fully covered
    int l = 1;

    for (int i = 0; i < n; i++) {
        if (a[i] < m) {
            freq[a[i]]++;
            if (freq[a[i]] == 1) have++;
        }
        if (have == m) { // current segment has MEX = m
            segs.push_back({l, i+1});
            l = i+2;
            fill(freq.begin(), freq.end(), 0);
            have = 0;
        }
    }

    // Step 3: merge leftover into last segment
    if (segs.size() < 2) { cout << -1 << "\n"; return; }
    segs.back().second = n; // last segment always ends at n

    cout << segs.size() << "\n";
    for (auto &seg : segs) cout << seg.first << " " << seg.second << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}