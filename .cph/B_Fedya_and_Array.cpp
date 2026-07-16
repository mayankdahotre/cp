#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int mx, mn;
    cin >> mx >> mn;

    int s = (mx - mn) * 2;
    cout << s << endl;

    for(int i = mn; i <= mx; i++) 
        cout << i << " ";

    for(int i = mx-1; i > mn; i--) 
        cout << i << " ";

    cout << endl;
    return;
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
