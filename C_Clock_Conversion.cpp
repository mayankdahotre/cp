#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int h, m; char c;
    cin >> h >> c >> m;
    string am = (h < 12 ? " AM" : " PM");
    h = (h % 12 ? h % 12 : 12);
    cout << (h < 10 ? "0" : "") << h << c << (m < 10 ? "0" : "") << m << am << '\n';
    
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