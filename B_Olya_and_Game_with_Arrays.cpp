#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;

        v[i].resize(m);   

        for(int j = 0; j < m; j++) cin >> v[i][j];
    }

    for(int i = 0; i < n; i++) sort(v[i].begin(), v[i].end());

    vector<int> sec(n);
    for(int i = 0; i < n; i++) sec[i] = v[i][1];

    int mn = LLONG_MAX;
    for(int i = 0; i < n; i++) mn = min(mn, v[i][0]);

    sort(sec.begin(), sec.end());

    int ans = mn;
    for(int i = 1; i < n; i++) ans += sec[i];

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
}