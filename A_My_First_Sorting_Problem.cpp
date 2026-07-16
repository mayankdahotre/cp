#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b;
    int minn = (a<=b) ? a:b;
    int max = (a+b)-minn;

    cout<<minn<<" "<<max<<endl;
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