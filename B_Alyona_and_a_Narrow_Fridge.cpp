#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, h;
    cin >> n >> h;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;

    vector<int> b;
    for(int i = 0; i < n; i++){
        b.push_back(v[i]);

        int ch = 0;
        sort(b.begin(), b.end(), greater<int>());

        for(int j = 0; j < b.size(); j += 2) ch += b[j];

        if(ch <= h) ans = i + 1;
        else break;
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}