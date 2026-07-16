#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    // sort(v.begin(), v.end());
    int g = abs(v[1]-v[0]);
    for(int i=1; i<n-1; i++){
        g = __gcd(g, abs(v[i+1]-v[i]));
    }

    cout<<g<<endl;
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