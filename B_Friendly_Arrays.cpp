#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin>>n>>m;

    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    int B=0;
    for(int i=0; i<m; i++) B=B|b[i];

    int xor1 = 0, xor2 = 0;
    for(int i=0; i<n; i++) xor1 ^= a[i];
    for(int i=0; i<n; i++){ a[i]=a[i]|B; xor2^=a[i]; };

    cout<<min(xor1,xor2)<<" "<<max(xor1,xor2)<<endl;
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