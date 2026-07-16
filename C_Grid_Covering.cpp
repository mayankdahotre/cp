#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if (__gcd(n, a) == 1 && __gcd(m, b) == 1 && __gcd(n, m) <= 2) cout << "YES" <<endl;
    else cout << "NO"<<endl;
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